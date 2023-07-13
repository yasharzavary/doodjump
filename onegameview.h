#ifndef ONEGAMEVIEW_H
#define ONEGAMEVIEW_H

#include <QObject>
#include <QGraphicsScene>
#include <QGraphicsView>
#include "doodler.h"
#include "placestage.h"
#include <QGraphicsItem>
#include <QTimer>
#include <iostream>
#include "shield.h"
#include "spring.h"
#include "jet.h"
#include "playerscore.h"
#include "monsterlevel1.h"
#include "monsterleveltwo.h"
#include "loselabel.h"
#include "levelwriter.h"
#include "seconddoodler.h"

class oneGameView : public QGraphicsView
{
    Q_OBJECT
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
    doodler *gameDoodler;
    QTimer *stageControlTimer;
    QGraphicsScene *oneGameScene;
public:
    explicit oneGameView(int wichNum=0);

signals:
public slots:
    void controlStage();
};

#endif // ONEGAMEVIEW_H
