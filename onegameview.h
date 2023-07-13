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

class oneGameView : public QGraphicsView
{
    Q_OBJECT
private:
    monsterLevel1 *levelOneMonster;
    playerScore *gameScore;
    int levelHolder;
    int timeCalculator;
    int currentPosition;
    shield *shieldTemp;
    spring *springTemp;
    jet *jetTemp;
    QList<placeStage *> stageList;
    bool shieldAdded;
    bool springAdded;
    bool jetAdded;
    bool startLevelOneMonster;
    bool createLevelOneMonster;
    QTimer *stageControlTimer;
    doodler *gameDoodler;
    QGraphicsScene *oneGameScene;
public:
    explicit oneGameView();

signals:
public slots:
    void controlStage();
};

#endif // ONEGAMEVIEW_H
