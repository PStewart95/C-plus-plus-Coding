//
// Created by ap14058 on 16/02/2017.
//

#ifndef EX2_7_FUNCTIONS_H
#define EX2_7_FUNCTIONS_H
#include <vector>
#include <fstream>
#include "Window.h"

void readPointsFromStream(int n, std::vector<float> & xvec, std::vector <float> & yvec, std::ifstream & f);
void drawPoints(SPA::Window & window, std::vector <float> & xvec, std::vector <float> & yvec);

#endif //EX2_7_FUNCTIONS_H