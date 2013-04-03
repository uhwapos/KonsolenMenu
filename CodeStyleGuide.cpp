/******************************************************************************/
/*   code style guide C++ *.cpp Datein                                        */
/*                                                                            */
/*                                                                            */
/*   Programm/Klasse                                                          */
/*   Zweck ....                                                               */
/*                                                                            */
/*                                                                            */
/*   30.08.2011 0.0.0 WA Änderungen xyz ....                                  */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/******************************************************************************/

#include <pthread.h>
#include <signal.h>

#include "Task.h"

namespace Tasks
{

	/// Constructor
	Task::Task()
	{
		m_Counter = 0;
		m_ThreadId = 0;
		m_Name = "Thread";
		m_Arg = NULL;
	}

	/// Constructor
	Task::Task(string name)
	{
		m_Counter = 0;
		m_ThreadId = 0;
		m_Name = name;
		m_Arg = NULL;
	}

	/// Constructor
	Task::Task(string name,void* arg)
	{
		m_Counter = 0;
		m_ThreadId = 0;
		m_Name = name;
		m_Arg = arg;
	}

	/// Destructor
	Task::~Task()
	{
	}

	/// Run
	/// start the thread
	void Task::Run()
	{
		pthread_create(&m_ThreadId,NULL,&m_ThreadFunction,this);
	}

	/// DoWork
	/// do the threads work
	void *Task::DoWork(void *arg)
	{
		return 0;
	}

} /* namespace Task */
