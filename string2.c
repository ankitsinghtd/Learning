#include<stdio.h>
#include<string.h>
int main(){
    char s1[20],s2[20];
    gets(s1);
    gets(s2);
    char s3[20];
    strcpy(s3, strcat(s1,s2));
    printf("%s are friends", s3);
    
    return 0;
}