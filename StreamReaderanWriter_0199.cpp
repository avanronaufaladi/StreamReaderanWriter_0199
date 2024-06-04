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

	