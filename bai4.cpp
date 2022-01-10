#include<iostream>
#include<stdio.h>
using namespace std;
#include<math.h>


int main()
{
	int n,i,x,a,b,c;

	printf("Nhap gia tri n: ");
	scanf("%d",&n);
	
	b=1;
	c=1;
	i=0;
	
	while(i<n)	
	{
		a = c;
		++i;
		if(i==n)
		{
			cout << "Gia tri cua F(n) : " << a;
		}
		else
		{
		++i;
		b = b+c;
			if(i==n)
			{
				cout << "Gia tri cua F(n) : " << b;
			}
		}
		c = a+b;
		if(i==n)
		{
			break;
		}
	}
	if(n==0)
	{
		cout << "Gia tri cua F(n) : " << 1;
	}
	
	
}
