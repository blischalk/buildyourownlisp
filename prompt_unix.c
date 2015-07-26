#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>

/* Declare a buffer for user input of size 2048 */
// Static makes this variable local to this file
// static char input[2048];

int main(int argc, char** argv) {

  /* Print Version and Exit Information */
  puts("Lispy Version 0.0.0.0.1");
  puts("Press Ctrl+c to Exit\n");

  // puts vs fputs.  fputs doesn't append a newline

  /* In a never ending loop */
  while (1) {
    /* Output our prompt */
    //fputs("lispy> ", stdout);
    char* input = readline("lispy> ");

    /* Add input to history */
    add_history(input);

    /* Read a line of user input of maximum size 2048 */
    //fgets(input, 2048, stdin);

    /* Echo input back t user */
    printf("No you're a %s\n", input);

    /* Free retrieved input */
    free(input);
  }

  return 0;
}
