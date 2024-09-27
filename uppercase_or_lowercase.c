#include <stdio.h>
int main() {
  char ch;
  printf("Enter the character\n");
  scanf("%ch",&ch);
  if (ch >= 'a' && ch <= 'z') {
    printf("The character is in lowercase\n");
  } else if (ch >= 'A' && ch <= 'Z') {
    printf("The character is Uppercase\n");
  } else {
    printf("The character is Numeric\n");
  }
}