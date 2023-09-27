#pragma once
#include <raylib.h>
class Trans
{

public:
	Vector3 position;
	Vector3 rotation;
	Vector3 scale;

	Trans(Vector3 pos,Vector3 rot,Vector3 scale);
	Trans();

	~Trans();

};

