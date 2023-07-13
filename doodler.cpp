#include "doodler.h"


doodler::doodler(QGraphicsScene *gameScene):
    QObject(), QGraphicsPixmapItem(), doodlerScene{gameScene}, jumpForce(0)
{
//    set pic and place of the doodler
    setPixmap(QPixmap(":/image/doodler.png"));
    gameScene->addItem(this);
    setPos(200,350);

    doodlerTimer=new QTimer();
    connect(doodlerTimer, SIGNAL(timeout()), this, SLOT(comeDown()));
    doodlerTimer->start(500);

    this->setFlag(QGraphicsItem::ItemIsFocusable);
    this->setFocus();

}

void doodler::keyPressEvent(QKeyEvent *keyEvent)
{
    if(keyEvent->key() == Qt::Key_Right){
        setPos(x()+15, y());
    }
    if(keyEvent->key() == Qt::Key_Left){
        setPos(x()-15, y());
    }
}

void doodler::changeJumpForce(int changeTemp)
{
    jumpForce=changeTemp;
    std::cout<<"it is: "<<jumpForce<<std::endl;
}


void doodler::comeDown()
{ 
    if(jumpForce!=0){
        std::cout<<"going uuuup"<<std::endl;
        int jumpTemp=0;
        while(jumpTemp!=jumpForce){
            setPos(x(), y()-1);
            jumpTemp++;
        }
        jumpForce=0;
    }
    else{
        setPos(x(), y()+20);
    }
}
