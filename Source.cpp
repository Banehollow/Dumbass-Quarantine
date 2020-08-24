/*                        <<<<<<<<<<<<<< Preprocessor Directives >>>>>>>>>>>>>>>>>>
		A real egg-head name, this is basically a command that "calls" a header or resource
		file for use. Basically it functions like a translator. By "including" 
		the header/resource/dependency file in our code, it gives us access to expressions
		and other pre-programmed functions within the file that our compiler normally 
		wouldn't recognize. These files usually contain pre-written code by other programmers
		that we can use to cover complex operations, as opposed to writting all of it ourselves.
*/
#include <iostream>
#include <Windows.h>
#include <ctime>
#include <stdio.h>
using namespace std;

//  <<<<<<<<<<<<<< Main Function >>>>>>>>>>>>>>>>>>
/*                        <<<<<<<<<<<<<< Variables >>>>>>>>>>>>>>>>>>
		Initialized variables, these guys store information (number values in this case)
		so we can use them to trigger events or print information in a variety of ways.
		If they are initialized (done by the "=" sign), they "become" the value they are
		equal to, thus printing or stringing their names will actually just print
		the value they are equal to to the screen.
	|------------------------------------------------------------------------------------------|
		"const int" are constant, initialized variables who's value cannot be altered in
		the subsequent code. Attempting to modify it (example: Typing the variable followed
		by an assignment operator and then a value) will not work and the compiler will
		will not allow it to happen by printing an error.
	|------------------------------------------------------------------------------------------|
		If you have a variable that is equal to OTHER variables above it in the code line
		(like "sum" or "product"), it will RETAIN THE ORIGINAL VALUE OF THOSE VARIABLES,
		even if THOSE VARIABLES are modified (have their value or assignment operator changed)
		later on in the program. This means if you attempted to alter one of those variable's
		value BENEATH the Combine Variables, the Combine Variables would ignore it because it
		is written after (or below) them in the code conveyor.
*/

void Introduction(int LevelDifficulty)
{
	std::cout << "Welcome to hell bitch, you're not the only one who wants out...\n\n";
	Sleep(2000);
}

