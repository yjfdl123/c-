# include <stdio.h>
# include <iostream>
# include <string>
using namespace std;

int mainstring(){
	cout << "string test\n" << endl;

	string x1 = string("hello world\n");
	cout << x1;
	string x2 = string(30, 'x');
	string x3 = string(x2);
	cout << x2 << x3 << endl;
	char y1[] = "hello yjf ye s success";
	//指针和具体位置要分清楚
	string x4 = string(y1+3, y1+8);
	cout << x4 << endl;

	int x = 1;
	while (x > 0){
		string x5;
		cin >> x5;
		cout << "x5:"<<x5 << endl;
		string x6;
		getline(cin, x6,':');
		cout << "x6:" << x6 << endl;
	}

	cin.get();
	return 0;
}