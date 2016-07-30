// lambda 函数
// 给find_if 传入判断式函数
// xxxdfdd

# include <stdio.h>
# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

template<typename T>
void print_vec(vector<T> a) {
	for (vector<T>::iterator iter = a.begin(); iter != a.end(); iter++) {
		cout << *iter << "  ";
	}
	cout << endl;
}

int main() {
	vector<int> vec;
	int len = 10;
	for (int i = 0; i <= len; i++) {
		vec.push_back(i);
	}
	print_vec(vec);

	typedef vector<int>::iterator Inter;
	Inter  pos = find_if(vec.begin(), vec.end(),
		[&](int& x)
			{
				int y = x;
				return y > 8; 
			}
	);
	if (pos != vec.end()) {
		cout << "find:" << *pos << endl;
	}

	print_vec(vec);
	std::cin.get();
	return 0;
}