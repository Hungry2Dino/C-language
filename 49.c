#include<stdio.h>

int main() {

    int a = 30; float b = 3.14; char c = 'A';
    char d[6] = {'k', 'O', 'R', 'E', 'A', '\0'};
    printf("%d %f %b %c\n", a, b, c, d[3]);
    printf("int형 데이터타입의 크기 : %d\n", sizeof(a));
    printf("char형 데이터타입의 크기 : %d\n", sizeof(c));
    return 0;
}