#include "loselabel.h"

loseLabel::loseLabel(QGraphicsScene *gameScene)
    : QObject(), QGraphicsPixmapItem()
{
    setPixmap(QPixmap(":image/gamover.png"));

    gameScene->addItem(this);
    setPos(0, 250);
}
