

// KADÝR KAÐAN ULUDAÐ 01/03/2024 02:32


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// Ana algoritma
int main() {
	int n;
	// kullanýcýnýn gireceði  tam sayý. Oluþturulan random dizinin uzunluðunu temsil eder.

	// Buradaki kýsým algoritmanýn kýsýtlarýný ifade etmek için yazýlmýþtýr. 
	//cout << "Kisitlamalar: 2< n <1000 " << endl << "1 < k < 100" << endl << "- 1000 < array [i] < 1000" << endl ;
	cout << "Lutfen olusturulacak random dizinin uzunlugunu belirleyiniz. n: ?" << endl;
	cin >> n;

	if (2 < n && n < 1000) {
		srand(time(nullptr)); // Random sayý üretebilmek için baþlangýç noktasý belirlenir.
		vector<int> dizi(n);

		for (int i = 0; i < n; i++) {
			dizi[i] = rand() % 2001 - 1000;
		}

		cout << "Dizi: (";
		for (int i = 0; i < n; i++) {
			cout << dizi[i];
			if (i != n - 1) {
				cout << ",";
			}
		}

		cout << ")" << endl;
		string ciftlerDizisi{};
		vector<string> indisler{};
		int diziUzunluk = dizi.size();



		int k; // Toplamýn bölüneceði tam sayýyý ifade eder.
		cout << "Lutfen olusturulacak ciftlerin toplaminin bolunecegi sayiyi giriniz. k: ?" << endl;
		cin >> k;

		if (1 < k && k < 100) {
			for (int i = 0; i < n; i++) {
				for (int j = i + 1; j < diziUzunluk; j++) {
					int toplam = dizi[i] + dizi[j];
					if (toplam % k == 0) {
						ciftlerDizisi += "(" + to_string(dizi[i]) + "," + to_string(dizi[j]) + ")";

						// 67.satýrda neden yorum satýrý oluþturulduðu açýklandý.
						//	if (!(i == n-2 && j == diziUzunluk-1)) {
						//		ciftlerDizisi += ",";
						//	}
						indisler.push_back("(" + to_string(i) + "," + to_string(j) + ")");
					}
				}
			}
		}
		else {
			cout << "Lutfen kisitlamalara uygun k degeri giriniz." << endl;
			exit(1);
		}
		//	Buradaki kod dizini toplamlarý tam bölünebilen sayýlarýn çiftlerini yazdýrmak için kullanýlmýþtýr. Ancak projede istenilen sadece sayýlarýn indisleri indisler[a]'dýr. Bu yüzden algoritmasý mevcuttur ancak çýktýsý alýnmamasý için yorum satýrý oluþturulmuþtur.
		//	cout << "Tam bolen cift dizileri: " << ciftlerDizisi << endl;
		cout << "Tam bolen cift dizilerinin indisleri: ";
		for (int a = 0; a < indisler.size(); a++) {
			cout << indisler[a];
			if (a != indisler.size() - 1) {
				cout << ",";
			}
		}
		cout << endl;
	}
	else {
		cout << "Lutfen belirtilen kisitlamalara uygun bir n  degeri giriniz." << endl;
		exit(1);
	}
	return 0;
}
