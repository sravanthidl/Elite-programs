/*
Napoleon choosed a city for Advertising his company's product. There are S streets in that city. Each day he travels one street.There are N buildings in a street which are located at points 1,2,...,N.Each building has some height(Say H mts).Napoleon stands at point 0.His height is 0.5m.Now Napoleon starts communicating with the people of each building. He can communicate with people of a particular building only if he can see that building. If he succeed to communicate with any particular building then his boss gives him R rupees i.e.if he communicates with  buildings in a day,then he will earn K*R rupees.Now Napoleon wants to know his maximum Earning for each day.
Note: All the points are on Strainght Line and Napoleon is always standing at point 0.
*/

#include <stdio.h>
int main(){
	int streets, height, n, rate, c = 0, fix;
	printf("Enter no.of streets:");
	scanf("%d", &streets); 
	printf("Enter no.of building in the street and cost:");
	for(int i = 1; i <= streets; i++) {
	    scanf("%d%d", &n, &rate);
	    printf("Enter heights:");
	    for(int j = 1; j <= n; j++) {
	        scanf("%d", &height);
	        if(j == 1) {
	            fix = height;
	            c++;
	        } else {
	            if(height > fix) {
	                c++;
	                fix = height;
	            }
	        }
	    }
	printf("earning:%d", c * rate);
	c = 0;
}
return 0;
}
