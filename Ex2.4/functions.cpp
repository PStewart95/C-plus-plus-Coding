//
// Created by ap14058 on 13/02/2017.
//

#include "functions.h"
#include "window.h"
#include <cmath>

void makeInscribedPolygon(SPA::Window & window, int sides, float radius, int x, int y)

{   int n=sides;
    float r=radius;
    double sidelength = 2*(radius*sin((M_PI/sides)));
    //calculates side length of polygon

    int a=(x-(sidelength/2.0));
    //calculates position for line in the plane of the x-axis

    int b=int (y-((sidelength/2.0)*tan((90.0-(360.0/(2.0*n)))*(M_PI/180.0))));
    //calculates positions for line in the plane of the y-axis

    window.startNewLine(a,b);
    window.penSetAngle(0.0);
    for(int i=0;i<n;++i){
        window.penForward(sidelength);
        window.penRotateDegrees(float(360.0/n));
    }
    window.stopCurrentLine();
}