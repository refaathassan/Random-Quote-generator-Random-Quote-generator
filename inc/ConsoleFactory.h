#ifndef CONSOLEFACTORY_H
#define CONSOLEFACTORY_H

#include "ScreenFactory.h"
#include "console.h"

class ConsoleFactory : public ScreenFactory
{
public:
    Screen* CreateProduct(std::shared_ptr<Mediator> mid) override;
    ConsoleFactory();
    ~ConsoleFactory();

};

#endif