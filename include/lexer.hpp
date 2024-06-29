#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>


enum Token {
    tok_eof,
    tok_def,
    tok_extern,
    tok_identifier,
    tok_number
};

static std::string istr;
static std::string val;
static int tokenizer(std::string& s);