#ifndef LOSELABEL_H
#define LOSELABEL_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>

class loseLabel : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    explicit loseLabel(QGraphicsScene *gameScene);

signals:

};

#endif // LOSELABEL_H
