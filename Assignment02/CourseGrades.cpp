//
//  CourseGrades.cpp
//  Assignment02
//
//  Created by Victor Allen on 10/7/24.
//

#include "CourseGrades.h"

optional<double> CourseGrades::average(int n) const {
    if( n < 1 || students.empty() || students[0].getNumGrades() < n) return nullopt;
    
        double total = 0;
        
        for( const auto& student : students){
            total += student.getGrade(n - 1);
        }
        
        return total / students.size();
    
}

optional<StudentGrades> CourseGrades::student(const string& studentName) const {
    for(const auto& student : students){
        if(student.getName() == studentName){
            return student;
        }
    }
    
    return nullopt;
}
