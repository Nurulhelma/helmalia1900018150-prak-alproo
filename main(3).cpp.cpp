#include <iostream>
#include <string.h>
using namespace std;

class Susun {
	public :
		void input();
		void proses();
		void output();

	private :
		int buku[100], k, n=24, tmp, rak[10][10];
};

void Susun::input() {
	for(int i=1; i<=n; i++) {
		cout<<"Masukkan nomor buku ke-"<<i<<" = ";
		cin>>buku[i];
	}
	cout<<"\n\nBuku sebelum diurutkan :\n";
	for(int j=1; j<=n; j++) {
		cout<<"  "<<buku[j];
	}
	cout<<"\n=============================================\n";
};

void Susun::proses() {
	//Sorting dengan bubble sort
	for(int i=1; i<=n; i++) {
		for(int j=i; j<=n; j++) {
			if(buku[i] > buku[j]) {
				tmp = buku[j];
				buku[j] = buku[i];
				buku[i] = tmp;
			}
		}
	}

	//Mengubah array 1D ke 2D
	k=1;
	for (int i=1; i<=4; i++) {
		for (int j=1; j<=6; j++) {
			rak[i][j]=buku[k];
			k++;
		}
	}
};

void Susun::output() {
	cout << "Buku setelah diurutkan :"<<endl;
	for (int i=1; i<=n; i++) {
		cout <<"  "<<buku[i];
	}
	cout<<"\n=============================================\n\n";

	cout<<"\nSusunan buku sesudah urutkan di dalam rak :\n";
	for(int i=1; i<=4; i++) {
		for(int j=1; j<=6; j++) {
			cout <<"\t"<<rak[i][j] << " ";
		}
		cout<<endl;
	}
};

int main() {
	Susun x;
	x.input();
	cout << endl;
	x.proses();
	cout << endl;
	x.output();
	cout << endl;
	return 0;
}