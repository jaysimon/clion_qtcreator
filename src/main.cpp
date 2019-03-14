#include "mainwindow.h"
#include <QApplication>
#include "deal.h"

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);

  MainWindow w;
  w.show();

  pthread_t tid;
  pthread_create(&tid, NULL, run, NULL);
  //pthread_exit(&tid);

  return a.exec();
}
