
// unions are similar to struct in that they handle complex data types
//the difference is that they can only hold data in the same location
//this means that a union can only hold one of the member variables at any given time



#include <iostream>
using namespace std;

union Data {
    int intValue;
    float floatValue;
    char charValue;
};

int main() {
    Data data;
    data.intValue = 10;
    cout << "Int value: " << data.intValue << endl;

    data.floatValue = 3.14;
    cout << "Float value: " << data.floatValue << endl;

    data.charValue = 'A';
    cout << "Char value: " << data.charValue << endl;
    

    // Note: Accessing data.intValue or data.floatValue now would give undefined behavior,
    // because data.charValue is the currently active member.
    
    return 0;
}
