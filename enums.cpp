#include <iostream>
using namespace std;

enum Status {
    SUCCESS = 0,
    WARNING = 1,
    ERROR = 2
};

int main() {
    Status currentStatus = WARNING;

    switch (currentStatus) {
        case SUCCESS:
            cout << "Operation was successful." << endl;
            break;
        case WARNING:
            cout << "There is a warning." << endl;
            break;
        case ERROR:
            cout << "An error occurred." << endl;
            break;
        default:
            cout << "Unknown status." << endl;
            break;
    }

    cout << "WARNING has value: " << WARNING << endl;

    return 0;
}
