# include <stdio.h>
# include <iostream>
# include <vector>
using namespace std;

template<typename T>
void print_vec(vector<T> a){
	for (vector<T>::iterator iter = a.begin(); iter != a.end(); iter++){
		cout << *iter << "  ";
	}
	for (auto item : a){
		cout << item;
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

	vector <char> cvec;
	for (char x = 'a'; x <= 'a' + len; x++){
		cvec.push_back(x);
	}
	print_vec(cvec);

	vector<int> newvec;
	for (int i = 0; i <= len; i++)
	{
		newvec.push_back(i+100);
	}



	vec.insert(vec.begin(),newvec.begin(),newvec.end());
	print_vec(vec);
	std::cin.get();
	return 0;
}