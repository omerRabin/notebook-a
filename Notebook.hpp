#include <map>
#include <string>
#include "Direction.hpp"
/*
    Notebook.hpp.
    Author: Omer Rabin.
*/
using namespace std;

struct value{
    char cell='_';
};
namespace ariel {
    class Notebook {
        map<uint,map<uint,map<uint,value>>> notebook; // map 3D represents the notebook
        // indexes of the notebook
        uint end_page;
        uint end_col;
        uint end_row;
        uint start_page;
        uint start_col;
        uint start_row; 
    public:
        Notebook() {
            start_page=0;
            start_col=0;
            start_row=0;
            end_col=0;
            end_row=0;
            end_page=0;
        }
        ~Notebook(){}; // destructor
        void write(uint page, uint row, uint col, Direction direction, std::string str);
        std::string read(uint page, uint row, uint col, Direction direction, uint length);
        void erase(uint page, uint row, uint col, Direction direction, uint length);
        void show(uint page);
    };

}
