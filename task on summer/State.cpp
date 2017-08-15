#include "stdafx.h"
#include "State.h"

StateController::StateController(State *pState)
{
	SetState(pState);
}

void StateController::SetState(State *pState)
{
	CurState = pState;
}

void StateController::Request()
{
	if (CurState)
	{
		CurState->HandleFunc(this);
	}
}


