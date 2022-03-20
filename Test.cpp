#include "Notebook.hpp"
#include "doctest.h"
#include <string>
#include "Direction.hpp"
using ariel::Direction;
using ariel::Notebook;
#include <iostream>
#include <stdexcept>
using namespace std;
ariel::Notebook notebook;

TEST_CASE("input must be positive unsigned"){
    for(uint i=0; i< 100; i++){
        CHECK_THROWS(notebook.write(-i,0,0,Direction::Horizontal,"message"));
        CHECK_THROWS(notebook.write(0,-i,0,Direction::Horizontal,"message"));
        CHECK_THROWS(notebook.write(0,0,-i,Direction::Horizontal,"message"));
        //-----------------
        CHECK_THROWS(notebook.read(-i,0,0,Direction::Horizontal, 0));
        CHECK_THROWS(notebook.read(0,-i,0,Direction::Horizontal, 0));
        CHECK_THROWS(notebook.read(0,0,-i,Direction::Horizontal, 0));
        CHECK_THROWS(notebook.read(0,0,0,Direction::Horizontal, -i));
        //-----------------
        CHECK_THROWS(notebook.erase(-i,0,0,Direction::Horizontal, 0));
        CHECK_THROWS(notebook.erase(0,-i,0,Direction::Horizontal, 0));
        CHECK_THROWS(notebook.erase(0,0,-i,Direction::Horizontal, 0));
        CHECK_THROWS(notebook.erase(0,0,0,Direction::Horizontal, -i));
        //-----------------
        CHECK_THROWS(notebook.show(-i));
    }
}
TEST_CASE("check empty cells"){
    for(uint i=0; i<100; i++){
    }
}
