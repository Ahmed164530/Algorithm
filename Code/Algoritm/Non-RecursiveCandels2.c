#include "Non-RecursiveCandels2.h"

#include "Non-RecursiveCandels2.h"


int non_recursive_birthdayCakeCandles2(int *candles, int n) {
    if (n <= 0) {
        return 0;
    }

    int max_count = 0;
    int max_height = candles[0];

    // Find the maximum height
    for (int i = 1; i < n; i++) {
        if (candles[i] > max_height) {
            max_height = candles[i];
        }
    }

    // Count occurrences of the maximum height
    for (int i = 0; i < n; i++) {
        if (candles[i] == max_height) {
            max_count++;
        }
    }

    return max_count;
}
