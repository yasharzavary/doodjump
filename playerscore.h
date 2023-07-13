#ifndef PLAYERSCORE_H
#define PLAYERSCORE_H

#include <QGraphicsTextItem>
#include <QGraphicsScene>

class playerScore: public QGraphicsTextItem
{
private:
    int score;
public:
    playerScore(QGraphicsScene *gameScene);
    void addToTheScore();
};

#endif // PLAYERSCORE_H
