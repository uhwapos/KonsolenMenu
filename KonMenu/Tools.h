/*
 * Tools.h
 *
 *  Created on: 22.03.2013
 *      Author: uwalter
 */

#ifndef TOOLS_H_
#define TOOLS_H_

class Tools
{
	public: Tools();
	virtual ~Tools();

	private :
	static int __nsleep(const struct timespec *req, struct timespec *rem);
	public :
	static int msleep(unsigned long milisec);
};

#endif /* TOOLS_H_ */
