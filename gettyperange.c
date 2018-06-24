// 编写一个程序，以确定分别油signed以及unsigned限定的char,shortint与long类型变量
// //的取值范围


// 不带限定符的char类型对象是否带符号，取决于具体机器，
// Windows下 CHAR_MIN在 _CHAR_UNSIGNED状态下才会是0
#define _CHAR_UNSIGNED 1

#include <stdio.h>
#include <limits.h>

int main() {

	// 方法一：直接打印头文件中定义的值
    printf("signed char min: %d\n", SCHAR_MIN);
    printf("signed char max: %d\n", SCHAR_MAX);

	// 这里没看懂，CHAR_MIN在 _CHAR_UNSIGNED状态下才会是0
    printf("unsigned char min: %d\n", CHAR_MIN);
    printf("unsigned char max: %d\n", UCHAR_MAX);

	// 带符号符号的整形会限制其最小值和最大值
	// 不带符号的整形头文件只提供给了其最大值，最小值应该都默认是0
	// 所以没有在头文件定义，可以默认看作是 CHAR_MIN
    printf("signed short int min: %d\n", SHRT_MIN);
    printf("signed short int max: %d\n", SHRT_MAX);
    printf("unsigned short int min: %u\n", 0);
    printf("unsigned short int max: %u\n", USHRT_MAX);

    printf("signed int min: %d\n", INT_MIN);
    printf("signed int max: %d\n", INT_MAX);
    printf("unsigned int min: %u\n", 0);
    printf("unsigned int max: %u\n", UINT_MAX);

    printf("signed long int min: %ld\n", LONG_MIN);
    printf("signed long int max: %ld\n", LONG_MAX);
    printf("unsigned int min: %lu\n", 0);
    printf("unsigned long int max: %lu\n", ULONG_MAX);



}
