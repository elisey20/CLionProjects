#include <iostream>

#pragma once

class Object {};

class Animal : public Object
{
private:
    int age;
public:
    explicit Animal(int age) : age(age) {}
    virtual void say() {std::cout << "Animal" << std::endl;}
};

class Wolf : public Animal
{
public:
    explicit Wolf(int age) : Animal(age) {}
    void say() override {std::cout << "Wolf" << std::endl;}
};
