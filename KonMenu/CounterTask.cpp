/*
 * CounterTask.cpp
 *
 *  Created on: 23.03.2013
 *      Author: uwalter
 */

#include "CounterTask.h"
#include "smdANSI.h"

namespace Tasks
{

	CounterTask::CounterTask()
	{
	}

	CounterTask::~CounterTask()
	{
		// TODO Auto-generated destructor stub
	}

	void *CounterTask::DoWork(void *arg)
	{
		BLINK
		GOTO(60,1)
		cout << "DoWork !";
		return 0;
	}
} /* namespace Task */
