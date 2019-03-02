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
#include "parsing/obj_parser.h"
#include "parsing/mdl_parser.h"

int main(){

    // initialize the parser and parse commands
    // the return type of the parse is a vector of vectors because that's the easiest to iterate/parse
    // we also know that if the parser returns something, it's 100% with correct syntax and format

    std::cout << "Note: this graphics engine uses a different coordinate system with (0, 0) on the top right" << std::endl;
    std::cout << "If a script outputs something else it's because of that and not because my code is bad or anything" << std::endl;

    auto p = new MDLParser("script.mdl");

    p->run_file(new EdgeMatrix(), TransformationMatrix::identity(), new Drawer());
}