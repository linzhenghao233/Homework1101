#include <stdio.h>

int main(void) {
    char str[100];
    int ch, i;
    i = 0;

    printf("������һ���ַ�����");
    while ((ch = getchar()) != '\n') {
        str[i] = ch;
        i++;
    }
    i--;
    printf("�ַ�����������");
    while (i >= 0) {
        printf("%c", str[i]);
        i--;
    }

    return 0;
}