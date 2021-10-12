#include<iostream>
#include<string>
using namespace std;
struct StudentData{
	string First_name;
	string Last_name;
	int marks;
	char grade; };
void information();
char AssGrade(int);
void highestScore(int);
void printHighestscore(int);
void outputRecord();
StudentData s[20];
int highest_score[20],highest;

int main() {
	information();
	printHighestscore(highest);
	outputRecord();
	system("pause");
	return 0; }

void information() {
	for(int i=0;i<20;i++) {
		cout<<"Student No."<<i+1<<endl;
		cout<<"First Name: ";
		cin>>s[i].First_name;
		cout<<"Last Name: ";
		cin>>s[i].Last_name;
		cout<<"Test Score: ";
		cin>>s[i].marks;
		if(s[i].marks >=0 && s[i].marks <=100)
			s[i].grade = AssGrade(s[i].marks);
		else
		{  do{
			  cout<<"Entered invalid test scores"<<endl;
			  cout<<"Again enter the test score"<<i+1<<":";
			  cin>>s[i].marks; }
		while (s[i].marks <0 || s[i].marks > 100);
		s[i].grade = AssGrade(s[i].marks ); }
		cout<<endl;
		highestScore(i); }}

char AssGrade(int num) {
	char grade;
	if(num>=90)
		grade='A';
	else if(num>=80)
		grade='B';
	else if (num>=70)
		grade='C';
	else if (num>=60)
	grade='D';
	else
		grade = 'F';
	return grade; }

void highestScore(int x) {
	if(x==0) {
		highest_score[0]= s[x].marks;
		highest=s[x].marks; }
	else if(s[x].marks >= highest) {
		highest_score[x]=s[x].marks;
		highest= s[x].marks; } }

void printHighestscore(int z) {
  cout<<"Highest Test Score = "<<z<<endl;
  cout<<"Students got the Highest score are"<<endl;
  for(int i=0;i<20;i++) {
	  if(highest_score[i]==z) {
		  cout<< s[i].First_name <<endl; }}}

void outputRecord() {
	cout<< "First Name"<< "Last Name"<<" \t\tTest Score"<<" \tGrade"<<endl;
	for(int i=0;i<20;i++) {
		cout<<s[i].First_name <<","<<s[i].Last_name <<"\t\t\t"<<s[i].marks <<"\t\t"<<s[i].grade <<endl;
	}}





