/*
 * main.cpp
 *
 *  Created on: 18 Dec 2014
 *      Author: apw253
 */

#include "Window.h"
#include "Colours.h"
#include <cmath>
#include "Line.h"
using namespace SPA;


int main(int argc, char * argv[]) {

	SPA::Window window(500,500,"My Test",24);
	Fl::visual(FL_DOUBLE | FL_INDEX);


	Shape * shape = new Shape(250,250,0);
	shape->setRotationSpeed(2);

	Line * line = new Line();

	line->setColor(getColor(BLACK));

	line->addPoint(Point(-100,-100));
	line->addPoint(Point(100,-100));
	line->addPoint(Point(100,100));
	line->addPoint(Point(-100,100));
	line->addPoint(Point(-100,-100));

    Shape * square = new Shape(250,250,45);
    shape->setRotationSpeed(-2);

    Line * line1 = new Line();

    line1->setColor(getColor(RED));

    line1->addPoint(Point(0,0));
    line1->addPoint(Point(100,0));
    line1->addPoint(Point(100,100));
    line1->addPoint(Point(0,100));
    line1->addPoint(Point(0,0));
    square->addLine(line1);
    window.addShape(square);

	shape->addLine(line);

	window.addShape(shape);
    ////////

	window.show(argc,argv);

	return Fl::run();
}


