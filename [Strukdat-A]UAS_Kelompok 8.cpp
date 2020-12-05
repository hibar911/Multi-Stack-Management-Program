#include <iostream>
using namespace std;

const int maxTumpukan1 = 15;
const int maxTumpukan2 = 15;
const int maxTumpukan3 = 15;
const int maxTumpukan4 = 15;
const int maxTumpukan5 = 15;
const int maxTumpukan6 = 15;

void identitas() {
	cout << "KELOMPOK 8 STRUKTUR DATA & ALGORITMA 2A RPL\n";
	cout << "ANGGOTA: \n";
	cout << "- Hibar Taufikurachman 1907774\n";
	cout << "- Mohammad Aditya Ferdian 1909468\n";
	cout << "- Yudith Fabillah Arsy Pratama 1904455\n\n";
	cout << "|| UAS STRUKTUR DATA & ALGORITMA ||\n\n";
	cout << "UPDATE:\n";
	cout << "1. Perubahan nama program dari 'PROGRAM MANAJEMEN TUMPUKKAN BARANG' menjadi 'MULTI-STACK MANAGEMENT PROGRAM'\n\n";
}

struct stack1 {
	int top1;
	string tmp1[maxTumpukan1];
} st1;

struct stack2 {
	int top2;
	string tmp2[maxTumpukan2];
} st2;

struct stack3 {
	int top3;
	string tmp3[maxTumpukan3];
} st3;

struct stack4 {
	int top4;
	string tmp4[maxTumpukan4];
} st4;

struct stack5 {
	int top5;
	string tmp5[maxTumpukan5];
} st5;

struct stack6 {
	int top6;
	string tmp6[maxTumpukan6];
} st6;

void createStack() {
	st1.top1 = -1;
	st2.top2 = -1;
	st3.top3 = -1;
	st4.top4 = -1;
	st5.top5 = -1;
	st6.top6 = -1;
}

bool isEmpty1() {
	if (st1.top1 == -1) {
		return true;
	}
	else {
		return false;
	}
}
bool isEmpty2() {
	if (st2.top2 == -1) {
		return true;
	}
	else {
		return false;
	}
}
bool isEmpty3() {
	if (st3.top3 == -1) {
		return true;
	}
	else {
		return false;
	}
}
bool isEmpty4() {
	if (st4.top4 == -1) {
		return true;
	}
	else {
		return false;
	}
}
bool isEmpty5() {
	if (st5.top5 == -1) {
		return true;
	}
	else {
		return false;
	}
}
bool isEmpty6() {
	if (st6.top6 == -1) {
		return true;
	}
	else {
		return false;
	}
}

bool isFull1() {
	if (st1.top1 == maxTumpukan1 - 1) {
		return true;
	}
	else {
		return false;
	}
}
bool isFull2() {
	if (st2.top2 == maxTumpukan2 - 1) {
		return true;
	}
	else {
		return false;
	}
}
bool isFull3() {
	if (st3.top3 == maxTumpukan3 - 1) {
		return true;
	}
	else {
		return false;
	}
}
bool isFull4() {
	if (st4.top4 == maxTumpukan4 - 1) {
		return true;
	}
	else {
		return false;
	}
}
bool isFull5() {
	if (st5.top5 == maxTumpukan5 - 1) {
		return true;
	}
	else {
		return false;
	}
}
bool isFull6() {
	if (st6.top6 == maxTumpukan6 - 1) {
		return true;
	}
	else {
		return false;
	}
}

void push1(string tumpukanTempat1) {
	if (isFull1() == 0) {
		st1.top1++;
		st1.tmp1[st1.top1] = tumpukanTempat1;
		cout << "Barang " << "[" << st1.tmp1[st1.top1] << "]" << " Masuk ke tumpukan 1" << endl;
	}
	else {
		cout << "Tumpukan 1 penuh" << endl;
	}
}

void push2(string tumpukanTempat2) {
	if (isFull2() == 0) {
		st2.top2++;
		st2.tmp2[st2.top2] = tumpukanTempat2;
		cout << "Barang " << "[" << st2.tmp2[st2.top2] << "]" << " Masuk ke tumpukan 2" << endl;
	}
	else {
		cout << "Tumpukan 2 penuh" << endl;
	}
}

void push3(string tumpukanTempat3)
{
	if (isFull3() == 0) {
		st3.top3++;
		st3.tmp3[st3.top3] = tumpukanTempat3;
		cout << "Barang " << "[" << st3.tmp3[st3.top3] << "]" << " Masuk ke tumpukan 3" << endl;
	}
	else {
		cout << "Tumpukan 3 penuh" << endl;
	}
}

