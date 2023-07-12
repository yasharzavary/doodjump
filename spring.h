#ifndef SPRING_H
#define SPRING_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>

class spring : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    explicit spring(QGraphicsScene *gameScene);


signals:

};

#endif // SPRING_H
