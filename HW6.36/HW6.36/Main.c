#include <stdio.h>
#include <stdlib.h>

void stringReverse(const char* str) {
    if (*str == '\0') { 
        return;
    }
    stringReverse(str + 1);
    printf("%c", *str);
}
int main() {
    char input[100];
    printf("�п�J�r��: ");
    scanf_s("%s", input, 100);
    printf("�r��ϦV��X��: ");
    stringReverse(input);
    printf("\n");
    return 0;
}