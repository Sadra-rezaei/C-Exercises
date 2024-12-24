#include <iostream>
using namespace std;

int Power (int number , int power) {
    int result = 1;
    for (int i = 0; i < power; i++) {
        result *= number; 
    }
    return result;
}

int main() {
    int a , x;
    
    cout << "Please enter two numbers(number , power): ";
    cin >> a >> x;
    cout << "=====================\n" << "The result is: " << Power(a , x) << "\n=====================";
}