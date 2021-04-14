#include <iostream>

#pragma once

class FlyBehavior
{
public:
    virtual void fly() {};
};

class FlyWithWings : public FlyBehavior
{
public:

    void fly() override
    {
        std::cout << "I'm flying!" << std::endl;
    }
};

class FlyNoWay : public FlyBehavior
{
public:
    void fly() override
    {
        std::cout << "I can't fly!" << std::endl;
    }
};

class FlyRocketPowered : public FlyBehavior
{
    void fly() override
    {
        std::cout << "I'm flying with a rocket!" << std::endl;
    }
};