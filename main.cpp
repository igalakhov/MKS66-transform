#include <iostream>
#include <zconf.h>
#include <thread>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include "drawing/display.h"
#include "drawing/drawer.h"
#include "matrix/edge_matrix.h"
#include "matrix/transformation_matrix.h"

int main(){
    // initialize the parser and parse commands
    // the return type of the parse is a vector of vectors because that's the easiest to iterate/parse
    // we also know that if the parser returns something, it's 100% with correct syntax and format


    auto A = TransformationMatrix::rotationXYZ(90, 0, 45);
    A->print_self();
}