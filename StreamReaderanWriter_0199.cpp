#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	//untuk menyimpan data berbentuk string
	string baris;

	//membuka file dalam mode menulis.
	ofstream outfile;

	//menunjuk kesebuah nama file
	outfile.open("contohfile.txt");

	cout << ">= menulis filee, \'q\' untuk keluar" << endl;

	//unlimited loop untuk menulis
	while (true) {
		cout << "- ";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika anda memasukkan karakter q
		if (baris == "q")break;
		//menulis dan memasukkan nilai dari 'baris' kedalam file
		outfile << baris << endl;
	}
	