void push4(string tumpukanTempat4)
{
	if (isFull4() == 0) {
		st4.top4++;
		st4.tmp4[st4.top4] = tumpukanTempat4;
		cout << "Barang " << "[" << st4.tmp4[st4.top4] << "]" << " Masuk ke tumpukan 4" << endl;
	}
	else {
		cout << "Tumpukan 4 penuh" << endl;
	}
}

void push5(string tumpukanTempat5) {
	if (isFull5() == 0) {
		st5.top5++;
		st5.tmp5[st5.top5] = tumpukanTempat5;
		cout << "Barang " << "[" << st5.tmp5[st5.top5] << "]" << " Masuk ke tumpukan 5" << endl;
	}
	else {
		cout << "Tumpukan 5 penuh" << endl;
	}
}

void push6(string tumpukanTempat6) {
	if (isFull6() == 0) {
		st6.top6++;
		st6.tmp6[st6.top6] = tumpukanTempat6;
		cout << "Barang " << "[" << st6.tmp6[st6.top6] << "]" << " Masuk ke tumpukan 6" << endl;
	}
	else {
		cout << "Tumpukan 6 penuh" << endl;
	}
}



void pop1(string tumpukanTempat1) {
	if (isEmpty1() == 1) {
		cout << "Tumpukan 1 kosong" << endl;
	}
	else {
		cout << "Barang yang keluar dari Tumpukan 1" << st1.tmp1[st1.top1] << endl;
		st1.tmp1[st1.top1] = tumpukanTempat1;
		st1.top1--;
	}
}

void pop2(string tumpukanTempat2) {
	if (isEmpty2() == 1) {
		cout << "Tumpukan 2 kosong" << endl;
	}
	else {
		cout << "Barang yang keluar dari Tumpukan 2" << st2.tmp2[st2.top2] << endl;
		st2.tmp2[st2.top2] = tumpukanTempat2;
		st2.top2--;
	}
}

void pop3(string tumpukanTempat3) {
	if (isEmpty3() == 1) {
		cout << "Tumpukan 3 kosong" << endl;
	}
	else {
		cout << "Barang yang keluar dari Tumpukan 3" << st3.tmp3[st3.top3] << endl;
		st3.tmp3[st3.top3] = tumpukanTempat3;
		st3.top3--;
	}
}

void pop4(string tumpukanTempat4) {
	if (isEmpty4() == 1) {
		cout << "Tumpukan 4 kosong" << endl;
	}
	else {
		cout << "Barang yang keluar dari Tumpukan 4" << st4.tmp4[st4.top4] << endl;
		st4.tmp4[st4.top4] = tumpukanTempat4;
		st4.top4--;
	}
}

void pop5(string tumpukanTempat5) {
	if (isEmpty5() == 1) {
		cout << "Tumpukan 5 kosong" << endl;
	}
	else {
		cout << "Barang yang keluar dari Tumpukan 5" << st5.tmp5[st5.top5] << endl;
		st5.tmp5[st5.top5] = tumpukanTempat5;
		st5.top5--;
	}
}

void pop6(string tumpukanTempat6) {
	if (isEmpty6() == 1) {
		cout << "Tumpukan 6 kosong" << endl;
	}
	else {
		cout << "Barang yang keluar dari Tumpukan 6" << st6.tmp6[st6.top6] << endl;
		st6.tmp6[st6.top6] = tumpukanTempat6;
		st6.top6--;
	}
}

void push(string tumpukanTempat1, string tumpukanTempat2, string tumpukanTempat3, string tumpukanTempat4, string tumpukanTempat5, string tumpukanTempat6, int pilihPush) {
	cout << "ISI TUMPUKKAN PILIHAN" << endl;
	cout << "1. Isi Tumpukan 1" << endl;
	cout << "2. Isi Tumpukan 2" << endl;
	cout << "3. Isi Tumpukan 3" << endl;
	cout << "4. Isi Tumpukan 4" << endl;
	cout << "5. Isi Tumpukan 5" << endl;
	cout << "6. Isi Tumpukan 6" << endl;
	cout << "7. Batal" << endl;
	cout << "(1/2/3/4/5/6/7) ";
	cin >> pilihPush;

	if (pilihPush == 1) {
		cout << "Masukkan Kode/Nama Barang: ";
		cin >> tumpukanTempat1, tumpukanTempat2, tumpukanTempat3, tumpukanTempat4;
		push1(tumpukanTempat1);
	}
	else if (pilihPush == 2) {
		cout << "Masukkan Kode/Nama Barang: ";
		cin >> tumpukanTempat2, tumpukanTempat1, tumpukanTempat3, tumpukanTempat4, tumpukanTempat5, tumpukanTempat6;
		push2(tumpukanTempat2);
	}
	else if (pilihPush == 3) {
		cout << "Masukkan Kode/Nama Barang: ";
		cin >> tumpukanTempat3, tumpukanTempat1, tumpukanTempat2, tumpukanTempat4, tumpukanTempat5, tumpukanTempat6;
		push3(tumpukanTempat3);
	}
	else if (pilihPush == 4) {
		cout << "Masukkan Kode/Nama Barang: ";
		cin >> tumpukanTempat4, tumpukanTempat1, tumpukanTempat2, tumpukanTempat3, tumpukanTempat5, tumpukanTempat6;
		push4(tumpukanTempat4);
	}
	else if (pilihPush == 5) {
		cout << "Masukkan Kode/Nama Barang: ";
		cin >> tumpukanTempat5, tumpukanTempat1, tumpukanTempat2, tumpukanTempat3, tumpukanTempat4, tumpukanTempat6;
		push5(tumpukanTempat5);
	}
	else if (pilihPush == 6) {
		cout << "Masukkan Kode/Nama Barang: ";
		cin >> tumpukanTempat6, tumpukanTempat1, tumpukanTempat2, tumpukanTempat3, tumpukanTempat4, tumpukanTempat5;
		push6(tumpukanTempat6);
	}
	else if (pilihPush == 7) {
		cout << "AKSI DIBATALKAN!" << endl;
	}
	else {
		cout << "INPUT SALAH!" << endl;
	}
}

