#include "RenderManager.h"

RenderManager* RenderManager::instancia=NULL;

RenderManager* RenderManager::Instance(){
	return instancia ? instancia:(instancia = new RenderManager);
}

RenderManager::RenderManager(void)
{
}


RenderManager::~RenderManager(void)
{
}

void RenderManager::drawCircle(int x, int y, int radius){
	 
	ofCircle(x, y, radius);
}
void RenderManager::drawCircle(int x, int y, int width, int height){
	 
		ofEllipse(x, y, width, height);
}

void RenderManager::drawSquare(int x, int y, int width, int height){
	 
		ofRect(x, y, width, height);
}
void RenderManager::drawTriangle(int x1, int y1, int x2, int y2, int x3, int y3){
	 
		ofTriangle(x1, y1, x2, y2, x3, y3);
}
void RenderManager::drawLine(int x1, int y1, int x2, int y2){
	 
		ofLine(x1, y1, x2, y2);
}