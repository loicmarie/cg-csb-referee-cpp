#ifndef DEF_AI
#define DEF_AI

#include "Referee.h"

// INCLUDE

class AI {

    public:

    AI(Referee *referee);
    virtual void compute();
    ~AI();

    Referee *referee;
};

// INCLUDE

#endif // DEF_AI