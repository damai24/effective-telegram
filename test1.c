#include <stdio.h>
int main() {
  // 步骤1：定义变量
  int n, sum = 0;
   // 步骤2：获取用户输入
  printf("请输入一个正整数n: ");
  scanf("%d", &n);
   // 步骤3：使用循环累加
  for(int i = 1; i <= n; i++) {
      sum += i;  // 等价于 sum = sum + i
  }
   // 步骤4：输出最终结果
  printf("1到%d的累加和为: %d\n", n, sum);
   return 0;
}