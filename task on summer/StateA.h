#pragma once
#include "State.h"

class stateA : public State
{
public:
	virtual void HandleFunc(StateController *StateCtl)
	{
		printf("HandleFunc stateA\n");
	}
};

