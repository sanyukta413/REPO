//program with different operators and how it works

#include<stdio.h>
#include<math.h>

int main(){
	
	int a,b,c,d;          // declare four integer variables a, b, c, and d
	
	a=15;                 // initialize variable a with value 15
	b=11;                  // initialize variable b with value 11
	b=11;
	
	c= ++a - b;            // pre-increment a (a becomes 16), subtract b (16 - 11) and Store result in c
	
	printf("a=%d\n b=%d\n c=%d\n",a,b,c);
	
	d= b++ +a;                // post-increment b (use its current value, then increment), add that to a and store result in d

	
	printf("a=%d\n b=%d\n d=%d\n",a,b,d);
	printf("a/b=%d\n",a/b);
	printf("a%%b=%d\n",a%b);
	printf("a*=b=%d\n",a*=b);
	  
	printf("%d\n", (c>d)?1:0);             //print 1 if c is greater than d, if not print 0

	printf("%d\n", (c<d)?1:0);               //print 1 if c is less than d, if not print 0
	
	printf("%d\n", (c<d)?1:0);
	
	
	
}

