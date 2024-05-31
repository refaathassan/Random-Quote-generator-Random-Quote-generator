#include "AuthonticationDataBase.h"

AuthonticationDataBase::~AuthonticationDataBase(){}

void AuthonticationDataBase::IniatDataBase(void)
{
    PRU1->SetNextHandler(PRU2);
    std::ifstream file("Authontication.txt");
    File="";
    if (file.is_open())
    {
        std::string line;
        while (std::getline(file, line))
        {
            File+=line;
        }
        file.close();
    }
} 

std::string AuthonticationDataBase::DataBaseContect(void)
{
    return File;
}
void AuthonticationDataBase::RecieveMassage(std::string massage)
{
    if(flag==false)
    {
        flag=true;
        this->SendMassage(PRU1->Handling(File,("Ask"+massage)));
    }
    else
     {
        flag=false;
        this->SendMassage(PRU1->Handling(File,("Answer"+massage)));       
     }
}
void AuthonticationDataBase::SendMassage(std::string massage)
{
    mid->SendMassag(this,massage);
}
void AuthonticationDataBase::Referesh(void)
{
  IniatDataBase();  
}
