PythonQt
========

Why is this project ?
---------------------

This project is **NOT** the official PythonQt repository.

It is a fork of [PythonQt](http://pythonqt.sourceforge.net/) sources hosted on sourceforge
adding support for [CMake](https://cmake.org) build system.

It is used as staging area to maintain and test patches that will be contributed back to the
official repository.

What is PythonQt ?
------------------

PythonQt is a dynamic Python binding for Qt. It offers an easy way to embed the Python
scripting language into your Qt applications.

Which branch ?
--------------

Based on the Qt version your project is expected to support, you could use
one of the branch referenced below:

| Supported Qt version   | 4                      | 5                                      |
|------------------------|------------------------|----------------------------------------|
| Branch                 | [patched-6][patched-6] | [patched-10][patched-10]               |
| Base PythonQt revision | [r403][r403]           | [MeVisLab/pythonqt@fb16d6e][fb16d6e]   |


[patched-6]: https://github.com/commontk/PythonQt/tree/patched-6
[r403]: http://sourceforge.net/p/pythonqt/code/403/

[patched-10]: https://github.com/commontk/PythonQt/tree/patched-10
[fb16d6e]: https://github.com/MeVisLab/pythonqt/commit/fb16d6e


Build instructions
------------------

1. Install CMake and Qt

2. Checkout sources

```
git clone git://github.com/commontk/PythonQt.git
```

3. Checkout branch

```
git checkout -b patched-X origin/patched-X
```

*See table above for exact branch name*


4. Configure

```
mkdir PythonQt-build && cd PythonQt-build
```

* using Qt4:

```
cmake -DQT_QMAKE_EXECUTABLE:FILEPATH=/path/to/qmake ../PythonQt
```

* using Qt5:

```
cmake -DQt5_DIR:PATH=/path/to/Qt5.X.Y/X.Y/compiler/lib/cmake/Qt5 ../PythonQt
```

5. Build

```
make
```


Additional configure options are:

* `CMAKE_BUILD_TYPE`:  Debug, Release, RelWithDebInfo or MinSizeRel
* `PythonQt_DEBUG`: Enable/Disable PythonQt debug output
* `PythonQt_Wrap_QtAll`: Make all Qt components available in python
* `PythonQt_Wrap_Qt<componentname>`: Build a specific PythonQt wrapper.

Available branches
------------------

This repository contains the following branches:

### patched-10
* Based on [MeVisLab/pythonqt@fb16d6e](https://github.com/MeVisLab/pythonqt/commit/fb16d6e) with:
  * all changes from ``patched-9`` were cherry-picked expect:
    * `Fix setRedirectStdInCallbackEnabled`  already integrated as [MeVisLab/pythonqt@06860d497](https://github.com/MeVisLab/pythonqt/commit/06860d497) (`Fix reference/memory leaks`)
    * `Fix refcount of PyInt_Type when creating enum wrapper`  already integrated as [MeVisLab/pythonqt@963b667ac](https://github.com/MeVisLab/pythonqt/commit/963b667ac) (` Fix crash in GC: PyTuple_SET_ITEM steals reference`)
    * `[Backport] Add isatty() method to PythonQtStdIn class` as it was a backport of [MeVisLab/pythonqt@7012000d8](https://github.com/MeVisLab/pythonqt/commit/7012000d8)
  * cmake: Update PythonQtGenerator to support only Qt5

### patched-9
* Based on [MeVisLab/pythonqt@c07f09fd](https://github.com/MeVisLab/pythonqt/commit/c07f09fd) with:
  * all changes from ``patched-8`` cherry-picked expect:
    * `Fix refcount problems seen when re-initializing Python after finalizing` already integrated as [MeVisLab/pythonqt@5e0d26c01ff](https://github.com/MeVisLab/pythonqt/commit/5e0d26c01ff) (`fixed ref counting of types`)
    * `Explicitly initialize global storage containers` already integrated as [MeVisLab/pythonqt@170d4a475](https://github.com/MeVisLab/pythonqt/commit/170d4a475) (`reimplemented argument frame caching (previous approach was not thread-safe when GIL is used)`)
    * `Expose QSocketNotifier for Qt5` already integrated as [MeVisLab/pythonqt@518765494d](https://github.com/MeVisLab/pythonqt/commit/518765494d) (`updated wrappers to contain QSocketNotifier and recent generator changes`)
  * Add support for building 511 wrappers
  * Add support for QtMultimedia component
  * cmake: Add missing source file

### patched-8
* Based on [r455](http://sourceforge.net/p/pythonqt/code/455/) with:
  * revert of [r444](http://sourceforge.net/p/pythonqt/code/444/)
  * all changes from ``patched-7`` cherry-picked.
  * add support for build wrapping for Qml and Quick components
  * improve Qt5 support and remove Qt4 support
  * Remove explicit setup of `INSTALL_NAME_DIR`. See PR [#59](https://github.com/commontk/PythonQt/pull/59)
  * add patch from @pieper fixing wrapping of `QSocketNotifier` (see [PR#63](https://github.com/commontk/PythonQt/pull/63) and [message](https://sourceforge.net/p/pythonqt/discussion/631392/thread/c989429c/) on PythonQt mailinglist)
  * Fix windows build error renaming stdout ivar
  * Add support for enabling stdout/stderr redirection
  * Fix setRedirectStdInCallbackEnabled

### patched-7
* Based on [r443](http://sourceforge.net/p/pythonqt/code/443/) with:
  * partial revert of [r431](http://sourceforge.net/p/pythonqt/code/431/) to re-enable CMake support
  * all changes from ``patched-6`` cherry-picked.
  * add Qt5 support

### patched-6
* Remove explicit setup of `INSTALL_NAME_DIR`. Backported PR [#59](https://github.com/commontk/PythonQt/pull/59)
* Based on patched-5 + [r403](http://sourceforge.net/p/pythonqt/code/403/)
* List of bug fixes:
  * Fix for memory leaks and cleanup crash
* Includes the following PythonQt updates:
```
$ git shortlog 2d445d5..e93e36b --no-merges 
florianlink (8):
      fixed error handling for evalFile     made name->objectName alias optional (off by default, add PYTHONQT_SUPPORT_NAME_PROPERTY to DEFINES if you need it)     added py_delete() slot support for built-in delete() method
      added support for QTimer::singleShot()
      fixed a missign QMetaObject::disconnect which leads to connection leaking     added removeSignalHandlers()
      fixed test
      initial version that handles qualified virtual calls better
      improved handling of qualified virtual calls
      improved handling of qualified virtual calls
      removed generating wrappers for virtual functions that are already declared in a base class
```

### patched-5
* Based on patched-4 + [r403](http://sourceforge.net/p/pythonqt/code/403/) excluding commit [r397](http://sourceforge.net/p/pythonqt/code/397/)
* List of bug fixes:
  * Fix for memory leaks and cleanup crash
* List of features:
  * CMake:
    * Fix install rules
    * Fix "_invalid_parameter_noinfo_noreturn" link error
  * PythonQt:
    * Add Qt5 support
    * Add PY3K support

### patched-4
* Based on patched-3 + [r245](http://sourceforge.net/p/pythonqt/code/245/)
* List of features:
  * Add BUILD_TESTING option disabled by default to keep behavior consistent with previous version.
  * Do not exclude enums from wrapping if they are QFlags.
  * Ensure enums added using only Q_FLAGS without corresponding Q_ENUMS are wrapped.

### patched-3
* Backported:
  * Most of the [change specific to](https://github.com/commontk/PythonQt/compare/e2dce4b...patched-2) `patched-2` branch have been backported upstream: [r241](http://sourceforge.net/p/pythonqt/code/241/), [r242](http://sourceforge.net/p/pythonqt/code/242/), [r243](http://sourceforge.net/p/pythonqt/code/243/)

### patched-2

* Based on [r228](http://sourceforge.net/p/pythonqt/code/228/)
* List of features:
  * At configuration time, detect the Qt version used and seamlessly compile the appropriate wrappers (Qt 4.8, 4.7 or 4.6).
  * Add method allowing to know if a python error occurred: [5935f29](https://github.com/commontk/PythonQt/commit/5935f29978deed892a13ddef02cb14c205c6124d)
  * Also add associated method "resetErrorFlag": [a386dc60](https://github.com/commontk/PythonQt/commit/a386dc60f71c15e67c611bc31b26cee756ed833a)
  * Fix compilation issue on VS2010 when PythonQt Debug build against python Release: [7e1e07f](https://github.com/commontk/PythonQt/commit/7e1e07f34b2420e420e2858e5ea9a49fe1e0d235)
  * Add option Add PythonQt_Wrap_QtAll: [97df3b0](https://github.com/commontk/PythonQt/commit/97df3b0845b3f5c987d3141a9e651436882f5913) and [9104fa9](https://github.com/commontk/PythonQt/commit/9104fa924859f4a865016f2138c06ec856f449d4)
  * Ensure all 4.8 generated wrappers are considered: [654f324](https://github.com/commontk/PythonQt/commit/654f3249d1cf3f3ff674b2ff6cca7a2ef3517f60)
  * Update "PythonQtPythonInclude.h" to avoid build error on recent MacOSX: [7b8ee130](https://github.com/commontk/PythonQt/commit/7b8ee13058bc0b366983ce8228612e75f8dd9ca8) and [47738f9c](https://github.com/commontk/PythonQt/commit/47738f9c8c5d3ffa77c8f2e1844f899e5b548f0c)
  * Update "PythonQtPythonInclude.h" to fix windows build issue when PythonQt Debug build against python Release[6366f00](https://github.com/commontk/PythonQt/commit/6366f002a93aa238c55f58de949d09c552cda5a9)
  * Optionally include CTestUseLaunchers: [211440](https://github.com/commontk/PythonQt/commit/2114405a47836b3fb16a3f66fec6a02184f32e71)
  * Add SystemExit exception handler. If enabled, the signal "systemExitExceptionRaised" will be emitted. It gives application the opportunity to cleanup and terminate nicely: [3c84463d](https://github.com/commontk/PythonQt/commit/3c84463d3fc4a99c94207c1116ba33d7a412a95f)
  * Add "isatty" function to StdOutRedirect. Needed by some logging frame: [7132dba9](https://github.com/commontk/PythonQt/commit/7132dba93064c2a02591b42305fecdd5d59702d3)
* Backported:
  * Most of the [change specific to](https://github.com/commontk/PythonQt/compare/svn-mirror...patched) `patched` branch have been backported upstream: [r200](http://sourceforge.net/p/pythonqt/code/200/), [r201](http://sourceforge.net/p/pythonqt/code/201/), [r202](http://sourceforge.net/p/pythonqt/code/202/), [r203](http://sourceforge.net/p/pythonqt/code/203/), [r204](http://sourceforge.net/p/pythonqt/code/204/)
  * CMake option `PYTHONQT_USE_VTK` has been removed ([r205](http://sourceforge.net/p/pythonqt/code/205/)), the foreign wrapper mechanism should be used: [r206](http://sourceforge.net/p/pythonqt/code/206/)

### patched

* Based on [r193](http://sourceforge.net/p/pythonqt/code/193/)
* List of features:
  * CMake'ified PythonQt project
  * CMake'ified PythonQt/generator project
  * Add `dPython.h` file, it provides the ability to link against release python with a debug build of your project.
  * Option `PYTHONQT_USE_VTK` CMake option allowing to teach PythonQt how to deal with `vtkObject`
  * Stdin can optionally be redirected to a custom callback
  * [More details](https://github.com/commontk/PythonQt/compare/svn-mirror...patched)

### svn-mirror

* SVN history imported using `git-svn`

Contributing
------------

Once you've made your great commits:

1. [Fork][fk] PythonQt
2. Create a topic branch - `git checkout -b my_branch`
3. Push to your fork - `git push origin my_branch`
4. Create an [Pull Request][pr]
5. That's it!

License
-------

PythonQt is licensed under the GNU Lesser General Public License.

[fk]: http://help.github.com/forking/
[pr]: https://help.github.com/articles/creating-a-pull-request/

