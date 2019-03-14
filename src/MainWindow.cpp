#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "deal.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  connect(ui->pbOriginSound, SIGNAL(clicked()), this, SLOT(change2_origin_sound()));
  connect(ui->pbVecSound, SIGNAL(clicked()), this, SLOT(change2_vec_sound()));
  connect(ui->pbVecNrSound, SIGNAL(clicked()), this, SLOT(change2_vec_nr_sound()));
}

void MainWindow::change2_origin_sound(){
  iFlag = 0;
  printf("%d", iFlag);
}

void MainWindow::change2_vec_sound(){
  iFlag = 1;
  printf("%d", iFlag);
}

void MainWindow::change2_vec_nr_sound(){
  iFlag = 2;
  printf("%d", iFlag);
}

MainWindow::~MainWindow()
{
  delete ui;
}
