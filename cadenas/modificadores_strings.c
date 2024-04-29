#include <stdio.h>
#include <stdlib.h>
#define PINTA "Emocionante accion!"

int main(int argc, char const *argv[])
{
  printf("/%2s/\n", PINTA);
  printf("/%22s/\n", PINTA);
  printf("/%22.5s/\n", PINTA);
  printf("/%-22.5s/\n", PINTA);

  system("pause");
  return 0;
}
