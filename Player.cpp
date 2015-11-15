/**
	player.cpp
	Purpose: Handles sound effects for the hangman game.
	
	@author Sakiko
	@version 2.0 15/11/2015
*/


#include "StdAfx.h"
#include "Player.h"


CPlayer::CPlayer(void)
{
}

CPlayer::~CPlayer(void)
{
}

void CPlayer::PlayCorrectSound()
{
	PlaySound(L"../hangman/win.wav", NULL, SND_FILENAME | SND_ASYNC);
}

void CPlayer::PlayWrongSound()
{
	PlaySound(L"../hangman/warp.wav", NULL, SND_FILENAME | SND_ASYNC);
}

void CPlayer::PlayHangingSound()
{
	PlaySound(L"../hangman/teleport.wav", NULL, SND_FILENAME | SND_ASYNC);
}