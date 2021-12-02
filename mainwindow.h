#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QLabel;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    Ui::MainWindow *ui;
    QLabel *statusLabel;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void init_status_bar();
    void on_actionVersion_triggered();
    void on_actionMeasure_Result_triggered();
    void on_actionSetting_triggered();
    void on_actionOpen_O_triggered();
    void on_actionM2_triggered();

public:
    bool openImage();
};
#endif // MAINWINDOW_H
