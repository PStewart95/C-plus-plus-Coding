#define _USE_MATHS_DEFINES
#include <cmath>
#include "Window.h"

int main(int argc, char * argv[]) {
// create a new window of size 500 x 500 pixels
// the top left corner of the window is (0,0)
	SPA::Window window(500,500,"My Test");

	// Add code here to draw things

	/*
	 * Here are some of the options
	 * window.startNewLine(float x, float y) start a new line from location (x,y)
	 * window.penSetAngle(float angle) to set the initial ang of the pen in degrees
	 * window.penRotateDegrees(float angle) rotate the pen anti-clockwise in degrees
	 * window.penForward(float distance) move the pen forward
	 * window.stopLine() to stop the current line
*/
	int a=250;
	int b=0;

	window.startNewLine(a,b);
	window.penRotateDegrees(90);
	window.penForward(500);
	window.stopCurrentLine();

	window.startNewLine(b,a);
	window.penSetAngle(0);
	window.penForward(500);
	window.stopCurrentLine();

/* Code to Draw a triangle below */

	int x=250-100;
	int y= (250-(100*tan((M_PI)/6)));

	window.startNewLine(x,y);
	window.penSetAngle(0);
	int n=3;
	for(int i=0;i<n;++i) {
		window.penForward(200);
		window.penRotateDegrees(120);
	}

	window.stopCurrentLine();

/* Code to draw a Heptagon Below */

	int h=250-100;
	double f=(tan((90-360/14))*(M_PI)/180);
	int g=50-(100*f);

	window.startNewLine(h,g);
	window.penSetAngle(0);
	int c=7;
	for(int i=0;i<c;++i) {
		window.penForward(200);
		window.penRotateDegrees(51.43);
	}


	window.stopCurrentLine();

	// display the window
	window.display();
	// run the FLTK event loop - this allows you to move the window around etc
	// and ultimately set up click events.
	// program will end when you close the window
	return Fl::run();
}

//--10/10