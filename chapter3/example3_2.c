//
// Created by test on 2021/5/29.
//
#include <stdlib.h>
#include "stdio.h"
#include "string.h"
#define maxsize 1000


int main(){
    int n,k,i,j;
    scanf("%d %d",&n,&k);
    int * a=(int *)malloc(sizeof(int)*n);
    memset(a,0,sizeof (int)*n);
    for(i=1;i<=k;i++){//k个人
        for(j=i;j<=n;j+=i){//n盏灯
           a[j]++;
        }
    }
    for(j=1;j<=n;j++){
        if (a[j]%2==1)printf("%d ",j);
    }
    return 0;
}
