#include <iostream>
#include <string>
using namespace std;
/*program which prints the numbers from 1 to 40 (10 numbers in one line, total 4
lines). But multiples of 4 should be replaced with your first name, multiples of 5 should be
replaced with your GPA and multiples of both 4 and 5 should be replaced with your roll
number*/
int main() 
{
	float gpa=3.84; // marks declaration
	int rollno=211232;  //rollno declaration
	string firstname="waqar";  //name declaration
	for(int i=1;i<=40;i++) // "for loop" for nummbers between 1 to 40
	{
		if(i%10==1) //statement for 10 numbers in one line, total 4 lines
		{
		cout<<endl;
		}
		if(i%4==0&&i%5==0) // statement for multiples of both 4 and 5
		{
			cout<<rollno<<"\t";
			continue; //will break the statement from here and take the compiler again to loop,
		}
			if(i%4==0)  // statement for multiples of 4
		{
			cout<<firstname<<"\t"; 
			continue; //will break the statement from here and take the compiler again to loop,
		}
		if(i%5==0)  //statement for multiples of 5
		{
			cout<<gpa<<"\t";
			continue; //will break the statement from here and take the compiler again to loop,
		}
		cout<<i<<"\t";  //will print integers other than the multiples of 5,4 or 5 and 4.

		
	}
	return 0;
}
