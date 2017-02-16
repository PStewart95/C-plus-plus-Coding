/*
 * main.cpp
 *
 *  Created on: 18 Dec 2014
 *      Author: apw253
 */

#include "Window.h"
#include "Colours.h"
#include "functions.h"
#include <fstream>

using namespace std;

int main(int argc, char * argv[]) {

	SPA::Window window(500,500,"My Test");

    ifstream file("G:/points3.dat");

    file.open;

	window.show(argc,argv);

	return Fl::run();
}


