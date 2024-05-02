#include "Non-RecursiveCandels.h"

int non_recursive_birthdayCakeCandles(int *candles, int n) {

    int max_count = 0, count = 0, max_height = 0;

    for (int i = 0; i < n; i++) {
        count = 0;
        for (int j = 0; j < n; j++) {
            if (candles[i] == candles[j]) {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;
            max_height = candles[i];
        }
    }

    count = 0;
    for (int i = 0; i < n; i++) {
        if (candles[i] == max_height) {
            count++;
        }
    }

    return count;
}
