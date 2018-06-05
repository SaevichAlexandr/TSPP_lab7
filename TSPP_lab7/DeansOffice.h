#pragma once
#include <list>
#include "Mark.h"
#include "Studient.h"
#include "Subject.h"

using namespace std;

class DeansOffice
{
	DeansOffice();
	~DeansOffice();

	void Show_All_Studients_Marks(Mark allMarks);
	void Create_Remanding_List(list<Mark> allMarks, Studient allStudients);
	void Create_Exams_List(Studient allStudients, Subject allSubjects);
	void Show_Group_Marks(string groupCode, list<Mark> groupMarks);
	void Show_Group_Marks(string flowName, list<Mark> flowMarks);
};

