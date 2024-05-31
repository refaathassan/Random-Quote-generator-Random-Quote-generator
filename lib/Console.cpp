#include "Console.h"

Console::Console(std::shared_ptr<Mediator> mid):Screen(mid){}

Console::~Console(){}

std::string Console::GetAutho(void)
{
    std::string user_check;
    if(flag==false)
    {
        Respobse="refresh";
        std::cout<<"enter your name : ";
        std::cin>>user_check;
        flag=true;
    }
    else
    {
        if(Respobse!="non authorized")
        {   
            std::cin>>user_check; 
        }
        else
        {
           user_check=Respobse;
           //
        }
        flag=false;
    }
    return user_check;
}
std::string Console::GetInput(void)
{
    std::string user_check;
    std::cout<<"enter your state(sad,happy,angry,0 for save current satet,1 for exit,2 for refersh database)\n";
    std::cin>>user_check;
    if(user_check=="0"||user_check=="1")
    {
        return user_check;
    }
    else
    {
        UserInput=user_check;
        return UserInput;
    }
}
void Console::SendMassage(std::string massage) 
{     
    mid->SendMassag(this,massage);
}
std::string Console::GetOutput(void)
{
  return Respobse;
}
void Console::RecieveMassage(std::string massage) 
{
    Respobse=massage;
    std::cout<<Respobse<<std::endl;
}
Memento* Console::Backup(void)
{
    return new Memento(UserInput+":"+Respobse);
}
void Console::Restor(Memento* mem)
{
    UserInput = mem->GetStatue().substr(0,mem->GetStatue().find(":"));
    Respobse = mem->GetStatue().substr(mem->GetStatue().find(":")+1);
}