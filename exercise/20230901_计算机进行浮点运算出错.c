#include <stdio.h>

int main()
{
    float sum = 0;
    for (int i  = 0; i < 100; i ++)
        sum += 0.1;
    printf("%f\n", sum); // 10.000002，因为浮点数的精度问题，所以不是10

    return 0;
}

/* 小数在计算机中是如何用二进制表示的
    1.小数点之前的二进制数，从小数点开始，向左边的数，每一位都是2的n次方，n从0开始，向左边递增
    2.小数点之后的二进制数，从小数点开始，向右边的数，每一位都是2的-n次方，n从1开始，向右边递增
    3.需要注意的是整数与小数部分n的起始数值不一样，整数部分n从0开始，小数部分n从1开始
    4.例如：二进制表示1101.0011，整数部分为1101，小数部分为0011
        转换为十进制的整数部分为：1*2^3 + 1*2^2 + 0*2^1 + 1*2^0 = 11
        转换为十进制的小数部分为：0*2^-1 + 0*2^-2 + 1*2^-3 + 1*2^-4 = 0.1875
        因此最终转化的十进制数是：13.1875
*/ 

/* 
    假设在二进制的表示法下精度有四位，则可以枚举所有可能如下：
    0.0000 0.0001 0.0010 0.0011 0.0100 0.0101 0.0110 0.0111
    0.1000 0.1001 0.1010 0.1011 0.1100 0.1101 0.1110 0.1111
    如果将以上所有二进制表示转化为十进制，就会发现表示出的十进制数彼此之间不是连续的
    同理，只要二进制的精度是有限制的，那么它所能表示的十进制数彼此之间就一定是有空隙的
    如果将十进制的0.1转化为二进制，就会发现它是一个无限循环小数，因此最终在有限精度的表示下就会出现误差
*/