#include<stdio.h>
int main(){
    int num;
    for(int i=0;i<8;i++){
        printf("%d",i);
        for(int j=0;i<8;j++){
            printf("enter the number or 1 to exit");
            scanf("%d",&num);
            if(num==1){
                goto end;
            }
        }
    }
    end:
    return 0;
}