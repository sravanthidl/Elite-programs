/* for input = 3, we get
33333
32223
32123
32223
33333*/

#include<stdio.h>
void first_half(int i, int n, int x, int mid) {
int beg = n;
for(int j = 1; j <= i - 1; j++) {
printf("%d", beg);
beg--;
}
for(int j = i; j <= (2 * n) - i; j++) {
printf("%d", mid);
}
for(int j = (2 * n) - i + 1; j <= x; j++) {
printf("%d", beg + 1);
beg++;
}
}
void second_half(int n, int st, int i) {
int s = n;
for(int j = 1; j < (2 * n) - i; j++) {
printf("%d", s);
s--;
}
for(int j = (2 * n) - i; j <= i; j++){
printf("%d", st);
}
for(int j = i + 1; j <= (2 * n) - 1; j++) {
printf("%d", s + 1);
s++;
}
}
int main() {
int i, n, st = 2;
scanf("%d", &n);
int mid = n, md = 1;
int x = (n * 2) - 1;
for(i = 1; i <= x; i++) {
if(i == 1 || i == x){
for(int j = 1; j <= x; j++) {
printf("%d", n);
}
} else if(i == (x / 2) + 1) {
for(int k = n; k >= 2; k--) {
printf("%d", k);
}
printf("1");
for(int j = 2; j <= n; j++) {
printf("%d", j);
}
} else if(i > 1 && i < (x / 2) + 1){
mid--;
first_half(i, n, x, mid);
} else {
second_half(n, st++, i);
}
printf("\n");
}
return 0;
}
