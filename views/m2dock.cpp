#include "m2dock.h"
#include "ui_m2dock.h"
#include "qdebug.h"

M2Dock::M2Dock(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::M2Dock)
{
    ui->setupUi(this);
    this->hide();
//    ui->dockWidgetContents
}

M2Dock::~M2Dock()
{
    qDebug("m2dock destructed");
    delete ui;
}
