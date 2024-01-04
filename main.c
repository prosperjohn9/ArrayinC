#include <stdio.h>
#include <string.h>

int main() {
  char str[12] = {"Prosper John"};
  for (int i = 0; i < sizeof(str); i++)
    printf("\n Character in str[%d] is: %c", i, str[i]);
  return 0;
}