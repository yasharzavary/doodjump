#ifndef GAMEMENU_H
#define GAMEMENU_H

#include <QObject>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QTimer>
#include "playbutton.h"
#include <QGraphicsTextItem>

class gameMenu : public QGraphicsView
{
    Q_OBJECT
private:
    QGraphicsScene *menuScene;
    playButton *pButton;
    QGraphicsTextItem *gameName;
public:
    explicit gameMenu();

signals:

};
#endif // GAMEMENU_H
