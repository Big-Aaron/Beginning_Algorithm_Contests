//
// Created by test on 2021/5/29.
//

#include "stdio.h"

#define maxn 105
int a[maxn];

int main(){
    int x,n=0;
    while(scanf("%d",&x)==1 && x) {
        a[n++] = x;
    }
    for(int i=n-1;i>=1;i--){
        printf("%d ",a[i]);
    }
    printf("%d",a[0]);
    return 0;
}