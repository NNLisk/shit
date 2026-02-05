#ifndef FILEBLOB_H
#define FILEBLOB_H

struct FileBlob {
  int size;
  char *content;
}

struct *FileBlob create_blob(char *filename);
int free_file_blob(struct blob *b);
int store_blob(struct blob *b);

#endif
