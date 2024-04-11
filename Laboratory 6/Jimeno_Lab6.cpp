#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;

struct student
{
    string studentName;
    double score;
};

vector<student> readFromRecord (string fileName);
double recAverage (vector<student> S);
double recSTDev(vector<student> S);
double recPearCorr(vector<student> S1, vector <student> S2);
void writeResultToFile (double ave1, double ave2, double stDev1,double stDev2,double PearCorr);

int main()
{
    cout << "PEARSON'S R CALCULATOR" << endl << endl;

    vector<student>studentOne = readFromRecord("StudentScore1.txt");
    vector<student>studentTwo = readFromRecord("StudentScore2.txt");

    cout << "Correlation Coefficient: " << recPearCorr(studentOne, studentTwo) << endl;

    double ave1 = recAverage(studentOne);
    double ave2 = recAverage(studentTwo);
    double stDev1 = recSTDev(studentOne);
    double stDev2 = recSTDev(studentTwo);
    double corr = recPearCorr(studentOne, studentTwo);

    writeResultToFile(ave1, ave2, stDev1, stDev2, corr);
}

vector<student> readFromRecord (string fileName)
{
    ifstream inStudentRecord;
    inStudentRecord.open(fileName);

    vector<student> S;
    student s;

    if(inStudentRecord.is_open())
    {
        while(!inStudentRecord.eof())
        {
            getline(inStudentRecord, s.studentName, '\t');
            inStudentRecord >> s.score;
            S.push_back(s);
        }
        inStudentRecord.close();
    }
    else
    {
        cout << "Error: File not found!";
    }

    return S;
}

double recAverage (vector<student> S)
{
    double sum = 0.0;

    for(int i=0; i<S.size(); i++)
    {
        sum += S.at(i).score;
    }

    return sum/S.size();
}

double recSTDev(vector<student> S)
{
    double sum = 0.0;

    for(int i=0;i<S.size();i++)
    {
        student s = S.at(i);
        sum += pow(s.score-recAverage(S), 2);
    }
    double dev = sum/S.size();

    return sqrt(dev);
}

double recPearCorr(vector<student> S1, vector <student> S2)
{
    double sum = 0.0;

    for(int i=0; i<S1.size();i++)
    {
        student x = S1.at(i);
        student y = S2.at(i);

        //sample data
        double xScore = x.score;
        double yScore = y.score;

        //sample means
        double xAve = recAverage(S1);
        double yAve = recAverage(S2);

        //sample standard deviation
        double xSTD = recSTDev(S1);
        double ySTD = recSTDev(S2);

        sum += ((xScore-xAve)*(yScore-yAve)/(xSTD*ySTD));
    }

    return sum/S1.size();
}


void writeResultToFile (double ave1, double ave2, double stDev1,double stDev2,double PearCorr)
{
    ofstream outStudentRecord;
    outStudentRecord.open("scoreDescStat.txt");

    if(outStudentRecord.is_open())
    {
        outStudentRecord << "Average 1: " << ave1 << ", ";
        outStudentRecord << "Standard Deviation 1: " << stDev1 << endl;
        outStudentRecord << "Average 2: " << ave2 << ", ";
        outStudentRecord << "Standard Deviation 2: " << stDev2 << endl;
        outStudentRecord << "Correlation Coefficient: " << PearCorr << endl;

        cout << endl << "File Created: scoreDescStat.txt" << endl;
        outStudentRecord.close();
    }
    else
    {
        cout << "Error: File not found!";
    }
}
