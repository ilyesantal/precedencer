#pragma once

#include <iostream>
#include <string>
#include "binarytree.hpp"

class Precedencer {
public:
    void processString(std::string);

private:
    BinaryTree constructTree(std::string);
};