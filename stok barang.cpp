#include <iostream>
#include <stdlib.h>

using namespace std;

class penambahanData {
	private:
	int stock;
	
	public :
	void pensil();
	void Buku();
	void penghapus();
};
void penambahanData::pensil(){
	int stock = 8, stokPensil, total;
	cout<<"masukan jumlah stock barang ="; cin>>stokPensil;
	total = stock + stokPensil;
	cout<< "Total stok pensil adalah "<< total<<endl;
}
void penambahanData::Buku(){
	int stock = 10, stokBuku, total;
	cout<<"Masukan jumlah stock barang ="; cin>>stokBuku;
	total = stock + stokBuku;
	cout<< "Total stok Buku adalah "<< total<<endl;
}
void penambahanData::penghapus(){
	int stock = 28, stokPenghapus, total;
	cout<<"Masukan jumlah sttock barang ="; cin>>stokPenghapus;
	total = stock + stokPenghapus;
	cout<< "Total stok penghapus adalah "<< total<<endl;
}
int main (int argc, char** argv){
	int pilih;
	cout<<"NO. \t Nama Barang \t Stock "<<endl;
	cout<<"1. \t Pensil \t 8"<<endl;
	cout<<"2. \t Buku \t\t 10"<<endl;
	cout<<"3. \t Penghapus \t 28"<<endl;
	
	cout<<"Pilih barang yang akan di tambah stocknya [1,2,3] ="; cin >> pilih;
	
	if (pilih == 1){
		penambahanData pensil;
		pensil.pensil();
		cout <<"terima kasih"<<endl;
	}
	if (pilih == 2){
		penambahanData Buku;
		Buku.Buku();
		cout <<"terima kasih"<<endl;
	}
	if (pilih == 3){
		penambahanData penghapus;
		penghapus.penghapus();
		cout <<"terima kasih"<<endl;
	}
	
	return 0;
	system ("PAUSE");
}

