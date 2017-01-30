/*
 * main.cpp
 *
 *  Created on: 18 Dec 2014
 *      Author: apw253
 */

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
    window.startNewLine(200,250);
	window.penForward(100);
	window.penRotateDegrees(45);
	window.penForward(100);
	window.stopCurrentLine();

    window.startNewLine(100,150);
    window.penForward(100);
    window.penRotateDegrees(45);
    window.penForward(100);
    window.stopCurrentLine();

    window.startNewLine(0,50);
    window.penForward(100);
    window.penRotateDegrees(315);
    window.penForward(100);
    window.stopCurrentLine();

	// display the window
	window.display();
	// run the FLTK event loop - this allows you to move the window around etc
	// and ultimately set up click events.
	// program will end when you close the window
	return Fl::run();
}


