#include "TXTFactory.h"

TXTFactory::TXTFactory(){}
TXTFactory::~TXTFactory()
{
    delete database;    
}

DataBase* TXTFactory::GetObject(std::shared_ptr<Mediator> mid)
{
    if(database==nullptr)
    {
        database = new TXT(mid);
        database->IniatDataBase();
    }
    return database;
}
DataBase* TXTFactory::database=nullptr;