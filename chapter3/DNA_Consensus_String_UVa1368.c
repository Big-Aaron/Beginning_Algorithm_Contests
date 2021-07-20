//
// Created by test on 2021/7/20.
//
#include "stdio.h"
#include "string.h"
#define M 50
#define N 1000
char DNA[M][N];
int Distances[M][N]={0};
int Hamming(char *p,char *q){
    int Distance=0;
    while(*p!='\0' && *q!='\0'){
        if(*p!=*q){
            Distance++;
        }
        q++;p++;
    }
    return Distance;
}

int main(void){
    int m ,n;
    int i,j;
    int min=M*N,index=M*N;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++){
        scanf("%s",DNA[i]);
    }
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            Distances[i][j]= Hamming(DNA[i],DNA[j]);
            //printf("Distances[%d][%d] is %d\n",i,j,Distances[i][j]);
        }
        //printf("\n");
    }
    for(i=0;i<m;i++){
        int sum=0;
        for(j=0;j<m;j++){
            if(i!=j){
                sum+=Distances[i][j];
            }
        }
        if (sum<min){
            min=sum;
            index=i;
        } else if (sum==min){//距离相同时，取字典序最小
            if(strcmp(DNA[index],DNA[i])>0){//新的字符串小
                index=i;
            }
        }
    }
    printf("%s %d",DNA[index],min);
}