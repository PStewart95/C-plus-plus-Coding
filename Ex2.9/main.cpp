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

    shape->addLine(line);

    window.addShape(shape);

    Shape * triangle = new Shape(250,250,0);
    triangle->setRotationSpeed(4);

    Line * line2 = new Line();

    line2->setColor(getColor(RED));

    int a=50;
    float x = (a/2.0);
    float y = ((a*tan(M_PI/6.0))/2);
    float z = a/(2*cos(M_PI/6.0));

    line2->addPoint(Point(150-x-250,150-y-250));
    line2->addPoint(Point(150-250,150+z-250));
    line2->addPoint(Point(150+x-250,150-y-250));
    line2->addPoint(Point(150-x-250,150-y-250));
    triangle->addLine(line2);
    window.addShape(triangle);

    Shape * triangle1 = new Shape(250,250,0);
    triangle1->setRotationSpeed(-4);

    Line * line3 = new Line();

    line3->setColor(getColor(BLUE));

    line3->addPoint(Point(350-x-250,350-y-250));
    line3->addPoint(Point(350-250,350+z-250));
    line3->addPoint(Point(350+x-250,350-y-250));
    line3->addPoint(Point(350-x-250,350-y-250));

    triangle1->addLine(line3);
    window.addShape(triangle1);
    window.show(argc,argv);

    return Fl::run();
}

//-- 4/4