void pop(int pilihPop, string tumpukanTempat1, string tumpukanTempat2, string tumpukanTempat3, string tumpukanTempat4, string tumpukanTempat5, string tumpukanTempat6) {
	cout << "AMBIL BARANG DARI TUMPUKKAN PILIHAN" << endl;
	cout << "1. Ambil Barang dari Tumpukkan 1" << endl;
	cout << "2. Ambil Barang dari Tumpukkan 2" << endl;
	cout << "3. Ambil Barang dari Tumpukkan 3" << endl;
	cout << "4. Ambil Barang dari Tumpukkan 4" << endl;
	cout << "5. Ambil Barang dari Tumpukkan 5" << endl;
	cout << "6. Ambil Barang dari Tumpukkan 6" << endl;
	cout << "7. Batal" << endl;
	cout << "(1/2/3/4/5/6/7) ";
	cin >> pilihPop;
	cout << endl;

	if (pilihPop == 1) {
		pop1(tumpukanTempat1);
	}
	else if (pilihPop == 2) {
		pop2(tumpukanTempat2);
	}
	else if (pilihPop == 3) {
		pop3(tumpukanTempat3);
	}
	else if (pilihPop == 4) {
		pop4(tumpukanTempat4);
	}
	else if (pilihPop == 5) {
		pop5(tumpukanTempat5);
	}
	else if (pilihPop == 6) {
		pop6(tumpukanTempat6);
	}
	else if (pilihPop == 7) {
		cout << "AKSI DIBATALKAN!" << endl;
	}
	else {
		cout << "INPUT SALAH!" << endl;
	}
}


