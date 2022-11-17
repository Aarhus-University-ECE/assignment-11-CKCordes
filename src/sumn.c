#include "sumn.h"

#include <assert.h>
#include <stdio.h>

int sumn(int n) {
    // Pre-condition
    assert(n > 0);
    if (n == 1) {
        // Base case, as described in the assignment
        return 1;
    } else {
        // Inductive step, as we add (2 * n - 1) n times, the function must be:
        return sumn(n - 1) + (2 * n - 1);
    }
}