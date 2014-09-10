#pragma once
#include "ofMain.h"
class RenderSprite
{
public:
	RenderSprite(void);
	~RenderSprite(void);

	void init(string fileName);
	void init(string fileName, int width, int height);
	void draw(int x, int y);


	int width, height;
	int radius, x, y;
	int   appFPS;
    float sequenceFPS;
    bool  bFrameIndependent;
    vector <ofImage> images;
};

