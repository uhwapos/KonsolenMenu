/*
 * Task.cpp
 *
 *  Created on: 23.03.2013
 *      Author: uwalter
 */

#include <pthread.h>
#include <signal.h>

#include "Task.h"

namespace Tasks
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
	}

	void Task::Run()
	{
		pthread_t ThId;
		int i = 0;
		//pthread_create(&ThId,NULL,m_thread,&i);
		DoWork(NULL);
	}

	void *Task::DoWork(void *arg)
	{
		return 0;
	}

} /* namespace Task */
