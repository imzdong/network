//
// Created by Winter on 2020/3/23.
//
#include <stdio.h>

main(){
    //intf2c();
    doublef2c();
}

doublef2c(){
    int lower=0,upper=300,step=20;
    float fahr=lower, celsius;
    while (fahr <= upper){
        celsius = 5.0 * (fahr-32.0)/9.0;
        printf("%f\t%f\n",fahr, celsius);
        fahr += step;
    }
}

intf2c(){
    int fahr,celsius,lower,upper,step;//声明变量int类型
    //数据类型： ---> 注释
    /**
     * 基本类型：int（16位或者32位），char 字符，short 短整型，long 长整型，double 双精度浮点型
     * float 单精度浮点型 数据类型大小取决于机器
     * 其他类型：基本类型的数组、结构、联合，及函数
     */
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

