#include <iostream>
using namespace std;
class student{
	struct data{
		
	string studentFname;
	string studentLname;
	int testscore;
	char grade;
};
	public:
		data obj[3],obji[3],objg[3];
		void studentname(){
//			data obj[3];
			cout << "enter the name of student:";
			for(int i=0;i<3;i++){
				cout <<"first name:"<<endl;
				getline(cin,obj[i].studentFname);
				cout << "second name:"<<endl;
				getline(cin,obj[i].studentLname);
			}
		}
		void studentmarks(){
			data obji[3];
			int top;
			cout << "enter the testscore:";
			for(int i =0;i<3;i++){
				cin >> obji[i].testscore;
			}
			cout << "your highest score is:";
			for(int i = 0;i<3;i++){
				for(int j = i ;j<3;j++){
					if (obji[i].testscore > obji[j].testscore){
						top = obji[i].testscore;
												
					}
			}			
	}

	cout << top;
		}
		void studentgrade(){
			data objg[3];
			for (int i=0;i<3;i++){
				cin >> objg[3].grade;
			}
		}
};
int main(){
	student obj;
	obj.studentname();
	obj.studentmarks();
	obj.studentgrade();
	
}
