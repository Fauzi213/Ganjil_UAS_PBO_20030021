//Nama: Fauzi Al Rasid
//NIM : 20030021
//Program contoh penerapan inheritance

#include <iostream>
#include <conio.h>
using namespace std;

class bangun_datar
{
  protected:
 	// sisiA, sisiB, sisiC
       double sA,sB,sC;
  public:
       virtual void masukkan()=0;
       virtual void display()=0;
};

//untuk menghitung luas bujursangkar
class luas_bujursangkar : public bangun_datar
{
   public:
    	void masukkan(void)
   		{
       		cout<<"\n\n Menghitung Luas Bujursangkar \n\n";
       		cout<<" Masukkan Angka Untuk : \n";
       		cout<<" SisiA = "; 
	  		cin>>sA;
       		cout<<" SisiB   = "; 
	   		cin>>sB;
   		}
   		
    	void display(void)
    	{
       	double luas;
        luas = sA * sB;
       		cout<<"----------------------------------------\n";
       		cout<<"----------------------------------------\n";
       		cout<<"Diketahui : SisiA = "<<sA;
       		cout<<"\n	    SisiB   = "<<sB;   
       		cout<<"\n\nDitanya : Luas Bujursangkar ";
       		cout<<"\n\nPenyelesaian : ";
       		cout<<"\n\nLuas Bujursangkar = sisiA x sisiB ";
       		cout<<"\n                    = "<< sA<< " x "<<sB;
      	  	cout<<"\n                    = "<<luas;
       		cout<<"\n----------------------------------------\n";
    	}
};

//untuk menghitung volume kubus
class volume_kubus : public bangun_datar
{
   	public:
		void masukkan(void)
    	{
       		cout<<"\n\nMenghitung Volume Kubus\n\n";
       		cout<<" Masukkan Angka Untuk : \n";
       		cout<<" SisiA = "; 
	   		cin>>sA;
       		cout<<" SisiB       = "; 
	   		cin>>sB;
	   		cout<<" SisiC       = "; 
	   		cin>>sC;
    	}
    	
		void display(void)
    	{
       	double volume;
       	volume = sA*sB*sC;
       		cout<<"****************************************\n";
       		cout<<"****************************************\n";
       		cout<<"Diketahui : SisiA = "<<sA;
       		cout<<"\n	    SisiB   = "<<sB;
			cout<<"\n	    SisiC   = "<<sC;   
       		cout<<"\n\nDitanya : Volume Kubus ";
       		cout<<"\n\nPenyelesaian : ";
       		cout<<"\n\nVolume Tabung = sisiA x sisiB x sisiC ";
       		cout<<"\n              = sisiA x "<<sA<< " x " <<sB<< " x " <<sC;
       		cout<<"\n              = "<<volume;
       		cout<<"\n**************************************\n";
    	}
};


int main()
{
	system("cls");
	luas_bujursangkar luas;
	volume_kubus volume;

bangun_datar *list[3];
list[0]=&luas;
list[1]=&volume;

int pilihan;
while(1)
{
system("cls");
  cout<<"*********************************************";
  cout<<"\n|  PROGRAM MENGHITUNG LUAS DAN VOLUME   |\n";
  cout<<"*******************************************\n";
  cout<<"| 1) Luas Bujursangkar           |\n";
  cout<<"| 2) Volume Kubus		   |\n";
  cout<<"*******************************************\n";
  cout<<"Masukkan Pilihan: ";
  cin>>pilihan;
  
  if(pilihan==1){
          list[0]->masukkan();
          list[0]->display();
          getch();
          }
  else if (pilihan==2){
          list[1]->masukkan();
          list[1]->display();
          getch();
          }
  else if (pilihan==3){
          list[2]->masukkan();
          list[2]->display();
          getch();
          }
  else
     exit(1);
}}

