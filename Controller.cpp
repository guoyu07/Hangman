/**
	controller.cpp
	Purpose: Handles user inputs for the hangman game.
	
	@author Sakiko
	@version 2.0 15/11/2015
*/

#include "StdAfx.h"
#include "Controller.h"


CController::CController(void)
{
}


CController::~CController(void)
{
}

char CController::GetNextGuess()
{
	char guess;
	cin >> guess;
	guess = tolower(guess);
	return guess;
}

char CController::GetPlayAgainAnswer()
{
	char answer;
	cin>> answer; 
	answer = tolower(answer);
	return answer;
}

