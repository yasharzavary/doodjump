#ifndef MONSTERLEVEL1_H
#define MONSTERLEVEL1_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QTimer>

class monsterLevel1 : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
private:
    QTimer *monsterMoveTimer;
    bool switchMonsterMove;
public:
    explicit monsterLevel1(QGraphicsScene *gameScene);
    void startMonsterTimer();
signals:
public slots:
    void moveMonster();
};

#endif // MONSTERLEVEL1_H
