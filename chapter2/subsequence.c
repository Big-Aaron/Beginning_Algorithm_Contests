//
// Created by test on 2021/5/23.
//

#include "stdio.h"
int main(){
    FILE * fin;
    int n,m;
    int Case;
    long i;
    double sum=0;
    while(scanf("%d%d",&n,&m) && n && m){
        for (i = n; i <= m; i++) {
            sum += 1.0 / (i*i);
        }
        printf("Case %d: %.5f\n", ++Case, sum);
        sum = 0;
    }
}