//
// Created by Ivan Galakhov on 2019-02-28.
//

#ifndef WORK_01_LINE_OBJ_PARSER_H
#define WORK_01_LINE_OBJ_PARSER_H

#include <iostream>
#include <string>

class OBJFileParser {
public:
    OBJFileParser(std::string);
    ~OBJFileParser();


private:
    void parse_file();
    std::string file_name;

};


#endif //WORK_01_LINE_OBJ_PARSER_H
