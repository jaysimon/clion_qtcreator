# clion_qtcreator
This is clion qtcreator demo.
1. I successed make a demo ui in qt creator, but failed in clion with the same code.
2. I got this:
```shell
CMakeFiles/20190314_clion_qt.dir/src/main.cpp.o: In function `main':
main.cpp:(.text+0x81): undefined reference to `MainWindow::~MainWindow()'
main.cpp:(.text+0xaf): undefined reference to `MainWindow::~MainWindow()'
CMakeFiles/20190314_clion_qt.dir/src/mainwindow.cpp.o: In function `MainWindow::MainWindow(QWidget*)':
mainwindow.cpp:(.text+0x4b): undefined reference to `vtable for MainWindow'
mainwindow.cpp:(.text+0x5d): undefined reference to `vtable for MainWindow'
collect2: error: ld returned 1 exit status
CMakeFiles/20190314_clion_qt.dir/build.make:175: recipe for target '20190314_clion_qt' failed
make[2]: *** [20190314_clion_qt] Error 1
CMakeFiles/Makefile2:67: recipe for target 'CMakeFiles/20190314_clion_qt.dir/all' failed
make[1]: *** [CMakeFiles/20190314_clion_qt.dir/all] Error 2
Makefile:83: recipe for target 'all' failed
make: *** [all] Error 2
```

### Could you help to run it with CMake successfully?
A push request is the best.
