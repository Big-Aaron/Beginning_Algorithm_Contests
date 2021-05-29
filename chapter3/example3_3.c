//
// Created by test on 2021/5/29.
//

#include "stdio.h"
#include "string.h"
#define n 26
int a[n][n];

int main(){
    int i=0,j=n-1,count=1;
    int wall_up=0,wall_down= n - 1,wall_left=0,wall_right= n - 2;
    memset(a,0,sizeof (a));
    while(count<n*n){
        while (i <= wall_down)   { a[i++][j] = count++;}  wall_down--;     i--;j--;//向下走
        while (j >= wall_left)   { a[i][j--] = count++;}  wall_left++;     j++;i--;//向左走
        while (i >= wall_up)     { a[i--][j] = count++;}  wall_up++;       i++;j++;//向上走
        while (j <= wall_right)  { a[i][j++] = count++;}  wall_right--;    j--;i++;//向右走
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++) {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}