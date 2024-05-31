#ifndef HAPPYHANDLER_H
#define HAPPYHANDLER_H
#include "Handlers.h"

class HappyHandler : public Handlers
{
private:
        Handlers* hand=nullptr;
public:
    std::string Handling(std::string File ,std::string massage) override;
    void SetNextHandler(Handlers* hand)override;
    HappyHandler();
    ~HappyHandler();

};

#endif