#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int h,i,n,a,x,j;
	
	printf("Hay nhap gia tri cua h: ");
	scanf("%d",&h);
	char m = 42;
	j =h;
	
	for(x=0;x<h;x++)
	{	
		j = h -x;
		for(j;j>0;j--)
		{
		cout << " ";
		}
		i= 2*x +1;
		for(a=1;a<=i;a++)
		{
		if(x != h-1)
		{
			if(a==1)
			{
				cout <<m;	
			}
			else if(a==i)
			{
				cout <<m;	
			}
			else
			{
				cout <<" ";	
			}
		}
		else
		{
			cout <<m;	
		}
		}
		cout << endl;
	}
}
	
