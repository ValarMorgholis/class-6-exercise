#include <iostream>

using namespace std;

int main()
{
    int m, n, sum = 0;

    cout << "Please Enter the bigger(m) number : ";
    cin >> m;

    cout << "Please Enter the smaller(n) number : ";
    cin >> n;

    if (m < n)
        cout << "I said enter the bigger number as (m) what is your problem ?" << endl;

    if (n % 2 != 0) // It means the number is odd.

        for (int i = n + 2; i < m; i +=2)
            sum = sum + i;

    else // It means the number is even.

        for (int i = n + 1; i < m; i +=2)
            sum += i;


    if (m > n)
        cout << "Sumation of odd number between n and m : " << sum << endl;

    return 0;
}
