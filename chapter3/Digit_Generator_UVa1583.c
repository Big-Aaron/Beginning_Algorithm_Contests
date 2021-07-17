#include "stdio.h"
#define MaxSize 1000005
int num[MaxSize];

int main(void){
    int i,t,sum;
    int n;
    while(scanf("%d",&n)) {
        int flag=0;
        for (i = 1; i < n; i++) {
            sum = i;
            t = i;
            while (t > 0) {
                sum += t % 10;
                t /= 10;
            }
            num[i] = sum;
        }
        for (i = 0; i < n; i++) {
            if (num[i] == n) {
                printf("%d\n", i);
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("%d\n", 0);
        }
    }
    return 0;
}