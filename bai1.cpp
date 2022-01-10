#include<iostream>
using namespace std;
#include<math.h>


int main()
{
	int n,i,x,a,b;
	do
	{
	cout <<"Nhap gia tri n: ";
	cin >> n;
	if(n<0)
	{
		cout << "Hay nhap so n lon hon 0";
	}
	}while(n<0);

	
	for(x=1;x<=n;x++)
	{
		i =	n/(pow(10,x));
		if(i==0)
		{
			break;
		}
	}
	a = n%10;
	b = n/pow(10,x-1);
	if(x==1)
	{
		cout << "So" << n << "la so doi xung";
	}
	else if(a==b)
	{
		cout << "So" << n << "la so doi xung";
	}
	else 
	{
	cout << "Khong la so doi xung";
	}
	return 0;
}
