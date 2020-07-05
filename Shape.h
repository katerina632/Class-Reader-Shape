#pragma once
#include <string>
#include <iostream>
#include <fstream>

using namespace std;
class Shape
{
public:
	virtual void Show() const = 0;
	
	virtual void Save(string path)  = 0;
	
	virtual void Load(string path)  = 0;

};

class Square : public Shape {
private:
	int x;
	int y;
	int a;
public:
	Square() : x(0), y(0), a(0) {}
	Square(int x, int y, int a) : x(x), y(y), a(a) {}
	
	
	virtual void Show() const {

		cout << "\t**Square**" << endl;
		cout << "Coords of the upper left corner: x=" << x << ", y=" << y << endl;
		cout << "Side of the square: a=" << a << endl;
	}

	virtual void Save(string path) override
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

	virtual void Load(string path) override {
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
};


class Circle : public Shape {

private:
	int x;
	int y;
	int r;
public:
	Circle() : x(0), y(0), r(0) {}
	Circle(int x, int y, int r) : x(x), y(y), r(r) {}

	virtual void Show() const {
		cout << "\t**Circle**" << endl;
		cout << "Coords of the of the center: x=" << x << ", y=" << y << endl;
		cout << "Radius of the circle: a=" << r << endl;
	}

	virtual void Save(string path)  override {
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

	virtual void Load(string path) {
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
};

class Rectangle : public Shape {

private:
	int x;
	int y;
	int a;
	int b;
public:
	Rectangle() : x(0), y(0), a(0),b(0) {}
	Rectangle(int x, int y, int a, int b) : x(x), y(y), a(a), b(b){}

	virtual void Show() const {
		cout << "\t**Rectangle**" << endl;
		cout << "Coords of the upper left corner: x=" << x << ", y=" << y << endl;
		cout << "Sides of the rectangle: a=" << a <<", b="<<b<< endl;
	}

	virtual void Save(string path)   override {

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

	virtual void Load(string path) {
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
};

class Ellipse : public Shape {
private:
	int x;
	int y;
	int a;
	int b;
public:
	Ellipse() : x(0), y(0), a(0), b(0) {}
	Ellipse(int x, int y, int a, int b) : x(x), y(y), a(a), b(b) {}

	virtual void Show() const {
		cout << "\t**Ellipse**" << endl;
		cout << "Coords of the upper left corner of the rectangle circumscribed around the ellipse: x=" << 
			x << ", y=" << y << endl;
		cout << "Sides of the rectangle: a=" << a << ", b=" << b << endl;
	}

	virtual void Save(string path)  override  {
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

	virtual void Load(string path) {
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
};