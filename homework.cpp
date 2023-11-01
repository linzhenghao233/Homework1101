#include <stdio.h>

int main(void) {
    char str[100];
    int ch, i;
    i = 0;

    printf("ÇëÊäÈëÒ»¸ö×Ö·û´®£º");
    while ((ch = getchar()) != '\n') {
        str[i] = ch;
        i++;
    }
    i--;
    printf("×Ö·û´®µ¹¹ıÀ´£º");
    while (i >= 0) {
        printf("%c", str[i]);
        i--;
    }

    return 0;
}