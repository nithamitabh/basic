#include <iostream>
using namespace std;

int subtractUsingBitwise(int x, int y)
{

    while (y != 0)  // Iterate until carry becomes 0.
    {
        // step 1: get the borrow bit
        int borrow = (~x) & y;

        // step 2: get the difference using XOR
        x = x ^ y;

        // step 3: left shift borrow by 1
        y = borrow << 1;
    }
    return x;
}

int main()
{
    int x = 5, y = 3;
    int answer = subtractUsingBitwise(x, y);
    cout << "x - y is : "<<answer<<endl;
    return 0;
}
