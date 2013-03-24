/*
 * Task.h
 *
 *  Created on: 23.03.2013
 *      Author: uwalter
 */

#ifndef TASK_H_
#define TASK_H_

#include <stdio.h>
#include <iostream>

#include <string>
using namespace std;

namespace Tasks
{

	class Task
	{
		public:
		int _counter;

		protected:
		string _name;
		private:
		static void* m_thread(void* This) { return ((Task*)This)->DoWork(This); }


		public:
		Task();
		Task(string name);
		virtual ~Task();

		public:
		void Run();
		void *DoWork(void *arg);
	};

} /* namespace Task */
#endif /* TASK_H_ */
