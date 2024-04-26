#include <stdio.h>
#include "Non-RecursiveCandels.h"
#include "RecursiveCandels.h"
int main() {

    int n, candles[100];

    printf("Enter the number of candles: ");
    scanf("%d", &n);

    printf("Enter the heights of the candles: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &candles[i]);

    }


  /* int tallest_candles = birthdayCandles(candles, n);

     int tallest_candles = birthdayCakeCandles(candles, n);

    printf("Number of tallest candles: %d\n", tallest_candles);*/



    return 0;
}
