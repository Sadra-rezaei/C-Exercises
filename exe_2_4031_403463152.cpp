#include <iostream>
using namespace std;

int age = 0;
bool member;
string isMember;
int main() {

    while (age <= 0) {
        cout << "Please answer correctly\n";
        cout << "How old are you? ";
        cin >> age;
        cout << "\n";
    }

    if (age < 12 && age > 0 || age > 60) {
        cout << "Your entrance fee costs 10$";
    }
    else {
        cout << "Did joined costumer's membership? (Yes /No): ";
        cin >> isMember;
        cout << "\n";

        if (!isMember.compare("Yes") || !isMember.compare("yes") || !isMember.compare("Y") || !isMember.compare("y")) {
            member = 1;
        }

        if (age >= 12 && age < 18) {
            if (member) {
                cout << "Your entrance fee costs 12$";
            }
            else {
                cout << "Your entrance fee costs 15$";
            }
        }
        else if (age >= 18 && age <= 60) {
            if (member) {
                cout << "Your entrance fee costs 20$";
            }
            else {
                cout << "Your entrance fee costs 25$";
            }
        }
    }
}