#include "placestage.h"

placeStage::placeStage(QGraphicsScene *gameScene)
{
//    add pic and set pos of the stage
    setPixmap(QPixmap(":image/stage.png"));
    gameScene->addItem(this);
    setPos(rand()%400, rand()%700);

}

placeStage::placeStage(QGraphicsScene *gameScene, int level)
{
    //    add pic and set pos of the stage
    setPixmap(QPixmap(":image/stage.png"));
    gameScene->addItem(this);
    setPos(rand()%400, rand()%600);

    if(437-x()< 40){
        switchMove=true;
    }
    else{
        switchMove=false;
    }

    moveStageTimer=new QTimer;
    connect(moveStageTimer, SIGNAL(timeout()), this, SLOT(moveStage()));
    moveStageTimer->start(500);

}

placeStage::placeStage(QGraphicsScene *gameScene, float level)
{
    //    add pic and set pos of the stage
    setPixmap(QPixmap(":image/stage.png"));
    gameScene->addItem(this);
    setPos(rand()%400, rand()%700);
}

void placeStage::moveStage()
{
    if(switchMove){
        setPos(x()-15, y());
        if(x()<150){
            switchMove=false;
        }
    }
    else{
        setPos(x()+15, y());
        if(x()>400){
            switchMove=true;
        }
    }

}



