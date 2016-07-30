# include <stdio.h>
# include <iostream>
# include <fstream>
# include <cstdlib>
using namespace std;

int main1(){
	cout << 123 << endl;
	ifstream fin;
	ofstream fout;
	fout.open("out.txt");
	int len = 100;
	int i;
	for  (i = 0; i < len ; i ++ ){
		fout << "123"<<i  << endl;
	}
	string filename = string("3.txt");
	fin.open(filename);
	if (!fin.is_open()){
		std::cout << filename.c_str() << "open filed" << endl;
		cerr << "can't open file" << endl;
	}
	
	cin.get();
	return 0;
}