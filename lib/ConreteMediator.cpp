#include "ConreteMediator.h"

ConreteMediator::ConreteMediator(){}
ConreteMediator::~ConreteMediator(){}

void ConreteMediator::SendMassag(Colleage* sender,std::string massage)
{
        for(auto col:colleage)
        {
            if(col!=sender)
            {
                col->RecieveMassage(massage);
            }
        }
}
void ConreteMediator::AddColleage(Colleage* coll)
{
        colleage.push_back(coll);
}