#ifndef MONSTERLEVELTWO_H
#define MONSTERLEVELTWO_H

#include <QObject>
#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QTimer>

class monsterLevelTwo : public QObject
{
    Q_OBJECT
private:
    QTimer *monsterMoveTimer;
    bool switchMonsterMove;
public:
    explicit monsterLevelTwo(QObject *parent = nullptr);
    void startMonsterTimer();
signals:
public slots:
    void moveMonster();
signals:

};

#endif // MONSTERLEVELTWO_H
