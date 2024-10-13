//
//  Course.h
//  Assignment02
//
//  Created by Victor Allen on 10/7/24.
//

#include <string>

using namespace std;

#ifndef COURSE
#define COURSE

class Course{
public:
    string catalogNumber ,title ,instructor;
    
    Course(const string& catalog, const string& courseTitle, const string& courseInst) : catalogNumber(catalog), title(courseTitle), instructor(courseInst) {};
};

#endif
