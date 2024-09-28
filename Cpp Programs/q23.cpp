#include <iostream>
#include <string>

class Student {
public:
    std::string name;
    int marks[5]; 
    float percentage;

    void input() {
        std::cout << "Enter name: ";
        std::cin.sync();
        std::cin >> name;
        std::cout << "Enter marks for 5 subjects: ";
        for (int i = 0; i < 5; ++i) {
            std::cin >> marks[i];
        }
        calculatePercentage();
    }

    void calculatePercentage() {
        int total = 0;
        for (int i = 0; i < 5; ++i) {
            total += marks[i];
        }
        percentage = total / 5.0f; 
    }

    void display() const {
        std::cout << "Name: " << name << ", Percentage: " << percentage << "%\n";
    }
};


void sortStudents(Student students[], int numStudents) {
    for (int i = 0; i < numStudents - 1; ++i) {
        for (int j = 0; j < numStudents - i - 1; ++j) {
            if (students[j].percentage < students[j + 1].percentage) {
                // Swap the students
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main() {
    const int numStudents = 3;
    Student students[numStudents];

    for (int i = 0; i < numStudents; ++i) {
        std::cout << "Entering details for student " << (i + 1) << ":\n";
        students[i].input();
    }
    sortStudents(students, numStudents);

    std::cout << "\nStudents sorted by percentage:\n";
    for (int i = 0; i < numStudents; ++i) {
        students[i].display();
    }

    return 0;
}
