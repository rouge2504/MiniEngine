#include "Input.h"


Input::Input(void)
{	activeCButton = false;
	activeDoubleButtonDown = false;
	activeDoubleButtonUp = false;
	activeUpCross = false;
	activeDownCross = false;
	avtiveRigthCross = false;
	activeLeftCross = false;
}


Input::~Input(void)
{
}

void Input::singleCButtonDraw(int posX, int posY){
	radius = 20;
	ofSetColor(100,100);
	ofCircle(posX, posY, radius);
}
	
void Input::singleCButtonDraw(int posX, int posY, int radius){
	ofSetColor(100,100);
	ofCircle(posX, posY, radius);
}

void Input::singleCButtonDraw(int posX, int posY, int colorR, int colorG, int colorB){
	radius = 20;
	ofSetColor(colorR, colorG, colorB,100);
	ofCircle(posX, posY, radius);
}
	
void Input::singleCButtonDraw(int posX, int posY, int radius, int colorR, int colorG, int colorB){
	ofSetColor(colorR, colorG, colorB, 100);
	ofCircle(posX, posY, radius);
}

void Input::singleCButtonPressed(int posX, int posY, int x, int y, int button){
	distance = ofDist(posX, posY, x, y);
	radius = 20;
	if (distance < radius){
		activeCButton = true;
	}
}

void Input::singleCButtonPressed(int posX, int posY, int x, int y, int button, int radius){
	distance = ofDist(posX, posY, x, y);
	if (distance < radius){
		activeCButton = true;
	}
}

void Input::singleCButtonReleassed(int posX, int posY, int x, int y, int button){

		activeCButton = false;

}

void Input::doubleButtonDraw(int posX, int posY){
	radius = 25;
	_xDoubleButton = 40;
	_yDoubleButton = 20;
	ofSetColor(100,100);
	ofCircle(posX + _xDoubleButton, posY - _yDoubleButton, radius);
	ofCircle(posX - _xDoubleButton, posY + _yDoubleButton, radius);
}

void Input::doubleButtonDraw(int posX, int posY, int size){
	value = size * 5;
	radius = 25 + value;
	_xDoubleButton = 40 + value;
	_yDoubleButton = 20 + value;
	ofSetColor(100,100);
	ofCircle(posX + _xDoubleButton, posY - _yDoubleButton, radius);
	ofCircle(posX - _xDoubleButton, posY + _yDoubleButton, radius);
}

void Input::doubleButtonPressed(int posX, int posY, int x, int y, int button){
	distanceUp = ofDist(posX + _xDoubleButton, posY - _yDoubleButton, x, y);
	distanceDown = ofDist(posX - _xDoubleButton, posY + _yDoubleButton, x, y);
	if (distanceUp < radius){
		activeDoubleButtonUp = true;
	}
	 if (distanceDown < radius){
		activeDoubleButtonDown = true;
	}
}

void Input::doubleButtonReleassed(int posX, int posY, int x, int y, int button){
	activeDoubleButtonUp = false;
	activeDoubleButtonDown = false;
}

void Input::crossButtonDraw(int posX, int posY){
	_xCross = 20;
	_yCross = 60;
	xUpDonwCross = posX - _xCross;
	yUpDownCross = posY - _yCross;
	xRigthLeftCross = posX - _yCross;
	yRigthLeftCross = posY - _xCross;
	ofSetColor(100,100);
	ofRect(xUpDonwCross, yUpDownCross, _xCross * 2, _yCross * 2);
	ofRect(xRigthLeftCross, yRigthLeftCross, _yCross * 2, _xCross * 2);
	ofSetColor(100,120);
	ofCircle(posX, posY, _xCross);
}

void Input::crossButtonDraw(int posX, int posY, int size){
	valueCross = size * 10;
	_xCross = 20 + valueCross;
	_yCross = 60 + valueCross * 2;
	xUpDonwCross = posX - _xCross;
	yUpDownCross = posY - _yCross;
	xRigthLeftCross = posX - _yCross;
	yRigthLeftCross = posY - _xCross;
	ofSetColor(100,100);
	ofRect(xUpDonwCross, yUpDownCross, _xCross * 2, _yCross * 2);
	ofRect(xRigthLeftCross, yRigthLeftCross, _yCross * 2, _xCross * 2);
	ofSetColor(100,120);
	ofCircle(posX, posY, _xCross);
}

void Input::crossButtonPressed(int posX, int posY, int x, int y, int button){
	_yUp = (_yCross * 2) / 3 + yUpDownCross;
	_yDown = ((_yCross * 2) * 2) / 3 + yUpDownCross;
	_xLeft = ((_yCross * 2) / 3) + xRigthLeftCross;
	_xRigth = ((_yCross * 2) * 2) / 3 + xRigthLeftCross;
	if (x >= xUpDonwCross && x <= (xUpDonwCross + _xCross * 2) && y >= yUpDownCross && y <= _yUp){
		activeUpCross = true;
	}
	else if (x >= xUpDonwCross && x <= (xUpDonwCross + _xCross * 2) && y >= _yDown && y <= _yCross * 2 + yUpDownCross){
		activeDownCross = true;
	}
	else if (y >= _yUp &&  y <= _yDown && x >= xRigthLeftCross && x <= _xLeft){
		activeLeftCross = true;
	}
	else if (y >= _yUp &&  y <= _yDown && x >= _xRigth && x <= _yCross * 2 + xRigthLeftCross){
		avtiveRigthCross = true;
	}
}

void Input::crossButtonReleassed(int posX, int posY, int x, int y, int button){
	activeUpCross = false;
	activeDownCross = false;
	activeLeftCross = false;
	avtiveRigthCross = false;
	
}