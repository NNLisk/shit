#ifndef OBJECTFILE_H
#define OBJECTFILE_H

struct object_file {
  size_t size;
  unsigned char *hash[20];
  unsigned char *content;
};

struct object_file *create_blob(char *filepath);
char *read_file(const char *filepath, size_t *size);
#endif
