#include "Trans2D.h"

Trans2D::Trans2D(Vector2 pos, Vector3 rot, Vector3 scale)
{
	this->position = pos;
	this->rotation = rot;
	this->scale = scale;
}

Trans2D::Trans2D()
{
}

Trans2D::~Trans2D()
{
}
