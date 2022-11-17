#include "sum.h"

#include <assert.h>
#include <stdio.h>

/* Sum integers 1 to n */
int sum(int n) {
    /* pre-condition */
    assert(n >= 1);
    /* post-condition */
    if (n > 1)
        return n + sum(n - 1);
    else
        return 1;
}

/* Sum integers 1 to n */
int sumtail(int n, int total) {
    if (n > 1) {
        // Tail recursive step we give the function n - 1 as we wish to run
        // through the entire thing, as well as the "equation" we are
        // caluclating
        return sumtail(n - 1, n + total);
    } else {
        // Basecase, when we have reached 0, we return 1 + the total of sum
        return 1 + total;
    }
}

/* Sum integers 1 to n */
int sumwhile(int n) {
    // We must assert that n is >= 1 as the while loop wont work with negative
    // numbers
    assert(n >= 1);
    // result variable
    int r = 0;

    while (n != 0) {
        // the loop runs for as many n's there are, and we add all of the n's
        // together in the r variable
        n--;
        r += n;
    }
    return r;
}
