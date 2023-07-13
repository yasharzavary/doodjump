#include "jet.h"


jet::jet(QGraphicsScene *gameScene)
{
    setPixmap(QPixmap(":/image/jet.png"));

    gameScene->addItem(this);
    setPos(rand()%300, rand()%700);

}
