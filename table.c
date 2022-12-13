#include<stdio.h>
int main(int argc, char const *argv){
int a;
printf("Enter no :");
scanf("%d",&a);
for(int i=1;i<11;i++){
printf("%d\n",a*i);
}

return 0;
}