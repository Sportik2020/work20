#include <iostream>
#include <ctime>
using namespace std;
int main()
{
//1
/*	int arr[5];
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << ' ';
	}*/
//2
/*	int arr[5];
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}
	for (int i = 4; i >= 0; i--) {
		cout << arr[i] << ' ';
	}*/
//3
/*	int arr[10];
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 10; i+=2) {
		cout << arr[i] << ' ';
	}*/
//array 1
/*	const int n = 10;
	int mas[n];
	for (int i = 0; i < n; i++) {
		cin >> mas[i];
	}
	for (int i = 0; i < n; ++i) {
		if (i % 2 != 0 && i > 0) {
			cout << mas[i] << ' ';
		}
	}*/
//array 2
/*	const int n = 10;
	int mas[n];
	int a;
	for (int i = 0; i < n; i++) {
		a = pow(2, i);
		cout << a << " ";
	}*/
//cam 1
/*	int mas[10];
	int pol = 0;
	for (int i = 0; i < 10; i++) {
		cin >> mas[i];
		if (mas[i] > 0) {
			pol += 1;
		}
	}
	cout << pol << endl;*/
//cam 2
/*	int mas[10];
	int chet = 0, nechet = 0;
	for (int i = 0; i < 10; i++) {
		cin >> mas[i];
		if (mas[i] % 2 == 0) {
			chet += 1;
		}
		else {
			nechet += 1;
		}
	}
	cout << "chet" << chet << " " << "nechet" << nechet;*/
//cam3
/*	int mas[10];
	int pol = 1;
	for (int i = 0; i < 10; i++) {
		cin >> mas[i];
		if (mas[i] % 3 != 0) {
			pol = pol + mas[i];
		}
	}
	cout << pol;*/ 

//cam 4
/*	int mas[10];
	int pol = 1;
	for (int i = 0; i < 10; i++) {
		cin >> mas[i];
		if (mas[i] % 3 == 0 || mas[i] % 5 != 0) {
			pol = pol * mas[i];
		}
	}
	cout << pol;*/
//cam 5
/*	int mas[10];
	double pol = 0;
	int sr = 0;
	for (int i = 0; i < 10; i++) {
		cin >> mas[i];
		if (mas[i] % 2 != 0) {
			pol = pol + mas[i];
			sr++;
		}
	}
	cout << pol / sr;*/
	return 0;
}