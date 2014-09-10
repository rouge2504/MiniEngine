#include "RenderSprite.h"


RenderSprite::RenderSprite(void)
{
}


RenderSprite::~RenderSprite(void)
{
}

void RenderSprite::init(string fileName){

	    ofDirectory dir;
    
    int nFiles = dir.listDir(fileName);
    if(nFiles) {
        
        for(int i=0; i<dir.numFiles(); i++) { 
            
            // add the image to the vector
            string filePath = dir.getPath(i);
            images.push_back(ofImage());
            images.back().loadImage(filePath);
            
        } 
        
    } 
    else printf("Could not find folder\n");
    
    // this toggle will tell the sequence
    // be be indepent of the app fps
    bFrameIndependent = true;
    
    // this will set the speed to play 
    // the animation back we set the
    // default to 24fps
    sequenceFPS = 15;

    // set the app fps 
    appFPS = 60;
    ofSetFrameRate(appFPS);

}

void RenderSprite::init(string fileName, int width, int height){

	    ofDirectory dir;
    
    int nFiles = dir.listDir(fileName);
    if(nFiles) {
        
        for(int i=0; i<dir.numFiles(); i++) { 
            
            // add the image to the vector
            string filePath = dir.getPath(i);
			images.push_back(ofImage());
			ofImage().resize(width, height);
            images.back().loadImage(filePath);
            
        } 
        
    } 
    else printf("Could not find folder\n");
    
    bFrameIndependent = true;
    
    sequenceFPS = 15;
 
    appFPS = 60;
    ofSetFrameRate(appFPS);

}

void RenderSprite::draw(int x, int y){


	    // we need some images if not return
    if((int)images.size() <= 0) {
        ofSetColor(255);
        ofDrawBitmapString("No Images...", 150, ofGetHeight()/2);
        return;
    }
    
    // this is the total time of the animation based on fps
    //float totalTime = images.size() / sequenceFPS;
    
    
    int frameIndex = 0;
    
    if(bFrameIndependent) {
        // calculate the frame index based on the app time
        // and the desired sequence fps. then mod to wrap
        frameIndex = (int)(ofGetElapsedTimef() * sequenceFPS) % images.size();
    }
    else {
        // set the frame index based on the app frame
        // count. then mod to wrap.
        frameIndex = ofGetFrameNum() % images.size();
    }
    
    // draw the image sequence at the new frame count
    ofSetColor(255);
    images[frameIndex].draw(x, y);

}
