/*
 * Task.cpp
 *
 *  Created on: 23.03.2013
 *      Author: uwalter
 */

#include "Task.h"

namespace Task
{

	Task::Task()
	{
		_counter = 0;
		_name = "Thread";
	}

	Task::Task(string name)
	{
		_counter = 0;
		_name = name;
	}

	Task::~Task()
	{
		// TODO Auto-generated destructor stub
	}

	void Task::Run()
	{
		DoWork();
	}

	void Task::DoWork()
	{
	}

} /* namespace Task */
