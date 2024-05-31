#ifndef COMMAND_H
#define COMMAND_H

#include"Screen.h"

class Command
{
private:
    Screen* org;
    std::vector<Memento*> his;

public:
    Command(Screen* org);
    void Save(void);
    void FileBackUp(void);
    void UnDo(void);
    ~Command();
};



#endif