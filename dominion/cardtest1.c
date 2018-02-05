#include "dominion.h"
//742

void AdventurerReturnsWithTrue(){
    struct gameState *mockState = gameState();
    int x = initializeGame(2,(int*)2,10,mockState);
    int y = cardEffect(1,1,1,1,mockState,1,(int*)1);
    assert(y == 0);
}