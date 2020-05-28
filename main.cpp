#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using middleChar = string;

middleChar getMiddleChar( string input ) {
    
    size_t size = input.size();
    int index = 0;
    
    if ( size % 2 == 0 ) {
        index = ( size / 2 ) - 1;
        return input.substr( index, 2 );
    } else {
        index = ( size - 1 ) / 2;
        return input.substr( index, 1 );
    }
}

int main() {

    string str = "rioters";
    cout << "The middle character(s) of " << str << " is: " <<
    getMiddleChar( str ) << endl;
}