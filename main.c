#include "header.h"
#include <time.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <sys/stat.h>

int main() {

	print_file_info("makefile");
	printf("----------\n");
  print_file_info("functions.c");
	return 0;
}
