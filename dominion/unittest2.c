#include "dominion.h"

void checkForCorrectOutputOfCostWithPositiveInput(){
    assert(getCost(1) ==  0);
}

void checkForCorrectOutputOfCostWithNegativeInput(){
    assert(getCost(-1) ==  -1);
}
