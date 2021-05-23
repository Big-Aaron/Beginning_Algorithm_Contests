//
// Created by test on 2021/5/23.
//
#include "stdio.h"
int main(){
    int i,a,b,c,flag,count=0;
    FILE * fin;
    fin= fopen("HanXin.in","rb");
    while(!feof(fin)){
        flag=0;count++;
        fscanf(fin,"%d",&a);
        fscanf(fin,"%d",&b);
        fscanf(fin,"%d",&c);
        for(i=10;i<100;i++){
            if (i%3==a && i%5==b && i%7==c){
                printf("Case %d: %d\n",count,i);
                flag=1;
            }
        }
        if (flag==0) printf("Case %d: NO answer\n",count);
    }
    fclose(fin);
}
