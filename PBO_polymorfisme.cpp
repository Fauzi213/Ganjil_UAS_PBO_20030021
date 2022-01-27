// Nama : Fauzi Al Rasid
// NIM  : 20030021
//	Program contoh penerapan polimorfisme
#include <stdio.h>
#include <iostream>

class Bujursangkar
{	
		protected :
			int sisiA, sisiB;
			long luas;
		public :
			Bujursangkar (int SisiA, int SisiB);
			int ambil_sisiA();
			int ambil_sisiB();
			virtual void hitung(); // metode virtual
			void ambil (long& Luas);
};
class Kubus : public Bujursangkar
{
		private :
			int sisiC;
			int volume;
		public :
			Kubus (int SisiA, int SisiB, int SisiC);
			int ambil_sisiC();
			virtual void hitung(); // metode virtual
void ambil (long& Volume);
};
Bujursangkar::Bujursangkar (int SisiA, int SisiB)
{
		sisiA = SisiA;
		sisiB = SisiB;
}
int Bujursangkar::ambil_sisiA()
{
		return sisiA;
}

int Bujursangkar::ambil_sisiB()
{
		return sisiB;
}

void Bujursangkar::hitung()
{
		luas = sisiA * sisiB;
}

void Bujursangkar::ambil (long& Luas)
{
		Luas = luas;
}
Kubus::Kubus (int SisiA, int SisiB, int SisiC):Bujursangkar (SisiA, SisiB)
{
		sisiC = SisiC;
}

int Kubus::ambil_sisiC()
{
		return sisiC;
}
void Kubus::hitung()
{
		Bujursangkar::hitung();
		volume = sisiA*sisiB*sisiC;
}

void Kubus::ambil(long& Volume)
{
		Bujursangkar::ambil(luas);
		Volume = volume;
	}
	int main ()
{
		Bujursangkar A (5, 5);
		Kubus B (5, 5, 5);
		std::cout << std::endl;
std::cout << "Menghitung luas, dan volume bangun" << std::endl;
std::cout << "==============================================="<< std::endl;
		A.hitung();

		long l;
		A.ambil(l);
		std::cout << "Bujursangkar sisi-sisinya : " << std::endl;
std::cout << "SisiA = " << A.ambil_sisiA() << std::endl;
		std::cout << "SisiB = " << A.ambil_sisiB() << std::endl;
std::cout << "Memiliki luas " << l << std::endl << std::endl;

		long v;
		B.hitung();
		B.ambil(v);
std::cout << "Kubus dengan rusuk-rusuknya : " << std::endl;
std::cout << "SisiA = " << B.ambil_sisiA() << std::endl;
		std::cout << "SisiB = " << B.ambil_sisiB() << std::endl;
std::cout << "SisiC = " << B.ambil_sisiC() << std::endl;
std::cout << "Memiliki volume " << v <<std::endl;

		std::cout << std::endl;
}

	
		
		 