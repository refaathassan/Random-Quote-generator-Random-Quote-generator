#ifndef AUTHOFACTORY_H
#define AUTHOFACTORY_H
#include "AuthonticationDataBase.h"
class AuthoFactory
{
    private:
       AuthoFactory();
      ~AuthoFactory();
    protected:
        static DataBase* database;
    public:
       AuthoFactory(AuthoFactory& obj)=delete;
       AuthoFactory& operator=(const AuthoFactory& obj)=delete;
       static DataBase* GetObject(std::shared_ptr<Mediator> mid);

};



#endif