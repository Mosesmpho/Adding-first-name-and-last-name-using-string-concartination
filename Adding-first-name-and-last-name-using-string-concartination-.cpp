#include <iostream>
using namespace std;
#include <string>

int main() {
    string firstname, lastname, fullnames;

    cout << " Enter your first name and last name " << endl;
    cin >> firstname >> lastname;

    fullnames = firstname + lastname;
    cout << fullnames;

    return 0;

}