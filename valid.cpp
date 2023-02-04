#include <iostream>
using namespace std;

int main()
{
    cout << "Please enter a number from 0-99:"
         << "\n";
    int num;
    cin >> num;
    while (num >= 100 or num <= 0)
    {
        cout << "Please re-enter a valid integer from 0-99: "
             << "\n";
        cin >> num;
    }
    int num2 = num * num;
    cout << num << " squared is "
         << num2 << "\n";
    return 0;
}