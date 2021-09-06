#include<stdio.h>
#include<string.h>
int EmailCheck(char str[40]){
    int count=0;
    for(int i=0;i<=strlen(str);i++){
        if(str[i]=='@'){
             for(int j=i;j<strlen(str)-2;j++){
                 if(str[j]=='.'){
                     count =1;
                     return 0;
                     break;
                 }
                 
             }

        }
    }
    if(count==0){
       return 1;
    }
    return 0;

}