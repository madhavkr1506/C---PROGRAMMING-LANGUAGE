#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
int n,c=0,rev=0,t,i;
scanf("%d",&n);
t=n;
for(i=1;i<=t;i++)
{
if (t%i==0)
c++;
}
if(c==2)
{
while(t>0)
{
rev=rev*10+(t%10);
t=t/10;
}
if(rev==n)
{
printf("YES");
}
else
printf("NO");
}
else
{
printf("NO");
}


/* Enter your code here. Read input from STDIN. Print output to STDOUT */
return 0;
}