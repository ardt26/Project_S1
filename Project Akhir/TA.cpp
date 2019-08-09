#include <iostream>
#include <stdlib.h>
using namespace std;

void password();
void owner1();
void owner2();
void custommer();
void daftarh();
void daftarb();

int utama,siapa,owner,gudang,a,b,c,i,brg,awal=10,beli,totalh=0,akhirh=0,bayar,kembalian,kesempatan=3;
int hargab[10][10][1000],jumlahb[10][10][1000],totalb[10][10][1000];
string user,pass,namab[10][10][1000];
char tidak,ulang,lanjut;

int main()
{
	cout<<"			===============WELCOME TO YUPEEN E-COMMERCE===============\n";
	cout<<"Menu :\n1. Seller\n2. Custommer\n3. Exit\nMenu yang anda pilih adalah ";cin>>utama;
	
	switch (utama)
	{
		case 1 :
		
			cout<<"\n==========WELCOME SELLER==========\n"<<endl;
			cout<<"1. Owner\n2. Supplier\nAnda siapa? ";cin>>siapa;
			
			if(siapa==1)
			{
				password();
				cout<<"\n1. Penambahan Barang\n2. Pengecekan Barang\n";
				cout<<"Apa yang akan anda lakukan? ";cin>>owner;
									
				if(owner==1)
				{
					owner1();
				}
									
				else if (owner==2)
				{
					owner2();		
				}
									
				else
				{
					cout<<"MOHON MEMBACA ATURAN DENGAN BENAR. TERIMA KASIH!!!";
					system("cls");
					main();
				}
			}
			
			else if(siapa==2)
			{
				cout<<"\nSELAMAT DATANG SUPPLIER\n\n";
				do{
				daftarb();
				cout<<endl<<"Item yang akan ditambah jumlahnya? ";cin>>c;
				cout<<"Jumlah barang : "; cin>>jumlahb[a][b][c];
				cout<<endl;
				cout<<"Ingin menambahkan barang lagi (y/n)? "; cin>>ulang;
				system("cls");
				}while(ulang=='y');
				if(ulang!='y')
				{main();}
			}
		
			else
			{
				cout<<"MOHON MEMBACA ATURAN DENGAN BENAR. TERIMA KASIH!!!\n\n";
				system("cls");
				main ();
			}
			break;
			
		case 2	:
		
			custommer();
			cout<<"\nTotal pembelian anda adalah Rp "<<akhirh;
			cout<<"\nUang yang dibayarkan	: Rp "; cin>>bayar;
			kembalian=bayar-akhirh;
			cout<<"Uang kembalian anda adalah Rp "<<kembalian;
			cout<<"\n\nTerima kasih sudah berbelanja di toko kami.\nKami tunggu kedatangannya kembali :)";
			return 0;
			break;
					
		case 3	:
					
			cout<<"Terima Kasih sudah mengunjungi toko kami...";
			exit(1);
			break;
					
		default :
					
			cout<<"MOHON MEMBACA ATURAN DENGAN BENAR. TERIMA KASIH!!!\n\n";
			system("pause");
			system("cls");
			main ();
	}
}

void password ()
{
	do
	{		
		cout<<"\n=====HARAP LOGIN TERLEBIH DAHULU!!!=====";	
		cout<<"\nUsername	: ";cin>>user;
		cout<<"Password	: ";cin>>pass;
	
		if((user=="anjar" && pass=="trsc")||(user=="rifka" && pass=="carat"))
		{
			cout<<"\nSELAMAT DATANG OWNER\n";
			break;
		}
		
		else
		{
			cout<< "Username / Password Salah!!!";
			cout<<"\n========== Sisa kesempatan anda adalah "<<kesempatan<<"==========\n";
			kesempatan--;
			if (kesempatan<0)
			{cout<<"Login sudah melampaui batas maksimum\n\n";exit(1);}
		}
	}while(kesempatan>=0);
}

