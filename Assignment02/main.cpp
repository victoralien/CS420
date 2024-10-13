//
//  main.cpp
//  Assignment02
//
//  Created by Victor Allen on 10/7/24.
//

#include <iostream>
#include <vector>
#include <optional>
#include "CourseGrades.h"
#include "StudentGrades.h"
#include "CourseSchedule.h"

using namespace std;

int main() {
    
    vector<double> grades1 = {90, 96.7,90};
    vector<double> grades2 = {92,88.5,79.0};
    string name1 = "Victor";
    string name2 = "Jonas";
    
    StudentGrades student1(name1, grades1);
    StudentGrades student2(name2,grades2);
    
    // Demonstrates functionality of functions
    cout << "Student: " << student1.getName() << "\nAverage: " << student1.average() << "\nGrade: " << student1.grade() << "\n\n";
    cout << "Student: " << student2.getName() << "\nAverage: " << student2.average() << "\nGrade: " << student2.grade() << "\n\n";

    
    CourseGrades courseGrades = CourseGrades::from_file("/users/victorallen/CS420/Assignment02/Assignment02/grades.txt");

       // Testing average for a specific grade event
    optional<double> avg_grade_event = courseGrades.average(2); // Average for the second grade event
    if (avg_grade_event.has_value()) {
        cout << "Average for grade event 2: " << avg_grade_event.value() << "\n\n";
    } else {
        cout << "Grade event out of range.\n";
    }
    
    optional<StudentGrades> student_result = courseGrades.student("Victor");
    
    if (student_result.has_value()) {
        cout << "Found student: " << student_result->getName() << "\nAverage: " << student_result->average() << "\nGrade: " << student_result->grade() << "\n\n";
    } else {
        cout << "Student not found.\n";
    }
    
    Course course1("CS101", "Intro to Computer Science", "Dr. Smith");
    Course course2("MATH101", "Calculus I", "Dr. Johnson");
    Course course3("PHYS101", "Physics I", "Dr. Brown");

    CourseSchedule schedule;
    schedule.add_course("900 MWF", course1);
    schedule.add_course("1100 TTH", course2);
    schedule.add_course("900 MWF", course3); // Another course at the same time

    // Get courses at a specific time and day
    vector<Course> courses = schedule.courses_at("900", "MWF");
    cout << "Courses at 900 MWF:\n";
    for (const auto& course : courses) {
        cout << course.catalogNumber << ": " << course.title << " by " << course.instructor << "\n";
    }
    
    return 0;
}
