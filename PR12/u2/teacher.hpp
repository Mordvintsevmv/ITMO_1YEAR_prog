#ifndef teacher_hpp
#define teacher_hpp

#include <stdio.h>

#endif /* teacher_hpp */
#include "human.hpp"
#include <string>
using namespace std;

class teacher: public human{
public:
    teacher(string, string, string, unsigned int);
    unsigned int get_work_time();
private:
    unsigned int work_time;
};
