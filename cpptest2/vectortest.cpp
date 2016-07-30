# include <stdio.h>
# include <iostream>
# include <vector>
using namespace std;

void print_vec(vector<int> a){
	for (vector<int>::iterator iter = a.begin(); iter != a.end(); iter++){
		cout << *iter << "  ";
	}
	for (auto item : a){
		cout << item;
	}

	cout << endl;
}

int main(){
	cout << 123 << endl;

	int xx[5] = { 1, 2, 3, 4, 5 };
	for (int item : xx){
		cout << item;
	}

	vector<int> vec;
	int len = 10;
	for (int i = 0; i <= len ; i++){
		vec.push_back(i);
	}
	print_vec(vec);

	vector<int> newvec;
	for (int i = 0; i <= len; i++)
	{
		newvec.push_back(i+100);
	}



	vec.insert(vec.begin(),newvec.begin(),newvec.end());
	print_vec(vec);
	cin.get();
	return 0;
}