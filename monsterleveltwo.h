#ifndef MONSTERLEVELTWO_H
#define MONSTERLEVELTWO_H

#include <QObject>
#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QTimer>
#include <doodler.h>
#include <QList>

class monsterLevelTwo : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
    friend class oneGameView;
private:
    QTimer *monsterMoveTimer;
    bool switchMonsterMove;
public:
    explicit monsterLevelTwo(QGraphicsScene *gameScene);
    void startMonsterTimer();
signals:
public slots:
    void moveMonster();
signals:

};

#endif // MONSTERLEVELTWO_H
