#ifndef ANGRYHANDLER_H
#define ANGRYHANDLER_H
#include "Handlers.h"

class AngryHandler : public Handlers
{
    private:
        Handlers* hand=nullptr;
    public:
     std::string Handling(std::string File ,std::string massage) override;
     void SetNextHandler(Handlers* hand)override;
    AngryHandler();
    ~AngryHandler();

};

#endif