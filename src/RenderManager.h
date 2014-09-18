#pragma once
#include "ofMain.h"
#define MAX_FIGURE 10
class RenderManager
{
public:
	static RenderManager*  Instance();
	void RenderManager::drawCircle(int x, int y, int radius);
	void RenderManager::drawCircle(int x, int y, int width, int height);
	void RenderManager::drawSquare(int x, int y, int width, int height);
	void RenderManager::drawTriangle(int x1, int y1, int x2, int y2, int x3, int y3);
	void RenderManager::drawLine(int x1, int y1, int x2, int y2);

private:
	RenderManager(void);
	~RenderManager(void);
	RenderManager(RenderManager const&){};
	RenderManager& operator=(RenderManager const&){};
	static RenderManager* instancia;
};

