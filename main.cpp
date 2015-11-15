/**
	main.cpp
	Purpose: Defines the entry point for the console application. 
	
	@author Sakiko
	@version 2.0 15/11/2015
*/

#include "stdafx.h"
#include "Player.h"
#include "Game.h"

using std::cout;
using std::endl;

using namespace std;

#pragma comment(lib, "winmm.lib")

bool testing = false; 

int _tmain(int argc, _TCHAR* argv[])
{
	CGame oGame; 
	bool playing = true; 

	while(playing)
	{
		oGame.GameLoop(true);
		playing = oGame.PlayAgain();
	}

	return 0; 
}
