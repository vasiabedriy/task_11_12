#ifndef TASK_12_H
#define TASK_12_H

#include <QMainWindow>
#include <QLabel>

class task_12 : public QMainWindow
{
    Q_OBJECT

public:
    task_12(QWidget *parent = 0);
    ~task_12();
private:
    QLabel* m_label;
};

#endif // TASK_12_H
