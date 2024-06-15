#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 反面例子
int main_unclear_side_effects(void)
{
    int age;
    char name[50];

    printf("Enter your age: ");
    scanf("%d", &age); // 读取整数

    // 注意：这里没有清除输入缓冲区

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // 读取字符串

    printf("Hello, %s! You are %d years old.\n", name, age);

    /**
     * 用户输入：25 然后按下回车键。
     * scanf 读取了整数 25，但是回车键（\n）仍然留在输入缓冲区中。
     * 当 fgets 尝试读取名字时，它首先读取到了缓冲区中的回车键，这意味着 fgets 实际上读取的只是一个空字符串。
     */
    return 0;
}

// 清除输入缓冲区的函数
/**
 * 在C语言中，输入缓冲区是一个存储用户输入内容的临时区域，包括了用户通过键盘输入的字符、数字和特殊符号等。当使用类似 scanf 或 fgets 这样的函数从标准输入流（如键盘）中读取数据时，实际上是从这个输入缓冲区中读取数据的。
 * 如果在读取完数据后没有对输入缓冲区进行清理，那么在缓冲区中可能会留下一些换行符、空格或其它非法字符，这些字符可能会影响后续的输入操作。
 * clear_input_buffer 函数的作用就是清除输入缓冲区中的所有剩余字符，使得缓冲区变为空，这样就可以确保下一次输入操作不受之前输入的影响。
 * 具体来说，clear_input_buffer 函数使用一个循环来不断读取输入缓冲区中的字符，直到遇到换行符或文件结束符为止。这样做的效果就是将输入缓冲区中的所有字符都读取掉，使得缓冲区为空。
 */
void clear_input_buffer()
{
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
    {
    };
}

int main()
{
    int age;
    char name[50];

    printf("Enter your age: ");
    scanf("%d", &age); // 读取整数

    clear_input_buffer(); // 清除输入缓冲区

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // 读取字符串

    printf("Hello, %s! You are %d years old.\n", name, age);
    return 0;
}