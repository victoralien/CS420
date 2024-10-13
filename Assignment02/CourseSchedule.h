//
//  CourseSchedule.h
//  Assignment02
//
//  Created by Victor Allen on 10/7/24.
//

#include <iostream>
#include <vector>
#include "Course.h"

using namespace std;

#ifndef COURSE_SCHEDULE
#define COURSE_SCHEDULE

class CourseSchedule{
    
private:
    vector<pair<string,vector<Course> > > schedule;
    
public:
    void add_course(const string& time_day, const Course& course);
    vector<Course> courses_at(const string& time, const string& days) const;
};
#endif

