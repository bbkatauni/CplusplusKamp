#include <iostream>

using namespace std;


int faktoriyelRecursive(int x) {
    if (x == 1) {
        return 1;
    } else {
        return x * faktoriyelRecursive(x - 1);
    }
}


int main() {

    cout<<faktoriyelRecursive(5)<<endl;


    return 0;
}

