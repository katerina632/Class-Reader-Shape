#include "FileReader.h"

void ASCIIFileReader::Display(string path)
{
	char s;

	ifstream fin;
	fin.open(path);
	bool isOpen = fin.is_open();
	if (isOpen == true) {
		while (fin.get(s)) {

			int k = (int)s;
			cout << k;

			//neobovjazkova chastyna kodu, dlja pryjemnishoji vizualizaciji

			if (k == 32) { //probil mizh slovamy
				cout << " ";
			}
			if (k == 10) { //perehid na nastupnyj rjadok
				cout << endl;
			}
		}
		cout << endl;
	}
	else
	{
		cout << "Error!" << endl;
	}

	fin.close();

}

void BinaryFileReader::Display(string path)
{
	char s;
	int countBits = 0;
	int k; // dlja pryvedennja symvoly do int
	string res;

	ifstream fin;
	fin.open(path);
	bool isOpen = fin.is_open();
	if (isOpen == true) {
		while (fin.get(s)) {

			k = (int)s;

			while (k > 0) {

				(k % 2 == 0) ? (res += "0") : (res += "1");
				countBits++;
				k = k / 2;
			};

			while (countBits < 8) {
				res += "0";
				countBits++;
			}
			reverse(res.begin(), res.end());

			cout << res;

			countBits = 0;
			res = "";

		}
		cout << endl;
	}
	else
	{
		cout << "Error!" << endl;
	}

	fin.close();
}
