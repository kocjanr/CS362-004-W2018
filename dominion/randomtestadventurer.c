#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"
#include <math.h>

#define DEBUG 0
#define NOISY_TEST 1

printf("HELLO!!\n");

int main () {

  int k[10] = {adventurer, council_room, feast, gardens, mine,
	       remodel, smithy, village, baron, great_hall};
  struct gameState *state = newGame();
 
	for(int i =0; i <1000; i++){
		int x = initializeGame(4,k,1,state);
			int p = floor(Random() * 2);
			state->deckCount[p] = floor(Random() * MAX_DECK);
			state->discardCount[p] = floor(Random() * MAX_DECK);
			state->handCount[p] = floor(Random() * MAX_HAND);

			for( int j=0;j<100;j++){
				// void adventurerFunc(int drawntreasure, int currentPlayer, int z, int temphand[], struct gameState *state);
				adventurerFunc(i,j,i,k,state);
			}
	}



  return 0;
}
