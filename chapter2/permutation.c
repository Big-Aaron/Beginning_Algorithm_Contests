//
// Created by test on 2021/5/23.
//

#include <stdlib.h>
#include "stdio.h"
#include "time.h"
int main(){
    int i,n;
    int a,s,d,f,g,h,j,k,l;
    int num[10];
    int flag;
    for(i=123;i<=329;i++){
        flag=0;
        for(n=1;n<=9;n++){
            num[n]=0;
        }
        a=i/100;s=i/10%10;d=i%10;
        f=i*2/100;g=i*2/10%10;h=i*2%10;
        j=i*3/100;k=i*3/10%10;l=i*3%10;
        num[a]++;num[s]++;num[d]++;
        num[f]++;num[g]++;num[h]++;
        num[j]++;num[k]++;num[l]++;
        for(n=1; n<=9;n++){
            if (num[n] == 1){
                flag++;
            }
            else flag--;
        }
       if (flag==9){
           printf("%d %d %d\n",i,i*2,i*3);
       }
    }
    printf("%lf",(double )clock()/CLOCKS_PER_SEC);
}