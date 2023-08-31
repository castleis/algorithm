#include <iostream>
using namespace std;

#if 0
int main() 
{
    int a, b;
    scanf("%d %d", &a, &b);

    if (a > b) {
        cout << ">" << endl;
    } else if (a < b) {
        cout << "<" << endl;
    } else {
        cout << "==" << endl;
    }
}
#endif

// 삼항연산자 사용
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    puts(a > b ? ">" : a < b ? "<" : "==");
}