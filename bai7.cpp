#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
	int n,i,k,j,m;
	cout << "Nhap n: ";
	cin >> n;
	
	cout <<"Hay nhap gia tri k: ";
	cin >> k;
	m = n;
	
	i = 0;
	while(j!=0)
	{
		j = n/10;
		++i;
		n = n/10;
	}

	if(i==k)
	{
		for(j=1;j<=k-1;j++)
	{
			m = m/10;
	}
		cout << "Gia tri can la: "<< m;
	}
	
	
	else if(i>k)
{
	for(j=1;j<=k-1;j++)
	{
			m = m/10;
	}
	
	if(i-k!=0)
	{
		cout << "Gia tri can la: "<< m%10;
	}
}


	else 
	{
		cout << "Khong co";
		
	}
	
}

