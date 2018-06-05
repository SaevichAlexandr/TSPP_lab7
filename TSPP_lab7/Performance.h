#pragma once
#include <list>
#include "Mark.h"

class Performance
{
	Performance();
	~Performance();
	list<Mark> allMarks;
	list<Mark> specificStudientsMarks;
	list<Mark> groupMarks;
	list<Mark> flowMarks;
};

