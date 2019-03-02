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

int main(){
    // initialize the parser and parse commands
    // the return type of the parse is a vector of vectors because that's the easiest to iterate/parse
    // we also know that if the parser returns something, it's 100% with correct syntax and format

    auto parser = new OBJFileParser("../resources/teapot/teapot.obj");

    auto edge_matrix = parser->get_edge_matrix();

    auto t = TransformationMatrix::identity();
    t->add_transformation(TransformationMatrix::translation(250, 200, 0));

    t->add_transformation(TransformationMatrix::dilation(50, 50, 1));

    t->print_self();

    edge_matrix->apply_transformation(t);

    auto drawer = new Drawer();

    drawer->draw_edges(edge_matrix);

    drawer->save("../out.ppm", ".ppm");
}