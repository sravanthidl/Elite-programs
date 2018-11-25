/*
Ankit is in maze. The command center sent him a string which decodes to come out from the maze. He is initially at (0, 0). String contains L, R, U, D denoting left, right, up and down. In each command he will traverse 1 unit distance in the respective direction.
For example if he is at (2, 0) and the command is L he will go to (1, 0).
*/

#include<stdio.h>
int main() {
 char s[10];
 int x = 0, y = 0;
 printf("Enter string:");
 scanf("%s", s);
 for(int i = 0; s[i] != '\0'; i++) {
  if(s[i] == 'L') {
   x--;
  } else if(s[i] == 'R') {
   x++;
  } else if(s[i] == 'U') {
   y++;
  } else if(s[i] == 'D') {
   y--;
  }
 }
 printf("%d %d", x, y);
 return 0;
}
    
