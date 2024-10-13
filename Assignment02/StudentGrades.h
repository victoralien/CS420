//
//  StudentGrades.h
//  Assignment02
//
//  Created by Victor Allen on 10/7/24.
//

#include <vector>
#include <iostream>

#ifndef STUDENT_GRADES
#define STUDENT_GRADES

using namespace std;

class StudentGrades{
private:
    string name;
    vector<double> grades;
    
public:
    StudentGrades(const string& name, const vector<double>& grades);
    char grade () const;
    double average() const;
    string getName() const;
    double getGrade(const int n) const;
    int getNumGrades() const;
};

#endif
