#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
int t;
scanf("%d",&t);
// Complete the code.
if(t<10)
{
if (t==9) printf("nine");
else if (t==8) printf("eight");
else if (t==7) printf("seven");
else if (t==6) printf("six");
else if (t==5) printf("five");
else if (t==4) printf("four");
else if (t==3) printf("three");
else if (t==2) printf("two");
else if (t==1) printf("one");
}
else
printf("Greater than 9");
return 0;
}