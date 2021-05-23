//
// Created by test on 2021/5/23.
//

#include "stdio.h"
#include "math.h"
int main(){
    int i,j,n,m;
    for (i=1;i<=9;i++){
        for(j=0;j<=9;j++){
            n=i*1100+j*11;
            m=floor(sqrt(n)+0.5);
            if(m*m==n)printf("%d\n",n);
        }
    }
    return 0;
}
