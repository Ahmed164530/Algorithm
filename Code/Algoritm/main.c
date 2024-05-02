#include <stdio.h>
#include "Non-RecursiveCandels.h"
#include "Non-RecursiveCandels2.h"
#include "RecursiveCandels.h"
#include "RecursiveCandels2.h"

int main() {

    int n, candles[100];

    printf("Enter the number of candles: ");
    scanf("%d", &n);

    printf("Enter the heights of the candles: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &candles[i]);

    }


    //Recursive_1
     /*
     int tallest_candles = recursive_birthdayCandles(candles, n);
     printf("Number of tallest candles: %d\n", tallest_candles);*/

     //Recursive_2
     /*
     int tallest_candles =non_recursive_birthdayCakeCandles2(candles, n);
     printf("Number of tallest candles: %d\n", tallest_candles);


     //Non-Recursive_1
     /*
     int tallest_candles = non_recursive_birthdayCakeCandles(candles, n);

     printf("Number of tallest candles: %d\n", tallest_candles);*/


      //Non-Recursive_2
     /*
     int tallest_candles = non_recursive_birthdayCakeCandles2(candles, n);
     printf("Number of tallest candles: %d\n", tallest_candles);*/




    return 0;
}
