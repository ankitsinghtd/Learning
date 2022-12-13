#include<stdio.h>
int main(){
    for(int i=0;i<6;i++){
        printf("\n");
        for(int j=6;j>i;j--){
            printf("  ");
        }
        for(int k=0;k<2*i-1;k++){
            printf(" *");
        } 
        
    }
    return 0;
}