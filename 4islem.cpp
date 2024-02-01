#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");

	int sayi1, sayi2;
	string secim;
	int toplam = 0;
	string cvp;
	do
	{
		cout << "1. Sayıyı giriniz: ";
		cin >> sayi1;

		cout << "2. Sayıyı Giriniz: ";
		cin >> sayi2;

		cout << "Yapmak istediğiniz işlemi seçiniz: " << "\n";
		cout << "(1- Toplama)" << "\n";
		cout << "(2- Çıkarma)" << "\n";
		cout << "(3- Çarpma)" << "\n";
		cout << "(4- Bölme)" << "\n";
		cin >> secim;
		

		if (secim == "1" || secim == "Toplama" || secim == "toplama")
		{
			toplam = sayi1 + sayi2;
			cout << sayi1 << " + " << sayi2 << " = " << toplam << "\n";
		}
		else if (secim == "2" || secim == "Çıkarma" || secim == "çıkarma" || secim == "cıkarma" || secim == "Cıkarma")
		{
			toplam = sayi1 - sayi2;
			cout << sayi1 << " - " << sayi2 << " = " << toplam << "\n";
		}
		else if (secim == "3" || secim == "Çarpma" || secim == "çarpma" || secim == "carpma" || secim == "Carpma")
		{
			toplam = sayi1 * sayi2;
			cout << sayi1 << " * " << sayi2 << " = " << toplam << "\n";
		}
		else if (secim == "4" || secim == "Bölme" || secim == "bölme" || secim == "bolme" || secim == "Bolme")
		{
			toplam = sayi1 / sayi2;
			cout << sayi1 << " / " << sayi2 << " = " << toplam << "\n";
		}
		else
		{
			cout << "Lütfen yönergelere uygun işlem seçimi yapınız!" << "\n";
		}

		cout << "Devam Etmek İster misiniz? (E/H): ";
		cin >> cvp;

	} while (cvp == "e" || cvp == "E");
}