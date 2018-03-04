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

  struct gameState *state = newGame();int x = initializeGame(2,k,1,state);
    int p = floor(Random() * 2);
    state->deckCount[p] = floor(2* MAX_DECK);
    state->discardCount[p] = floor(2 * MAX_DECK);
    state->handCount[p] = floor(2 * MAX_HAND);

  smithyFunc(1,4,state);


  return 0;
}
