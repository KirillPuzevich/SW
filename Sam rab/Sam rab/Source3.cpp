#include <iostream>
using namespace std;
int four() {
	double a, b, c, d, p;
	setlocale(LC_ALL, "Russian");
	cout << " ������� ����� ���������������=";
	cin >> a;
	cout << " ������� ������ ���������������=";
	cin >> b;
	cout << " ������� ������ ���������������=";
	cin >> c;
	cout << " ������� ������ ��������� ";
	cin >> d;
	cout << " ������� ������ ��������� ";
	cin >> p;
	if (c > 0 && b > 0 && a > 0 && d > 0 && p > 0) {
		if (a <= p and c <= d and b <= d)
			cout << " ��������";
		else if (a <= d and c <= p and b <= p)
			cout << " ��������";
		else if (c <= p and c <= d and b <= d)
			cout << " ��������";

		else if (c <= d and c <= p and p <= d)
			cout << " ��������";
		else if (b <= p and c <= d and b <= d)
			cout << " ��������";
		else if (b <= d and c <= p and p <= d)
			cout << " ��������";
		else
			cout << " �� ��������";



	}
	else cout << " ������ ";
	return 0;


}
