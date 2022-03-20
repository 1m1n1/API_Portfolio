#include "VampireSurvivors.h"
#include "PlayLevel.h"
#include "EndingLevel.h"
#include "TitleLevel.h"
#include <GameEngineBase/GameEngineWindow.h>

VampireSurvivors::VampireSurvivors() 
{
}

VampireSurvivors::~VampireSurvivors() 
{
}

void VampireSurvivors::GameInit() 
{
	GameEngineWindow::GetInst().SetWindowScaleAndPosition({ 100, 100 }, {1280, 720});

	CreateLevel<TitleLevel>("Title");
	CreateLevel<PlayLevel>("Play");
	CreateLevel<EndingLevel>("Ending");
	ChangeLevel("Play");
}

void VampireSurvivors::GameLoop() 
{

}
void VampireSurvivors::GameEnd() 
{

}