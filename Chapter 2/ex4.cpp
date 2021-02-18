#include <iostream> //part a
#include <iomanip>
using namespace std; //part b

int main() {

    double num1, num2, num3, average; //part c

    //part d
    num1 = 75.35;
    num2 = -35.56;
    num3 = 15.76;

    average = (num1 + num2 + num3)/3.0; //part e

    //part f
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
    cout << "num3: " << num3 << endl;
    cout << "average: " << setprecision(4) << average << endl;

    return 0;
}
