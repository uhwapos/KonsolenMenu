/*
 * CounterTask.h
 *
 *  Created on: 23.03.2013
 *      Author: uwalter
 */

#ifndef COUNTERTASK_H_
#define COUNTERTASK_H_

#include "Task.h"

namespace Task
{
	class CounterTask : public Task
	{
		public:
		CounterTask();
		virtual ~CounterTask();
		void DoWork();
	};

} /* namespace Task */
#endif /* COUNTERTASK_H_ */
