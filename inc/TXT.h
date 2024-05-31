#ifndef TXT_H
#define TXT_H

#include"DataBase.h"
#include"Handlers.h"
#include"SadHandler.h"
#include"HappyHandler.h"
#include"AngryHandler.h"
#include"Mediator.h"

class TXT : public DataBase 
{
    private:
        std::string File;

        Handlers *PRU1=new SadHandler();
        Handlers *PRU2=new HappyHandler();
        Handlers *PRU3=new AngryHandler();

        std::vector<std::string> vecQuote{"sad","happy","angry"};
        TXT(std::shared_ptr<Mediator> mid):DataBase(mid){}  
        void IniatDataBase(void)override;
    public:
      TXT(TXT& obj)=delete;
      TXT& operator=(const TXT& obj)=delete;
      std::string DataBaseContect(void)override;
      void RecieveMassage(std::string massage)override;
      void SendMassage(std::string massage)override;
      void Referesh(void)override;
      ~TXT();

      friend class TXTFactory;

};




#endif