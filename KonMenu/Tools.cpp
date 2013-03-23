/*
 * Tools.cpp
 *
 *  Created on: 22.03.2013
 *      Author: uwalter
 */

#include "Tools.h"

#include<time.h>
#include<signal.h>

Tools::Tools()
{
	// TODO Auto-generated constructor stub
}

Tools::~Tools()
{
	// TODO Auto-generated destructor stub
}

int Tools::__nsleep(const struct timespec *req, struct timespec *rem)
{
    struct timespec temp_rem;
    if(nanosleep(req,rem)==-1)
    	return Tools::__nsleep(rem,&temp_rem);
    else
        return 1;
}

int Tools::msleep(unsigned long milisec)
{
    struct timespec req={0},rem={0};
    time_t sec=(int)(milisec/1000);
    milisec=milisec-(sec*1000);
    req.tv_sec=sec;
    req.tv_nsec=milisec*1000000L;
    Tools::__nsleep(&req,&rem);
    return 1;
}

