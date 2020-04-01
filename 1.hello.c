//
// Created by Winter on 2020/3/22.
//
#include <stdio.h>
//程序的第一行 #include <stdio.h> 是预处理器指令，告诉 C 编译器在实际编译之前要包含 stdio.h 文件。
//gcc编译
//./编译后文件 执行
//下一行 int main() 是主函数，程序从这里开始执行。
int main(){
    /*我的第一个c程序*/
    //exercise1-1
    printf("hello world!\n");//
    //exercise1-2
    printf("hello world!\c");//
    return 0;
        //下一行 return 0; 终止 main() 函数，并返回值 0
};
//$ gcc hello.c
//$ ./a.out
//Hello, World!
