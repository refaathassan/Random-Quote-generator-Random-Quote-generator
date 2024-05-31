#include "Command.h"

Command::Command(Screen* org):org{org}{}

Command::~Command(){}
void Command::Save(void)
{
    his.push_back(org->Backup());
}
void Command::FileBackUp(void)
{
    std::fstream file("Backup.txt",std::ios::app);
    if (file.is_open())
    {
      for(auto ele : his)
      {
        file<<ele->GetStatue()<<std::endl;           
      }
      file.close();
    }    
}
void Command::UnDo(void)
{
    org->Restor(his.back());
    his.pop_back();
}