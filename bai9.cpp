#include<iostream>
using namespace std;

int main ()
{
	int a,b,n,i,j,m;
	cout << "Nhap n: ";
	cin >> n;
	i = 0;
	j = 2;
	m = n;
	while (j!=0)
	{
		j = n/10;
		n= n/10;
		++i;
	}

	
	a = m%10;
	m = m/10;
	j= 1;
	while(m!=0)
	{
		b = m%10;
		m = m/10;
		
		if(b==a)
		{
			++j;
			if(j==i)
			{
				cout << "Khong co";
				break ;
			}
		}
		if(b>a)
		{
			a = b;
		}
		if(m<10)
		{
			cout << "So lon nhat la: " << a;
			break;
		}
		
	}
}


