#include <iostream>
#include<string>
#include <vector>
#include "records.h"
using namespace std;

int main()
{
	vector<Student>students;
	students.push_back(Student(31765, "Yetunde Bello"));
	students.push_back(Student(45621, "Robbie Harris"));
	students.push_back(Student(64582, "Trevor Guy"));

	vector<Course>courses;
	courses.push_back(Course(0, "Intro to English", 3));
	courses.push_back(Course(1, "English I", 3));
	courses.push_back(Course(2, "English II", 3));

	vector<Grade>grades;
	grades.push_back(Grade(31765, 2, 'A'));
	grades.push_back(Grade(45621, 1, 'A'));
	grades.push_back(Grade(64582, 0, 'D'));

	cout << "Total students: " << students.size() << endl;
	cout << "Grades within the English courses: " << grades[0].get_grade() << ", " << grades[1].get_grade() << ", " << grades[2].get_grade() << endl;
	cout << endl;
	cout << "First student is: " << students.begin()->get_sname() << ", ID is: " << students.begin()->get_id() << ".\n Currently in course: " << (courses.end() - 1)->get_id() << "- " << (courses.end() - 1)->get_name() << endl;
	
}


