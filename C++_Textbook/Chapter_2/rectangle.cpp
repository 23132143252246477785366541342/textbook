#include <iostream>

using namespace std;

int main() {
    double length = 6.0;
    double width = 4.0;
    double area = length * width;
    double perimeter = 2 * (length + width);

    cout << "Program to computer and output the perimeter and "
         << "area of rectangle:" << endl;

    cout << "Length = " << length << endl;
    cout << "Width = " << width << endl;
    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;

    return 0;
}