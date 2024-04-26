#include "RecursiveCandels.h"

MaxHeightCount recursive_candles(int *candles, int n, int current_height, int max_height) {
    if (n == 0) {
        MaxHeightCount result = {.height = 0, .count = 0};
        return result;
    }

    MaxHeightCount result = {.height = current_height, .count = 0};
    int count = 0;
    if (candles[0] == current_height) {
        count++;
    }

    int *rest_of_candles = candles + 1;
    MaxHeightCount recursive_result = recursive_candles(rest_of_candles, n - 1, current_height, max_height);

    if (count + recursive_result.count > result.count) {
        result.count = count + recursive_result.count;
    }

    if (recursive_result.height > result.height) {
        result.height = recursive_result.height;
        result.count = recursive_result.count;
    }

    return result;
}

int birthdayCandles(int *candles, int n) {

    MaxHeightCount max_height_count = recursive_candles(candles, n, candles[0], 0);

    printf("The Tallest Candle Is: %d\n", max_height_count.height);
    printf("Number of Tallest Candles: %d\n", max_height_count.count);

    return max_height_count.count;
}
