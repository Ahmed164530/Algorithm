#include <stdio.h>
#include "RecursiveCandels2.h"


MaxheightCount iterative_candles(int *candles, int n) {
    MaxheightCount result = {.height = candles[0], .count = 0};
    int max_height = candles[0];
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (candles[i] > max_height) {
            max_height = candles[i];
            count = 1;
        } else if (candles[i] == max_height) {
            count++;
        }
    }

    result.height = max_height;
    result.count = count;

    return result;
}

int recursive_birthdayCandles2(int *candles, int n) {
    if (n <= 0) {
        return 0;
    }

    MaxheightCount max_height_count = iterative_candles(candles, n);

    return max_height_count.count;
}

