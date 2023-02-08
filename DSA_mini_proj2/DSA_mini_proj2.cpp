// DSA MINI PROJECT BY FAITH AND KARYL
//TOPIC 1 

#include <iostream>
#include <queue>
#include <stack>
#include <list>
#include <vector>

using namespace std;

int main() {
	queue<int> package2kg, package3kg;
	int num2, num3;
	int package2 = 0, package3 = 0;

	cout << "Number of 2kg: ";
	cin >> num2;

	for (int i = 0; i < num2; i++) {
		package2kg.push(2);
		cout << package2kg.front() << "kg" << "\t";
		package2 += 2;
	}

	cout << endl << "Size 2kg: " << package2kg.size();
	cout << endl << "total 2kg:" << package2;


	cout << endl << "Number of 3kg: ";
	cin >> num3;

	for (int i = 0; i < num3; i++) {
		package3kg.push(3);
		cout << package3kg.front() << "\t";
		package3 += 3;
	}

	cout << endl << "Size 3kg: " << package3kg.size();
	cout << endl << "total 3kg:" << package3;

	return 0;
}