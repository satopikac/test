#include<stdio.h>

void test()
{
int num[80];
int N,i;
scanf("%d",&N);
for ( i = 0; i <N-1; i++)
{
    scanf("%d",num[i]);
}
if (num[0]!=num[1])
{
    printf("0 ");
}
for ( i = 1; i <N-2; i++)
{
if ((num[i]>num[i-1]&&num[i]>num[i+1])||(num[i]<num[i-1]&&num[i]<num[i+1]))
{
printf("%d",i);
}
}
if(num[N-2]!=num[N-1])
{
    printf("%d",N-1);
}
printf("\n");
}

int main()
{
    int n,i;
    scanf("%d",&n);
  for ( i = 0; i < n; i++)
  {
    test();
  }
  
    return 0;
}



