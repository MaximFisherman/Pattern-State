#pragma once
#include <stdio.h>

class StateController;
class State
{
public:
	virtual void HandleFunc(StateController *StateCtl) = 0;
};

class StateController
{
private:
	State *CurState;
public:
	StateController(State*);
	void SetState(State *CurState);
	void Request();
};