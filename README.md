PythonQt
========

Overview
--------

PythonQt is a dynamic [Python](http://www.python.org) binding for [Qt](http://qt.nokia.com).
It offers an easy way to embed the Python scripting language into
your Qt applications. It makes heavy use of the QMetaObject system and thus requires Qt4.x.

This project is a fork of the [official PythonQt](http://pythonqt.sourceforge.net/) repository 
hosted on sourceforge.

It serves as *staging area* to contain patches that will then be contributed back to the 
official repository.

Prerequisites
-------------

* CMake 2.8.x
* Qt 4.6.2 or above

Build instructions
------------------

By default, the `patched-2` version will be checked out.

```
git clone git://github.com/commontk/PythonQt.git
mkdir PythonQt-build
cd PythonQt-build
cmake -DQT_QMAKE_EXECUTABLE:FILEPATH=/path/to/qmake ../PythonQt
make
```

Additional configure options are:

* `CMAKE_BUILD_TYPE`:  Debug, Release, RelWithDebInfo or MinSizeRel
* `PythonQt_DEBUG`: Enable/Disable PythonQt debug output
* `PythonQt_Wrap_Qt<componentname>`: Build PythonQt wrapper associated with `<componentname>`. Possible `<componentname>` are `gui`, `network`, `opengl`, `sql`, `uitools`, `webkit`, `xml`, `xmlpatterns`.

Available branches
------------------

This repository contains three branches:

### patched-2

* Based on [r228](http://pythonqt.svn.sourceforge.net/viewvc/pythonqt?view=revision&revision=228)
* List of features:
 * At configuration time, detect the Qt version used and seamlessly compile the appropriate wrappers (Qt 4.8, 4.7 or 4.6).
 * Add method allowing to know if a python error occurred: [5935f29](https://github.com/commontk/PythonQt/commit/5935f29978deed892a13ddef02cb14c205c6124d)
 * Fix compilation issue on VS2010 when PythonQt Debug build against python Release: [7e1e07f](https://github.com/commontk/PythonQt/commit/7e1e07f34b2420e420e2858e5ea9a49fe1e0d235)
* Backported:
 * Most of the [change specific to](https://github.com/commontk/PythonQt/compare/svn-mirror...patched) `patched` branch have been backported upstream: [r200](http://pythonqt.svn.sourceforge.net/viewvc/pythonqt?view=revision&revision=200), [r201](http://pythonqt.svn.sourceforge.net/viewvc/pythonqt?view=revision&revision=201), [r202](http://pythonqt.svn.sourceforge.net/viewvc/pythonqt?view=revision&revision=202), [r203](http://pythonqt.svn.sourceforge.net/viewvc/pythonqt?view=revision&revision=203), [r204](http://pythonqt.svn.sourceforge.net/viewvc/pythonqt?view=revision&revision=204)
 * CMake option `PYTHONQT_USE_VTK` has been removed ([r205](http://pythonqt.svn.sourceforge.net/viewvc/pythonqt?view=revision&revision=205)), the foreign wrapper mechanism should be used: [r206](http://pythonqt.svn.sourceforge.net/viewvc/pythonqt?view=revision&revision=206)

### patched

* Based on [r193](http://pythonqt.svn.sourceforge.net/viewvc/pythonqt?view=revision&revision=193)
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
3. Push to your branch - `git push origin my_branch`
4. Create an [Issue][is] with a link to your branch
5. That's it!


Meta
----

* Code: `git clone git://github.com/commontk/PythonQt.git`
* Home: <http://pythonqt.sourceforge.net/>
* Bugs: <http://github.com/commontk/PythonQt/issues>

License
-------

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

[fk]: http://help.github.com/forking/
[is]: http://github.com/jcfr/qJobManager/issues

