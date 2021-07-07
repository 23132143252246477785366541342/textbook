/* 
    Casting is basically changing the type of a value:
    This is the syntax:
    static_cast<type you want to change to>(value you want to change to different type)

    So, static_cast<int>(12.123123) would change the float 12.123123 to the int 12
*/

#include <iostream>

using namespace std;

int main() {
    cout << "static_cast<int>(7.9) = " << static_cast<int>(7.9) << endl;
    cout << "static_cast<int>(3.3) = " << static_cast<int>(3.3) << endl;
    cout << "static_cast<double>(25) = " << static_cast<double>(25) << endl;
    cout << "static_cast<double>(5 + 3) = " << static_cast<double>(5 + 3) << endl;
    cout << "static_cast<double>(15) / 2 = " << static_cast<double>(15) / 2 << endl;
    cout << "static_cast<double>(15 / 2) = " << static_cast<double>(15 / 2) << endl;
    cout << "static_cast<int>(7.8 + static_cast<double>(15) / 2) = " << static_cast<int>(7.8 + static_cast<double>(15) / 2) << endl;

}