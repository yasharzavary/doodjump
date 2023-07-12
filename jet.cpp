#include "jet.h"


jet::jet(QGraphicsScene *gameScene)
{
    setPixmap(QPixmap());

    gameScene->addItem(this);
    setPos(rand()%437, rand()%700);

}
