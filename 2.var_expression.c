//
// Created by Winter on 2020/3/23.
//
/**
 * 知识点：
 *   1、//---> 注释
 *   2、基本类型：int（16位或者32位），char 字符，short 短整型，long 长整型，double 双精度浮点型
 *   float 单精度浮点型 数据类型大小取决于机器
 *   3、其他类型：基本类型的数组、结构、联合，及函数
 *   4、#define NAME "winter" 符号常量（声明常量） #define 名字(一般大写) 替换文本（任何字符序列）
 *   5、int exercise67();//声明函数,在使用
 */
#include <stdio.h>

#define NAME "winter" //符号常量（声明常量） #define 名字(一般大写) 替换文本（任何字符序列）
#define MAX 10

int exercise4(void);//声明函数,在使用
int exercise5(void);
int exercise6(void);
int exercise8(void);
int exercise9(void);
int exercise10(void);
int exercise11(void);
int exercise12(void);
int exercise13(void);

int main(){
    exercise13();
}

/**
 * Exercise 1-3
 * Modify the temperature conversion program to print a heading above the table.
 *
 * Exercise 1-5
 * Modify the temperature conversion program to print the table in reverse order,
 * that is, from 300 degrees to 0.
 */
int exercise5(void){
    printf("摄氏度转化华氏度\n");
    for(double fahr=300;fahr>0;fahr-- ){
        printf("%0.0f\t%0.2f\n",fahr,(5.0/9.0)*(fahr-32.0));
    }
}
/**
 * Exercise 1-4
 * Write a program to print the corresponding Celsius to Fahrenheit table.
 */
int exercise4(void){
    int lower=0,upper=300,step=20;
    float fahr=lower, celsius;
    while (fahr <= upper){
        celsius = 5.0 * (fahr-32.0)/9.0;
        printf("%f\t%f\n",fahr, celsius);
        fahr += step;
    }
}

/**
 * exercise1-6、1-7
 * @return
 */
int exercise6(void){
    int c;
    //c = getchar()  不输入是 0 ， 输入是 1.
    printf("EOF = %d\n", EOF);//-1
    while ((c = getchar()) != EOF){
        putchar(c);
        if((c != EOF) == 1){
            printf("等于1\n");
        } else if((c != EOF) == 0){
            printf("等于0\n");
        } else{
            printf("既不等于1也不等于0\n");
        }
    }
}

/**
 * Exercise 1-8
 * Write a program to count blanks, tabs, and newlines.
 */
int exercise8(void){
    /**
     * 1、在windows下面，输入Ctrl+Z，然后输入回车键；
       2、在Linux下面，输入Ctrl+D，然后输入回车键。
     */
    int c,space=0,tab=0,newline=0;
    while ((c = getchar()) != EOF) {
        switch (c) {
            case ' ':
                space++;
                break;
            case '\t':
                tab++;
                break;
            case '\n':
                newline++;
                break;
            default:
                break;
        }
    }
    printf("space:%d, tab:%d, newline:%d\n", space, tab, newline);
}

/**
 * Exercise 1-9
 * Write a program to copy its input to its output,
 * replacing each string of one or more blanks by a single blank.
 */
int exercise9(void){
    char prev;
    char c;
    while((c=getchar())!=EOF){
        if(c!=' '||prev != ' '){
            putchar(prev = c);
        }
    }
}

/**
 * Exercise 1-10
 * Write a program to copy its input to its output,
 * replacing each tab by \t, each backspace by \b, and each backslash by \\.
 * This makes tabs and backspaces visible in an unambiguous way.
 */
int exercise10(){
    char c;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('\\');
            putchar('t');
        } else if (c == ' ') {
            putchar('\\');
            putchar('b');
        } else if (c == '\\') {
            putchar('\\');
            putchar('\\');
        } else {
            putchar(c);
        }
    }
}

/**
 *
 * Exercise 1-11
 * Write a program count word.
 * @return
 */
int exercise11(void){
    char c;
    int count=0;
    int flag = 0;
    while ((c=getchar())!=EOF){
        if(c == ' ' || c == '\t' || c == '\n'){
            if(flag == 1){
                ++count;
            }
            flag = 0;
        } else{
            flag = 1;
        }
    }
    printf("count : %d",count);
}

/**
 *
 * Exercise 1-12
 * Write a program that prints its input one word per line.
 * @return
 */
int exercise12(void){
    char c;
    while ((c=getchar())!=EOF){
        if(c == ' '){
            putchar('\n');
        } else{
            putchar(c);
        }
    }
}
/*
 * Exercise 1-13.
 * Write a program to print a histogram of the lengths of words in its input.
 * It is easy to draw the histogram with the bars horizontal;
 * a vertical orientation is more challenging.
 */
int exercise13(void) {
    //水平直方图
    int len[MAX];
    int c;
    int num;
    int flag = 0;
    int i;
    for (i = 0; i < MAX; i++) len[i] = 0;
    while ((c = getchar()) != EOF) {
        if (c != ' ' && c != '\t' && c != '\n') {
            if (flag == 0) num = 1;
            else num++;
            flag = 1;
        } else {
            len[num]++;
            num = 0;
        }
    }
    for (num = 0; num < MAX; num++) {
        if (len[num] != 0) {
            printf("%3d ", num);
            for (i = 1; i <= len[num]; i++)
                putchar('*');
            putchar('\n');
        }
    }
}

int intf2c(void){
    int fahr,celsius,lower,upper,step;//声明变量int类型
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    while(fahr <= upper){
        celsius = 5 * (fahr-32)/9; //算术表达式
        printf("%3d\t%6d\n",fahr,celsius);//格式化输出3和6分别代表宽度
        fahr = fahr + step;
    }
}

