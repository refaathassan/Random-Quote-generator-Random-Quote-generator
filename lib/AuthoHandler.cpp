#include "AuthoHandler.h"

AuthoHandler::AuthoHandler(){}
AuthoHandler::~AuthoHandler(){}
std::string AuthoHandler::Handling(std::string File ,std::string massage) 
{
    bool isFound = massage.find("Ask") != std::string::npos;
    if(isFound)
    {
            massage.erase(0,3);
            name=massage;
            if(File.find(massage+"(")==-1)
                    return "non authorized";
            int index1=File.find(massage+"(")+massage.size()+1;
            std::string str=File.substr(index1,File.find(")",index1)-index1);
            return choice_random_q(str); 
    }
           
    else
    {
        if(hand!=nullptr)
        {
            return  hand->Handling(File,(name+","+massage));
        }
        else
            return "it is not state please enter available state\n"; 
    }
}

void AuthoHandler::SetNextHandler(Handlers* hand)
{
  this->hand=hand;  
}
   