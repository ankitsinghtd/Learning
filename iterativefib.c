#include<stdio.h>
//#include<conio.h>
int main()
{
    int a, b, c,n;
    a = 0;b = 1;
    printf("enter no of elements in your series: \n");
    scanf("%d",&n);
    for (int i = 0;i < n;i++)
    {

        c = a+b;
        a = b;
        b = c;
        printf("%d ", c);
    }
//    getch();
    return 0;
}