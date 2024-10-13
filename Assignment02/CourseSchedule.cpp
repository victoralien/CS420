//
//  CourseSchedule.cpp
//  Assignment02
//
//  Created by Victor Allen on 10/7/24.
//

#include "CourseSchedule.h"

void CourseSchedule::add_course(const string &time_day,const Course &course){
    for( auto& entry : schedule){
        if(entry.first == time_day){
            entry.second.push_back(course);
            return;
        }
    }
    schedule.push_back({time_day,{course}});
}

vector<Course> CourseSchedule::courses_at(const string &time, const string &days) const {
    string timeDay = time + " " + days;
    
    for(const auto& entry : schedule){
        if(entry.first == timeDay){
            return entry.second;
        }
    }
    
    return {};
}
