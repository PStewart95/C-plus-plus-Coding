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
    myInputFile.open("/data/hays/Teaching/2016-17/marking/points3.dat");
     while (myInputFile.good()) {

        int n;
        myInputFile >> n; //-- RS: You should have a stream state test here, -1
        vector<float> xvec;
        vector<float> yvec;
        readPointsFromStream(n, xvec, yvec, myInputFile);
        drawPoints(window, xvec, yvec);}

        window.show(argc, argv);
        myInputFile.close();
        //-- RS: You should have a loop over the vectors and print their values to console, -1
        return Fl::run();

}
//-- 15/18