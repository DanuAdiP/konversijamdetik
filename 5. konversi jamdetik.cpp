#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<math.h>
using namespace std;

	hari()
	{
		float hasil,h,j,m;
		long d;
		cout<<"Masukkan Hari = ";cin>>h;
		d=h*86400;
		j=h*24;
		m=h*1440;
		cout<<"Maka "<<h<<" hari adalah "<<j<< " jam "<<m<<" menit "<<d<<" detik"<<endl;
	}
	jam()
	{
	float hasil,h,j,m;
	long d;
	cout<<"Masukkan Jam = ";cin>>j;
		d=j*3600;
		m=j*60;
		cout<<"Maka "<<j<<" jam adalah "<<m<<" menit "<<d<<" detik"<<endl;
	}
	menit()
	{
		float hasil,m,d;
	cout<<"Masukkan Menit = ";cin>>m;
		d=m*60;
		cout<<"Maka "<<m<<" menit adalah "<<d<<" detik"<<endl;
			}
	exit()
	{
	cout<<"Terimakasih\n\n";
	exit(0);
	}
	
int main()
{
	int pilih;
	char ulang;
	atas :
	cout<<"KONVERSI WAKTU"<<endl<<endl;
	cout<<"1. Hari"<<endl;
	cout<<"2. Jam"<<endl;
	cout<<"3. Menit"<<endl;
	cout<<"4. exit"<<endl<<endl;
	cout<<"Pilih Menu : ";cin>>pilih;
	cout<<endl;
	switch (pilih)
	{
	case 1 : hari();break;
	case 2 : jam();break;
	case 3 : menit();break;
	case 4 : exit();break;
	default:
		cout<<"Anda salah memasukkan pilihan\n\n"<<endl;
		break;
	}
	cout<<"Anda ingin menghitung lagi [Y][T] : ";cin>>ulang;
	cout<<endl;
	if (ulang=='Y'||ulang=='y')
	goto atas;
	else if(ulang!='Y'||ulang!='y')
	exit();
	getch();
}

