#include <iostream>

using namespace std;

int main()
{
    int n, temp = 0;
    char a;

    for (;;)
    {
        cout << "Enter the number : ";
        cin >> n;

        for (int i = n; i >= 2; i--)
        {
            if (n % i != 0) // It is prime number.
                temp = 1;

            else
                temp = 0;
        }
        if (temp == 0)
            cout << "This is not a prime number." << endl;

        else
            cout << "This is a prime number." << endl;

        cout << "Do you want countinue y/n ? ";
        cin >> a;

        if (a == 'y')
            continue;

        else if (a == 'n')
            break;

        else
        {
            cout << "Wrong input" << endl;
            break;
        }
    }

    return 0;
}
