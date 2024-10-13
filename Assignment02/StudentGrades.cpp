//
//  StudentGrades.cpp
//  Assignment02
//
//  Created by Victor Allen on 10/7/24.
//

#include "StudentGrades.h"

StudentGrades::StudentGrades(const string& name, const vector<double>& grades) : name(name), grades(grades){}

double StudentGrades::average() const{
    double sum = 0;
    
    for(double grade : grades){
        sum += grade;
    }
    
    return sum / grades.size();

}

char StudentGrades::grade() const{
    
    double grade = average();
    
    if( grade >= 90){
        return 'A';
    }
    else if(grade >= 80){
        return 'B';
    }
    else if(grade >= 70){
        return 'C';
    }
    else if(grade >= 60){
        return 'D';
    }
    else{
        return 'F';
    }
}

string StudentGrades::getName() const {
    return name;
}

double StudentGrades::getGrade(const int n) const {
    return grades[n];
}

int StudentGrades::getNumGrades() const {
    return (int) grades.size();
}
