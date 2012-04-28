#include "doubledelegate.h"
#include <QLineEdit>
DoubleDelegate::DoubleDelegate()
{
}

QWidget *DoubleDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    Q_UNUSED(index);

       QLineEdit* lineEdit = new QLineEdit(parent);
       lineEdit->setValidator(new QDoubleValidator(-100,100,1,lineEdit));
       return lineEdit;
}
