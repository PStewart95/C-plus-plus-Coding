/*
 * main.cpp
 *
 *  Created on: 18 Dec 2014
 *      Author: apw253
 */

#include "Window.h"
#include "Colours.h"
#include <fstream>

using namespace std;

int main(int argc, char * argv[]) {
// create a new window of size 500 x 500 pixels
// the top left corner of the window is (0,0)
    SPA::Window window(500,500,"My Test");

    ifstream fin("G:/points2.dat");
    int npoints;
    fin >> npoints;
    cout << npoints << endl;

    int a;
    int b;
    for(int i=0; i<=npoints; i++) {
        fin >> a >> b;

    cout<< a << " "<< b << " " << fin.good() << endl;

    window.addPoint(a,b);

    if (!fin.good() ) break;

    }

    window.stopCurrentLine();

    window.show(argc,argv);

return Fl::run();
}
