#include "dominion.h"
#include <assert.h>

int testCompareFunctionWhenNumbersAreGreaterThan(){
    int *a = (int*)10;
    int *b = (int*)20;

    assert(compare(b,a) == 0);
}