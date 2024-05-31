#ifndef CONSOLE_H
#define CONSOLE_H
#include"Screen.h"
#include"Mediator.h"

class Console : public Screen
{
    private:
        bool flag=false;
        std::string UserInput;
        std::string Respobse;
        Console(std::shared_ptr<Mediator> mid);
    public:
      std::string GetInput(void)  override;
      std::string GetAutho(void)override;
      std::string GetOutput(void)override;
      void SendMassage(std::string massage) override;
      void RecieveMassage(std::string massage) override;
      Memento* Backup(void)override;
      void Restor(Memento* mem)override;
      ~Console();

      friend class ConsoleFactory;
};


#endif