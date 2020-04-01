//
// Created by Winter on 2020/3/25.
//
#include <stdio.h>
#include <limits.h>

//声明常量及函数
int exercise1(void);

//主程序
int main(){
    exercise1();
}

int exercise1(void){
    printf("Unsigned char max: %d\n", UCHAR_MAX);
    printf("Signed char max: %d\n", SCHAR_MAX);
    printf("Signed char min: %d\n", SCHAR_MIN);
    /**
     * Unsigned char max: 255
       Signed char max: 127
       Signed char min: -128
     */

    unsigned int i = ~0;
    printf("Unsigned int max: %u\n", i);
    printf("Signed int max: %d\n", i / 2);
    printf("Signed int min: %d\n",  - (i / 2) - 1);
    /**
     * Unsigned int max: 4294967295
       Signed int max: 2147483647
       Signed int min: -2147483648
     */
}
