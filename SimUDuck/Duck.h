#pragma once

#include <iostream>

#include "IFly.h"
#include "IQuack.h"

class Duck
{
protected:
    FlyBehavior *flyBehavior;
    QuackBehavior *quackBehavior;

public:
    Duck() {}
    virtual void display() {}

    void performFly()
    {
        flyBehavior->fly();
    }

    void setFlyBehavior(FlyBehavior *fb)
    {
        flyBehavior = fb;
    }

    void performQuack()
    {
        quackBehavior->quack();
    }

    void setQuackBehavior(QuackBehavior *qb)
    {
        quackBehavior = qb;
    }

    void swim()
    {
        std::cout << "All ducks float, even decoys!" << std::endl;
    }

};

class MallardDuck : public Duck
{
public:
    MallardDuck()
    {
        flyBehavior = new FlyWithWings();
        quackBehavior = new Quack();
    }

    void display() override
    {
        std::cout << "I'm a real Mallard duck" << std::endl;
    }
};

class ModelDuck : public Duck
{
public:
    ModelDuck()
    {
        flyBehavior = new FlyNoWay();
        quackBehavior = new Quack();
    }

    void display() override
    {
        std::cout << "I'm model duck" << std::endl;
    }
};