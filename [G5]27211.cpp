#include <iostream>
using namespace std;

int main()
{
    int n, m;
    //scanf("%d%d", &n, &m);
    cin >> n >> m;

    int** planet;
    planet = new int* [n];
    for (int i=0; i < n; i++) {
        planet[i] = new int[m];
        for (int j = 0; j < m; j++) {
            cin >> planet[i][j];
        }
    }
    for (int i=0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << planet[i][j] << endl;
        }
    }

    // 메모리 해제
    for (int i=0; i<n; i++) {
        delete[] planet[i];
    }
    delete[] planet;
}