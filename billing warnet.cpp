/* Perhitungan Billing Warnet */
/* Nurma Sari Laras Aji */
/* 20051397062 */
/* 2020B */

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int j1jam, j1menit, j1detik, j2jam, j2menit, j2detik, jumlahdetik, jumlahbayar, selisihjam, selisihmenit, selisihdetik;
	int tarif = 5000;
	string pagar = "========================================================================================================";
	
	cout << pagar << endl;
	cout << "Selamat Datang di Perhitungan Billing Warnet" << endl;
	cout << pagar << endl;
	
	cout << "Memulai : " << endl;
	cout << "Masukkan jam mulai billing : "; cin >> j1jam;
	cout << "Masukkan menit mulai billing : "; cin >> j1menit;
	cout << "Masukkan detik mulai billing : "; cin >> j1detik;
	cout << endl;
	
	cout << pagar << endl;
	cout << "Mengakhiri : " << endl;
	cout << "Masukkan jam mengakhiri billing : "; cin >> j2jam;
	cout << "Masukkan menit mengakhiri billing : "; cin >> j2menit;
	cout << "Masukkan detik mengakhiri billing : "; cin >> j2detik;
	cout << pagar << endl;
	
	selisihjam = j2jam - j1jam;
	selisihmenit = j2menit - j1menit;
	selisihdetik = j2detik - j1detik;
	
	jumlahdetik = (selisihjam * 3600) + (selisihmenit * 60) + selisihdetik;
	jumlahbayar = jumlahdetik * tarif / 3600;
	
	cout << pagar << endl;
	cout << "Hasilnya : " << endl;
	cout << "Lama pemakaian anda adalah : " << selisihjam << "Jam," << selisihmenit << "Menit" << selisihdetik << "Detik" << endl;
	cout << "Jumlah pembayaran billingnya sebanyak Rp. " << jumlahbayar << ",-" << endl;
	cout << pagar << endl;
	cout << "Terimakasih" << endl;
	
	getch ();
	return 0;
}
