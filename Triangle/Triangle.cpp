#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // top of triangle
    for (int i = 0; i < n-1;i++) {
        cout << ' ';
    }
    cout << '*' << endl;
    // mid of triangle
    for (int i = 0; i < n-2; i++) {
        for (int j = 0; j < n-2-i; j++) {
            cout << ' ';
        }
        cout << '*';
        for (int k = 0; k < 1+(2*i); k++) {
            cout << ' ';
        }
        cout << '*' << endl;
    }
    // bot of triangle
    for (int i = 0; i < 2*n-1; i++) {
        cout << '*';
    }
}