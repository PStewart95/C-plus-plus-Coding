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
#include <string>

using namespace std;

int main(int argc, char * argv[]) {

	SPA::Window window(500,500,"My Test");

    ifstream myInputFile;
    myInputFile.open("G:/points3.dat");

    int n;
    myInputFile>>n;

    vector<float> xvec;
    vector<float> yvec;

    readPointsFromStream( n, xvec, yvec, myInputFile);

    for (int i=0; i=n; ++i)

    window.show(argc,argv);

	return Fl::run();
}


