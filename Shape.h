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
	
	virtual void Show() const;

	virtual void Save(string path) override;	

	virtual void Load(string path) override;
};


class Circle : public Shape {

private:
	int x;
	int y;
	int r;
public:
	Circle() : x(0), y(0), r(0) {}
	Circle(int x, int y, int r) : x(x), y(y), r(r) {}

	virtual void Show() const;

	virtual void Save(string path)  override;

	virtual void Load(string path);
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

	virtual void Show() const;

	virtual void Save(string path)   override;

	virtual void Load(string path);
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

	virtual void Show() const;

	virtual void Save(string path)  override;

	virtual void Load(string path);
};