#ifndef __P2_THREADS_H
#define __P2_THREADS_H

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <sys/time.h>
#include <string>
#include <vector>
#include <unistd.h>
#include "types_p2.h"



void *createPerson(void *parm);
void *assignPerson(void *parm);
void *removePerson(void *parm);


#endif
