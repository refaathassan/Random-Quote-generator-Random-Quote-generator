#ifndef HANDLERS_H
#define HANDLERS_H
#include<iostream>
#include"private_lib.h"
class Handlers
{
private:
public:
     Handlers();
     virtual ~Handlers();
     virtual std::string Handling(std::string File ,std::string massage)  =0;
     virtual void SetNextHandler(Handlers*hand)  =0;
};


#endif