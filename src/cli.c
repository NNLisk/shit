#include <stdio.h>
#include <string.h>

#include "cli.h"

int command_line_dispatch(int argc, char **argv) {

  if (argc > 2) {
    printf("Too many arguments!\n");
  }

  if (strcmp(argv[1], "dare") == 0) {
    printf("I double dare you motherfucker\n");
  }

  return 0;
}

int process_path(char *path) {
  
}
