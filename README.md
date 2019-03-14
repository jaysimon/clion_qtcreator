# clion_qtcreator
This is clion qtcreator demo.
1. I successed make a demo ui in qt creator, but failed in clion with the same code.
2. I got this:
```shell
/home/hw/00-softwares/clion-2018.3.4/bin/cmake/linux/bin/cmake --build /home/hw/01-workspace/20190314_clion_qt/cmake-build-debug --target 20190314_clion_qt -- -j 2
[ 16%] Automatic MOC and UIC for target 20190314_clion_qt
[ 16%] Built target 20190314_clion_qt_autogen
[ 33%] Linking CXX executable 20190314_clion_qt
CMakeFiles/20190314_clion_qt.dir/src/mainwindow.cpp.o: In function `MainWindow::MainWindow(QWidget*)':
/home/hw/01-workspace/20190314_clion_qt/src/mainwindow.cpp:7: undefined reference to `vtable for MainWindow'
/home/hw/01-workspace/20190314_clion_qt/src/mainwindow.cpp:7: undefined reference to `vtable for MainWindow'
CMakeFiles/20190314_clion_qt.dir/src/mainwindow.cpp.o: In function `MainWindow::~MainWindow()':
/home/hw/01-workspace/20190314_clion_qt/src/mainwindow.cpp:30: undefined reference to `vtable for MainWindow'
/home/hw/01-workspace/20190314_clion_qt/src/mainwindow.cpp:30: undefined reference to `vtable for MainWindow'
collect2: error: ld returned 1 exit status
CMakeFiles/20190314_clion_qt.dir/build.make:131: recipe for target '20190314_clion_qt' failed
make[3]: *** [20190314_clion_qt] Error 1
CMakeFiles/Makefile2:72: recipe for target 'CMakeFiles/20190314_clion_qt.dir/all' failed
make[2]: *** [CMakeFiles/20190314_clion_qt.dir/all] Error 2
CMakeFiles/Makefile2:84: recipe for target 'CMakeFiles/20190314_clion_qt.dir/rule' failed
make[1]: *** [CMakeFiles/20190314_clion_qt.dir/rule] Error 2
Makefile:118: recipe for target '20190314_clion_qt' failed
make: *** [20190314_clion_qt] Error 2
```

### Could you help to run it with CMake successfully?
A push request is the best.
