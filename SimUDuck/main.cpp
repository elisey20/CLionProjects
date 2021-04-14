#include "Duck.h"

int main()
{
    Duck *mallard = new MallardDuck();
    mallard->performFly();
    mallard->performQuack();
    mallard->display();

    Duck *model = new ModelDuck();
    model->performFly();
    model->setFlyBehavior(new FlyRocketPowered());
    model->performFly();

    delete model;
    delete mallard;
}