void owner1 ()
{
	cout<<"\n1. Barang Baru\n2. Re-Stock\n";
	cout<<"Barang jenis apa yang ingin dimasukkan? ";cin>>gudang;
							
	if (gudang==1) 
	{
		cout<<"\nketentuan kode barang baru : "<<"[a][b][c]";						
		cout<<"\na :	1. Elektronik\n	2. Keperluan Rumah\n	Kategori barang? "; cin>>a;
		if(a==1)
		{
			cout<<"\nb :	1. Smartphone\n	2. Aksesoris HP\n	3. Laptop\n";
			cout<<"	4. Smartwatch\n	5. Desktop\n	6. Kamera\n	Jenis Barang? "; cin>>b;
		}
								
		else if (a==2)
		{
			cout<<"\nb:	1. TV\n	2. Kulkas\n	3. Mesin Cuci\n	4. AC\n";
			cout<<"	5. Sound System\n	6. Microwave\n	Jenis Barang? "; cin>>b;
		}
									
		cout<<"Masukkan jumlah barang yang ingin ditambahkan : "; cin>>brg;
									
		for(i=1; i<=brg; i++)
		{
			cout<<"Kode barang ["<<a<<"]["<<b<<"]["<<i+10<<"]";
			cout<<endl<<"Nama Barang	: ";cin>>namab[a][b][i+10];
			cout<<"Harga Barang	: ";cin>>hargab[a][b][i+10];
			cout<<"Jumlah Barang	: ";cin>>jumlahb[a][b][i+10];	
		}
									
		cout<<"Apakah anda ingin menambahkan barang lagi (y/n) ? "; cin>>ulang;
		if(ulang=='y')
		{
			system("cls");
			owner1();
		}
		else 
		{
			system("cls");
			main();
		}
	}
							
	else if (gudang==2)
	{
		daftarb();
		cout<<endl<<"Item yang akan ditambah jumlahnya? ";cin>>c;
		cout<<"Jumlah barang : "; cin>>jumlahb[a][b][c];
		cout<<endl;
		cout<<"Apakah anda ingin menambahkan barang lagi (y/n) ? "; cin>>ulang;
		if(ulang=='y')
		{
			system("cls");
			owner1();
		}
		else 
		{
			system("cls");
			main();
		}
	}
							
	else
	{
		cout<<"MOHON MEMBACA ATURAN DENGAN BENAR. TERIMA KASIH!!!";
		system("cls");
		owner1();
	}
}

void owner2()
{
	daftarb();
	cout<<"\nYang anda cari terdaftar (y/n)? ";
	cin>>tidak;
	if(tidak=='n')
	{
		for(i=1; i<=brg; i++)
		{
			cout<<"Kode barang : ["<<a<<"]["<<b<<"]["<<i+10<<"]";
			cout<<endl<<"Nama Barang	: "<<namab[a][b][i+10];
			cout<<"\nJumlah Barang	: "<<jumlahb[a][b][i+10]<<endl<<endl;	
		}
	}
	else
	{
		cout<<"c : "; cin>>c;
		totalb[a][b][c]=awal+jumlahb[a][b][c];
		cout<<"Stok barang dengan kode ["<<a<<"]["<<b<<"]["<<c<<"] adalah "<<totalb[a][b][c];							
	}				
	cout<<"\nApakah anda ingin mengecek barang lagi (y/n) ? "; cin>>ulang;
	if(ulang=='y')
	{
		system("cls");
		owner2();
	}
	else 
	{
		system("cls");
		main();
	}
}

void custommer ()
{
	cout<<"\n==========WELCOME CUSTOMMER==========\n"<<endl;
	daftarb();
	cout<<"\nYang anda cari terdaftar (y/n)? ";
	cin>>tidak;
	
	if(tidak=='n')
	{	
		for(i=1; i<=brg; i++)
		{
			cout<<"Kode barang : ["<<a<<"]["<<b<<"]["<<i+10<<"]";
			cout<<endl<<"Nama Barang	: "<<namab[a][b][i+10];
			cout<<"\nHarga Barang 	: Rp "<<hargab[a][b][i+10];
			cout<<"\nJumlah Barang	: "<<jumlahb[a][b][i+10];
			cout<<endl<<"Item yang ingin dibeli : "; cin>>c;
			totalb[a][b][c]=jumlahb[a][b][c];	
		}
	}
	else
	{
		cout<<endl<<"Item yang ingin dibeli : "; cin>>c;
		daftarh();
		totalb[a][b][c]=awal+jumlahb[a][b][c];
	}
	
	cout<<"\nHarga barang = Rp "<<hargab[a][b][c];
	cout<<"\nStock barang = "<<totalb[a][b][c];
	cout<<"\nJumlah barang yang ingin dibeli = "; cin>>beli;
	
	totalh=hargab[a][b][c]*beli;
	
	cout<<"Total harga = Rp "<<totalh;
	cout<<"\nApakah anda yakin akan membeli barang tersebut (y/n) ? "; cin>>lanjut;
	
	if(lanjut=='y'){
		cout<<"\nAda barang yang ingin anda beli lagi (y/n)? "; cin>>ulang;
		akhirh=akhirh+totalh;
		
		if(ulang=='y')
		{
			system("cls");
			custommer();
		}
	}
	
	else custommer();
	
}

