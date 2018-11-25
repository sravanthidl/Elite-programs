/*
Sunderland capital consists of  n hills, forming a straight line. On each hill there was a watchman, who watched the neighbourhood day and night.

In case of any danger the watchman could make a fire on the hill. One watchman could see the signal of another watchman, if on the straight line connecting the two hills there was no hill higher than any of the two.  For example, for any two neighbouring watchmen it is true that the signal of one will be seen by the other.

An important characteristics of this watch system was the amount of pairs of watchmen able to see each other's signals. You are to find this amount by the given heights of the hills.
*/

#include<stdio.h>
int main() {
 int hills, heights[10], c, flag;
 printf("enter no.of hills:");
 scanf("%d", &hills);
 printf("enter heights of hills:");
 for(int i = 1; i <= hills; i++) {
  scanf("%d", &heights[i]);
 }
 c = hills - 1;
 for(int i = 1; i <= hills; i++) {
  for(int j = i + 2; j <= hills; j++) {
   for(int k = i + 1; k <= j - 1; k++) {
    if(heights[k] < heights[i] && heights[k] < heights[j]) {
     flag = 0;
    } else {
     flag = 1;
     break;
    }
  }
   if(flag == 0) {
    c++;
    printf("%d %d\n", heights[i], heights[j]);
   }
  }
 }
 printf("%d", c);
 return 0;
}
