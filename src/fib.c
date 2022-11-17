/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h> /* assert */
#include <stdio.h>  /* printf */

/* Fibonacci function definition */
int fib(int n, int p, int pp) {
    // This fibonacci assumes that the first number in the sequence is 1, 1, ...
    // As we cant take a fibonacci number under the first one in the sequence we
    // must assert that n > 0
    assert(n > 0);
    if (n == 1) {
        // first base case, if we wish to find the first number we return the
        // number "furthest" away from the fib number we currently are at
        return p;
    } else if (n == 2) {
        // Second base case, while running our recursive steps, and we reach
        // "the second last" number, we return the number one step back from the
        // step we currently are at
        return pp;
    } else {
        // Tail recursive step, the function is called, given n - 1 as we wish
        // to find the n'th fib number, aswell as making the number closest to
        // the fib number to the number furthest away, then adding the two
        // numbers and giving that as the closest number
        return fib(n - 1, pp, pp + p);
    }
}
