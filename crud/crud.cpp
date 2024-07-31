#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Person {
    int id;
    string name;
    int age;
};


void create(vector<Person>& people, int id, const string& name, int age) {
    Person person = { id, name, age };
    people.push_back(person);
}

void read(const vector<Person>& people) {
    for (const auto& person : people) {
        cout << "ID: " << person.id << ", Name: " << person.name << ", Age: " << person.age << endl;
    }
}

void update(vector<Person>& people, int id, const string& name, int age) {
    for (auto& person : people) {
        if (person.id == id) {
            person.name = name;
            person.age = age;
            break;
        }
    }
}

void deletePerson(vector<Person>& people, int id) {
    for (auto it = people.begin(); it != people.end(); ++it) {
        if (it->id == id) {
            people.erase(it);
            break;
        }
    }
}


int main() {
    vector<Person> people;

    // Create
    create(people, 1, "Alice", 30);
    create(people, 2, "Bob", 25);
    create(people, 3, "Charlie", 35);

    // Read
    std::cout << "People list after creation:" << std::endl;
    read(people);

    // Update
    update(people, 2, "Bobby", 26);
    std::cout << "\nPeople list after update:" << std::endl;
    read(people);

    // Delete
    deletePerson(people, 1);
    std::cout << "\nPeople list after deletion:" << std::endl;
    read(people);

    return 0;
}
