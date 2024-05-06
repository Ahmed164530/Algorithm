#include "Non-RecursiveCandels.h"

int non_recursive_birthdayCakeCandles(int *candles, int n) {

    int max_height = candles[0];
    int max_count = 1;
    int count = 0;


    for (int i = 1; i < n; i++) {
        if (candles[i] > max_height) {
            max_height = candles[i];
            max_count = 1;
        } else if (candles[i] == max_height) {
            max_count++;
        }
    }

    return max_count;
}

