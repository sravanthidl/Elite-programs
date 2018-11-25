/*Various signal towers are present in a city.Towers are aligned in a straight horizontal line(from left to right) and each tower transmits a signal in the right to left direction.Tower A shall block the signal of Tower B if Tower A is present to the left of Tower B and Tower A is taller than Tower B. So,the range of a signal of a given tower can be defined as :
(the number of contiguous towers just to the left of the given tower whose height is less than or equal to the height of the given tower) + 1}.
You need to find the range of each tower.*/

#include<stdio.h>
int main() {
 int test, towers, heights[10], c = 1;
 scanf("%d", &test);
 for(int i = 1; i <= test; i++) {
  scanf("%d", &towers);
  for(int j = 1; j <= towers; j++) {
   scanf("%d", &heights[j]);
  }
  for(int j = 1; j <= towers; j++) {
   for(int k = j - 1; k >= 1; k--) {
    if(heights[k] < heights[j]) {
     c++;
    } else {
     break;
    }
   }
   printf("%d ", c);
   c = 1;
  }
 }
 return 0;
}
  
