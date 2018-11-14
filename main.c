#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char ** parse_args(char * line){
  char ** array = malloc(5*sizeof(char *));
  char * s = strsep(&line, " ");
  int index = 0;
  while(s){
    array[index] = s;
    printf("s: %s\n", s);
    s = strsep(&line, " ");
  }
  return array;
}

int main(int argc, char *argv[]) {
  char string[100] = "whoa this is cool";
  char * line = string;
  parse_args(line);
  return 0;
}
