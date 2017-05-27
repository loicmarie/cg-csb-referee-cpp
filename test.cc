#include <iostream>

#include "BasicAI.h"

using namespace std;

int main() {
    cout << "Running tests..." << endl;
    Referee referee;
    AI ai(&referee);
    cout << "Tests succedeed" << endl;
    return 0;
}