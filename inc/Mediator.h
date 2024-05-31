#ifndef MEDIATOR_H
#define MEDIATOR_H
#include<iostream>
#include<vector>
class Colleage;
class Mediator
{
    public:
     virtual void SendMassag(Colleage* sender,std::string massage)=0;
     virtual void AddColleage(Colleage* coll)=0;
     Mediator();
     ~Mediator();

};

#endif