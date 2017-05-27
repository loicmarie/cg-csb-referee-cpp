
#include <iostream>

using namespace std;


class Referee {

    public:

    Referee();
    ~Referee();

    int nbTours;
};


class AI {

    public:

    AI(Referee *referee);
    virtual void compute();
    ~AI();

    Referee *referee;
};


class BasicAI : public AI {

    public:

    BasicAI(Referee *referee);
    void compute();
    ~BasicAI();
};


Referee::Referee() : nbTours(0) {}

Referee::~Referee() {}


AI::AI(Referee *referee) : referee(referee) {}

void AI::compute() {}

AI::~AI() {
    delete referee;
}


BasicAI::BasicAI(Referee *referee) : AI(referee) {}

void BasicAI::compute() {
    referee->nbTours++;
}

BasicAI::~BasicAI() {
    delete referee;
}


int main() {
    cout << "Hello world !" << endl;
    return 0;
}

