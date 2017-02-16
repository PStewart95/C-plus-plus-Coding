//
// Created by ap14058 on 16/02/2017.
//

#include <iostream>
#include "functions.h"
#include <vector>
using namespace std;

void readPointsFromStream(int n, std::vector<float> & xvec, std::vector <float> & yvec, std::ifstream & f) {

    cout << n << endl;

    for (int i = 0; i < n; ++i) {

        int a;
        int b;
        f >> a >> b;
        cout << i << " " << a << " " << b << endl;

        xvec.push_back(a);
        yvec.push_back(b);

        if (!f.good())
            break;

    }
} void drawPoints(SPA::Window & window, std::vector <float> & xvec, std::vector <float> & yvec )
{
    int n=xvec.size();

    for(int i=0; i<n; ++i){

        window.addPoint(xvec[i],yvec[i]);

    }
    window.stopCurrentLine();
}