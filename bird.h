#pragma once
#include <string>
#include <iostream>

class Bird {
    std::string species; 
public:
    Bird(){}
    Bird(std::string species): species(species){
        std::cout << species << " has borned" << std::endl;
    }

    virtual void display() {
        std::cout << "Species: " << species << std::endl;
    }

    virtual void fly() {
        std::cout << "This bird can fly." << std::endl;
    }

    virtual void swim() {
        std::cout << "This bird can swim." << std::endl;
    }

    virtual void cry() = 0;

    virtual ~Bird() {
        std::cout << species << " has died" << std::endl;
     }
};

class Duck:public Bird{
public:
    Duck();
    virtual ~Duck();
    virtual void cry() override;
};

class Penguin:public Bird{
public:
    Penguin();
    virtual ~Penguin();
    virtual void cry() override;
    virtual void fly() override;
};

class Eagle:public Bird{
public:
    Eagle();
    virtual ~Eagle();
    virtual void cry() override;
    virtual void swim() override;
};
