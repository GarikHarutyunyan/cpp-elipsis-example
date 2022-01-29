#include <iostream>

using namespace std;

// The definition of functions
int sum1(int k, ...);
int sum2(int k, ...);

int main()
{
    cout << "Sum: " << sum1(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0) << endl;
    cout << "Sum: " << sum1(1, 2, 3, 4, 0) << endl;

    cout << endl;

    cout << "Sum: " << sum2(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10) << endl;
    cout << "Sum: " << sum2(4, 1, 2, 3, 4) << endl;
}

// Where has agreement to stop when parameter is 0
int sum1(int k, ...) {
    int s = 0, * p;
    p = &k;
    while (*p) {
        s += *p;
        p++;
    }
    return s;
};

// Where first argument is the count of parameters
int sum2(int k, ...) {
    int s = 0, * p;
    p = &k+1;
    for (int i = 0; i < k; i++) {
        s += *p;
        p++;
    }
    return s;
};