#include "Window.h"


int main(int argc, char * argv[]) {

    int nSides;
    do {
    std::cin >> nSides;
    bool isGood = std::cin.good();
    if (isGood) {}
        else { return 0;
    }
    } while(nSides<3);

    int sideLength;
    do{
    std::cin>>sideLength;
    bool isGood = std::cin.good();
    if (isGood) {}
    else { return 0;
    }
    } while(sideLength<1);

// create a new window of size 500 x 500 pixels
// the top left corner of the window is (0,0)
	SPA::Window window(500, 500, "My Test");

	int n=nSides;
    int a=(250-(sideLength/2));
    int b= (250-((sideLength/2)*tan((90-(360/(2*n))))*(M_PI/180)));
    window.startNewLine (a,b);
    window.penSetAngle (0);
    for(int i=0;i<n;++i)
    {window.penForward(sideLength);
    window.penRotateDegrees(float(360.0)/n);}
    window.stopCurrentLine();
	// display the window
	window.display();
	// run the FLTK event loop - this allows you to move the window around etc
	// and ultimately set up click events.
	// program will end when you close the window
	return Fl::run();
}