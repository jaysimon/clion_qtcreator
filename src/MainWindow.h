#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
  class MainWindow;
}

class MainWindow : public QMainWindow
{
Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = nullptr);
  ~MainWindow();
private slots:
  void change2_origin_sound();
  void change2_vec_sound();
  void change2_vec_nr_sound();
private:
  Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
