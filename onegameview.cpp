#include "onegameview.h"


oneGameView::oneGameView():timeCalculator(0), shieldAdded(false)
{
    oneGameScene=new QGraphicsScene;
    oneGameScene->setSceneRect(0,0,437,700);
    setScene(oneGameScene);

    //    set picture of the background
    setBackgroundBrush(QBrush(QImage(":/image/background.png")));

    //    set size of the background
    setFixedSize(437,700);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    gameDoodler=new doodler(oneGameScene);

    gameDoodler->setFlag(QGraphicsItem::ItemIsFocusable);
    gameDoodler->setFocus();


    for(int i =0; i<30; i++){
        stageList.push_back(new placeStage(oneGameScene));
    }

    stageControlTimer=new QTimer();
    connect(stageControlTimer, SIGNAL(timeout()), this, SLOT(controlStage()));
    stageControlTimer->start(500);


}

void oneGameView::controlStage()
{
    timeCalculator++;
    if(timeCalculator%10==0 && shieldAdded!=true){
        shieldTemp=new shield(oneGameScene);
        shieldAdded=true;
    }

    if(timeCalculator%11==0){
        springTemp=new spring(oneGameScene);
    }

    if(timeCalculator%15==0){
        jetTemp=new jet(oneGameScene);
    }

    for(int i=0; i<30; i++){
        if(stageList[i]->x() < gameDoodler->x()+40 && stageList[i]->x()+75 > gameDoodler->x()+45
            && stageList[i]->y()-10 < gameDoodler->y()+75 && stageList[i]->y()+4 > gameDoodler->y()+75 ){
            std::cout<<"it is in the up part\n";
            gameDoodler->changeJumpForce(120);
        }
    }
    if(shieldAdded && shieldTemp->x() < gameDoodler->x()+40 && shieldTemp->x()+75 > gameDoodler->x()+40 &&
        shieldTemp->y()-5 < gameDoodler->y()+35 && shieldTemp->y()+50 > gameDoodler->y()+40)
        {
        shieldAdded=false;
    }
}