void daftarh()
{
	hargab[1][1][1]=10999000;	hargab[2][1][1]=49999000;
	hargab[1][1][2]=13499000;	hargab[2][1][2]=7999000;
	hargab[1][1][3]=6699000;	hargab[2][1][3]=4999000;
	hargab[1][1][4]=449900;		hargab[2][1][4]=4499000;
	hargab[1][1][5]=2259000;	hargab[2][1][5]=34999000;
	hargab[1][1][6]=20999000;
	hargab[1][1][7]=18999000;
	hargab[1][1][8]=12999000;
	hargab[1][1][9]=10299000;
	hargab[1][1][10]=649900;
	
	hargab[1][2][1]=50000;		hargab[2][2][1]=22999000;
	hargab[1][2][2]=400000;		hargab[2][2][2]=18999000;
	hargab[1][2][3]=100000;		hargab[2][2][3]=14999000;
	hargab[1][2][4]=150000;		hargab[2][2][4]=12499000;
	hargab[1][2][5]=250000;		hargab[2][2][5]=16999000;
	hargab[1][2][6]=550000;
	hargab[1][2][7]=3500000;
	hargab[1][2][8]=1100000;
	hargab[1][2][9]=899000;
	hargab[1][2][10]=500000;
	
	hargab[1][3][1]=15999000;	hargab[2][3][1]=10499000;
	hargab[1][3][2]=18999000;	hargab[2][3][2]=12499000;
	hargab[1][3][3]=26499000;	hargab[2][3][3]=8999000;
	hargab[1][3][4]=20599000;	hargab[2][3][4]=12499000;
	hargab[1][3][5]=10499000;	hargab[2][3][5]=8999000;
	hargab[1][3][6]=33499000;
	hargab[1][3][7]=25499000;
	hargab[1][3][8]=13499000;
	hargab[1][3][9]=11999000;
	hargab[1][3][10]=19100000;
	
	hargab[1][4][1]=3999000;	hargab[2][4][1]=7999000;
	hargab[1][4][2]=3899000;	hargab[2][4][2]=5999000;
	hargab[1][4][3]=5299000;	hargab[2][4][3]=8999000;
	hargab[1][4][4]=1999000;	hargab[2][4][4]=8999000;
	hargab[1][4][5]=3899000;	hargab[2][4][5]=9999000;
	hargab[1][4][6]=5299000;
	hargab[1][4][7]=4550000;
	hargab[1][4][8]=17299000;
	hargab[1][4][9]=2750000;
	hargab[1][4][10]=3399000;
	
	hargab[1][5][1]=13999000;	hargab[2][5][1]=4999000;
	hargab[1][5][2]=23499000;	hargab[2][5][2]=8999000;
	hargab[1][5][3]=17499000;	hargab[2][5][3]=87999000;
	hargab[1][5][4]=19999000;	hargab[2][5][4]=48499000;
	hargab[1][5][5]=3999000;	hargab[2][5][5]=9999000;
	hargab[1][5][6]=302599000;
	hargab[1][5][7]=119499000;
	hargab[1][5][8]=21999000;
	hargab[1][5][9]=33499000;
	hargab[1][5][10]=15999000;
	
	hargab[1][6][1]=5699000;	hargab[2][6][1]=1999000;
	hargab[1][6][2]=9999000;	hargab[2][6][2]=3499000;
	hargab[1][6][3]=7299000;	hargab[2][6][3]=2499000;
	hargab[1][6][4]=5799000;	hargab[2][6][4]=2999000;
	hargab[1][6][5]=86999000;	hargab[2][6][5]=3999000;
	hargab[1][6][6]=47999000;
	hargab[1][6][7]=43999000;
	hargab[1][6][8]=72999000;
	hargab[1][6][9]=57999000;
	hargab[1][6][10]=49999000;
}

