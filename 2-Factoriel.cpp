#include <iostream>

using namespace std;

int main()
{
    int n, sum = 1, temp;

    cout << "Enter the number : ";
    cin >> n;

    temp = n;

    while (n != 0)
    {
        sum *= n;
        n--;
    }

    cout << temp << "! = " << sum << endl;

    return 0;
}
