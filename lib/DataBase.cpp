#include "DataBase.h"

DataBase::DataBase(std::shared_ptr<Mediator> mid):Colleage{mid}{}
DataBase::~DataBase(){}

void DataBase::IniatDataBase(void){}
std::string DataBase::DataBaseContect(void){return "\0";}
void DataBase::Referesh(void){}