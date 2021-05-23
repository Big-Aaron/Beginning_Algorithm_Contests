//
// Created by test on 2021/5/23.
//

#include "stdio.h"
int main(){
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=i;
    }
    printf("%d",sum);
}