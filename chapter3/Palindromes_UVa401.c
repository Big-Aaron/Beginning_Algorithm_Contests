//
// Created by test on 2021/6/1.
//

#include <string.h>
#include <ctype.h>
#include "stdio.h"
const char * rev ="A   3  HIL JM O   2TUVWXY51SE Z  8 ";//26个字母宽度
const char * msg[]={"not a palindrome","a regular palindrome","a mirrored str","a regular palindrome and mirrored str"};

char r(char ch){
    if (isalpha(ch)) return rev[ch - 'A'];
    return rev[ch - '0' +25];
}
int main(){
    char s[50];//测试用例字母全部大写
    while (scanf("%s",s)==1){
        unsigned long len=strlen(s);
        int p=1,m=1;
        for(int i=0;i<(len+1)/2;i++){
            if (s[i]!=s[len-1-i]) p=0;
            if(r(s[i]) !=s[len-1-i]) m=0;
        }
        printf("%s -- is %s,\n\n",s,msg[m*2+p]);
    }
    return 0;
}
