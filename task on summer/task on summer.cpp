#include "stdafx.h"
#include "State.h"
#include "ON.h"
#include "OFF.h"
#include <iostream>
using namespace std;





int main()
{
	//Machine machine;
	//machine.off();
	stateA *A = new stateA();
	stateB *B = new stateB();
	StateController *pStateCtl = new StateController(A);
	pStateCtl->Request();

	pStateCtl->SetState(B);
	pStateCtl->Request();
	system("pause");
}
