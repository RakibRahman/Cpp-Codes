//Score Rater

#include <iostream>
using std::cout;
using std::endl;

int main() {
	if (true)
	{
		cout << "Displaying the Score Board!" << endl;
	}
	if (false)
	{
		cout << "No Score!" << endl;
	}

	int score = 641;
	if (score)
	{
		cout << "At least you did not score zero" << endl;
	}
	if (score >= 250) 
	{
		cout << "You scored 250 or More" << endl;
	}
	if (score >= 500)
	{
		cout << "You scored 500 or More" << endl;
	}
	if (score >= 531)
	{
		cout << "You scored 2nd Highscore of all time!" << endl;

		if (score == 641)
		{
			cout << "You scored the best Highscore of all time!" << endl;
		}
		//Nested If statement
	}
	return 0;
}