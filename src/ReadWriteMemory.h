#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "ofMain.h"
class ReadWriteMemory
{
public:
	ReadWriteMemory(void);
	~ReadWriteMemory(void);
	
	void setUp(string nameFile);
	void write(string nameFile, string content);
	void continueWrite(string nameFile, string content);

	
};

