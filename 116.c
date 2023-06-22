#include<stdio.h>

int main() {
    int a, b, start_num, end_num;
    printf("***두 수 구간의 숫자를 출력하기***\n");
    printf("두 수를 입력하세요 : ");
    scanf("%d %d", &a, &b);
    
    
    if (a>b) {
        start_num = b;
        end_num = a;
	}else {
        start_num = a;
        end_num = b;
	}
    while(start_num <= end_num) {
        printf("%d", start_num);
        start_num = start_num + 1;
    }
    printf("\n");
    return 0;
}