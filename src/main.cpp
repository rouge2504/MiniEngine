#include "ofMain.h"
#include "testApp.h"

//========================================================================
int main( ){

	ifstream resizeWindow("Window_Size.txt");

	int sizeX, sizeY;

	if (resizeWindow == NULL){
		cout << "No hay archivo" << endl;
		sizeX = 800;
		sizeY = 600;
	}
	else{

		cout << "Archivo encontrado" << endl;
	resizeWindow >> sizeX;
	resizeWindow >> sizeY;
	resizeWindow.close();

	}

	ofSetupOpenGL( sizeX, sizeY, OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new testApp());

}
