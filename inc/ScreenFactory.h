#ifndef SCREENFACTORY_H
#define SCREENFACTORY_H

#include"Mediator.h"
#include"Screen.h"

class ScreenFactory
{
public:
    virtual Screen* CreateProduct(std::shared_ptr<Mediator> mid) =0;
    ScreenFactory();
    ~ScreenFactory();

private:

};

#endif