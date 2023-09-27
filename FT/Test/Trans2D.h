#pragma once
#include <raylib.h>
class Trans2D
{

public:
	Vector2 position;
	Vector3 rotation;
	Vector3 scale;

	Trans2D(Vector2 pos, Vector3 rot, Vector3 scale);
	Trans2D();
	~Trans2D();

};

