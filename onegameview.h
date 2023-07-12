#ifndef ONEGAMEVIEW_H
#define ONEGAMEVIEW_H

#include <QObject>
#include <QGraphicsScene>
#include <QGraphicsView>

class oneGameView : public QGraphicsView
{
    Q_OBJECT
private:
    QGraphicsScene *oneGameScene;
public:
    explicit oneGameView();

signals:

};

#endif // ONEGAMEVIEW_H
