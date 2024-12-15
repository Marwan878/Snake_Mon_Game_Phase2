#include "Ladder.h"

Ladder::Ladder(const CellPosition & startCellPos, const CellPosition & endCellPos) : GameObject(startCellPos)
{
	this->endCellPos = endCellPos;

	///TODO: Do the needed validation
	


}

void Ladder::Draw(Output* pOut) const
{
	pOut->DrawLadder(position, endCellPos);
}

void Ladder::Apply(Grid* pGrid, Player* pPlayer) 
{
	

	///TODO: Implement this function as mentioned in the guideline steps (numbered below) below

	// == Here are some guideline steps (numbered below) to implement this function ==
	
	// 1- Print a message "You have reached a ladder. Click to continue ..." and wait mouse click
	
	// Get a Pointer to the Input / Output Interfaces
	Output* pOut = pGrid->GetOutput();
	Input* pIn = pGrid->GetInput();

	int x, y;
	pOut->PrintMessage("You have reached a ladder. Click to continue ...");
	pIn->GetPointClicked(x, y);

	// 2- Apply the ladder's effect by moving the player to the endCellPos
	//    Review the "pGrid" functions and decide which function can be used for that

	pGrid->UpdatePlayerCell(pPlayer, GetEndPosition());
	
}

bool Ladder::IsOveralpping(GameObject* newObj) const
{
	Ladder* IsLadder = dynamic_cast<Ladder*>(newObj);
	if (!IsLadder) return false;

	// 1- Check HCell
	// 2- Check if Start2.VCell between Start1 & End1 or if End2.VCell between Start1 & End1 --> Return true
}

CellPosition Ladder::GetEndPosition() const
{
	return endCellPos;
}

Ladder::~Ladder()
{
}
