#include "dominion.h"
#include <assert.h>

int testCompareFunctionWhenNumbersAreLessThan(){
    int *a = (int*)10;
    int *b = (int*)20;

    assert(compare(a,b) == -1);
}