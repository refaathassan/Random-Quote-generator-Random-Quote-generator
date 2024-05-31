#ifndef AUTHOANWERHANDLER_H
#define AUTHOANWERHANDLER_H

#include "Handlers.h"

class AuthoAnwerHandler : public Handlers
{
private:
        Handlers* hand=nullptr;
        std::string name;
public:
    std::string Handling(std::string File ,std::string massage) override;
    void SetNextHandler(Handlers* hand)override;
    AuthoAnwerHandler();
    ~AuthoAnwerHandler();

};


#endif