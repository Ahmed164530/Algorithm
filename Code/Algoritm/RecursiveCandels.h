#ifndef RECURSIVECANDELS_H
#define RECURSIVECANDELS_H

typedef struct {
    int height;
    int count;
} MaxHeightCount;



MaxHeightCount recursive_candles(int *candles, int n, int current_height, int max_height);
int recursive_birthdayCandles(int *candles, int n);

#endif

