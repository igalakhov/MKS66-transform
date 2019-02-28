//
// Created by Ivan Galakhov on 2019-02-28.
//

#ifndef WORK_01_LINE_SCRIPT_PARSER_H
#define WORK_01_LINE_SCRIPT_PARSER_H

#include <iostream>


class ScriptParser {
public:
    // constructor/destructor
    ScriptParser(std::string);
    ~ScriptParser();

private:
    void parse_commands();

};


#endif //WORK_01_LINE_SCRIPT_PARSER_H
