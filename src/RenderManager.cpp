#include "RenderManager.h"


RenderManager::RenderManager(void)
{
}


RenderManager::~RenderManager(void)
{
}

void RenderManager::drawCircle(int x, int y, int radius){
	for (int i = 0; i < MAX_FIGURE; i++)
		primitiveFigure[i].drawCircle(x, y, radius);
}
void RenderManager::drawCircle(int x, int y, int width, int height){
	for (int i = 0; i < MAX_FIGURE; i++)
		primitiveFigure[i].drawCircle(x, y, width,height);
}

void RenderManager::drawSquare(int x, int y, int width, int height){
	for (int i = 0; i < MAX_FIGURE; i++)
		primitiveFigure[i].drawSquare(x, y, width, height);
}
void RenderManager::drawTriangle(int x1, int y1, int x2, int y2, int x3, int y3){
	for (int i = 0; i < MAX_FIGURE; i++)
		primitiveFigure[i].drawTriangle(x1, y1, x2, y2, x3, y3);
}
void RenderManager::drawLine(int x1, int y1, int x2, int y2){
	for (int i = 0; i < MAX_FIGURE; i++)
		primitiveFigure[i].drawLine(x1, y1, x2, y2);
}