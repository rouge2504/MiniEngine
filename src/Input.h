#pragma once
#include "ofGraphics.h"
class Input
{
public:
	Input(void);
	~Input(void);
	void singleCButtonDraw(int posX, int posY);
	void singleCButtonDraw(int posX, int posY, int radius);
	void singleCButtonDraw(int posX, int posY, int colorR, int colorG, int colorB);
	void singleCButtonDraw(int posX, int posY, int radius, int colorR, int colorG, int colorB);
	void singleCButtonPressed(int posX, int posY, int x, int y, int button);
	void singleCButtonPressed(int posX, int posY, int x, int y, int button, int radius);	
	void singleCButtonReleassed(int posX, int posY, int x, int y, int button);	
	void doubleButtonDraw(int posX, int posY);
	void doubleButtonDraw(int posX, int posY, int size);
	void doubleButtonPressed(int posX, int posY, int x, int y, int button);
	void doubleButtonReleassed(int posX, int posY, int x, int y, int button);
	void crossButtonDraw(int posX, int posY);
	void crossButtonDraw(int posX, int posY, int size);
	void crossButtonPressed(int posX, int posY, int x, int y, int button);
	void crossButtonReleassed(int posX, int posY, int x, int y, int button);
	
	bool activeCButton;
	bool activeDoubleButtonUp, activeDoubleButtonDown;
	bool activeUpCross, activeDownCross, avtiveRigthCross, activeLeftCross;

private:

	int distance, radius, colorR, colorG, colorB;
	int radiusButtonA, radiusButtonB, _xDoubleButton, _yDoubleButton, distanceUp, distanceDown, value;
	int xUpDonwCross, yUpDownCross, xRigthLeftCross, yRigthLeftCross, _xCross, _yCross, valueCross, _yUp, _yDown, _xRigth, _xLeft;
};

