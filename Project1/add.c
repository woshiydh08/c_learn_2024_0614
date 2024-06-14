#define _CRT_SECURE_NO_WARNINGS

int a = 10;

// static修饰全局变量的时候，这个全局变量的外部链接属性就变成了内部链接属性。
// 此时其他源文件（.c）就不能在使用到这个全局变量
static int g_val = 0;

// 同上
static int add(int a, int b)
{
  return a + b;
}