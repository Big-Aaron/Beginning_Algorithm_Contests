//
// Created by test on 2021/5/23.
//
#include "stdio.h"
#include "stdlib.h"
#define INF 100000000
int main(){
    int i,n,max,min,sum,count=0;
    while(scanf("%d",&n)==1 && n){
        sum=0;max=-INF;min=INF;
        int * a=(int *)malloc(sizeof(int)*n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            if (a[i]<min)min=a[i];
            if (a[i]>max)max=a[i];
            sum+=a[i];
        }
        printf("case %d : %d %d %.3f\n ",++count,min,max,(double)(sum)/n);
        free(a);
    }


}
