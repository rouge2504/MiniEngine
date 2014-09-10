#include "ReadWriteMemory.h"


ReadWriteMemory::ReadWriteMemory(void)
{
}


ReadWriteMemory::~ReadWriteMemory(void)
{
}

void ReadWriteMemory::setUp(string nameFile){
	ofstream fs(nameFile+".txt");
	cout<< "Has creado un archivo .txt de nombre " << nameFile << endl;
	cout << "Se encuentra en la carpeta bin" << endl;
	fs.close();
}

void ReadWriteMemory::write(string nameFile, string content){
	ofstream fs(nameFile+".txt");
	fs << content << endl;
	cout<< "Has creado un archivo .txt de nombre " << nameFile << endl;
	cout << "Se encuentra en la carpeta bin" << endl;
	fs.close();
}

void ReadWriteMemory::continueWrite(string nameFile, string content){
	ofstream fs;
	fs.open(nameFile+".txt");
	fs << content << endl;
	cout<< "Has continuado escribiendo en un archivo .txt de nombre " << nameFile << endl;
	fs.close();
}