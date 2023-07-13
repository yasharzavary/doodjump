#include "onegameview.h"


oneGameView::oneGameView():timeCalculator(0), shieldAdded(false), springAdded(false),
    jetAdded(false), levelHolder(1), currentPosition(350), startLevelOneMonster(true),
    createLevelOneMonster(true), startLevelTwoMonster(true), createLevelTwoMonster(true),
    shieldTimer(0), normalGoing(true), canHeart(true)
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


    for(int i =0; i<40; i++){
        stageList.push_back(new placeStage(oneGameScene));
    }

    gameScore=new playerScore(oneGameScene);

    levelHolderToWrite=new levelWriter(oneGameScene);

    stageControlTimer=new QTimer();
    connect(stageControlTimer, SIGNAL(timeout()), this, SLOT(controlStage()));
    stageControlTimer->start(500);


}

void oneGameView::controlStage()
{
    if(canHeart ==false){
        shieldTimer++;
        if(shieldTimer==40){
            shieldTimer=0;
            gameDoodler->setPixmap(QPixmap(":/image/doodler.png"));
            delete shieldTemp;
            canHeart=true;
            shieldAdded=false;
        }
    }
    if(gameDoodler->y()+75>=700){
        stageControlTimer->stop();
        gameLoseLabel=new loseLabel(oneGameScene);
        oneGameScene->removeItem(gameDoodler);
//        TODO: add the restart menu
        return;
    }
    else if(createLevelOneMonster==false && normalGoing){
        if((levelOneMonster->x() < gameDoodler->x() && levelOneMonster->x()+100 > gameDoodler->x() &&
             levelOneMonster->y() < gameDoodler->y() && levelOneMonster->y() +90 > gameDoodler->y()) ||
            (levelOneMonster->x() < gameDoodler->x()+75 && levelOneMonster->x()+100 > gameDoodler->x()+75 &&
             levelOneMonster->y() < gameDoodler->y() && levelOneMonster->y() +90 > gameDoodler->y())){
                if(canHeart == false){
                    gameDoodler->setPos(gameDoodler->x(), gameDoodler->y()+30);
//                    delete shieldTemp;
                    canHeart=true;
                    gameDoodler->setPixmap(QPixmap(":/image/doodler.png"));
                    shieldAdded=false;
                }
                else{
                    stageControlTimer->stop();
                    gameLoseLabel=new loseLabel(oneGameScene);
                    oneGameScene->removeItem(gameDoodler);
                    //        TODO: add the restart menu
                    return;
                }
        }
    }
    else if(createLevelTwoMonster==false && normalGoing){
        if((levelTwoMonster->x() < gameDoodler->x()+20 && levelTwoMonster->x()+100 > gameDoodler->x()+20 &&
             levelTwoMonster->y() < gameDoodler->y()+12 && levelTwoMonster->y() +90 > gameDoodler->y())+12 ||
            (levelTwoMonster->x() < gameDoodler->x()+50 && levelTwoMonster->x()+100 > gameDoodler->x()+50 &&
             levelTwoMonster->y() < gameDoodler->y()+12 && levelTwoMonster->y() +90 > gameDoodler->y()+12)){
                if(canHeart == false){
                    gameDoodler->setPos(gameDoodler->x(), gameDoodler->y()+30);
//                    delete shieldTemp;
                    canHeart=true;
                    gameDoodler->setPixmap(QPixmap(":/image/doodler.png"));
                    shieldAdded=false;
                }
                else{
                    stageControlTimer->stop();
                    gameLoseLabel=new loseLabel(oneGameScene);
                    oneGameScene->removeItem(gameDoodler);
                    //        TODO: add the restart menu
                    return;
                }
        }
    }

    timeCalculator++;
    if(timeCalculator%10==0 && shieldAdded!=true && levelHolder==4){
        shieldTemp=new shield(oneGameScene);
        shieldAdded=true;
    }

    if(timeCalculator%11==0 && springAdded!=true){
        springTemp=new spring(oneGameScene);
        springAdded=true;
    }

    if(timeCalculator%15==0 && jetAdded!=true){
        jetTemp=new jet(oneGameScene);
        jetAdded=true;
    }

//    control that doodler touch wich one of the stages
    for(int i=0; i<40; i++){
        if(stageList[i]->x() < gameDoodler->x()+40 && stageList[i]->x()+75 > gameDoodler->x()+45
            && stageList[i]->y()-10 < gameDoodler->y()+75 && stageList[i]->y()+15 > gameDoodler->y()+75 ){
            std::cout<<"it is in the up part\n";
            gameDoodler->changeJumpForce(120);
        }
    }

//    add shield and control that doodler touch the shield or not
    if(shieldAdded && shieldTemp->x() < gameDoodler->x()+40 && shieldTemp->x()+75 > gameDoodler->x()+40 &&
        shieldTemp->y()-5 < gameDoodler->y()+35 && shieldTemp->y()+50 > gameDoodler->y()+40)
        {
        oneGameScene->removeItem(shieldTemp);
        shieldAdded=false;
        canHeart=false;
        gameDoodler->setPixmap(QPixmap(":/image/doodlerShield.png"));
    }

//    add spring and control that doodler touch the spring or not
    if(springAdded && springTemp->x() < gameDoodler->x()+40 && springTemp->x()+75 > gameDoodler->x()+40 &&
        springTemp->y()-5 < gameDoodler->y()+35 && springTemp->y()+8 > gameDoodler->y()+40)
    {
        oneGameScene->removeItem(springTemp);
        gameDoodler->changeJumpForce(200);
        springAdded=false;
    }

//    add jet and control that doodler touch the jet or not
    if(jetAdded && jetTemp->x() < gameDoodler->x()+40 && jetTemp->x()+75 > gameDoodler->x()+40 &&
        jetTemp->y()-5 < gameDoodler->y()+35 && jetTemp->y()+50 > gameDoodler->y()+40)
    {
        oneGameScene->removeItem(jetTemp);
        gameDoodler->setPixmap(QPixmap(":/image/doodlerJet.png"));
        normalGoing=false;

        gameDoodler->changeJumpForce(1000);
        gameScore->addToTheScore(1000);
        gameDoodler->setPos(gameDoodler->x(), 350);

        for(int i=0; i<1000000;i++){}
        gameDoodler->setPixmap(QPixmap(":/image/doodler.png"));
        normalGoing=true;
        jetAdded=false;
    }

//    win level one and chage the level part
    if(gameDoodler->y() <= 0){
        levelHolderToWrite->getUpperTheLevel();
        gameDoodler->setPos(100,500);
        for(int i=0; i<40; i++){
            oneGameScene->removeItem(stageList[0]);
             stageList.removeFirst();
        }
        if(levelHolder>=2){
            for(int i =0; i<35-levelHolder; i++){
                stageList.push_back(new placeStage(oneGameScene));
            }
            for(int i=0; i<levelHolder+5;i++){
                stageList.push_back(new placeStage(oneGameScene, 1));
            }
        }
        else{
            for(int i =0; i<40; i++){
                stageList.push_back(new placeStage(oneGameScene));
            }
        }
        if(createLevelOneMonster && levelHolder>=3){
            levelOneMonster=new monsterLevel1(oneGameScene);
            createLevelOneMonster=false;
        }
        if(startLevelOneMonster && levelHolder>=4){
            levelOneMonster->startMonsterTimer();
            startLevelOneMonster=false;
        }
        if(createLevelTwoMonster && levelHolder>=5){
            levelTwoMonster = new monsterLevelTwo(oneGameScene);
            createLevelTwoMonster=false;
        }
        if(startLevelTwoMonster && levelHolder>=6){
            levelTwoMonster->startMonsterTimer();
            startLevelTwoMonster=false;
        }
        levelHolder++;
        currentPosition=500;
    }
    if(gameDoodler->y()<currentPosition){
        gameScore->addToTheScore();
        currentPosition=gameDoodler->y();
    }
}