void pindah(int pindah0, int pindah1, string tumpukanTempat1, string tumpukanTempat2, string tumpukanTempat3, string tumpukanTempat4, string tumpukanTempat5, string tumpukanTempat6) {
	cout << "PINDAHKAN BARANG DARI TUMPUKKAN: ";
	cin >> pindah0;
	cout << "KE TUMPUKKAN: ";
	cin >> pindah1;
	if (pindah0 == 1) {
		if (isEmpty1() == 1) {
			cout << "Tumpukan 1 Kosong" << endl;
		}
		else {
			cout << "Barang yang Pindah dari Tumpukkan 1: " << st1.tmp1[st1.top1] << endl;

			tumpukanTempat2 = st1.tmp1[st1.top1];
			tumpukanTempat3 = st1.tmp1[st1.top1];
			tumpukanTempat4 = st1.tmp1[st1.top1];
			tumpukanTempat5 = st1.tmp1[st1.top1];
			tumpukanTempat6 = st1.tmp1[st1.top1];
			st1.top1--;


			if (pindah1 == 2) {
				if (isFull2() == 0) {
					st2.top2++;
					st2.tmp2[st2.top2] = tumpukanTempat2;
					cout << "Barang " << "[" << st2.tmp2[st2.top2] << "]" << " Masuk ke Dalam Tumpukkan 2" << endl;
				}
				else {
					cout << "Tumpukkan 2 penuh" << endl;
				}
			}
			else if (pindah1 == 3) {
				if (isFull3() == 0) {
					st3.top3++;
					st3.tmp3[st3.top3] = tumpukanTempat3;
					cout << "Barang " << "[" << st3.tmp3[st3.top3] << "]" << " Masuk ke Dalam Tumpukkan 3" << endl;
				}
				else {
					cout << "Tumpukkan 3 penuh" << endl;
				}
			}
			else if (pindah1 == 4) {
				if (isFull4() == 0) {
					st4.top4++;
					st4.tmp4[st4.top4] = tumpukanTempat4;
					cout << "Barang " << "[" << st4.tmp4[st4.top4] << "]" << " Masuk ke Dalam Tumpukkan 4" << endl;
				}
				else {
					cout << "Tumpukkan 4 penuh" << endl;
				}
			}
			else if (pindah1 == 5) {
				if (isFull5() == 0) {
					st5.top5++;
					st5.tmp5[st5.top5] = tumpukanTempat5;
					cout << "Barang " << "[" << st5.tmp5[st5.top5] << "]" << " Masuk ke Dalam Tumpukkan 5" << endl;
				}
				else {
					cout << "Tumpukkan 5 penuh" << endl;
				}
			}
			else if (pindah1 == 6) {
				if (isFull6() == 0) {
					st6.top6++;
					st6.tmp6[st6.top6] = tumpukanTempat6;
					cout << "Barang " << "[" << st6.tmp6[st6.top6] << "]" << " Masuk ke Dalam Tumpukkan 6" << endl;
				}
				else {
					cout << "Tumpukkan 6 penuh" << endl;
				}
			}
			else {
				cout << "TUMPUKKAN TIDAK TERSEDIA!" << endl;
			}
		}
	}
	else if (pindah0 == 2) {
		if (isEmpty2() == 1) {
			cout << "Tumpukkan 2 Kosong" << endl;
		}
		else {
			cout << "Barang yang Pindah dari Tumpukkan 2: " << st2.tmp2[st2.top2] << endl;
			tumpukanTempat1 = st2.tmp2[st2.top2];
			tumpukanTempat3 = st2.tmp2[st2.top2];
			tumpukanTempat4 = st2.tmp2[st2.top2];
			tumpukanTempat5 = st2.tmp2[st2.top2];
			tumpukanTempat6 = st2.tmp2[st2.top2];
			st2.top2--;
			//tempat pindah bola
			if (pindah1 == 1) { //pindah ke tumpukan 1
				if (isFull1() == 0) {
					st1.top1++;
					st1.tmp1[st1.top1] = tumpukanTempat1;
					cout << "Barang " << "[" << st1.tmp1[st1.top1] << "]" << " Masuk ke Dalam Tumpukkan 1" << endl;
				}
				else {
					cout << "Tumpukan 1 Penuh" << endl;
				}
			}
			else if (pindah1 == 3) { //pindah ke tumpukan 3
				if (isFull3() == 0) {
					st3.top3++;
					st3.tmp3[st3.top3] = tumpukanTempat3;
					cout << "Barang " << "[" << st3.tmp3[st3.top3] << "]" << " Masuk ke Dalam Tumpukkan 3" << endl;
				}
				else {
					cout << "Tumpukkan 3 Penuh" << endl;
				}
			}
			else if (pindah1 == 4) { //pindah ke tumpukan 4
				if (isFull4() == 0) {
					st4.top4++;
					st4.tmp4[st4.top4] = tumpukanTempat4;
					cout << "Barang " << "[" << st4.tmp4[st4.top4] << "]" << " Masuk ke Dalam Tumpukkan 4" << endl;
				}
				else {
					cout << "Tumpukan 4 Penuh" << endl;
				}
			}
			else if (pindah1 == 5) {
				if (isFull5() == 0) {
					st5.top5++;
					st5.tmp5[st5.top5] = tumpukanTempat5;
					cout << "Barang " << "[" << st5.tmp5[st5.top5] << "]" << " Masuk ke Dalam Tumpukkan 5" << endl;
				}
				else {
					cout << "Tumpukkan 5 penuh" << endl;
				}
			}
			else if (pindah1 == 6) {
				if (isFull6() == 0) {
					st6.top6++;
					st6.tmp6[st6.top6] = tumpukanTempat6;
					cout << "Barang " << "[" << st6.tmp6[st6.top6] << "]" << " Masuk ke Dalam Tumpukkan 6" << endl;
				}
				else {
					cout << "Tumpukkan 6 penuh" << endl;
				}
			}
			else {
				cout << "TUMPUKKAN TIDAK TERSEDIA!" << endl;
			}
		}
	}
	else if (pindah0 == 3) {
		if (isEmpty3() == 1) {
			cout << "Tumpukan 3 kosong" << endl;
		}
		else {
			cout << "Barang yang Pindah dari Tumpukkan 3: " << st3.tmp3[st3.top3] << endl;
			tumpukanTempat1 = st3.tmp3[st3.top3];
			tumpukanTempat2 = st3.tmp3[st3.top3];
			tumpukanTempat4 = st3.tmp3[st3.top3];
			tumpukanTempat5 = st4.tmp4[st4.top4];
			tumpukanTempat6 = st4.tmp4[st4.top4];
			st3.top3--;
			//tempat pindah bola
			if (pindah1 == 2) { //pindah ke tumpukan 2
				if (isFull2() == 0) {
					st2.top2++;
					st2.tmp2[st2.top2] = tumpukanTempat2;
					cout << "Barang " << "[" << st2.tmp2[st2.top2] << "]" << " Masuk ke Dalam Tumpukkan 2" << endl;
				}
				else {
					cout << "Tumpukkan 2 Penuh" << endl;
				}
			}
			else if (pindah1 == 1) { //pindah ke tumpukan 1
				if (isFull3() == 0) {
					st1.top1++;
					st1.tmp1[st1.top1] = tumpukanTempat1;
					cout << "Barang " << "[" << st1.tmp1[st1.top1] << "]" << " Masuk ke Dalam Tumpukkan 1" << endl;
				}
				else {
					cout << "Tumpukan 1 Penuh" << endl;
				}
			}
			else if (pindah1 == 4) { //pindah ke tumpukan 4
				if (isFull4() == 0) {
					st4.top4++;
					st4.tmp4[st4.top4] = tumpukanTempat4;
					cout << "Barang " << "[" << st4.tmp4[st4.top4] << "]" << " Masuk ke Dalam Tumpukkan 4" << endl;
				}
				else {
					cout << "Tumpukan 4 Penuh" << endl;
				}
			}
			else if (pindah1 == 5) {
				if (isFull5() == 0) {
					st5.top5++;
					st5.tmp5[st5.top5] = tumpukanTempat5;
					cout << "Barang " << "[" << st5.tmp5[st5.top5] << "]" << " Masuk ke Dalam Tumpukkan 5" << endl;
				}
				else {
					cout << "Tumpukkan 5 penuh" << endl;
				}
			}
			else if (pindah1 == 6) {
				if (isFull6() == 0) {
					st6.top6++;
					st6.tmp6[st6.top6] = tumpukanTempat6;
					cout << "Barang " << "[" << st6.tmp6[st6.top6] << "]" << " Masuk ke Dalam Tumpukkan 6" << endl;
				}
				else {
					cout << "Tumpukkan 6 penuh" << endl;
				}
			}
			else {
				cout << "TUMPUKKAN TIDAK TERSEDIA!" << endl;
			}
		}
	}
	else if (pindah0 == 4) {
		if (isEmpty4() == 1) {
			cout << "Tumpukan 4 Kosong" << endl;
		}
		else {
			cout << "Barang yang Pindah dari Tumpukkan 4: " << st4.tmp4[st4.top4] << endl;
			tumpukanTempat1 = st4.tmp4[st4.top4];
			tumpukanTempat2 = st4.tmp4[st4.top4];
			tumpukanTempat3 = st4.tmp4[st4.top4];
			tumpukanTempat5 = st4.tmp4[st4.top4];
			tumpukanTempat6 = st4.tmp4[st4.top4];
			st4.top4--;
			//tempat pindah bola
			if (pindah1 == 1) { //pindah ke tumpukan 1
				if (isFull1() == 0) {
					st1.top1++;
					st1.tmp1[st1.top1] = tumpukanTempat1;
					cout << "Barang " << "[" << st1.tmp1[st1.top1] << "]" << " Masuk ke Dalam Tumpukkan 1" << endl;
				}
				else {
					cout << "Tumpukkan 1 Penuh" << endl;
				}
			}
			else if (pindah1 == 2) { //pindah ke tumpukan 2
				if (isFull2() == 0) {
					st2.top2++;
					st2.tmp2[st2.top2] = tumpukanTempat2;
					cout << "Barang " << "[" << st2.tmp2[st2.top2] << "]" << " Masuk ke Dalam Tumpukkan 2" << endl;
				}
				else {
					cout << "Tumpukan 2 Penuh" << endl;
				}
			}
			else if (pindah1 == 3) { //pindah ke tumpukan 3
				if (isFull3() == 0) {
					st3.top3++;
					st3.tmp3[st3.top3] = tumpukanTempat3;
					cout << "Barang " << "[" << st3.tmp3[st3.top3] << "]" << " Masuk ke Dalam Tumpukkan 3" << endl;
				}
				else {
					cout << "Tumpukkan 3 Penuh" << endl;
				}
			}
			else if (pindah1 == 5) {
				if (isFull5() == 0) {
					st5.top5++;
					st5.tmp5[st5.top5] = tumpukanTempat5;
					cout << "Barang " << "[" << st5.tmp5[st5.top5] << "]" << " Masuk ke Dalam Tumpukkan 5" << endl;
				}
				else {
					cout << "Tumpukkan 5 penuh" << endl;
				}
			}
			else if (pindah1 == 6) {
				if (isFull6() == 0) {
					st6.top6++;
					st6.tmp6[st6.top6] = tumpukanTempat6;
					cout << "Barang " << "[" << st6.tmp6[st6.top6] << "]" << " Masuk ke Dalam Tumpukkan 6" << endl;
				}
				else {
					cout << "Tumpukkan 6 penuh" << endl;
				}
			}
			else {
				cout << "TUMPUKKAN TIDAK TERSEDIA!" << endl;
			}
		}
	}
	else if (pindah0 == 5) {
		if (isEmpty5() == 1) {
			cout << "Tumpukan 5 Kosong" << endl;
		}
		else {
			cout << "Barang yang Pindah dari Tumpukkan 5: " << st5.tmp5[st5.top5] << endl;
			tumpukanTempat1 = st5.tmp5[st5.top5];
			tumpukanTempat2 = st5.tmp5[st5.top5];
			tumpukanTempat3 = st5.tmp5[st5.top5];
			tumpukanTempat4 = st5.tmp5[st5.top5];
			tumpukanTempat6 = st5.tmp5[st5.top5];
			st5.top5--;
			//tempat pindah bola
			if (pindah1 == 1) { //pindah ke tumpukan 1
				if (isFull1() == 0) {
					st1.top1++;
					st1.tmp1[st1.top1] = tumpukanTempat1;
					cout << "Barang " << "[" << st1.tmp1[st1.top1] << "]" << " Masuk ke Dalam Tumpukkan 1" << endl;
				}
				else {
					cout << "Tumpukkan 1 Penuh" << endl;
				}
			}
			else if (pindah1 == 2) { //pindah ke tumpukan 2
				if (isFull2() == 0) {
					st2.top2++;
					st2.tmp2[st2.top2] = tumpukanTempat2;
					cout << "Barang " << "[" << st2.tmp2[st2.top2] << "]" << " Masuk ke Dalam Tumpukkan 2" << endl;
				}
				else {
					cout << "Tumpukan 2 Penuh" << endl;
				}
			}
			else if (pindah1 == 3) { //pindah ke tumpukan 3
				if (isFull3() == 0) {
					st3.top3++;
					st3.tmp3[st3.top3] = tumpukanTempat3;
					cout << "Barang " << "[" << st3.tmp3[st3.top3] << "]" << " Masuk ke Dalam Tumpukkan 3" << endl;
				}
				else {
					cout << "Tumpukkan 3 Penuh" << endl;
				}
			}
			else if (pindah1 == 4) {
				if (isFull4() == 0) {
					st4.top4++;
					st4.tmp4[st4.top4] = tumpukanTempat4;
					cout << "Barang " << "[" << st4.tmp4[st4.top4] << "]" << " Masuk ke Dalam Tumpukkan 4" << endl;
				}
				else {
					cout << "Tumpukkan 5 penuh" << endl;
				}
			}
			else if (pindah1 == 6) {
				if (isFull6() == 0) {
					st6.top6++;
					st6.tmp6[st6.top6] = tumpukanTempat6;
					cout << "Barang " << "[" << st6.tmp6[st6.top6] << "]" << " Masuk ke Dalam Tumpukkan 6" << endl;
				}
				else {
					cout << "Tumpukkan 6 penuh" << endl;
				}
			}
			else {
				cout << "TUMPUKKAN TIDAK TERSEDIA!" << endl;
			}
		}
	}
	else if (pindah0 == 6) {
		if (isEmpty6() == 1) {
			cout << "Tumpukan 6 Kosong" << endl;
		}
		else {
			cout << "Barang yang Pindah dari Tumpukkan 6: " << st6.tmp6[st6.top6] << endl;
			tumpukanTempat1 = st6.tmp6[st6.top6];
			tumpukanTempat2 = st6.tmp6[st6.top6];
			tumpukanTempat3 = st6.tmp6[st6.top6];
			tumpukanTempat4 = st6.tmp6[st6.top6];
			tumpukanTempat5 = st6.tmp6[st6.top6];
			st6.top6--;
			//tempat pindah bola
			if (pindah1 == 1) { //pindah ke tumpukan 1
				if (isFull1() == 0) {
					st1.top1++;
					st1.tmp1[st1.top1] = tumpukanTempat1;
					cout << "Barang " << "[" << st1.tmp1[st1.top1] << "]" << " Masuk ke Dalam Tumpukkan 1" << endl;
				}
				else {
					cout << "Tumpukkan 1 Penuh" << endl;
				}
			}
			else if (pindah1 == 2) { //pindah ke tumpukan 2
				if (isFull2() == 0) {
					st2.top2++;
					st2.tmp2[st2.top2] = tumpukanTempat2;
					cout << "Barang " << "[" << st2.tmp2[st2.top2] << "]" << " Masuk ke Dalam Tumpukkan 2" << endl;
				}
				else {
					cout << "Tumpukan 2 Penuh" << endl;
				}
			}
			else if (pindah1 == 3) { //pindah ke tumpukan 3
				if (isFull3() == 0) {
					st3.top3++;
					st3.tmp3[st3.top3] = tumpukanTempat3;
					cout << "Barang " << "[" << st3.tmp3[st3.top3] << "]" << " Masuk ke Dalam Tumpukkan 3" << endl;
				}
				else {
					cout << "Tumpukkan 3 Penuh" << endl;
				}
			}
			else if (pindah1 == 5) {
				if (isFull5() == 0) {
					st5.top5++;
					st5.tmp5[st5.top5] = tumpukanTempat5;
					cout << "Barang " << "[" << st5.tmp5[st5.top5] << "]" << " Masuk ke Dalam Tumpukkan 5" << endl;
				}
				else {
					cout << "Tumpukkan 5 penuh" << endl;
				}
			}
			else if (pindah1 == 4) {
				if (isFull4() == 0) {
					st4.top4++;
					st4.tmp4[st4.top4] = tumpukanTempat4;
					cout << "Barang " << "[" << st4.tmp4[st4.top4] << "]" << " Masuk ke Dalam Tumpukkan 4" << endl;
				}
				else {
					cout << "Tumpukkan 4 penuh" << endl;
				}
			}
			else {
				cout << "TUMPUKKAN TIDAK TERSEDIA!" << endl;
			}
		}
	}

	else {
		cout << "TUMPUKKAN TIDAK TERSEDIA!" << endl;
	}
}


