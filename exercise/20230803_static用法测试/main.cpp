// 多文件联合编译并链接：g++ -o run main.cpp test1.cpp test2.cpp
#include <iostream>

using namespace std;

void printVars1();
void printVars2();

int main() {
    printVars1();
    printVars2();
    cout << "hello" << endl;
    return 0;
}