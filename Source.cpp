#include <iostream>

using namespace std;

int main()
{
	int a, b, c;// прграмма для нахождения наибольшего значения из трёх
	cout << "I will find the biggrst one" << endl;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	if (a > b && a > c) {
		cout << "the biggest one is = a";
	} else if (c > b && c > a) {
		cout << "the biggest one is = c";
	} else if (b > a && b > c) {
		cout << "the biggest one is = b";
	}
	

	return 0;
}