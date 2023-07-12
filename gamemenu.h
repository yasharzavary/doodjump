#ifndef GAMEMENU_H
#define GAMEMENU_H

#include <QObject>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QTimer>

class gameMenu : public QGraphicsView
{
    Q_OBJECT
private:
    QGraphicsScene *menuScene;
public:
    explicit gameMenu();

signals:

};
#endif // GAMEMENU_H
