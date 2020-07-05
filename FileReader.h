#pragma once
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class FileReader
{
public:
	FileReader() {}

	virtual void Display(string path) = 0;
};

class ASCIIFileReader : public FileReader {

public:
	virtual void Display(string path);
};

class BinaryFileReader : public FileReader {
	
public:
	virtual void Display(string path);		
};