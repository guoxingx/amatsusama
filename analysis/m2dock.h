#ifndef M2DOCK_H
#define M2DOCK_H

#include <QDockWidget>

namespace Ui {
class M2Dock;
}

class M2Dock : public QDockWidget
{
    Q_OBJECT

public:
    explicit M2Dock(QWidget *parent = nullptr);
    ~M2Dock();

private:
    Ui::M2Dock *ui;
};

#endif // M2DOCK_H
