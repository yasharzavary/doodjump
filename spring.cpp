#include "spring.h"

spring::spring(QGraphicsScene *gameScene)
    : QObject(), QGraphicsPixmapItem()
{
    setPixmap(QPixmap(":image/coil.png"));

    gameScene->addItem(this);
    setPos(rand()%473, rand()%700);

}
