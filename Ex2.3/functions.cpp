//
// Created by ap14058 on 07/02/2017.
//

#include "functions.h"

void makePolygon(SPA::Window & window, int sides, int length, int x, int y)

{   int n=sides;
    int a=(x-(length/2.0));
    int b=int (y-((length/2.0)*tan((90.0-(360.0/(2.0*n)))*(M_PI/180.0))));
    window.startNewLine(a,b);
    window.penSetAngle(0.0);
    for(int i=0;i<n;++i){
        window.penForward(length);
        window.penRotateDegrees(float(360.0/n));
    }
    window.stopCurrentLine();
}