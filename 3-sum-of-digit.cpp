#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;

    cout << "Enter the number : ";
    cin >> n;

    while (n % 10 != 0)
    {
        sum += n % 10;
        n = n / 10;
    }

    cout << "Summation of Thease digits is : " << sum << endl;

    return 0;
}
