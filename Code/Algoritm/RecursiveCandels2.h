#ifndef RECURSIVECANDELS2_H
#define RECURSIVECANDELS2_H


typedef struct {
    int height;
    int count;
} MaxheightCount;

MaxheightCount iterative_candles(int *candles, int n);
int recursive_birthdayCandles2(int *candles, int n);


#endif // RECURSIVECANDELS2_H
