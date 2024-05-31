#ifndef TXTFACTORY_H
#define TXTFACTORY_H

#include "TXT.h"

class TXTFactory
{
    private:
       TXTFactory();
      ~TXTFactory();
    protected:
        static DataBase* database;
    public:
       TXTFactory(TXTFactory& obj)=delete;
       TXTFactory& operator=(const TXTFactory& obj)=delete;
       static DataBase* GetObject(std::shared_ptr<Mediator> mid);

};


#endif