#include "Shape.h"

void Square::Show() const
{
	cout << "\t**Square**" << endl;
	cout << "Coords of the upper left corner: x=" << x << ", y=" << y << endl;
	cout << "Side of the square: a=" << a << endl;
}

void Square::Save(string path)
{
	ofstream fout;
	fout.open(path);
	bool isOpen = fout.is_open();
	if (isOpen == true) {

		fout << x << endl;
		fout << y << endl;
		fout << a << endl;
	}
	else {
		cout << "Error!" << endl;
	}

	fout.close();
}

void Square::Load(string path)
{
	ifstream fin;
	fin.open(path);
	bool isOpen = fin.is_open();
	if (isOpen == true) {
		fin >> x;
		fin >> y;
		fin >> a;
	}
	else
	{
		cout << "Error!" << endl;
	}

	fin.close();
}

void Circle::Show() const
{
	cout << "\t**Circle**" << endl;
	cout << "Coords of the of the center: x=" << x << ", y=" << y << endl;
	cout << "Radius of the circle: a=" << r << endl;
}

void Circle::Save(string path)
{
	ofstream fout;
	fout.open(path);
	bool isOpen = fout.is_open();
	if (isOpen == true) {

		fout << x << endl;
		fout << y << endl;
		fout << r << endl;
	}
	else {
		cout << "Error!" << endl;
	}

	fout.close();
}

void Circle::Load(string path)
{
	ifstream fin;
	fin.open(path);
	bool isOpen = fin.is_open();
	if (isOpen == true) {

		fin >> x;
		fin >> y;
		fin >> r;

	}
	else
	{
		cout << "Error!" << endl;
	}

	fin.close();
}

void Rectangle::Show() const
{
	cout << "\t**Rectangle**" << endl;
	cout << "Coords of the upper left corner: x=" << x << ", y=" << y << endl;
	cout << "Sides of the rectangle: a=" << a << ", b=" << b << endl;
}

void Rectangle::Save(string path)
{
	ofstream fout;
	fout.open(path);
	bool isOpen = fout.is_open();
	if (isOpen == true) {

		fout << x << endl;
		fout << y << endl;
		fout << a << endl;
		fout << b << endl;

	}
	else {
		cout << "Error!" << endl;
	}

	fout.close();
}

void Rectangle::Load(string path)
{
	ifstream fin;
	fin.open(path);
	bool isOpen = fin.is_open();
	if (isOpen == true) {

		fin >> x;
		fin >> y;
		fin >> a;
		fin >> b;

	}
	else
	{
		cout << "Error!" << endl;
	}

	fin.close();
}

void Ellipse::Show() const
{
	cout << "\t**Ellipse**" << endl;
	cout << "Coords of the upper left corner of the rectangle circumscribed around the ellipse: x=" <<
		x << ", y=" << y << endl;
	cout << "Sides of the rectangle: a=" << a << ", b=" << b << endl;
}

void Ellipse::Save(string path)
{
	ofstream fout;
	fout.open(path);
	bool isOpen = fout.is_open();
	if (isOpen == true) {

		fout << x << endl;
		fout << y << endl;
		fout << a << endl;
		fout << b << endl;

	}
	else {
		cout << "Error!" << endl;
	}

	fout.close();
}

void Ellipse::Load(string path)
{
	ifstream fin;
	fin.open(path);
	bool isOpen = fin.is_open();
	if (isOpen == true) {

		fin >> x;
		fin >> y;
		fin >> a;
		fin >> b;

	}
	else
	{
		cout << "Error!" << endl;
	}

	fin.close();
}
