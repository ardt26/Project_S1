#include <iostream>
using namespace std;
	
	string user,pass,nama[100];
	int menu,maha=0,mahtam=0,i,j,nim[100],matkul[100],nilai[100][100];
	char ulang;
					
int main ()
{	
	do
	{		
		cout<<"HARAP LOGIN TERLEBIH DAHULU\n";
		cout<<"Username	: ";cin>>user;
		cout<<"Password	: ";cin>>pass;
	
		if(user=="anjar" && pass=="trsc")
		{
			cout<<"\n==========SELAMAT DATANG==========\n";
			break;
		}
		
		else
		{
			cout<<"\nUSERNAME/PASSWORD SALAH!!!\n";
		}
	}while(true);
	
	do
	{
	cout<<"Menu\n1. Input Data\n2. Tambah Data\n3. Lihat Data\nPilihan anda adalah ";cin>>menu;
	
		switch (menu)
		{
			case 1	:	
			
			cout<<"========== MENU INPUT DATA ==========\n";
			cout<<"Banyak Mahasiswa	: ";cin>>maha;
			for(i=0;i<maha;i++)
			{
				cout<<i+1;
				cout<<"	Nama	: ";cin>>nama[i];
				cout<<"	NIM	: ";cin>>nim[i];
				cout<<"	Jumlah Matkul	: ";cin>>matkul[i];
				for(j=0;j<matkul[i];j++)
				{
					cout<<"		Matkul "<<j+1<<" : ";cin>>nilai[i][j];
				}
			}
			break;
						
			case 2	:	
			
			cout<<"========== MENU TAMBAH DATA ==========\n";
			cout<<"Banyak Mahasiswa Tambahan	: ";cin>>mahtam;
			for(i=0+maha;i<mahtam+maha;i++)
			{
				cout<<i+1;
				cout<<"	Nama	: ";cin>>nama[i];
				cout<<"	NIM	: ";cin>>nim[i];
				cout<<"	Jumlah Matkul	: ";cin>>matkul[i];
				for(j=0;j<matkul[i];j++)
				{
					cout<<"		Matkul "<<j+1<<" : ";cin>>nilai[i][j];
				}
			}
			break;
			
			case 3	:
			
			cout<<"========== DATA ANDA ==========\n";
			for(i=0;i<maha+mahtam;i++)
			{
				cout<<i+1;
				cout<<"	Nama	: "<<nama[i]<<endl;
				cout<<"	NIM	: "<<nim[i]<<endl;
				cout<<"	Jumlah Matkul	: "<<matkul[i]<<endl;
				for(j=0;j<matkul[i];j++)
				{
					cout<<"		Matkul "<<j+1<<" : "<<nilai[i][j]<<endl;
				}
				cout<<endl;
			}
		}
	cout<<"Mau lagi (y/n)? ";cin>>ulang;
	}while(ulang=='y');
}
