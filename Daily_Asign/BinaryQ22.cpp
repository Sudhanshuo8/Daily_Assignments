//22. WAP to convert binary number to decimal

#include <iostream>
using namespace std;
int convert(long long n);
int main() {
    long long n;
    cout<<"Enter a binary number:";
    cin>>n;
    printf("%lld in binary = %d in decimal", n, convert(n));
    return 0;
}

int convert(long long n) {
    int dec = 0, i = 0, rem;
    while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}
