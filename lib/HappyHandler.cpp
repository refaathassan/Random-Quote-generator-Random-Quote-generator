#include "HappyHandler.h"

HappyHandler::HappyHandler(){}
HappyHandler::~HappyHandler(){}
std::string HappyHandler::Handling(std::string File ,std::string massage) 
{
    if(massage=="happy")
    {
            int index1=File.find(massage+"(")+massage.size()+1;
            std::string str=File.substr(index1,File.find(")",index1)-index1);
            return choice_random_q(str); 
    }
           
    else
    {
        if(hand!=nullptr)
        {
            return  hand->Handling(File,massage);
        }
        else
            return "it is not state please enter available state\n"; 
    }
}

void HappyHandler::SetNextHandler(Handlers* hand)
{
  this->hand=hand;  
}
   