#include "BasicAI.h"

using namespace std;

// INCLUDE

BasicAI::BasicAI(Referee *referee) : AI(referee) {}

void BasicAI::compute() {
    referee->nbTours++;
}

BasicAI::~BasicAI() {
    delete referee;
}

// INCLUDE