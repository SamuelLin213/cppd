#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

    cout << left << setw(16) << "CCCCCCCCC" << setw(18) << "++" << setw(9) <<
    "++" << endl;
    cout << setw(16) << "CC" << setw(18) << "++" << setw(9) <<
    "++" << endl;
    for(int i = 0; i < 2; i++)
    {
      cout << setw(10) << "CC" << setw(18) << "++++++++++++++" <<
      "++++++++++++++" << endl;
    }
    cout << setw(16) << "CC" << setw(18) << "++" << setw(9) <<
    "++" << endl;
    cout << left << setw(16) << "CCCCCCCCC" << setw(18) << "++" << setw(9) <<
    "++" << endl;

    return 0;
}
