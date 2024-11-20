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
    printf("請輸入字串: ");
    scanf_s("%s", input, 100);
    printf("字串反向輸出為: ");
    stringReverse(input);
    printf("\n");
    return 0;
}