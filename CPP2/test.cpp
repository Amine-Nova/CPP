#include <iostream>
using namespace std;
int main()
{
    string bin;
    int j = 0, n = 5, d = 0;

    while(j < 8)
    {
        bin[j] = '0';
        j++;
    }
    j = 7;
    while(n > 0)
    {
        d = n % 2;
        n = n / 2;
        bin[j] = d + 48;
        j--;
    }
    j = 0;
    while(j < 8)
        cout << bin[j++];
    cout << endl;
}