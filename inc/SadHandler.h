#ifndef SADHANDLER_H
#define SADHANDLER_H
#include "Handlers.h"

class SadHandler : public Handlers
{
    private:
        Handlers* hand=nullptr;
    public:
     std::string Handling(std::string File ,std::string massage) override;
     void SetNextHandler(Handlers* hand)override;
     SadHandler();
     ~SadHandler();

private:

};

#endif