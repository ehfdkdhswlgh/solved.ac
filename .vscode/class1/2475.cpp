#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int a, b, c, d, e;

    cin >> a >> b >> c >> d >> e;
    
    int result = (a*a + b*b + c*c + d*d + e*e) % 10;
    
    cout << result;
	
}