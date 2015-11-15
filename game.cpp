/**
	game.cpp
	Purpose: Handles game of the hangman game.
	
	@author Sakiko
	@version 2.0 15/11/2015
*/

#include "stdafx.h"
#include "Presenter.h"
#include "Player.h"
#include "Game.h"
#include "Controller.h"

CGame::CGame()
{
	current_list_index = 0;
	PopulateFileNames();
	srand(static_cast<unsigned int>(time(0)));
}

CGame::~CGame()
{
}

void CGame::PopulateFileNames()
{
	files_list.push_back("../hangman/wordlist/S Words.txt"); 
	files_list.push_back("../hangman/wordlist/A Words.txt");
	files_list.push_back("../hangman/wordlist/C Words.txt");
	files_list.push_back("../hangman/wordlist/M Words.txt");
	files_list.push_back("../hangman/wordlist/P Words.txt"); 
	files_list.push_back("../hangman/wordlist/R Words.txt");
	files_list.push_back("../hangman/wordlist/T Words.txt");
	files_list.push_back("../hangman/wordlist/B Words.txt");
	files_list.push_back("../hangman/wordlist/F Words.txt");
	files_list.push_back("../hangman/wordlist/G Words.txt");
	files_list.push_back("../hangman/wordlist/D Words.txt");
	files_list.push_back("../hangman/wordlist/H Words.txt");
	files_list.push_back("../hangman/wordlist/I Words.txt");
	files_list.push_back("../hangman/wordlist/N Words.txt");
	files_list.push_back("../hangman/wordlist/E Words.txt");
	files_list.push_back("../hangman/wordlist/L Words.txt");
	files_list.push_back("../hangman/wordlist/O Words.txt");
	files_list.push_back("../hangman/wordlist/W Words.txt");
	files_list.push_back("../hangman/wordlist/U Words.txt");
	files_list.push_back("../hangman/wordlist/V Words.txt");
	files_list.push_back("../hangman/wordlist/J Words.txt");
	files_list.push_back("../hangman/wordlist/K Words.txt");
	files_list.push_back("../hangman/wordlist/Q Words.txt");
	files_list.push_back("../hangman/wordlist/Y Words.txt");
	files_list.push_back("../hangman/wordlist/Z Words.txt");
	files_list.push_back("../hangman/wordlist/X Words.txt");
}

string CGame::GetRandomWord()
{
	assert(works_list.size()>0);
	if(works_list.size() == 0)
	{
		return "####ERROR####";
	}
	int random_word = rand()% works_list.size(); 
	return works_list.at(random_word);
}

void CGame::GameLoop(bool end_of_game)
{
	CPresenter oPresenter;
	CPlayer oPlayer; 
	CController oController;

	oPresenter.DisplayGameName();
	LoadNextListOfWords(); 
	string word_to_guess = GetRandomWord();
	string guessed_letters_so_far(word_to_guess.size(), '-');
	int wrong = 0;
	const int MAX_WRONG = 10;
	while ((wrong != MAX_WRONG) && (word_to_guess != guessed_letters_so_far))
	{
		int allowed_wrong = MAX_WRONG - wrong;
		oPresenter.DisplayAllowedWrong(allowed_wrong);
		oPresenter.DisplayEnterAGuessMessage();
		guess = oController.GetNextGuess();

		if (word_to_guess.find(guess) != string::npos)
		{
			oPresenter.DisplayCorrectMessage(guess);
			oPlayer.PlayCorrectSound();
								
			for (unsigned int i = 0; i < word_to_guess.length(); ++i)
			{
				if (word_to_guess[i] == guess)
				{
					guessed_letters_so_far[i] = guess;
				}
			}
			oPresenter.DisplayGuessedLettersSoFar(guessed_letters_so_far);
							
			if (guessed_letters_so_far == word_to_guess)
			{
				oPresenter.DisplayYouWonMessage();
			}
		}
		else 
		{
			oPresenter.DisplayWrongMessage(guess);
			++wrong;
			oPlayer.PlayWrongSound();
			oPresenter.DisplayGuessedLettersSoFar(guessed_letters_so_far);
			oPresenter.DrawHangman(wrong);
			
			if (wrong == MAX_WRONG) 
			{
				oPresenter.DisplayHangedMessage(); 
				oPlayer.PlayHangingSound();
				oPresenter.CorrectWord(word_to_guess);
			}
		}
	}
}

void CGame::LoadNextListOfWords() 
{
	unsigned int j = 0;
	ifstream inFile(files_list[current_list_index]);
	string line;
	works_list.resize(0); 
	if(inFile.is_open())
	{
		while (getline(inFile, line))
		{
			works_list.push_back(line);
		}
	}
	else
	{
		std::cout << "file not open"; 
	}
	bool testing = false;
	if(testing)
	{
		std::cout << works_list.size() << std::endl;
	}
	current_list_index++; 
	if(current_list_index == files_list.size())
	{
		current_list_index = 0;
	}
}

bool CGame::PlayAgain()
{
	CPresenter oPresenter;
	CController oController;
	oPresenter.DisplayPlayAgainConfirmation(); 
	answer = oController.GetPlayAgainAnswer();

	if(answer != 'y')
	{
		playing = false;
		oPresenter.DisplayGoodbyeMessage(); 
		
		return 0;
	}
	else
	{
		playing = true;
	}
}