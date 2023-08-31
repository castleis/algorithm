#include <iostream>
using namespace std;

// 입력받는 수의 범위가 1~10^1000 으로 long long의 표현 범위를 넘어섬.
// 따라서 이 문제를 C++로 풀려면.. 문자열로 변환해서 각 연산을 구해야 한다는데..?
int main()
{
    long long int n, m;
    scanf("%lld %lld", &n, &m);

    cout << n / m << endl;
    cout << n % m << endl;
}