#pragma once
#include <list>
#include "Mark.h"
#include "Studient.h"
#include "Subject.h"

using namespace std;

class Methodist
{
	Methodist();
	~Methodist();

	Studient Exams_pass_list(Studient allStudients, Subject allSubjects);
	Studient Create_Perfomance_List(list<Mark> allMarks, Studient allStudients, Subject allSubjects);
	Mark Show_All_Studients_Marks(list<Mark> allMarks);
};

