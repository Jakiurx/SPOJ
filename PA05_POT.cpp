#include <iostream>

using namespace std;

void pot() {

    unsigned long long a, b, c;

    cin >> a >> b;

    a = a%10;

    (b % 4 == 0) ? b = 4: b = b % 4;

    c = a;

    for (int j = 1; j < b; j++) c *= a;

    cout <<  c % 10 << endl;

}

int main() {

    int x;

    cin >> x;

    for (int i = 0; i < x; i++) {

        pot();

    }

    return 0;

}
