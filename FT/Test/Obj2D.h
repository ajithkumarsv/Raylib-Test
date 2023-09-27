#pragma once
#include "Trans2D.h";

class Obj2D
{

public :
	Trans2D trans;
	void Start();
	void Update();

	Obj2D(Trans2D trans);
	Obj2D();
	~Obj2D();

};

