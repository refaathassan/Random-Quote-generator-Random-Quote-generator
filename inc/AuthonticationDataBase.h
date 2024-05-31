#ifndef AUTHONTICATIONDATABASE_H
#define AUTHONTICATIONDATABASE_H

#include"DataBase.h"
#include"Handlers.h"
#include "AuthoHandler.h"
#include "AuthoAnwerHandler.h"
#include"AngryHandler.h"
#include"Mediator.h"

class AuthonticationDataBase : public DataBase 
{
    private:
        std::string File;
        bool flag=false;
        Handlers *PRU1=new AuthoHandler();
        Handlers *PRU2=new AuthoAnwerHandler();

        //std::vector<std::string> vecQuote{"sad","happy","angry"};
        AuthonticationDataBase(std::shared_ptr<Mediator> mid):DataBase(mid){}  
        void IniatDataBase(void)override;
    public:
      AuthonticationDataBase(AuthonticationDataBase& obj)=delete;
      AuthonticationDataBase& operator=(const AuthonticationDataBase& obj)=delete;
      std::string DataBaseContect(void)override;
      void RecieveMassage(std::string massage)override;
      void SendMassage(std::string massage)override;
      void Referesh(void)override;
      ~AuthonticationDataBase();

      friend class AuthoFactory;

};

#endif