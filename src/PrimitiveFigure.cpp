#include "PrimitiveFigure.h"


PrimitiveFigure::PrimitiveFigure(void)
{
}


PrimitiveFigure::~PrimitiveFigure(void)
{
}


void PrimitiveFigure::drawCircle(int x, int y, int radius){
	ofCircle(x, y, radius);
}
void PrimitiveFigure::drawCircle(int x, int y, int width, int height){
	ofEllipse(x, y, width, height);
}

void PrimitiveFigure::drawSquare(int x, int y, int width, int height){
	ofRect(x, y, width, height);
}
void PrimitiveFigure::drawTriangle(int x1, int y1, int x2, int y2, int x3, int y3){
	ofTriangle(x1, y1, x2, y2, x3, y3);
}
void PrimitiveFigure::drawLine(int x1, int y1, int x2, int y2){
	ofLine(x1, y1, x2, y2);
}