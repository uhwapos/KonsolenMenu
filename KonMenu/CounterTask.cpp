/*
 * CounterTask.cpp
 *
 *  Created on: 23.03.2013
 *      Author: uwalter
 */

#include "CounterTask.h"
#include "smdANSI.h"

namespace Task
{

	CounterTask::CounterTask()
	{
	}

	CounterTask::~CounterTask()
	{
		// TODO Auto-generated destructor stub
	}

	void CounterTask::DoWork()
	{
		GOTO(60,1)
		cout << "DoWork";
	}
} /* namespace Task */
