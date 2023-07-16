#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    int c = a + b;

    int *pa = &a;
    int *pb = &b;
    // int *pc = &(a + b); //报错，因为表达式整体是个右值，不能取地址

    int &d = a; //左值引用d只能绑定在对象上，而不能与字面值或某个表达式的结果绑定，这里a是变量，是左值
    // int &e = 10; //e与上一行同为左值引用，而10是字面值，左值引用不能绑定到字面值
    // int &f = (a + b); //f与上一行同为左值引用，而(a+b)是表达式，左值引用不能绑定到表达式的结果

    // 初始化常量引用时允许使用任意表达式作为初始值，只要该表达式的结果能够转换成常量引用的类型即可
    // 实际上常量引用是绑定到了一个临时量上，而临时量是右值，因此常量(左值)引用可以绑定到右值
    const int &e = 10;
    const int &f = (a + b);

    int &&x = 10; //右值引用
    int &&y = (a + b);

    return 0;
}