#include "dominion.h"

void gameSetUpIsValid(){
    struct gameState *mockState = gameState();
    int x = initializeGame(1,(int*)1,10,mockState);
    if(assert( x == 0) == 1){
        printf("Game set up correctly");
    }else{
        printf("Game not set up correctly");
    }
}