/* 
    ORDER OF PRECEDENCE:
    C++ does *, /, and %, then + and -
    % means remainder, if you didn't know.

    4 % 2 = 0
    4 % 3 = 1
    52 % 10 = 2

    UNARY VS BINARY:
    Unary means that the operator only needs on value to operate.
    Binary means that the operator needs 2 values to operate.
    You can use + and - as binary and unary operators:
    -1 (unary)
    -3 (unary)
    +4 (unary)

    4 + 10 (binary)
    100 + 123 (binary)
    23 - 3 (binary)

    However, you can only use *, /, and % as binary operators.
*/



#include <iostream>

using namespace std;

int main() {
    cout << 3 * 7 - 6 + 2 * 5 / 4 + 6 << endl; // 23
    /*
        3 * 7 - 6 + 2 * 5 / 4 + 6
        = 21 - 6 + 10 / 4 + 6
        = 21 - 6 + 2 + 6
        = 15 + 2 + 6
        = 17 + 6
        = 23
    */
    cout << 52 % 10 << endl; // 2
}