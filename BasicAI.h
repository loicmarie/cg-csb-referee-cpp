#ifndef DEF_BASICAI
#define DEF_BASICAI

#include "AI.h"

// INCLUDE

class BasicAI : public AI {

    public:

    BasicAI(Referee *referee);
    void compute();
    ~BasicAI();
};

// INCLUDE

#endif // DEF_BASICAI