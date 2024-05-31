#include "AuthoAnwerHandler.h"


AuthoAnwerHandler::AuthoAnwerHandler(){}
AuthoAnwerHandler::~AuthoAnwerHandler(){}
std::string AuthoAnwerHandler::Handling(std::string File ,std::string massage) 
{
    bool isFound = massage.find("Answer") != std::string::npos;
    if(isFound)
    {
            name=massage.substr(0,massage.find(","));
            massage=massage.substr(massage.find(",")+1,massage.size()-name.size());
            massage.erase(0,6);
            if(File.find(name+"(")==-1)
                    return "non authorized";
            int index1=File.find(name+"(")+name.size()+2;
            index1=File.find("(",index1)+1;
            std::string str=File.substr(index1,File.find(")",index1)-index1);
            if(Answer_choice_random_q(str)==massage)
            {
                return "Accept";
            }
            else
               return "Reject";
            
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

void AuthoAnwerHandler::SetNextHandler(Handlers* hand)
{
  this->hand=hand;  
}
   