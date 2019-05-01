# include <stdio.h>
int main(void)
  {
    char *test = "My name is Ivan Du. \n";
    char say[20] = "You are cool!";
    while ( *(test) != '\0' )
      {
         putchar(*(test++));
      }
    while ( *(say) != '\0' )
      {
         putchar(*say);
         say = say+1;
      }
    return 0;
  }
