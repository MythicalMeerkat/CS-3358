// Defines the entry point for the RAW Sets of student test scores.

#include "stdafx.h"

using namespace std;

class testScores 
{
public:	
	
	int scores1[10] = { 100, 99, 67, 80, 95, 100, 80, 83, 100, 75 };
	int scores2[10] = { 90, 89, 77, 80, 95, 100, 80, 86, 90, 100 };
	int scores3[10] = { 95, 90, 77, 80, 95, 100, 80, 83, 100, 75 };
	int scores4[10] = { 100, 95, 69, 40, 95, 45, 80, 83, 100, 75 };
	int scores5[10] = { 45, 99, 67, 90, 95, 100, 80, 83, 80, 75 };
	int scores6[10] = { 100, 93, 67, 83, 95, 100, 84, 83, 100, 75 };
	int scores7[10] = { 105, 99, 60, 80, 95, 100, 80, 83, 100, 75 };
	int scores8[10] = { 40, 95, 62, 80, 95, 100, 80, 83, 100, 75 };
	int scores9[10] = { 40, 99, 67, 80, 55, 100, 80, 83, 90, 75 };
	int scores_10[10] = { 100, 99, 67, 70, 75, 100, 60, 23, 100, 78 };

	double calculateStudentTestAverage(int dataSet[])
	{
		double avg = 0;
		for (int i = 0; i < 10; ++i)
		{
			avg += dataSet[i];
		}

		return (avg / 10);
	}

	testScores()
	{
		return;
	}
};