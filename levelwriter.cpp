#include "levelwriter.h"




levelWriter::levelWriter(QGraphicsScene *gameScene): QGraphicsTextItem(), levelHolder(1)
{
    setPlainText(QString::number(levelHolder));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times", 25));

    gameScene->addItem(this);
    setPos(200,0);
}

void levelWriter::getUpperTheLevel()
{
    levelHolder++;
    setPlainText(QString::number(levelHolder));
}
