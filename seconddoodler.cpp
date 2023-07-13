#include "seconddoodler.h"



secondDoodler::secondDoodler(QGraphicsScene *gameScene):
    doodler(gameScene)
{

}

void secondDoodler::keyPressEvent(QKeyEvent *pressEvent)
{

    if(pressEvent->key() == Qt::Key_D){
        setPos(x()+15, y());
    }
    if(pressEvent->key() == Qt::Key_A){
        setPos(x()-15, y());
    }

}
