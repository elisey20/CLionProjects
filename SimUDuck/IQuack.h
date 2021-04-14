#pragma once

#include <iostream>

class QuackBehavior
{
public:
    virtual void quack() {}
};

class Quack : public QuackBehavior
{
public:
    void quack() override
    {
        std::cout << "Quack" << std::endl;
    }
};

class MuteQuack : public QuackBehavior
{
public:
    void quack() override
    {
        std::cout << "<< Silence >>" << std::endl;
    }
};

class Squeak : public QuackBehavior
{
public:
    void quack() override
    {
        std::cout << "Squeak" << std::endl;
    }
};