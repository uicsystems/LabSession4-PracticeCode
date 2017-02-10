#include <stdio.h>
#include <string.h>

int main(){
  char line[500];
  char args[20][100];
  
  fgets(line, 500, stdin);

  char *word = strtok(line, " ");
  int i = 0;
  while (word) {
    printf("word: %s\n", word);
    strcpy(args[i], word);
    word = strtok(NULL, " ");
    i = i + 1;
  }

  int j=0; 
  for (;j<i;j++){
    printf("args[%d]: %s\n", j, args[j]);
  }  
}
