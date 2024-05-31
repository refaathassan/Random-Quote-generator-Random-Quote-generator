#ifndef MEMENTO_H
#define MEMENTO_H
#include<iostream>


class Memento
{
    private:
        std::string statue;
    public:
        Memento(std::string statue);
        std::string GetStatue(void);
        ~Memento();
};

#endif