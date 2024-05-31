#ifndef COLLEAGE_H
#define COLLEAGE_H
#include <memory>
#include<iostream>
#include <vector>
#include <fstream>
class Mediator;
class Colleage
{
    protected:
      std::shared_ptr<Mediator> mid;
    public:
        Colleage(std::shared_ptr<Mediator> mid):mid{mid}{}
        virtual void RecieveMassage(std::string massage)=0;
        virtual void SendMassage(std::string massage)=0;
         Colleage();
        ~Colleage();

};

#endif