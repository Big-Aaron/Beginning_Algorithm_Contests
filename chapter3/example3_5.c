//
// Created by test on 2021/6/1.
//

#include "stdio.h"
int main(){
    int c;int q=1;
    while((c= getchar())!=EOF){
        if(c=='"'){ printf("%s",q?"``":"\"");q=!q;}
        else printf("%c",c);
    }
    return 0;
}