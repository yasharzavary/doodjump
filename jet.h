#ifndef JET_H
#define JET_H

#include <QObject>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>

class jet : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    explicit jet(QGraphicsScene *gameScene);

signals:

};

#endif // JET_H
