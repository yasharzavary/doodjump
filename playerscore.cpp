#include "playerscore.h"



playerScore::playerScore(QGraphicsScene *gameScene): QGraphicsTextItem(), score(0)
{

    setPlainText(QString::number(score));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times", 25));

    gameScene->addItem(this);
    setPos(1,1);

}

void playerScore::addToTheScore()
{
    score+=100;
    setPlainText(QString::number(score));
}
