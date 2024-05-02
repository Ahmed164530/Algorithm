#include <stdio.h>
#include "RecursiveCandels2.h"


MaxheightCount recursive_birthdayCakeCandles2(int* candles, int n) {

    MaxheightCount max_height_count ={.height = 0,.count = 0};
    int* stack = (int*)malloc(n * sizeof(int));
    int top = -1;

    for (int i = 0; i < n; i++) {
                while (top >= 0 && candles[stack[top]] < candles[i]) {
                               top--;
                      }
                if (top == -1 || candles[stack[top]] == candles[i]) {
                            top++;
                            stack[top] = i;
                    }
    }
    int max_height = candles[stack[0]];
    int count = 1;

     for (int i = 1; i <= top; i++) {

            if (candles[stack[i]] == max_height) {
                            count++;
                }
            else {
                     break;
                }
               }

    max_height_count.height = max_height;
    max_height_count.count = count;
    free(stack);

    return max_height_count;
}
