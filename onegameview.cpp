#include "onegameview.h"


oneGameView::oneGameView():timeCalculator{0}
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


    for(int i =0; i<20; i++){
        stageList.push_back(new placeStage(oneGameScene));
    }

    stageControlTimer=new QTimer();
    connect(stageControlTimer, SIGNAL(timeout()), this, SLOT(controlStage()));
    stageControlTimer->start(500);


}

void oneGameView::controlStage()
{
    timeCalculator++;
    if(timeCalculator%5==0){
        shieldList.push_back(new shield(oneGameScene));
    }

    for(int i=0; i<20; i++){
        if(stageList[i]->x() <= gameDoodler->x() && gameDoodler->x() <= stageList[i]->x()+50
            && gameDoodler->y()>stageList[i]->y()-5){
            gameDoodler->setPos(gameDoodler->x(), gameDoodler->y()-15);
        }
    }
}
