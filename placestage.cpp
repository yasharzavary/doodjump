#include "placestage.h"

placeStage::placeStage(QGraphicsScene *gameScene)
{
//    add pic and set pos of the stage
    setPixmap(QPixmap(":image/stage.png"));
    gameScene->addItem(this);
    setPos(rand()%437, rand()%700);

}
