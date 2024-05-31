#include "ConsoleFactory.h"

ConsoleFactory::ConsoleFactory(){}
ConsoleFactory::~ConsoleFactory(){}

Screen* ConsoleFactory::CreateProduct(std::shared_ptr<Mediator> mid) 
{
    return new Console(mid);
}