#include "monsterleveltwo.h"

monsterLevelTwo::monsterLevelTwo(QGraphicsScene *gameScene)
    : QObject(), QGraphicsPixmapItem()
{
    setPixmap(QPixmap(":/image/monsterLevelTwo.png"));

    gameScene->addItem(this);
    setPos(rand()%300, rand()%200);

    if(x() > 400){
        switchMonsterMove=true;
    }
    else{
        switchMonsterMove=false;
    }

    monsterMoveTimer=new QTimer;
    connect(monsterMoveTimer, SIGNAL(timeout()), this, SLOT(moveMonster()));

}

void monsterLevelTwo::startMonsterTimer()
{
    monsterMoveTimer->start(400);
}

void monsterLevelTwo::moveMonster()
{
    if(switchMonsterMove){
        setPos(x()-10, y());
        if(x()<200){
            switchMonsterMove=false;
        }
    }
    else{
        setPos(x()+10, y());
        if(x()>400){
            switchMonsterMove=true;
        }

    }
}
