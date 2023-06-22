#include<stdio.h>
int main() {
int year, month, day;
printf("연도와 월을 입력하세요 : ");
scanf("%d %d", &year, &month);

if ( (year % 400) == 0 && month == 2){
    day = 29;
} else if( (year % 4) == 0 &&
          (year % 100) != 0 && month == 2) {
    day = 29;
 }else {  
     if (month == 1 || month == 3 || month == 5
         || month == 7 || month == 8
         || month == 10 || month == 12)
         day = 31;
     else if (month == 4 || month == 6
             || month == 9 || month == 11) {
       day=30;
}else if (month == 2) {
       day=28;

{

printf("%d년 %d월의 마지막 날은 %d일입니다.\n", year, month, day);
   }
  }
 }
}