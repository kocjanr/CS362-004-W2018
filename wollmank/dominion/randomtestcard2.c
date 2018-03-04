#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"
#include <math.h>

#define DEBUG 0
#define NOISY_TEST 1


int main () {

  int k[10] = {adventurer, council_room, feast, gardens, mine,
	       remodel, smithy, village, baron, great_hall};
  struct gameState *state = newGame();

  	for(int i =0; i <100000; i++){
		

        for(int j=0; j<5;j++){
            int x = initializeGame(j,k,1,state);
        int p = floor(Random() * 2);
        state->deckCount[p] = floor(j* MAX_DECK);
        state->discardCount[p] = floor(j * MAX_DECK);
        state->handCount[p] = floor(j * MAX_HAND);
        Outpost(state,9,j);
        }
    }


  return 0;
}