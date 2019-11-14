#include <time.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <sys/stat.h>
void print_file_info(char *filename) {
  struct stat s;
  stat(filename, &s);
  printf("\nPrinting File info of: %s\n", filename);
  printf("File size: %ld bytes\n", s.st_size);
  printf("File mode: %o\n", s.st_mode % 512);
  printf("File time modified: %s\n", ctime(&(s.st_mtime)));
}