void tampil(int pilihTampil, int tampilTumpukan) {
	cout << "TAMPILKAN" << endl;
	cout << "1. Tampilkan Daftar Barang di Tumpukkan Tertentu" << endl;
	cout << "2. Tampilkan Daftar Barang di Setiap Tumpukkan" << endl;
	cout << "3. Batal" << endl;
	cout << "(1/2/3) = " << endl;
	cin >> pilihTampil;

	if (pilihTampil == 1) {
		cout << "Tampilkan Tumpukkan: ";
		cout << "(1/2/3/4/5/6) " << endl;
		cin >> tampilTumpukan;
		cout << endl;
		if (tampilTumpukan == 1) {
			if (isEmpty1() == 0) {
				for (int i = 0; i <= st1.top1; i++) {
					cout << i + 1 << ". " << st1.tmp1[i] << endl;
					cout << "URUTAN DIMULAI DARI BAWAH KE ATAS!" << endl;
				}
			}
			else {
				cout << "TUMPUKKAN 1 KOSONG!" << endl;
			}
		}
		else if (tampilTumpukan == 2) {
			if (isEmpty2() == 0) {
				for (int i = 0; i <= st2.top2; i++) {
					cout << i + 1 << ". " << st2.tmp2[i] << endl;
					cout << "URUTAN DIMULAI DARI BAWAH KE ATAS!" << endl;
				}
			}
			else {
				cout << "TUMPUKKAN 2 KOSONG!" << endl;
			}
		}
		else if (tampilTumpukan == 3) {
			if (isEmpty3() == 0) {
				for (int i = 0; i <= st3.top3; i++) {
					cout << i + 1 << ". " << st3.tmp3[i] << endl;
					cout << "URUTAN DIMULAI DARI BAWAH KE ATAS!" << endl;
				}
			}
			else {
				cout << "TUMPUKKAN 3 KOSONG!" << endl;
			}
		}
		else if (tampilTumpukan == 4) {
			if (isEmpty4() == 0) {
				for (int i = 0; i <= st4.top4; i++) {
					cout << i + 1 << ". " << st4.tmp4[i] << endl;
					cout << "URUTAN DIMULAI DARI BAWAH KE ATAS!" << endl;
				}
			}
			else {
				cout << "TUMPUKKAN 4 KOSONG!" << endl;
			}
		}
		else if (tampilTumpukan == 5) {
			if (isEmpty5() == 0) {
				for (int i = 0; i <= st5.top5; i++) {
					cout << i + 1 << ". " << st5.tmp5[i] << endl;
					cout << "URUTAN DIMULAI DARI BAWAH KE ATAS!" << endl;
				}
			}
			else {
				cout << "TUMPUKKAN 5 KOSONG!" << endl;
			}
		}
		else if (tampilTumpukan == 6) {
			if (isEmpty6() == 0) {
				for (int i = 0; i <= st6.top6; i++) {
					cout << i + 1 << ". " << st6.tmp6[i] << endl;
					cout << "URUTAN DIMULAI DARI BAWAH KE ATAS!" << endl;
				}
			}
			else {
				cout << "TUMPUKKAN 6 KOSONG!" << endl;
			}
		}
		else {
			cout << "INPUT SALAH!" << endl;
		}
	}
	else if (pilihTampil == 2) {
		cout << "TUMPUKAN 1" << endl;
		if (isEmpty1() == 0) {
			for (int i = 0; i <= st1.top1; i++) {
				cout << i + 1 << ". " << st1.tmp1[i] << endl;
			}
		}
		else {
			cout << "TUMPUKKAN 1 KOSONG!" << endl;
		}
		cout << "TUMPUKAN 2" << endl;
		if (isEmpty2() == 0) {
			for (int i = 0; i <= st2.top2; i++) {
				cout << i + 1 << ". " << st2.tmp2[i] << endl;
			}
		}
		else {
			cout << "TUMPUKKAN 2 KOSONG!" << endl;
		}
		cout << "TUMPUKAN 3" << endl;
		if (isEmpty3() == 0) {
			for (int i = 0; i <= st3.top3; i++) {
				cout << i + 1 << ". " << st3.tmp3[i] << endl;
			}
		}
		else {
			cout << "TUMPUKKAN 3 KOSONG!" << endl;
		}
		cout << "TUMPUKAN 4" << endl;
		if (isEmpty4() == 0) {
			for (int i = 0; i <= st4.top4; i++) {
				cout << i + 1 << ". " << st4.tmp4[i] << endl;
			}
		}
		else {
			cout << "TUMPUKKAN 4 KOSONG!" << endl;
		}
		cout << "TUMPUKAN 5" << endl;
		if (isEmpty5() == 0) {
			for (int i = 0; i <= st5.top5; i++) {
				cout << i + 1 << ". " << st5.tmp5[i] << endl;
			}
		}
		else {
			cout << "TUMPUKKAN 5 KOSONG!" << endl;
		}
		cout << "TUMPUKAN 6" << endl;
		if (isEmpty6() == 0) {
			for (int i = 0; i <= st6.top6; i++) {
				cout << i + 1 << ". " << st6.tmp6[i] << endl;
			}
		}
		else {
			cout << "TUMPUKKAN 6 KOSONG!" << endl;
		}
		cout << endl;
		cout << "INGAT: URUTAN DIMULAI DARI BAWAH KE ATAS!" << endl;
	}
	else if (pilihTampil == 3) {
		cout << "AKSI DIBATALKAN!" << endl;
	}
	else {
		cout << "INPUT SALAH!" << endl;
	}
}



