// link - 

#include <iostream>
#include <iomanip>
#include <ios>
using namespace std;

int main() {
    int t;
    cin >> t;

    int n = t;
    double sum = 0;

    while (t--) {
        double a;
        cin >> a;
        sum += a;
    }

    cout << fixed << setprecision(12) << sum / n << endl;
    return 0;
}

// Testcase
// I:
// 3
// 50 50 100
// O: 66.666666666667