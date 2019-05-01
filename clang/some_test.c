# include <stdio.h>
int main(void)
 {
  char str[] = "My name is ivan.";
  char *ptr;
  ptr = &str[1];
  printf("%c\n",*ptr);
  printf("%s\n",ptr);
  return 0;
 }
