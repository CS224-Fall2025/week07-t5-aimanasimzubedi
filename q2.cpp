#include <iostream>
using namespace std;

class Numpy {
private:
    int arr[10];
public:
    void input() {
        for (int i=0; i<10; i++) {
            cin>>arr[i];
        }
    }
    void print() {
        cout << "[";
        for (int i = 0; i < 10; i++) {
            cout << arr[i];
            if (i!=9){
                cout << " , ";
            }
        }
        cout <<"]"<< endl;
    }
    Numpy add(Numpy other) {
        Numpy result;
        for (int i=0; i<10; i++) {
            result.arr[i] = arr[i] + other.arr[i];
        }
        return result;
    }
    Numpy add(int val) {
        Numpy result;
        for (int i =0; i<10; i++) {
            result.arr[i]= arr[i]+val;
        }
        return result;
    }
};

int main() {
    int n;
    cin>>n;
    Numpy n1, n2;
    n1.input();
    n2.input();
    int val;
    cin>>val;
    cout << "n1 + n2 = ";
    Numpy sum1 = n1.add(n2);
    sum1.print();
    cout << "n1+" <<val<< " = ";
    Numpy sum2=n1.add(val);
    sum2.print();
    return 0;
}
