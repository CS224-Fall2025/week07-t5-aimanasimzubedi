#include <iostream>
using namespace std;

void FindHappiness(int n) {
    int sum;

    while (n >= 10) { 
        sum=0;
        while (n>0) {
            int digit = n%10;
            sum += (digit*digit);
            n = n/10;
        }
        n = sum;
    }

    if (n==1) {
        cout <<"Happy Number!"<< endl;
    } else {
        cout <<"Sad Number!"<< endl;
    }
}

int main() {
    int n;
    do {
        cout<< "Enter a positive integer: ";
        cin>>n;
        if (n < 1) {
            cout<<"Invalid input Try again!" << endl;
        }
    } while (n<1);
    FindHappiness(n);
    return 0;
}
