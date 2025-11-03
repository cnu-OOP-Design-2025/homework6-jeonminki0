#include "bird.h"
#include <iostream>
using namespace std;

Duck::Duck():Bird("Duck"){
    cry();
}
void Duck::cry(){
    cout<<"Quack!"<<endl;
}
Duck::~Duck(){
    cry();
}

Penguin::Penguin():Bird("Penguin"){
    cry();
}
void Penguin::cry(){
    cout<<"Squawk!"<<endl;
}
void Penguin::fly(){
    cout<<"This bird can't fly."<<endl;
}
Penguin::~Penguin(){
    cry();
}

Eagle::Eagle():Bird("Eagle"){
    cry();
}
void Eagle::cry(){
    cout<<"Screech!"<<endl;
}
void Eagle::swim(){
    cout<<"This bird can't swim."<<endl;
}
Eagle::~Eagle(){
    cry();
}