int main() {
	int pilihMenu, pindah0{}, pindah1{}, pilihTampil{}, tampilTumpukan{}, pilihPush{}, pilihPop{};
	string tumpukanTempat1, tumpukanTempat2, tumpukanTempat3, tumpukanTempat4, tumpukanTempat5, tumpukanTempat6;

	identitas();

	createStack();

	do {
		cout << "==================================================================================" << endl;
		cout << " MULTI-STACK MANAGEMENT PROGRAM" << endl;
		cout << "==================================================================================" << endl;
		cout << " MENU                         |   Jml Tumpukkan: 6   |    Max/Tumpukkan: 15 Barang" << endl;
		cout << "----------------------------------------------------------------------------------" << endl;
		cout << " 1. Isi Tumpukkan" << endl;
		cout << " 2. Ambil Barang di Tumpukkan" << endl;
		cout << " 3. Pindahkan Barang ke Tumpukkan Tertentu" << endl;
		cout << " 4. Tampilkan Daftar Barang" << endl;
		cout << " 5. Keluar" << endl;
		cout << " Masukkan pilihan :";
		cin >> pilihMenu;

		switch (pilihMenu)
		{
		case 1:
			push(tumpukanTempat1, tumpukanTempat2, tumpukanTempat3, tumpukanTempat4, tumpukanTempat5, tumpukanTempat6, pilihPush);
			break;
		case 2:
			pop(pilihPop, tumpukanTempat1, tumpukanTempat2, tumpukanTempat3, tumpukanTempat4, tumpukanTempat5, tumpukanTempat6);
			break;
		case 3:
			pindah(pindah0, pindah1, tumpukanTempat1, tumpukanTempat2, tumpukanTempat3, tumpukanTempat4, tumpukanTempat5, tumpukanTempat6);
			break;
		case 4:
			tampil(pilihTampil, tampilTumpukan);
			break;
		case 5:
			cout << "PROGRAM SELESAI!" << endl;
			break;
		}
	} while (pilihMenu != 5);

	return 0;
}