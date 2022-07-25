#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    void set_name(string student_name){
        name = student_name;
    }
    string get_name(){
        return name;
    }
    
    void set_last_name(string student_last_name){
        last_name = student_last_name;
    }
    string get_last_name(){
        return last_name;
    }
    void set_scores(int student_scores[]){
        for (int i = 0; i < 5; ++i){
            scores[i] = student_scores[i];
        }
    }
    void set_averge_score(double ball){
        averge_score = ball;
    }
    double get_averge_score(){
        return averge_score;
    }
    
private:
    int scores[5];
    double averge_score;
    string name;
    string last_name;
};

int main() {
    setlocale(LC_ALL, "Russian");
    
    Student student01;
    string name;
    string last_name;
    int scores[5];
    
    cout << "Имя : ";
    getline(cin,name);
    
    cout << "Фамилия : ";
    getline(cin,last_name);
    
    int sum = 0;
    for (int i = 0; i < 5; i++){
        cout << "Оценка [" << i << "] : ";
        cin >> scores[i];
        sum += scores[i];
    }
    
    student01.set_name(name);
    student01.set_last_name(last_name);
    student01.set_scores(scores);
    
    double average_score = sum / 5.0;
    student01.set_averge_score(average_score);
    
    
    cout << "Средний балл " << student01.get_name() << " " << student01.get_last_name() << " = " << student01.get_averge_score() << "\n";
    
    return 0;
}