bool PlayGame(int LevelDifficulty)
{
	//              <<<<<<<<<<<<<< || Declaration Statements >>>>>>>>>>>>>>>>>>
	const int CodeBlue = rand() % LevelDifficulty + LevelDifficulty;
	const int CodeRed = rand() % LevelDifficulty + LevelDifficulty;
	const int CodeGreen = rand() % LevelDifficulty + LevelDifficulty;
	const int CodeSum = CodeBlue + CodeRed + CodeGreen;
	const int CodeProduct = CodeBlue * CodeRed * CodeGreen;


	//              <<<<<<<<<<<<<< Expression Statements >>>>>>>>>>>>>>>>>>
	/*
			"cout" stands for Character OUTPUT, and the left-facing angle brackets (<<) stand for Insertion Operator.
	"		cin" stands for Character INPUT, and the RIGHT-facing angle brackets (>>) stand for Extraction Operator.
	*/
if (LevelDifficulty <= 1)
{
	std::cout << "\nYou are a dumbass colonist trying to get the fuck outta dodge...\n";
	Sleep(2000);
	std::cout << "The only way they'll let you out, is if you prove you AREN'T a dumbass...\n";
	Sleep(2000);
}
	std::cout << std::endl;// (Enter) New Line
	std::cout << "You're on level " << LevelDifficulty << ", so good luck with that..\n";
	Sleep(2000);
	std::cout << "The code adds up to " << CodeSum << ", and multiplies to make " << CodeProduct << ". Now get those wheels spinning.";
	std::cout << std::endl;// (Enter) New Line
	Sleep(2000);

	/*
			The three variables are manipulated in the FirstQuestion function. "Question" is the Condition
			of the While loop inside FirstQuestion (the guard asking the player a question). If the
			question is answered (via the player typing "1" when they are prompted to input the answer),
			then the condition (Question) will equal TRUE, and the Loop ends. "DumbassGuess1, 2 and 3"
			are the player's first three inputs: They are guessing what the code is. If the player wishes
			to redo their guess, then they will insert anything BUT "1" on the "Answer" line, restarting
			the While loop and allowing them to guess again. If they confirm their guess by inputting "1"
			on the "Answer" line, then their guess (DumbassGuess1, 2, and 3) are captured by GuessSum, which is THEN
			stored in the FirstQuestion function, and used/verified in the next function below (YourFate).
	*/
	bool Question = false;
	int DumbassGuess1, DumbassGuess2, DumbassGuess3;
	int GuessSum;
	int Answer;

	int FirstQuestion(int GuessSum);
	{


		while (Question != true)
		{
			std::cin >> DumbassGuess1 >> DumbassGuess2 >> DumbassGuess3;
			std::cout << "You said " << DumbassGuess1 << DumbassGuess2 << DumbassGuess3 <<
				", right? Say 1 if yes!\n";
			std::cin >> Answer;

			//  <<<<<<<<<<<<<< Compound Statements/Code Blocks>>>>>>>>>>>>>>>>>>
			if (Answer != 1)
			{
				std::cout << "Then speak up you warthog-faced buffoon!\n";
				continue;
			}
			else
			{
				std::cout << "Aaaaanndd\n";
				GuessSum = DumbassGuess1 + DumbassGuess2 + DumbassGuess3;
				Question = true;
			}
		}
	}
	/*
			Whatever numbers the player guessed in the FirstQuestion function (which were
			stored respectively in DumbassGuess1, 2, and 3) are used in this function below.
			If the player correctly guessed the code, the guard grants you permission to proceed
			and the level difficulty increases for the next play. If you guessed wrong, he
			tells you to fuck off.
	*/

	int YourFate(int FirstQuestion, int LevelDifficulty);
	{
		int GuessProduct = DumbassGuess1 * DumbassGuess2 * DumbassGuess3;
		Sleep(2000);
		if (GuessSum == CodeSum && GuessProduct == CodeProduct)
		{
			std::cout << std::endl;// (Enter) New Line
			std::cout << "You're in, get your big butt outta here.\n";
			return true;
		}

		else 
		{
			std::cout << std::endl;// (Enter) New Line
			std::cout << "That's why you dumbass!\n";
			return false;
		}

	    if (GuessSum != CodeSum && GuessProduct != CodeProduct * 2)
		{
		std::cout << std::endl;// (Enter) New Line
		std::cout << "Alright get out, you don't have the brains for this one\n";
		LevelDifficulty--;
		return LevelDifficulty;
		return false;
		}

	}
}

int main()
{
	srand(time(NULL));
	const int MaxDifficulty = 5;
	int LevelDifficulty = 1;

	int GameIntro;
	{
		int Play = 0;
		while (Play != 1) //This loop continues until the player presses 2 and closes the game, or 1 and starts the game.
		{
			std::cout << "Welcome to hell bitch, you're not the only one who wants out...\n\n";
			std::cout << "Press 1 to continue, 2 to close\n";
			std::cin >> Play;

			if (Play == 2)
			{
				std::cout << "Chickenshit!";
				return 0;
			}

			if (Play != 1)
			{
				std::cout << "What?";
				continue;
			}

			else if (Play == 1)
			{
				std::cout << "Let's rooockkkk";
				Play = true;
			}
		}

	}

	while (LevelDifficulty <= MaxDifficulty) //The game loops until the Level difficulty reaches the maximum difficulty.
	{
		bool bLevelComplete = PlayGame(LevelDifficulty); /*b LevelComplete is simply a true/false variable that will change
		to change to True each time the player wins the level. If they fail, it remains false.*/
		std::cin.clear();
		std::cin.ignore();

		if (bLevelComplete == true)
		{
			LevelDifficulty++;
		}
	}

/*	  <<<<<<<<<<<<<< Return Statement >>>>>>>>>>>>>>>>>>
		  If the code reaches this point, it obviously has run successfully, and so
		  so the program returns "0" to the computer, which is basically nothing
		  on its own in machine language, so nothing else will run (the program stops).
*/
	Sleep(2000);
	std::cout << "Don't worry asshole. You'll get another chance.";
	Sleep(3000);
	return 0;
}
