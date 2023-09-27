#include "Trans.h"

Trans::Trans(Vector3 pos, Vector3 rot, Vector3 scale)
{
	this->position = pos;
	this->rotation = rot;
	this->scale = scale;
}

Trans::~Trans()
{
}
