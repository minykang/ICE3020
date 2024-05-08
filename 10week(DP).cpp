#include <iostream>
#include <algorithm>

using namespace std;

int solve(int n) {
    if (n == 3) return 0;
    if (n == 4) return 1;
    if (n == 5 || n == 6) return 2;
    if (n % 2 == 0) return solve(n / 2) + 2;
    else return solve((n + 1) / 2) + 2;
}

int main() {
    int n;
    cin >> n;

    cout << solve(n) << endl;

    return 0;
}
