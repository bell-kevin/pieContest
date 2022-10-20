// countyFairPieContest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
//Each line in the file holds the contestant's first and last name, and 3 scores stored as doubles
class PieContestant
{
private:
	string firstName;
	string lastName;
	double score1;
	double score2;
	double score3;
	double averageScore;
public:
	PieContestant(string firstName, string lastName, double score1, double score2, double score3)
	{
		this->firstName = firstName;
		this->lastName = lastName;
		this->score1 = score1;
		this->score2 = score2;
		this->score3 = score3;
		this->averageScore = (score1 + score2 + score3) / 3;
	}
	string getFirstName()
	{
		return firstName;
	}
	string getLastName()
	{
		return lastName;
	}
	double getScore1()
	{
		return score1;
	}
	double getScore2()
	{
		return score2;
	}
	double getScore3()
	{
		return score3;
	}
	double getAverageScore()
	{
		return averageScore;
	}
};

int main()
{
	PieContestant contestants[10] = {
		PieContestant("John", "Smith", 8.5, 7.5, 9.0),
		PieContestant("Jane", "Doe", 9.1, 9.2, 9.3),
		PieContestant("Bob", "Jones", 8.0, 8.0, 8.0),
		PieContestant("Sally", "Smith", 7.5, 8.5, 9.5),
		PieContestant("Bill", "Williams", 8.5, 9.5, 9.0),
		PieContestant("Mary", "Brown", 9.0, 9.0, 8.0),
		PieContestant("Pat", "Davis", 8.5, 9.0, 9.5),
		PieContestant("Susan", "Miller", 10.0, 9.5, 9.0),
		PieContestant("Mark", "Wilson", 8.5, 9.0, 9.5),
		PieContestant("Laura", "Moore", 9.4, 9.5, 9.0)
	};
	
	//bubble sort in descending order of average score
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (contestants[j].getAverageScore() < contestants[j + 1].getAverageScore())
			{
				PieContestant temp = contestants[j];
				contestants[j] = contestants[j + 1];
				contestants[j + 1] = temp;
			}
		}
	}
	cout << "Mod. 5 Comp. Proj. County Fair Pie Contest by Kevin Bell\n\n";
	cout << "Sorted list\n\n";
	// display array with decimal precision of 2
	cout << fixed << setprecision(2);
	cout << "Contestant\tScore 1\tScore 2\tScore 3\tAverage Score" << endl;
	//line
	cout << "------------------------------------------------------------" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << contestants[i].getFirstName() << " " << contestants[i].getLastName() << "\t" << contestants[i].getScore1() << "\t" << contestants[i].getScore2() << "\t" << contestants[i].getScore3() << "\t" << fixed << setprecision(2) << contestants[i].getAverageScore() << endl;
	}
	

	//project will sort the array in descending order of the average score

	cout << endl;


	
	//format data into array
	//write to file
	


	//then display the names of the top 3 contestants to award them gold, silver or bronze medals
	cout << "Winners" << endl;
	// format well
	cout << "Gold Medal:\t" << contestants[0].getFirstName() << "\t " << contestants[0].getLastName() << "\t\t" << fixed << setprecision(2) << contestants[0].getAverageScore() << endl;
	cout << "Silver Medal:\t" << contestants[1].getFirstName() << "\t " << contestants[1].getLastName() << "\t\t" << fixed << setprecision(2) << contestants[1].getAverageScore() << endl;
	cout << "Bronze Medal:\t" << contestants[2].getFirstName() << "\t " << contestants[2].getLastName() << "\t\t" << fixed << setprecision(2) << contestants[2].getAverageScore() << endl;
	system("pause");
	return 0;
} // end main


	/*
int main()
{
	std::cout << "Mod. 5 Comp. County Fair Pie Contest by Kevin Bell\n\n";
	//project that determines the winners at the county fair Pie Contest
	//project will use an array to store the names of the contestants, the 3 scores and the average of those scores
	//project will sort the array in descending order of the average score
	//then display the names of the top 3 contestants to award them gold, silver or bronze medals
} // end main
*/