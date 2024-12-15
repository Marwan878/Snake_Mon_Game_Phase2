#include "GameObject.h"


GameObject::GameObject(const CellPosition & pos)
{
	position = pos; // Sets Position
}

CellPosition GameObject::GetPosition() const
{
	return position;
}

bool GameObject::IsOveralpping(GameObject* newObj) const
{
	// Think if this needs to be pure virtual or not
}

GameObject::~GameObject()
{
}