#include <iostream>
#include "student.hpp"
using namespace std;

int main() {
    student *stud = new student("1", "2", "3", {5,3,1,5,3,2,6,5,5,5});
    cout<<stud->get_average_score() << "\n";
};
