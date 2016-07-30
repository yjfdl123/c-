# include <stdio.h>
# include <iostream>
# include <vector>
using namespace std;

void print_vec(vector<int> a){
	for (vector<int>::iterator iter = a.begin(); iter != a.end(); iter++){
		cout << *iter << "  ";
	}
	cout << endl;
}

int main(){
	cout << 123 << endl;
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