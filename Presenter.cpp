/**
	presenter.cpp
	Purpose: Handles displaying messages for the hangman game.
	
	@author Sakiko
	@version 2.0 15/11/2015
*/


#include "StdAfx.h"
#include "Presenter.h"
#include "game.h"


CPresenter::CPresenter(void)
{
}


CPresenter::~CPresenter(void)
{
}

void CPresenter::DisplayGameName()
{
	cout <<"   _    _          _   _  _____ __  __          _   _ "<<endl;
	cout <<"  | |  | |   /\\   | \\ | |/ ____|  \\/  |   /\\   | \\ | |"<<endl;
	cout <<"  | |__| |  /  \\  |  \\| | |  __| \\  / |  /  \\  |  \\| |"<<endl;
	cout <<"  |  __  | / /\\ \\ | . ` | | |_ | |\\/| | / /\\ \\ | . ` |"<<endl;
	cout <<"  | |  | |/ ____ \\| |\\  | |__| | |  | |/ ____ \\| |\\  |"<<endl;
	cout <<"  |_|  |_/_/    \\_\\_| \\_|\\_____|_|  |_/_/    \\_\\_| \\_|"<<endl;
	cout <<"                                                      "<<endl;
                                                     
	cout << "Welcome to the Hangman game! \n";
}

void CPresenter::DisplayAllowedWrong(int allowed_wrong)
{
	if (allowed_wrong == 10)
	{
		cout << "You can make " << allowed_wrong << " mitakes." <<endl;
	}
	else if (allowed_wrong == 1)
	{
		cout << "You can make " << allowed_wrong << " more mitake." <<endl;
	}
	else 
	{
		cout << "You can make " << allowed_wrong << " more mitakes." <<endl;
	}
}

void CPresenter::DisplayEnterAGuessMessage()
{
	cout << "\nGuess the word and enter one letter:  "<<endl;
}

void CPresenter::DisplayWrongMessage(char guess)
{
	cout << "Sorry, " << guess << " is not in the word."<<endl;
}

void CPresenter::DisplayHangedMessage()
{
	cout << "\nYou are hanged!!!"<<endl;
}

void CPresenter::DisplayCorrectMessage(char guess)
{
	cout << "That is right! " << guess <<" is in the word."<<endl;
}

void CPresenter::DisplayGuessedLettersSoFar(string guessed_letters_so_far)
{
	std::cout << guessed_letters_so_far << std::endl; 
}

void CPresenter::CorrectWord(string word_to_guess)
{	
	cout << "The word was: " << word_to_guess <<endl;
}

void CPresenter::DisplayYouWonMessage()
{
	cout << "Congratulations!!! You won!!!" <<endl;
}

