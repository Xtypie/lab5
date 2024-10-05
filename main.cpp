#include<iostream>

using namespace std;

int main()
{

    // ЗАДАНИЕ 1
    cout << "Hello, world!" << endl;
    int n, mx, ind, sum;
    ind = 0;
    mx = -9999999;
    sum = 0;

    cout <<  "enter count of numbers" << endl;
    cin >> n;
    
    cout << "enter numbers, \"0\" is the last number" << endl;


    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num != 0)
        {
            if ((num % 7 == 0) && (num < 0))
            {
                sum += num;
                num > mx ? (mx = num) & (ind = i + 1) : (mx = mx) & (ind = ind);
            }
            
        }
        else
        {
            cout << "sum is " << sum << ", index of max num: " << ind << ", max num: " << mx << endl;
            return 0;

        }

    }
    cout << "sum is " << sum << ", index of max num: " << ind << ", max num: " << mx << endl;


    // ЗАДАНИЕ 2

    long long num2;
    cout << "enter natural number N < 10^9" << endl;
    cin >> num2;
    long long multi = 1;
    
    while (num2 != 0)
    {
        multi *= (num2 % 10);
        num2 /= 10;
    }
    cout << "multiplication numeral of number: " << multi << endl;
    return 0;
    
}