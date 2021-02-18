#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

    cout << setw(34) << setfill('*') << "" << endl;
    cout << setfill(' ') << setw(4) << left << "*" << " "
    << setw(28) << "Programming Assignment 1" << "*" << endl;
    cout << setw(6) << "*" << setw(27) << "Computer Programming I" << "*" << endl;
    cout << setw(10) << "*" << setw(23) << "Author: Samuel" << "*" << endl;
    cout << setw(4) << "*" << setw(29) << "Due Date: Thursday, Jan. 24" << "*" << endl;
    cout << setw(34) << setfill('*') << "" << endl;

    return 0;
}
