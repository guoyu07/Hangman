#pragma once

class CPresenter
{
public:
	CPresenter(void);
	~CPresenter(void);

	void DisplayGameName();
	void DisplayAllowedWrong(int allowed_wrong);
	void DisplayEnterAGuessMessage();
	void DisplayWrongMessage(char guess);
	void DisplayHangedMessage();
	void DisplayCorrectMessage(char guess);
	void DisplayGuessedLettersSoFar(string guessed_letters_so_far);
	void CorrectWord(string word_to_guess);
	void DisplayYouWonMessage();
	void DrawHangman(int wrong);
	void DisplayPlayAgainConfirmation();
	void DisplayGoodbyeMessage(); 

};

