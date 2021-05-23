//
// Created by test on 2021/5/23.
//
#include "stdio.h"
#include "time.h"
int main(){
    int n=51200;
    const int MOD=1000000;
    int i=1,j=0,sum=0,fact;
    for(j=1;j<=n;j++) {
        fact=1;
        for (i = 1; i <= j; i++) {
            fact = fact* i % MOD;
        }
        sum = (sum +fact) % MOD;
    }
    printf("%d\n",sum);
    printf("Time used = %.6f\n",(double)clock()/CLOCKS_PER_SEC);
}
