#include<stdio.h>
int yesorno(int m,int n,int p);
int main()
{
	int day1[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int day2[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int year[200];
	int month1[200];
	int month2[200];
	int n;
	scanf("%d", &n);
	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%d %d %d", &year[i], &month1[i], &month2[i]);
		
	}
    	for (i = 0; i < n; i++)
	{
    yesorno(year[i], month1[i], month2[i]);
	}
	return 0;
}




int yesorno(int m, int n, int p)
{
	int sum = 0;
	//首先完成年份平闰年的判断
	int day1[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int day2[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int i,t;
	if ((m % 100 == 0) && (m % 400 == 0) || (m % 100 !=  0) && (m % 4 == 0))
	{
		if(n>p){t=n,n=p,p=t;}
		for (i = n; i < p; i++)
		{
			sum = sum + day2[i - 1];
		}
		if (sum % 7 == 0)
		{
			printf("YES\n");
		}
		else printf("NO\n");
	}
	else
	{
		 if(n>p){t=n,n=p,p=t;}
		for (i = n; i < p; i++)
		{
			sum = sum + day1[i - 1];
		}
		if (sum % 7 == 0)
		{
			printf("YES\n");
		}
		else printf("NO\n");
	}
}

