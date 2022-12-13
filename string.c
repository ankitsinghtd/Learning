#include<stdio.h>
int main(){
    struct data{
        char name[10];
        int age;
        char roll[8];
    }d;
    char name2[]="arpit singhal";
    char *ptr = name2;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr= ptr+1;
    }
    printf("Enter student data :\n");
    scanf("%s %d %s",&d.name,&d.age,&d.roll);
    printf("\n%s\n%d\n%s",d.name,d.age,d.roll);
    return 0;
}