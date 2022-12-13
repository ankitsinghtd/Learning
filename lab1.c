#include<stdio.h>
#include<conio.h>
int sum(int c, int d){
int add=c+d;
return add;
}
int main(){
int a, b, total=0;
printf("enter value of a and b\n");
scanf("%d%d",&a,&b);
total =sum(a,b);
printf("sum of numbers is: %d", total);
return 0;
}