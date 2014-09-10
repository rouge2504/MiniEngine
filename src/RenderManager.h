#pragma once
#include "PrimitiveFigure.h"
#define MAX_FIGURE 10
class RenderManager
{
public:
	RenderManager(void);
	~RenderManager(void);
	void drawCircle(int x, int y, int radius);
	void drawCircle(int x, int y, int width, int height);
	void drawSquare(int x, int y, int width, int height);
	void drawTriangle(int x1, int y1, int x2, int y2, int x3, int y3);
	void drawLine(int x1, int y1, int x2, int y2);

	PrimitiveFigure primitiveFigure[MAX_FIGURE];
};

