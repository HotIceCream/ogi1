#ifndef DOUBLEDELEGATE_H
#define DOUBLEDELEGATE_H

#include <QItemDelegate>

class DoubleDelegate : public QItemDelegate
{
    Q_OBJECT
public:
    DoubleDelegate();
    QWidget* createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const;
};

#endif // DOUBLEDELEGATE_H
