#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Learning about:
 * memmove, memcpy
 *
 * memmove() copies n characters from str2 to str1.  For overlapping
 * memory blocks memmove() is a safer approach than memcpy()
 * memmove() makes sure to not destroy the data in the overlapping
 * memory locations while doing copies.  memcpy() depending on the
 * compiler / implementation may accidently overwrite the overlapping
 * memory it is trying to copy from.
 */

void memcpymv_example() {
  char dest[] = "oldstring";
  char src[]  = "newstring";

  printf("Before memmove dest = %s, src = %s\n", dest, src);
  memmove(dest, src, 9);
  printf("After memmove dest = %s, src = %s\n", dest, src);
}

/**
 * realloc() attempts to resize the memory block pointed to by ptr
 * that was previously allocated with a call to malloc or calloc.
 */
void realloc_example() {
  char *str;

  /* Initial memory allocation */
  str = (char *) malloc(15);
  strcpy(str, "tutorialspoint");
  printf("String = %s,  Address = %u\n", str, str);

  /* Reallocating memory */
  str = (char *) realloc(str, 25);
  strcat(str, ".com");
  printf("String = %s,  Address = %u\n", str, str);

  free(str);
}

int main ()
{
  memcpymv_example();
  realloc_example();
  return(0);
}
