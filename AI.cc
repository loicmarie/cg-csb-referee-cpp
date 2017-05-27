#include "AI.h"

using namespace std;

// INCLUDE

AI::AI(Referee *referee) : referee(referee) {}

void AI::compute() {}

AI::~AI() {
    delete referee;
}

// INCLUDE