//
//  CourseGrades.h
//  Assignment02
//
//  Created by Victor Allen on 10/7/24.
//

#include <fstream>
#include <iostream>
#include <vector>
#include <optional>
#include <sstream>
#include "StudentGrades.h"

#ifndef COURSE_GRADES
#define COURSE_GRADES

using namespace std;
class CourseGrades{
private:
    vector<StudentGrades> students;
    
public:
    static CourseGrades from_file(const string& file_path){
        CourseGrades courseGrades;
        
        ifstream file(file_path);
        string line;
        
        vector<double> grades;
        
        while(getline(file,line)){
            istringstream ss(line);
            
            string name;
            getline(ss,name,',');
            double grade;
            while(ss >> grade){
                grades.push_back(grade);
                if(ss.peek() == ',') ss.ignore();
            }
            
            courseGrades.students.emplace_back(name,grades);
            grades.clear();
        }
        return courseGrades;
    };
    optional<double> average(int n) const;
    optional<StudentGrades> student(const string& name) const;
    
};

#endif
