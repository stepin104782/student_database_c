#include "Course.h"

Course* createCourse (int course_num, char *course_name, int semester_num){
    Course *c;
    c = (Course*)malloc(sizeof(Course));
    strcpy(c->course_name, course_name);
    c->course_num = course_num;
    c->semester_num = semester_num;
    return 0;
}s;
