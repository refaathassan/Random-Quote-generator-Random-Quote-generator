#ifndef CONRETEMEDIATOR_H
#define CONRETEMEDIATOR_H
#include"Mediator.h"
#include"Colleage.h"


class ConreteMediator: public Mediator
{
    private:
      std::vector<Colleage*> colleage;
    public:
        void SendMassag(Colleage* sender,std::string massage)override;
        void AddColleage(Colleage* coll)override;
        ConreteMediator();
        ~ConreteMediator();
};

#endif