#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  printf("/%f/\n",1234.56);
  printf("/%e/\n",1234.56);
  printf("/%4.2f/\n",1234.56);
  printf("/%3.1f/\n",1234.56);
  printf("/%10.3f/\n",1234.56);
  printf("/%10.3e/\n",1234.56);

  system("pause");
  return 0;
}
