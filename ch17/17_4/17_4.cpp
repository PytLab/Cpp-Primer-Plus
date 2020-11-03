#include <iostream>
#include <fstream>

const char * file1 = "input1.txt";
const char * file2 = "input2.txt";
const char * file3 = "output1.txt";

int main() {
	using namespace std;
	ifstream fin1(file1, ios_base::in);
	ifstream fin2(file2, ios_base::in);
	ofstream fout1(file3, ios_base::out);
	if (!fin1.is_open() || !fin2.is_open())
	{
		cerr << "wrong input file!\n";
		exit(EXIT_FAILURE);
	}
	char ch;
	if (!fout1.is_open()) {
		cerr << "Can't open this for output:\n";
		exit(EXIT_FAILURE);
	}
	else {
		while (!fin1.eof() || !fin2.eof()) {
			if(!fin1.eof()) {
				while (fin1.get(ch) && ch != '\n')
					fout1 << ch;
				fout1 << ' ';
			}
			if(!fin2.eof()) {
				while (fin2.get(ch) && ch != '\n')
					fout1 << ch;
			}
			fout1 << '\n';
		}
	}
	fin1.close();
	fin2.close();
	fout1.close();




	return 0;
}
