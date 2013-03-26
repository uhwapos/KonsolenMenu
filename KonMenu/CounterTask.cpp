/*
 * CounterTask.cpp
 *
 *  Created on: 23.03.2013
 *      Author: uwalter
 */

#include "CounterTask.h"
#include "smdANSI.h"
#include "Tools.h"

namespace Tasks
{

	CounterTask::CounterTask() : Task()
	{
		m_IsRunning = true;
	}

	CounterTask::CounterTask(string name) : Task(name)
	{
		m_IsRunning = true;
	}

	CounterTask::CounterTask(string name,void* arg) : Task(name,arg)
	{
		m_IsRunning = true;
	}

	CounterTask::~CounterTask()
	{
		m_IsRunning = true;
	}

	void *CounterTask::DoWork(void *arg)
	{
		while(m_IsRunning)
		{
			BLINK
			GOTO(60,1)
			cout << "DoWork !! " << m_Counter++;
			//BEEP
			HOME
			//Tools::msleep(5);
		}
		return 0;
	}
} /* namespace Task */
