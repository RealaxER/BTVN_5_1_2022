#include<iostream>
using namespace std;

int main()
{
	int h,i,j,k;
	
	cout << "Nhap gia tri cua h: ";
	cin >> h;
	
	for(i=0;i<h;i++)
	{	
	
		for(j=1;j<h-i;j++)
		{
			cout <<" ";
		}
		k = 2*i + 1;
		for(k = 1;k<=2*i+1;k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	
	
	
	
	
}
