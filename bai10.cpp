#include<iostream>
using namespace std;

int main()
{
	int n,k;
	//nhap gia tri k,n
	cout << "Nhap gia tri n: ";
	cin >> n;
	cout << "Nhap gia tri k: ";
	cin >> k;
	// hoan vi cho n 
	int temp;
	temp = n;
	int i,j;
	// dem so gia tri nhap vao vd 345 thi la 3
	i = 0;
	j =1; // gan gia tri cho j de thoa man dieu kien
	while(j!=0)
	{
		j = temp/10;
		++i;
		temp = temp/10;
	}
	
	temp = n;//hoan vi cho n
	int h = 0; // dem so max bang nhau 
	int thutuao = i  ;// day la cac so thu tu cua so n nhap vao 
	
	// tim max1
	int max1,max2;
	max1 = n%10;
	n = n/10;
	int m = 0; // gia tri xep hang ao 
	while(n!=0) // vong lap tim max1
	{
		max2 = n%10;
		if(max2 > max1)
		{
			max1 = max2;
		}
		if(max2 == max1)
		{
			--thutuao;
			if(k > thutuao)
			{
				cout <<"KHONG CO"; //TH1 nguoi dung nhap max giong nhau 
				++h;
				break;
			}
		}
		n = n/10;
	}
	j =1;
	
	n = temp; // hoan vi lai 
	
	if(j==k) // TH2 : nguoi dung nhap vao max1
	{
		cout << "Chu so thu " << k << " la " << max1;
	}
	
	
	if(thutuao > k) // TH3 cac gia tri max binh thuong
	{
	// vong lap tim cac max con lai
	int max3;
	
	for(j=2;j<i;j++) // lap so lan gia tri nhap vao vi du 2789 thi la 4
	{
		max2 = temp%10;   //tim max2
		temp = n/10;   //rut gon n di con n -1 so
		if(max2 >= max1)   // dieu kien de cho max tiep theo khong lon hon max cu
		{
			max2 = temp%10;  // neu lon hon thi nhay sang th tiep theo
			temp = temp/10; 
		}
		
		while(temp!=0) // vong lap tim cac max con lai 
		{	
			max3 = temp%10;
			
			if(temp>= max1) //neu so cuoi cung lai la max thi can xu ly
			{
				break;          // neu so  cuoi cung la max cua lan truoc thi ta co the dung vong lap o day va kl max tim duoc o bien max2;
			}
			if(max3 > max1) //neu so dang xet ma la max cu thi lenh bo qua
			{
				temp = temp/10;
				continue;
			}
			if(max3 == max1) //neu so dang xet ma bang max cu thi cung lenh bo qua va phai giam so cua thutuao di 
			{
				temp = temp/10;
				continue;
				
			}
			if(max3 > max2) // neu so dang xet ma lon hon max ta xet thi duong nhien no se la max moi
			{
				max2 = max3;
			}
			temp = temp/10;
		}
		max1 = max2; // max dang xet se thanh max cu neu ta tim xong 
		cout << max1;
		
		if(j==k) // neu den max thu j ma bang so k de bai giao cho thi co the dung ct roi;
		{
				cout << "Chu so thu " << k << " la " << max1<<endl;
		}	
	}
	}
	if((thutuao<k)&&(h!=1))
	{
		cout << "Khong co";
	}
	
}
