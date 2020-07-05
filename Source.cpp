#include <iostream>
#include <string>
#include "FileReader.h"
#include "Shape.h"

using namespace std;

int main() {

// Zavdannja 1
	const string path = "New File.txt";

	ASCIIFileReader ar;
	BinaryFileReader br;

	FileReader* fr1[2]{
	&ar,
	&br
	};

	fr1[0]->Display(path);
	cout << endl;
	fr1[1]->Display(path);
	cout << endl;

	/*for (int i = 0; i < 2; i++)
	{		
		fr1[i]->Display(path);
		cout << "----------------------" << endl;
	}*/
	

// Zavdannja 2
	const string path2 = "New File 2.txt";

	Square sq1(1,1,3);
	Ellipse el1(1,1,3,6);
	Rectangle rec1(4,4,5,10);
	Circle cir1(3, 3, 5);

	Shape* figures1[4]{
	&sq1,
	&el1,
	&rec1,
	&cir1
	};
	

	Square sq2;
	Ellipse el2;
	Rectangle rec2;
	Circle cir2;

	Shape* figures2[4]{
	&sq2,
	&el2,
	&rec2,
	&cir2
	};

	for (int i = 0; i < 4; i++)
	{
		figures1[i]->Save(path2);
		figures2[i]->Load(path2);
		figures2[i]->Show();

		cout << "----------------------" << endl;
	}

	system("pause");
	return 0;
}