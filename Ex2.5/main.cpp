/*
 * main.cpp
 *
 *  Created on: 18 Dec 2014
 *      Author: apw253
 */

#include "Window.h"
#include "Colours.h"
#include<fstream>

using namespace std;

int main(int argc, char * argv[]) {
// create a new window of size 500 x 500 pixels
// the top left corner of the window is (0,0)
	SPA::Window window(500,500,"My Test");

    ifstream myInputFile ("G:/points.dat");

    int a;
    int b;
    while( !myInputFile.eof() ){
        myInputFile >> a>>b;
        cout<< a << " "<< b << " " << endl;

        cout<< myInputFile.eof()<<endl;

        window.addPoint(a,b);
    }

    window.stopCurrentLine();

	window.show(argc,argv);
	// run the FLTK event loop - this allows you to move the window around etc
	// and ultimately set up click events.
	// program will end when you close the window
	return Fl::run();
}


