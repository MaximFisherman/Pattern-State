#pragma once
#include "stdafx.h"
#include "State.h"

using namespace std;

class stateB : public State
{
public:
	virtual void HandleFunc(StateController *StateCtl)
	{
		printf("HandleFunc stateB\n");
	}
};
