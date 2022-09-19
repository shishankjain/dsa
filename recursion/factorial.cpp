#include <iostream>
using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;
    }

    return n * factorial(n-1);
}

int main(){
    int n;
    cin >> n;

    int answer = factorial(n);

    cout << "Factorial of " << n << " is " << answer << endl;
    return 0;
}