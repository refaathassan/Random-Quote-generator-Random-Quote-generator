#ifndef AUTHOHANDLER_H
#define AUTHOHANDLER_H

#include "Handlers.h"

class AuthoHandler : public Handlers
{
private:
        std::string name;
        Handlers* hand=nullptr;
public:
    std::string Handling(std::string File ,std::string massage) override;
    void SetNextHandler(Handlers* hand)override;
    AuthoHandler();
    ~AuthoHandler();

};


#endif