#ifndef SCREEN_H
#define SCREEN_H

#include "Colleage.h"
#include "Memento.h"
class Screen :public Colleage
{
    public:
        Screen(std::shared_ptr<Mediator> mid);
        virtual void Restor(Memento* mem);
        virtual Memento* Backup(void);
        virtual std::string GetInput(void);
        virtual std::string GetAutho(void);
        virtual std::string GetOutput(void);
        virtual~Screen();
};


#endif