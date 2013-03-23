/*
 * Task.h
 *
 *  Created on: 23.03.2013
 *      Author: uwalter
 */

#ifndef TASK_H_
#define TASK_H_

#include <string>
using namespace std;

namespace Task
{

	class Task
	{
		public:
		int _counter;

		protected:
		string _name;
		//Mutex _mutexKeepAlive = new Mutex();
		//AutoResetEvent _autoEvent = new AutoResetEvent(false);
		//Thread _curThread = null;

		public:
		Task();
		Task(string name);
		virtual ~Task();

		public:
		void Run();
		virtual void DoWork();
	};

} /* namespace Task */
#endif /* TASK_H_ */
