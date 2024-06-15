// #define _CRT_SECURE_NO_WARNINGS

// #include <stdio.h>

// int main(void)
// {
//   int ch = 0;
//   // EOF 的含义：End Of File
//   // 可以使用 EOF 来判断标准输入（如键盘输入）是否结束。例如，通常可以使用 Ctrl+D（在 Unix 系统上）或 Ctrl+Z（在 Windows 系统上）来发送 EOF 标志。

//   // getchar() 函数用于从标准输入（通常是键盘）读取下一个字符，并返回该字符的ASCII值。
//   // 它的返回值类型是 int，而不是 char。这是为了能够区分正常的字符输入和特殊的 EOF 标志。

//   // 为什么是 int 而不是 char
//   // C语言中的char 类型只能表示 0 到 255（在某些系统上是 -128 到 127）的值，而 EOF 通常被定义为 -1。
//   // 如果 getchar() 返回 char 类型，就无法用与合法的字符值区分 EOF。使用 int 类型可以保证 EOF (通常是 -1) 能够被正确表示，而不会与任何有效字符的 ASCII 值混淆。
//   while (ch = getchar() != EOF)
//   {

//     // putchar(ch)：将读取到的字符输出到标准输出。
//     putchar(ch);
//   }
//   return 0;
// }