#include<iostream>
using namespace std;
#include<math.h>


int main()
{
	int n,i,x,a,S,m;
	do
	{
	cout <<"Nhap gia tri n: ";
	cin >> n;
	if(n<0)
	{
		cout << "Hay nhap so n lon hon 0";
	}
	}while(n<0);

	
	if(n==1)
	{
		cout << n << " khong la so nguyen to";
	}
	else if((n==2)||(n==3)||(n==5)||(n==7))
	{
		cout << n << " la so nguyen to";
	}
	else
	{
		for(x=2;(x<=9)||(x!=n);x++)
		{
			if(n%x==0)
			{
				cout << n << " khong la so nguyen to";
				break ;
			}
			else if ((x==9)&&(n%x!=0))
			{
				cout << n << " la so nguyen to";
			}
			else
			{
				continue;
			}
		}
	}	
}
