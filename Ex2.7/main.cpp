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

    SPA::Window window(500, 500, "My Test");

    ifstream myInputFile;
    myInputFile.open("G:/points3.dat");
     while (myInputFile.good()) {

        int n;
        myInputFile >> n;
        vector<float> xvec;
        vector<float> yvec;
        readPointsFromStream(n, xvec, yvec, myInputFile);
        drawPoints(window, xvec, yvec);}

        window.show(argc, argv);
        myInputFile.close();

        return Fl::run();

}