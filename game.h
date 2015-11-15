#pragma once

class CGame
{
	public:
		CGame();
		~CGame();

		void PopulateFileNames();
		string GetRandomWord();
		void GameLoop(bool end_of_game);
		bool PlayAgain();

	private:
		void LoadNextListOfWords(); 

	vector<string> works_list;
	vector<string> files_list; 
	int current_list_index;
	bool playing;
	char guess;
	char answer;
};

