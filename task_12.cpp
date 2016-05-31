#include "task_12.h"
#include <QPixmap>
#include <QPicture>

task_12::task_12(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(200,200, 500,500);

    m_label = new QLabel(this);
    m_label->setGeometry(QRect(QPoint(10,10),QSize(192,192)));

    QPixmap pic(":/actions/imag");
    //pic.load(":/actions/imag");
    m_label->setPixmap(pic);

}

task_12::~task_12()
{
    delete m_label;
}
