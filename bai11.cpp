#include<iostream>
using namespace std;

int main()
{
	int i,a,n;
	
	// tim chu so nhap vao co bao nhieu chu so;
	
	cout << "Nhap n : ";
	cin >> n;
	int temp;
	a = 0;
	temp = n;// hoan vi cho n;
	while (n !=0)
	{
		n = n/10;
		a++;
	}
	
	n = temp; //hoan vi cho n;
	
	// tim max 1
	int max1,max2;
	
	max1 = temp%10;
	
	while (temp !=0)
	{
		temp = temp/10;
		max2 = temp%10;
		if(max2 >max1)
		{
			max1 = max2;
		}
	}
	cout << max1;
	
	// tim cac max con lai 
	int max3 = 0;
	int i =1;
	for(i=1;i<=a;i++) // lap so lan gia tri nhap vao vi du 2789 thi la 4
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
		cout << max2;
		
		
	}
		
	
	
}
