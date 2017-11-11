# if !defined(STUDENT_H)
#define STUDENT_H
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <fstream>
using namespace std;

class student
{
	string number;
	double score;
	
	public:
		void SetNum(string s)
		{
			number = s;
		}
		void Setscore(double s)
		{
			score = s;
		} 
		string GetNum()
		{
			return number;
		}
		double GetScore()
		{
			return score;
		}
		void set(vector<student>&);
		void display(vector<student>&);
		void read(); 
};
#endif
