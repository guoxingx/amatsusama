#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qdebug.h"
#include <QLabel>
#include <QListWidget>
#include <QDockWidget>
#include <QImage>
#include <QFileDialog>
#include <QFile>

#include "settingdlg.h"
#include "versiondlg.h"

#include "neoapi/neoapi.hpp"
#include <iostream>

//#include "analysis/m2dock.h"

// constructor
//
// no return for a constructor
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // hide imageDock
    ui->imageDock->hide();
}

// destructor
//
// no return for destructor
MainWindow::~MainWindow()
{
    delete ui;
}

/* --------------------------------------------------------------------
 *
 *                           I am a seperator
 *
 * -------------------------------------------------------------------- */

// init status bar
void MainWindow::init_status_bar()
{
    // ui->statusBar->showMessage(tr("时间时间在上世纪的夜晚"), 10000);
    statusLabel = new QLabel;
    statusLabel->setMinimumSize(150, 20);
    statusLabel->setFrameShape(QFrame::WinPanel);
    statusLabel->setFrameShadow(QFrame::Sunken);
    ui->statusBar->addWidget(statusLabel);
    statusLabel->setText("");

    QLabel *permanent = new QLabel(this);
    permanent->setFrameStyle(QFrame::Box | QFrame::Sunken);
    permanent->setText(
      tr("<a href=\"http://wuyi.icu\">wuyi.icu</a>"));
    permanent->setTextFormat(Qt::RichText);
    permanent->setOpenExternalLinks(true);
    ui->statusBar->addPermanentWidget(permanent);
}

/* --------------------------------------------------------------------
 *
 *                           I am a seperator
 *
 * -------------------------------------------------------------------- */

// open image and show in imageDock
bool MainWindow::openImage()
{
    QImage image;
    QString OpenFile = QFileDialog::getOpenFileName(this,
        "please choose an image file",
        "",
        "Image Files(*.jpg *.png *.bmp *.pgm *.pbm);;All(*.*)");
    if (OpenFile != "") {
        if (image.load(OpenFile)) {
            // 仅仅只是导入之后的图片仍然是原来的大小
            // 这个时候我们需要缩放
            ui->imageLabel->setPixmap(QPixmap::fromImage(image).scaled(ui->imageLabel->size()));

            // make image(and label) scaled with dock
            ui->imageLabel->setScaledContents(true);

            // show image path in dock title
            ui->imageDock->setWindowTitle(QFileInfo(OpenFile).filePath());

            // show imageDock if it's hidden
            if (ui->imageDock->isHidden())
                ui->imageDock->show();
        }
    }
    return true;
}

/* --------------------------------------------------------------------
 *
 *                           I am a seperator
 *
 * -------------------------------------------------------------------- */

// show version dialog
void MainWindow::on_actionVersion_triggered()
{
    VersionDlg dlg;
    dlg.exec();
}

// show / close measure result dockwidget
void MainWindow::on_actionMeasure_Result_triggered()
{
    qDebug("isEnabled: %d, isHidden: %d", ui->measureDock->isEnabled(), ui->measureDock->isHidden());
    if (ui->measureDock->isHidden())
        ui->measureDock->show();
    else
        ui->measureDock->hide();
}

// show setting dialog
void MainWindow::on_actionSetting_triggered()
{
    SettingDlg dlg;
    if (dlg.exec() == QDialog::Accepted)
        qDebug("setting dialog confirmed");
    else
        qDebug("setting dialog exit");
}

// call openImage()
void MainWindow::on_actionOpen_O_triggered()
{
    this->openImage();
}

// show m2 analysis dock
void MainWindow::on_actionM2_triggered()
{
    ui->dockWidget->show();

    //    M2Dock dock;
    //    if (dock.isHidden())
    //        dock.show();
    //    addDockWidget(Qt::RightDockWidgetArea, dock);
    //    else
    //        dock.hide();

    NeoAPI::Cam camera = NeoAPI::Cam();
//    camera.Connect();
//    if (camera.IsConnected()) {
//        ui->connInfoLabel->setText("连接成功");
//        qDebug("camera connected");

//        camera.f().ExposureTime = 20000;
//        std::cout << "exposure time: " << camera.f().ExposureTime << std::endl;

//        camera.f().TriggerMode = NeoAPI::TriggerMode::On;
//        camera.f().TriggerSoftware.Execute();
//        NeoAPI::Image img = camera.GetImage();
//        std::cout << "image width: " << img.GetWidth() << std::endl;

//        img.Save("../testImage");

//    } else {
//        ui->connInfoLabel->setText("连接失败!");
//    }
}
