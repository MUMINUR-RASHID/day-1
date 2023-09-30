#include <bits/stdc++.h>

using namespace std;




bool CBS(int a, int b, int c) {
    if (c == 0) {
        return true;
    }

    if (c >= a && CBS(a, b, c - a)) {
        return true;
    }

   
    if (c >= b && CBS(a, b, c - b)) {
        return true;
    }

    return false;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    bool result = CBS(a, b, c);

    if (result) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
