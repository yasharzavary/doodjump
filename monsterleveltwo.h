#ifndef MONSTERLEVELTWO_H
#define MONSTERLEVELTWO_H

#include <QObject>
#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QTimer>

class monsterLevelTwo : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
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
