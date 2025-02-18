#include<stdio.h>
#include<string.h>

void reverse(char str[]) {
    char temp;
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    
    char str[200]; 
    printf("enter the string\n");
    scanf("%s",str);
    printf("Before reverse: %s\n", str);
    reverse(str); 
    printf("After reversing: %s\n", str); 

    return 0;
}
