#include "SwitchToPlayMode.h"

#include "Input.h"
#include "Output.h"
#include "Grid.h"

SwitchToPlayMode::SwitchToPlayMode(ApplicationManager* pApp) : Action(pApp)
{
}

void SwitchToPlayMode::ReadActionParameters()
{
}

void SwitchToPlayMode::Execute()
{
	// Get a Pointer to the Input / Output Interfaces
	Grid* pGrid = pManager->GetGrid();
	Output* pOut = pGrid->GetOutput();

	// Create Toolbar ??
	pOut->CreatePlayModeToolBar();
	pGrid->UpdateInterface();
}

SwitchToPlayMode::~SwitchToPlayMode()
{
}