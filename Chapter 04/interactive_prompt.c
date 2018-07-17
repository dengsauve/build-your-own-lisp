#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>


int main(int argc, char** argv) {

  /* Print Version and Exit Information */
  puts("Denpy Version 0.0.2");
  puts("Press Ctrl+c to Exit Denpy\n");

  /* In a never ending loop */
  while (1) {

    /* Output our prompt and get input */
    char* input = readline("denpy> ");

    /* Add input to history */
    add_history(input);

    /* Echo input back to user */
    printf("Really? I always thought %s was interesting!\n", input);

    /* Free retrieved input */
    free(input);
  }

  return 0;
}