#include "teacher.hpp"
#include "human.hpp"
#include <string>
#include <iostream>
using namespace std;

teacher::teacher(string last_name, string name, string second_name, unsigned int work_time): human::human(last_name, name, second_name)
{
    this->work_time = work_time;
}

unsigned int teacher::get_work_time()
{
    return this->work_time;
}
void teacher::print_data(){
    human::print_data();
    cout << "\nЧасы работы: " << this->get_work_time() << endl;
}
