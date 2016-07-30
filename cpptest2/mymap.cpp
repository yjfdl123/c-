//”√”⁄¡∑œ∞map
#include <map>
#include <iostream>
using namespace std;
using std::cout;

template <typename T>
void print_all(T a){

	for (auto item : a){
		cout << item.second<< "  ";
	}
	cout << endl;
}

int main(){
	using std::map;
	using std::string;
	using std::pair;
	using std::cin;
	map<string, double> ma = { { "x", 5 }, {"y",11} };
	for (pair<string,double> item : ma){
		item.second *= item.second;
	}
	print_all(ma);
	for (auto& x : ma){
		x.second *= x.second;
	}
	print_all(ma);

	cin.get();
}