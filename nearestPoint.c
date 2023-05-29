#include <stdio.h>
#include <math.h>
int main()
{
int x,y,xcoors[11],ycoors[11],i,a,b,c,index;
double dist,l[11],min;

for(c = 0; c < 10; c++)
{
scanf("%d", &xcoors[c]);
}

for(c = 0; c < 10; c++)
{
scanf("%d", &ycoors[c]);
}

scanf("%d %d", &x, &y);

for(i = 0; i < 10; i++)
{
l[i] = (double) sqrt(pow((xcoors[i] - x),2) + pow((ycoors[i] - y),2));
}

min = l[0];

for(a = 1; a < 10; a++)
{
if(l[a] < min)
min = l[a];
}

for(b = 0; b < 10; b++)
{
if(l[b] == min)
{
index = b;
break;
}
}

dist = min;

printf("P = (%d,%d), nearest point index = %d, distance = %0.1f",x,y,index,dist);
return 0;
}
