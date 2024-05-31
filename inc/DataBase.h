#ifndef DATABASE_H
#define DATABASE_H

#include "Colleage.h"

class DataBase : public Colleage
{
public:
     DataBase(std::shared_ptr<Mediator> mid);
     virtual void IniatDataBase(void);
     virtual std::string DataBaseContect(void);
     virtual ~DataBase();
     virtual void Referesh(void);
};

#endif