void CPresenter::DrawHangman(int wrong)
{
	if(wrong == 10)
	{
		cout<<endl<<endl;
			cout<<"   +----+     "<<endl;
			cout<<"   |    |     "<<endl;
			cout<<"   |    |     "<<endl;
			cout<<"   | \\  O  / "<<endl;
			cout<<"   |    |	"<<endl;
			cout<<"   |   / \\   "<<endl;
			cout<<"   | /	   \\"<<endl;
			cout<<"   |Game Over "<<endl;
			cout<<"  ============"<<endl<<endl;
		}
		else if(wrong==9)
		{
		cout<<endl<<endl;
			cout<<"   +----+     "<<endl;
			cout<<"   |    |     "<<endl;
			cout<<"   |    |     "<<endl;
			cout<<"   | \\  O  / "<<endl;
			cout<<"   |    |	"<<endl;
			cout<<"   |   / \\   "<<endl;
			cout<<"   | /		"<<endl;
			cout<<"   |			"<<endl;
			cout<<"  ============"<<endl<<endl;
		}
		else if(wrong == 8)
		{
		cout<<endl<<endl;
			cout<<"   +----+     "<<endl;
			cout<<"   |    |     "<<endl;
			cout<<"   |    |     "<<endl;
			cout<<"   | \\  O  / "<<endl;
			cout<<"   |    |	"<<endl;
			cout<<"   |   /		"<<endl;
			cout<<"   | /		"<<endl;
			cout<<"   |			"<<endl;
			cout<<"  ============"<<endl<<endl;
		}
		else if(wrong == 7)
		{
		cout<<endl<<endl;
			cout<<"   +----+     "<<endl;
			cout<<"   |    |     "<<endl;
			cout<<"   |    |     "<<endl;
			cout<<"   | \\  O  / "<<endl;
			cout<<"   |    |	"<<endl;
			cout<<"   |   /		"<<endl;
			cout<<"   |			"<<endl;
			cout<<"   |			"<<endl;
			cout<<"  ============"<<endl<<endl;
		}
		else if(wrong == 6)
		{
		cout<<endl<<endl;
			cout<<"   +----+     "<<endl;
			cout<<"   |    |     "<<endl;
			cout<<"   |    |     "<<endl;
			cout<<"   | \\  O  / "<<endl;
			cout<<"   |    |	"<<endl;
			cout<<"   |			"<<endl;
			cout<<"   |			"<<endl;
			cout<<"   |			"<<endl;
			cout<<"  ============"<<endl<<endl;
		}
		else if(wrong == 5)
		{
		cout<<endl<<endl;
			cout<<"   +----+     "<<endl;
			cout<<"   |    |     "<<endl;
			cout<<"   |    |     "<<endl;
			cout<<"   | \\  O  / "<<endl;
			cout<<"   |			"<<endl;
			cout<<"   |			"<<endl;
			cout<<"   |			"<<endl;
			cout<<"   |			"<<endl;
			cout<<"  ============"<<endl<<endl;
		}
		else if(wrong == 4)
		{
		cout<<endl<<endl;
			cout<<"   +----+     "<<endl;
			cout<<"   |    |     "<<endl;
			cout<<"   |    |     "<<endl;
			cout<<"   | \\  O		"<<endl;
			cout<<"   |			"<<endl;
			cout<<"   |			"<<endl;
			cout<<"   |			"<<endl;
			cout<<"   |			"<<endl;
			cout<<"  ============"<<endl<<endl;
		}
		else if(wrong == 3)
		{
		cout<<endl<<endl;
			cout<<"   +----+     "<<endl;
			cout<<"   |    |     "<<endl;
			cout<<"   |    |     "<<endl;
			cout<<"   |    O		"<<endl;;
			cout<<"   |			"<<endl;
			cout<<"   |			"<<endl;
			cout<<"   |			"<<endl;
			cout<<"   |			"<<endl;
			cout<<"  ============"<<endl<<endl;
		}
		else if(wrong == 2)
		{
		cout<<endl<<endl;
			cout<<"   +----+     "<<endl;
			cout<<"   |    |     "<<endl;
			cout<<"   |    |     "<<endl;
			cout<<"   |			"<<endl;
			cout<<"   |			"<<endl;
			cout<<"   |			"<<endl;
			cout<<"   |			"<<endl;
			cout<<"   |			"<<endl;
			cout<<"  ============"<<endl<<endl;
		}
		else if(wrong == 1)
		{
		cout<<endl<<endl;
			cout<<"   +----+     "<<endl;
			cout<<"   |    |     "<<endl;
			cout<<"   |          "<<endl;
			cout<<"   |    		"<<endl;
			cout<<"   |			"<<endl;
			cout<<"   |			"<<endl;
			cout<<"   |			"<<endl;
			cout<<"   |			"<<endl;
			cout<<"  ============"<<endl<<endl;
		}
		else if(wrong == 0)
		{
		cout<<endl<<endl;
			cout<<"   +----+     "<<endl;
			cout<<"   |          "<<endl;
			cout<<"   |          "<<endl;;
			cout<<"   |    		"<<endl;
			cout<<"   |			"<<endl;
			cout<<"   |			"<<endl;
			cout<<"   |			"<<endl;
			cout<<"   |			"<<endl;
			cout<<"  ============"<<endl<<endl;
		}
}

void CPresenter::DisplayPlayAgainConfirmation()
{
	cout << endl << "\nWould you like to play again? Enter y or n."<<endl;
}

void CPresenter::DisplayGoodbyeMessage() 
{
	cout << "Thank you for playing. Good bye!"<<endl;
}

