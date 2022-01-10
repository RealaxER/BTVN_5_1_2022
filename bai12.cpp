#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d;
	
	// so luong cua cac to 50,100,200,500
	int temp;
	int n;
	a =b=c=d=0;
	int kiemtra = 0; //kiemtra xem da co tai khoan chua
	int pass = 0 ; // nhap tk cua nguoi dung;
	int passdki = 0; // pass va id dki va nguoi dung nhap vao 
	cout <<"Bam 1 neu ban da co tai khoan , bam 2 neu ban chua co : " << endl;
	cin >> kiemtra;
	if(kiemtra ==1)
	{
		do
		{
		cout << "Hay nhap pass : "<<endl;
		cin >> pass;
		if(pass != passdki)
		{
			cout << "pass cua ban khong dung hoac khong ton tai :"<<endl;
			cout << "Nhap 2 de dang ki :";
			cin >> kiemtra;
			if(kiemtra == 2)
			{
				break;
			}

		}
	
		}while (pass != passdki);
	}

	if(kiemtra==2)
	{
		cout << "Hay nhap pass dang ki : "<<endl;
		cin >> passdki;
		cout << "Chuc mung ban da dang ki thanh cong tai khoan" << endl;
		do
		{
		cout << "Hay nhap pass : "<<endl;
		cin >> pass;
		if(pass != passdki)
		{
			cout << "pass cua ban khong dung hoac khong ton tai"<<endl;
		}
		}while (pass != passdki);
	}
	
	do
{
	cout << "Hay nhap so tien : ";
	cin >> n;
	temp = n/5;//hoan vi cho 
	if(temp%10 !=0)
	{
		cout << "Hay nhap lai so tien co menh gia cong duoc 50,100,200,500 vidu 450,500,550"<< endl;
	}
}
	while (temp%10!=0);
	
	while(n>=500)
		{
			n = n-500;
			a ++;	
		}
		cout << a << " to 500" <<endl;	
	while((n>=200)&&(n<500))
		{
			n = n-200;
			b++;
		}
		cout << b << " to 200"<<endl;	
	while((n>=100)&&(n<200))
		{
			n = n -100;
			c++;
		}
		cout << c << " to 100 "<<endl ;	
	while((n<100)&&(n>0))
		{
			n = n-50;
			d++;
		}
	cout << d << " to 50 " <<endl;
 



	
}
