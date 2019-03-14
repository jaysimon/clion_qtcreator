# clion_qtcreator
- This is a demo code, when I create a UI in qt creator but want to use code in clion, I meet a lot problem.
- I made a demo code, for those who counter this situation.
- This code will create a user interface with three pushbutton, when click pushbutton, the number changed on termnial.
# Problem I've got
This is clion qtcreator demo.
1. I successed make a demo ui in qt creator, but failed in clion with the same code.
2. I got this:
```shell
CMakeFiles/clion_qt_test.dir/src/MainWindow.cpp.o: In function `MainWindow::MainWindow(QWidget*)':
/home/hw/01-workspace/20190314_clion_qt/src/MainWindow.cpp:7: undefined reference to `vtable for MainWindow'
/home/hw/01-workspace/20190314_clion_qt/src/MainWindow.cpp:7: undefined reference to `vtable for MainWindow'
CMakeFiles/clion_qt_test.dir/src/MainWindow.cpp.o: In function `MainWindow::~MainWindow()':
/home/hw/01-workspace/20190314_clion_qt/src/MainWindow.cpp:30: undefined reference to `vtable for MainWindow'
/home/hw/01-workspace/20190314_clion_qt/src/MainWindow.cpp:30: undefined reference to `vtable for MainWindow'
collect2: error: ld returned 1 exit status
CMakeFiles/clion_qt_test.dir/build.make:131: recipe for target 'clion_qt_test' failed
make[3]: *** [clion_qt_test] Error 1
CMakeFiles/Makefile2:72: recipe for target 'CMakeFiles/clion_qt_test.dir/all' failed
make[2]: *** [CMakeFiles/clion_qt_test.dir/all] Error 2
CMakeFiles/Makefile2:84: recipe for target 'CMakeFiles/clion_qt_test.dir/rule' failed
make[1]: *** [CMakeFiles/clion_qt_test.dir/rule] Error 2
Makefile:118: recipe for target 'clion_qt_test' failed
make: *** [clion_qt_test] Error 2
```
3. How to solve the problem?
Just put MainWindow.cpp MainWindow.h MainWindow.ui, all 3 files into the same directory
# Any advices
I dont know why should I put the three files together, If I want to seperate them, how?