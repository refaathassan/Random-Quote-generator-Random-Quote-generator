#include "Memento.h"

Memento::Memento(std::string statue):statue(statue){}
Memento::~Memento(){}
std::string Memento::GetStatue(void)
{
   return statue;
}