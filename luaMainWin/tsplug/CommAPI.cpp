#include "stdafx.h"
#include "CommAPI.h"


int CPub::GetSimColNum(double simi)
{
	int simColNum = 0;
	if (simi==0.5)		simColNum = 49;
	else if (simi==0.6)	simColNum=38;
	else if (simi==0.7)	simColNum=29;
	else if (simi==0.8)	simColNum=18;
	else if (simi==0.9)	simColNum=9;

	return simColNum;
}

int CPub::GetSimColNumFull(double simi)
{
	int simColNum = 0;
	if (simi == 0.1) simColNum = 85;
	else if (simi == 0.2) simColNum = 76;
	else if (simi == 0.3) simColNum = 67;
	else if (simi == 0.4) simColNum = 58;
	else
		simColNum = GetSimColNum(simi);

	return simColNum;
}
