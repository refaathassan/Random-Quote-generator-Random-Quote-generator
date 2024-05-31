#include "TXT.h"

TXT::~TXT(){}

void TXT::IniatDataBase(void)
{
    PRU1->SetNextHandler(PRU2);
    PRU2->SetNextHandler(PRU3);
    std::ifstream file("DataBase.txt");
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

std::string TXT::DataBaseContect(void)
{
    return File;
}
void TXT::RecieveMassage(std::string massage)
{
    this->SendMassage(PRU1->Handling(File,massage));
}
void TXT::SendMassage(std::string massage)
{
    mid->SendMassag(this,massage);
}
void TXT::Referesh(void)
{
  IniatDataBase();  
}
