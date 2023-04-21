#include <iostream>

using namespace std;


int sumCount(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else if(n == 2)
    {
        return 2;
    }
    else if(n == 3)
    {
        return 4;
    }
    else
    {
        return sumCount(n - 1) + sumCount(n - 2) + sumCount(n - 3);
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> n;
        cout << sumCount(n) << '\n';
    }

}