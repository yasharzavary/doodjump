#include "shield.h"

shield::shield(QGraphicsScene *gameScene):
    shieldScene{gameScene}, QObject(), QGraphicsPixmapItem()
{
    itemTimer=new QTimer;


    setPixmap(QPixmap(":image/shield.png"));
    gameScene->addItem(this);
    setPos(rand()%473, rand()%700);
}
