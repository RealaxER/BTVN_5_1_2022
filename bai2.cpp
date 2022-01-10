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

	
	for(x=1;x<=n;x++)
	{
		i =	n/(pow(10,x));
		if(i==0)
		{
			break;
		}
	}
	m = n;
	S = 0;
	cout << "Vi ";
	for(i=1;i<=x;i++)
	{
		a = n%10;
		n = n/10;
			if(i<x)
		{
			cout << a << "^" << x <<"+";
		}

		S = S + pow(a,x);
		
			if(i==x)
		{
			if(S==m)
			{
			cout << a << "^" << x <<" = "<< S << " va bang " << m<<endl;
			}
			else
			{
			cout << a << "^" << x <<" = "<< S << " va khong bang " << m<< endl;
			}
		}
	}
	if(S == m)
	{
		cout << "Nen so " << m <<" la so Amstrong";
	}
	else
	{
	cout << "Nen so " << m <<" khong la so Amstrong";
	}
	return 0;
	
}

