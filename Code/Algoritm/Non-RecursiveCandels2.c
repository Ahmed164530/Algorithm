#include "Non-RecursiveCandels2.h"

int non_recursive_birthdayCakeCandles2(int *candles,int n){
    if(n<=0){
        return 0;
    }
    int maxCount = 0;
    int maximumHeight = candles[0];
    for (int i=0;i<n;i++){
            int count = 1;
        for (int j=i+1;j<n;j++) {
            if (candles[i] == candles[j]) {
                count++;}
                }
    if (count>maxCount) {
            maxCount=count;
            maximumHeight=candles[i];}
            }

    return maxCount;
}