void daftarb()
{
	cout<<"ketentuan kode barang : ";
	cout<<"[a][b][c]";
								
	cout<<"\na :	1. Elektronik\n	2. Keperluan Rumah\n	Kategori barang? "; cin>>a;
								
	if(a==1)
	{
		cout<<"\nb :	1. Smartphone\n	2. Aksesoris HP\n	3. Laptop\n";
		cout<<"	4. Smartwatch\n	5. Desktop\n	6. Kamera\n	Jenis Barang? "; cin>>b;
		if (b==1)
		{
			cout<<"\nc :	1. Samsung Galaxy S9\n		Rp 10.999.000\n	2.Samsung Galaxy Note 9\n		Rp 13.499.000\n	3.Samsung Galaxy A8+\n		Rp 6.699.000\n"
			<<"	4.Samsung Galaxy A7\n		Rp 4.499.000\n	5.Samsung Galaxy J4+\n		Rp 2.259.000\n	6.iPhone Xs Max\n		Rp 20.999.000\n"
			<<"	7.iPhone X\n		Rp 18.999.000\n	8.iPhone 8\n		Rp 12.999.000\n	9.iPhone 7+\n		Rp 10.299.000\n	10.iPhone SE\n		Rp 6.499.000";
		}
									
		else if (b==2)
		{
			cout<<"\nc :	1. Samsung Clear Cover\n		Rp 50.000\n	2. Samsung Neon Case\n		Rp 400.000\n	3. Samsung In-Ear Monitor\n		Rp 100.000\n"
			<<"	4. Samsung Original Charger\n		Rp 150.000\n	5. Samsung Original Battery\n		Rp 250.000\n	6. Apple Earpods\n		Rp 550.000\n"
			<<"	7. Apple Airpods\n		Rp 3.500.000\n	8. iPhone Leather Case\n		Rp 1.100.000\n	9. iPhone Lightning Dock\n		Rp 899.000\n	10. Lightning USB Cable\n		Rp 500.000";
		}
									
		else if (b==3)
		{
			cout<<"\nc :	1. Samsung Notebook 9 Pro\n		Rp 15.999.000\n	2. Samsung Notebook 9 Pen\n		Rp 18.999.000\n	3. Samsung Notebook Odyssey Z\n		Rp 26.499.000\n"
			<<"	4. Samsung Notebook Odyssey\n		Rp 20.599.000\n	5. Samsung Notebook 7 Spin\n		Rp 10.499.000\n	6. Apple MacBook Pro 15 Inch\n		Rp 33.499.000\n"
			<<"	7. Apple MacBook Pro 13 Inch\n		Rp 25.499.000\n	8. Apple MacBook Air 13.3 Inch\n		Rp 13.499.000\n	9. Apple MacBook Air 11.6 Inch\n		Rp 11.999.000\n	10. Apple MacBook\n		Rp 19.100.000";
		}
									
		else if (b==4)
		{
			cout<<"\nc :	1. Samsung Galaxy Watch\n		Rp 3.999.000\n	2. Samsung Gear Fit2 Pro\n		Rp 3.899.000\n	3. Samsung Gear Sport\n		Rp 5.299.000\n"
			<<"	4. Samsung Gear 360\n		Rp 1.999.000\n	5. Samsung Gear IconX\n		Rp 3.899.000\n	6. Apple Watch Series 4\n		Rp 5.299.000\n"
			<<"	7. Apple Watch Nike+\n		Rp 4.550.000\n	8. Apple Watch Hermès\n		Rp 17.299.000\n	9. Apple Watch Series 3\n		Rp 2.750.000\n	10. Apple Watch Series 2\n		Rp 3.399.000";
		}
									
		else if (b==5)
		{
			cout<<"\nc :	1. Samsung All-In-One 24 Inch\n		Rp 13.999.000\n	2. Samsung ArtPC Pulse (Core i7)\n		Rp 23.499.000\n	3. Samsung ArtPC Pulse (Core i5)\n		Rp 17.499.000\n"
			<<"	4. Samsung 49 Inch Gaming Monitor\n		Rp 19.999.000\n	5. Samsung 27 Inch Monitor\n		Rp 3.999.000\n	6. Apple iMac Pro 18-Core\n		Rp 302.599.000\n"
			<<"	7. Apple iMac Pro 10-Core\n		Rp 119.499.000\n	8. Apple iMac 5k\n		Rp 21.999.000\n	9. Apple iMac 4k\n		Rp 33.499.000\n	10. Apple iMac 21.5 Inch\n		Rp 15.999.000";
		}
									
		else if (b==6)
		{
			cout<<"\nc :	1. GoPro Hero 7\n		Rp 5.699.000\n	2. GoPro Fusion\n		Rp 9.999.000\n	3. GoPro Hero 6\n		Rp 7.299.000\n"
			<<"	4. GoPro Hero 5\n		Rp 5.799.000\n	5. Nikon D5\n		Rp 86.999.000\n	6. Nikon D810A\n		Rp 47.999.000\n"
			<<"	7. Nikon D850\n		Rp 43.999.000\n	8. Canon EOS-1D X Mark II\n		Rp 72.999.000\n	9. Canon EOS 5DS R\n		Rp 57.999.000\n	10. Canon 5D Mark IV Body\n		Rp 49.999.000\n";
		}
	}
								
	else if (a==2)
	{
		cout<<"\nb:	1. TV\n	2. Kulkas\n	3. Mesin Cuci\n	4. AC\n";
		cout<<"	5. Sound System\n	6. Microwave\n	Jenis Barang? "; cin>>b;
									
		if(b==1)
		{
			cout<<"\nc:	1. Samsung QLED TV\n		Rp 49.999.000\n	2. Samsung UHD TV\n		Rp 7.999.000\n	3. Samsung Full HD TV\n		Rp 4.999.000\n"
			<<"	4. Apple TV 4K\n		Rp 4.499.000\n	5. Apple TV 4th Gen\n		Rp 34.999.000";
		}
									
		else if(b==2)
		{
			cout<<"\nc:	1. Samsung Side by Side with Twin Cooling Plus Refrigerator\n		Rp 22.999.000\n	2. Samsung Side by Side with Twin Cooling Refrigerator\n		Rp 18.999.000\n"
			<<"	3. Samsung Side by Side with Digital Inverter Refrigerator\n		Rp 14.999.000\n	4. Samsung Refrigerator with Twin Cooling Plus\n		Rp 12.499.000\n"
			<<"	5. Samsung Refrigerator with Digital Inverter\n		Rp 16.999.000";
		}
									
		else if(b==3)
		{
			cout<<"\nc:	1. Samsung Top Loading with Wobble Technology Washing Machine\n		Rp 10.499.000\n	2. Samsung Top Loading with Magic Filter Washing Machine\n		Rp 12.499.000\n"
			<<"	3. Samsung Top Loading with Diamond Drum Washing Machine\n		Rp 8.999.000\n	4. Samsung Front Load Combo Washer with AddWash\n		Rp 8.999.000\n"
			<<"	5. Samsung Front Loading with Wobble Technology Washing Machine\n		Rp 8.999.000";
		}
									
		else if(b==4)
		{
			cout<<"\nc:	1. Samsung Wall Mount A3050 Inverter Air Conditioner\n		Rp 7.999.000\n	2. Samsung Wall Mount A3050 Non-Inverter Air Conditioner\n		Rp 5.999.000\n"
			<<"	3. Samsung Wall Mount Jungfrau Air Conditioner\n		Rp 8.999.000\n	4. Daikin Air Purifier Humidifying\n		Rp 8.999.000\n"
			<<"	5. Daikin Wall Mount Air Conditioner\n		Rp 9.999.000";
		}
									
		else if(b==5)
		{
			cout<<"\nc:	1. Samsung Soundbar Dolby Atmos\n		Rp 4.999.000\n	2. Samsung Blu-ray Home Teater\n		Rp 8.999.000\n	3. JBL Flip 3 Speaker\n		Rp 87.999.000\n"
			<<"	4. JBL Charge 3 Speaker\n		Rp 48.499.000\n	5. JBL Go Portable Bluetooth Speaker\n		Rp 9.999.000";
		}
									
		else if(b==6)
		{
			cout<<"\nc:	1. Samsung Over-The-Range Microwave with Fingerprint Resistant Steel\n		Rp 1.999.000\n	2. Samsung Grill 28 L Microwave\n		Rp 3.499.000\n"
			<<"	3. Samsung Solo 28 L Microwave\n		Rp 2.499.000\n	4. Samsung Grill with Smart Moisture Sensor 23 L Microwave\n		Rp 2.999.000\n"
			<<"	5. Samsung Solo with Ceramic Enamel 23 L Microwave\n		Rp 3.999.000";
		}
	}
	cout<<endl;
}
