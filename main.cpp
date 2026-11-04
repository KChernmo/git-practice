#include <iostream>
#include "strings.h"
using namespace std;

int power(int n) {
    return n*n;
}

int main() {
    cout << power(5) << "\n";
    cout << concat3("Git", "Hub", "!") << "\n";
    return 0;
}
