#include "mainbankomatwindow.h"

mainbankomatwindow::mainbankomatwindow(QObject *parent)
    : QAbstractItemModel(parent)
{}

QVariant mainbankomatwindow::headerData(int section, Qt::Orientation orientation, int role) const
{
    // FIXME: Implement me!
}

QModelIndex mainbankomatwindow::index(int row, int column, const QModelIndex &parent) const
{
    // FIXME: Implement me!
}

QModelIndex mainbankomatwindow::parent(const QModelIndex &index) const
{
    // FIXME: Implement me!
}

int mainbankomatwindow::rowCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

int mainbankomatwindow::columnCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

QVariant mainbankomatwindow::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    return QVariant();
}
