#include <stdio.h>
#include <stdlib.h>
int main(void) {
  
  void clear_screen() {
    system("clear");
  }

  int read() {
    FILE *file = fopen("text.txt", "r"); // open file for reading
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    char ch;
    while ((ch = fgetc(file)) != EOF) { // read one character at a time
        putchar(ch);                    // print it
    }
  }
  
  clear_screen();
  read();
  printf("press enter to leave");
  getchar();
  
  return 0;
}
