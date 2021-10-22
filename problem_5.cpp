#include <iostream>
using namespace std;

void sum()
{
    float x = 0;
    cout << " ";
    cin >> x;

    if(x == 0) cout << " " << endl;

    int Sum = 2*x*x*x*x-4*x*x*x+x*x*x+3*x+2;
    cout << " " Sum << endl;
}
int main() 
{
    sum();
    system("pause");
    return 0;
}