/*
 * main.cpp
 *
 *  Created on: 18 Dec 2014
 *      Author: apw253
 */

#include "Window.h"
#include "functions.h"

int main(int argc, char * argv[]) {
// create a new window of size 600 x 600 pixels
// the top left corner of the window is (0,0)
    SPA::Window window(600,600,"My Test");

    for (int i=3, n=7;i<=n;++i)
    {
        makeInscribedPolygon(window,i,200,300,300);
    }

    makeInscribedPolygon(window,120,200,300,300);

    window.display();

    return Fl::run();
}

//-- 7/7