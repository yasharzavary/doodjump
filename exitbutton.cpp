#include "exitbutton.h"


exitButton::exitButton(QGraphicsScene *meinScene)
{
    setPixmap(QPixmap(":/image/exit.png"));


    meinScene->addItem(this);
    setPos(150,500);
}

void exitButton::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    exit(1);
}
