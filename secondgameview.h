#ifndef SECONDGAMEVIEW_H
#define SECONDGAMEVIEW_H

#include "onegameview.h"
#include "seconddoodler.h"

class secondGameView: public oneGameView
{
private:
    levelWriter *levelHolderToWrite;
    loseLabel *gameLoseLabel;
    monsterLevel1 *levelOneMonster;
    monsterLevelTwo *levelTwoMonster;
    playerScore *gameScore;
    int shieldTimer;
    int levelHolder;
    int timeCalculator;
    int currentPosition;
    shield *shieldTemp;
    spring *springTemp;
    jet *jetTemp;
    QList<placeStage *> stageList;
    bool canHeart;
    bool normalGoing;
    bool shieldAdded;
    bool springAdded;
    bool jetAdded;
    bool startLevelOneMonster;
    bool createLevelOneMonster;
    bool startLevelTwoMonster;
    bool createLevelTwoMonster;
    QTimer *stageControlTimer;
    doodler *gameDoodler;
    QGraphicsScene *oneGameScene;
public:
    secondGameView();
};

#endif // SECONDGAMEVIEW_H
