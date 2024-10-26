#include <iostream>

using namespace std;

// 2_1
int sumaSzeregu(int n) {
	int nSuma = 0;
	for (int i = 1; i <= n; i++) {
		int nSumaPomoc = 0;
		for (int j = 1; j <= i; j++) {
			nSumaPomoc += j;
		}
		nSuma += nSumaPomoc;
	}
	return nSuma;
};

void zadanie2_1() {
	int nSzereg;
	cout << "Wczytaj liczbe n dla szeregu ";
	cin >> nSzereg;
	cout << sumaSzeregu(nSzereg);
}

//2_2
void zadanie2_2() {
	int a, b;

	cout << "Podaj kolejno liczby a i b" << endl;
	cin >> a;
	cin >> b;

	cout << "Liczba a: " << a << "; Liczba b: " << b << "\n\n";

	//b
	string sB = "";
	for (int i = 0; i < a; i++) {
		sB += '*';
	}
	cout << sB << "\n\n";

	//c
	for (int i = 0; i < b; i++) {
		cout << "*\n";
	}
	cout << endl;

	//d
	for (int i = 0; i < b; i++) {
		string sD = "";
		for (int j = 0; j < a; j++) {
			sD += '*';
		}
		cout << sD << "\n";
	}
	cout << endl;

	//e
	for (int i = 1; i <= b; i++) {
		string sD = "";
		for (int j = 1; j <= a; j++) {
			if (i == 1 || i == b) {
				sD += '*';
			}
			else {
				if (j == 1 || j == a) {
					sD += '*';
				}
				else {
					sD += ' ';
				}
			}
		}
		cout << sD << "\n";
	}
	cout << endl << endl;

	//f
	for (int i = 1; i <= a; i++) {
		string sLinia = "";
		for (int j = 1; j <= i; j++) {
			sLinia += '*';
		}
		cout << sLinia << endl;
	}
	cout << endl << endl;

	//g
	for (int i = a; i >= 1; i--) {
		string sLinia = "";
		for (int j = i; j >= 1; j--) {
			sLinia += '*';
		}
		cout << sLinia << endl;
	}
	cout << endl << endl;
}

void zadanie2_3() {
	int nLiczba;

	cout << "Podaj liczbe (miesiac): ";
	cin >> nLiczba;

	switch (nLiczba)
	{
	case 1:
		cout << "Styczen, dni 31";
		break;
	case 2:
		cout << "Luten, dni 28";
		break;
	case 3:
		cout << "Marzen, dni 31";
		break;
	case 4:
		cout << "Kwiecien, dni 30";
		break;
	case 5:
		cout << "Majen, dni 31";
		break;
	case 6:
		cout << "Czerwien, dni 30";
		break;
	case 7:
		cout << "Lipien, dni 31";
		break;
	case 8:
		cout << "Sierpien, dni 31";
		break;
	case 9:
		cout << "Wrzesien, dni 30";
		break;
	case 10:
		cout << "Pazdziernien, dni 31";
		break;
	case 11:
		cout << "Listopadzien, dni 30";
		break;
	case 12:
		cout << "Grudzien, dni 31";
		break;
	default:
		cout << "Zla liczba.. nie ma miesiaca " << nLiczba;
		break;
	}
	if (nLiczba >= 1 and nLiczba <= 12) {
		if (nLiczba >= 4 and nLiczba <= 9) {
			cout << endl << "Slonecznie!" << endl;
		}
		else {
			cout << endl << "Pochmurno.." << endl;
		}
	}
}

int main()
{

	zadanie2_1();
	cout << endl;
	zadanie2_2();
	cout << endl;
	zadanie2_3();

}
