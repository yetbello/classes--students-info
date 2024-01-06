#include "records.h"


Student::Student(int id_i, std::string name_i) {
	id = id_i;
	name = name_i;
}
int Student::get_id() {
	return id;
}
std::string Student::get_sname() {
	return name;
}
Course::Course(int id_i, std::string name_i, int credits_i) {
	id = id_i;
	name = name_i;
	credits = credits_i;
}
int Course::get_id() {
	return id;
}
int Course::get_credits() {
	return credits;
}
std::string Course::get_name() {
	return name;
}
Grade::Grade(int sid, int cid, char grade_i) {
	student_id = sid;
	course_id = cid;
	grade = grade_i;
}
int Grade::get_student_id() {
	return student_id;
}
int Grade::get_course_id() {
	return course_id;
}
char Grade::get_grade() {
	return grade;
}