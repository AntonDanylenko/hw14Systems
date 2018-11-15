#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char ** parse_args(char * line){
  char ** arr = malloc(6 * sizeof(char *));
  int i;
  for (i = 0; i < 6; i++) {
    arr[i] = strsep(&line, " ");
  }
  return arr;
}

int main(int argc, char *argv[]) {
  // char string[100] = "whoa this is cool";
  // char * line = string;
  // parse_args(line);
  if (argc > 1) {
    char ** args = parse_args(argv[1]);
    printf("args[0]: %s\n", args[0]);
    execvp(args[0],args);
  }
  else {
    printf("Need more arguments.\n" );
  }
  return 0;
}
