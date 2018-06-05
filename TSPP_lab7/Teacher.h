#pragma once
#include <string>
#include <list>
#include "Mark.h"
#include "Subject.h"
#include "Studient.h"

using namespace std;

class Teacher
{
public:
	string teacersFIO;

	Teacher();
	~Teacher();

	void Show_subjects_marks(Subject teachersSubject);
	Mark Enter_mark(list<Mark> allMarks, Studient allStudients, Subject allSubjects);
	bool Delete_mark(list<Mark> allMarks);
};

