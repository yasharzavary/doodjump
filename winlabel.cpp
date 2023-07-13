#include "winlabel.h"


winLabel::winLabel(QGraphicsScene *gameScene)
{
    setPixmap(QPixmap(":image/"));

    gameScene->addItem(this);
    setPos(0, 250);
}
