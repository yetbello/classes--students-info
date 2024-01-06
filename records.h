#pragma once
#ifndef RECORDS_H
#define	RECORDS_H

#include <string>

class Student {
private:
	int id;
	std::string name;
public:
	Student(int id_i, std::string name_i);
	int get_id();
	std::string get_sname();
};

class Course {
private:
	int id, credits;
	std::string name;
public:
	Course(int id_i, std::string name_i, int credits_i);
	int get_id();
	int get_credits();
	std::string get_name();
};

class Grade {
private:
	int student_id, course_id, grade;
public:
	Grade(int sid, int cid, char grade_i);
	int get_student_id();
	int get_course_id();
	char get_grade();
};
#endif RECORD_H	