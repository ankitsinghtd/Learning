/*#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
void main(){
    printf("\nEnter your name :\n");
    char * name = (char*)malloc(sizeof(char));
    scanf("%s",name);
    printf("Enter your age :\n");
    int age;
    scanf("%d",&age);
    char gen[1];
    printf("Choose your gender preference -\nM: Male\nF: Female\n");

    //need a space before %c bcz this format specifier consumes any 1 space entered before or during its execution
    scanf(" %c",&gen);
    printf("%s is a %d years old %s",name,age,gen);
}*/

/*
    [1,2,3,4] --> input
    [24,12,8,6]   -->output
*/
#include<stdio.h>
#include<stdlib.h>
void main(){
    int arr[] = {1,2,3,4};
    for(int i = 0;i<4;i++){
        for(int j = 0;j<4;j++){
            if(j==i){
                continue;
            }
            arr[j] = arr[j] * arr[i];
        }
    }
    for(int i = 0;i<4;i++){
        printf("%d, ",arr[i]);
    }
}