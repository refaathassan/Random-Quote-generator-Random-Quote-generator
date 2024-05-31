#include "AuthoFactory.h"


AuthoFactory::AuthoFactory(){}
AuthoFactory::~AuthoFactory()
{
    delete database;    
}

DataBase* AuthoFactory::GetObject(std::shared_ptr<Mediator> mid)
{
    if(database==nullptr)
    {
        database = new AuthonticationDataBase(mid);
        database->IniatDataBase();
    }
    return database;
}
DataBase* AuthoFactory::database=nullptr;