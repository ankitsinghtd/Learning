#include <stdio.h>
int main() {
    char c;
    int count=0;
    do {
        printf("Enter a character: ");
        scanf("%c",&c);
        printf("%c",c);
        count++;
    } while (c != 'a' || c != 'e' || c != 'i' || c != 'o' || 'u' || c != 'A' || c != 'E' || c != 'I' || c != 'O' || 'U' && count<5);
    
    return 0;
}