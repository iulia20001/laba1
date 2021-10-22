#include <iostream>
using namespace std;

int main()
{
    int N, s1=0, s2=1;
    setlocale(LC_ALL, "Russian");
    std :: cin >> N;
    while (N>0)
    {
        s1 += N % 10;
        s2 += N % 10;
        N /= 10;
    }
    std :: cout << "Сумма: " << s1 << std :: end;
    std :: cout << "Произведение: " << s2;
    return 0;
}