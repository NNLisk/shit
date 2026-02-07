#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#include "objectfile.h"



struct objectfile *createblob(char *filepath) {
  struct objectfile *of;

  size_t size;

  char *filecontent = read_file(filepath, &size);

  return 0;
}


char *read_file(const char *filepath, size_t *size) {
  char *filecontent;

  FILE *fptr = fopen(filepath, "rb");
  if (!fptr) { perror(filepath); return NULL; }
  if (fseek(fptr, 0, SEEK_END) != 0) { fclose(fptr); return NULL; }

  fseek(fptr, 0, SEEK_END);
  *size = ftell(fptr);
  if (*size < 0) { fclose(fptr); return NULL; }
  
  rewind(fptr);

  filecontent = malloc(*size);

  fread(filecontent, 1, *size, fptr);
  

  fclose(fptr);
  return filecontent;
}
