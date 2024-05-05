#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Marks
{
	public:
		
		
		void getData()
		{
			// Asking Semester
			int n;
			cout<<"Enter No. of Semester : ";
			cin>>n;
			int sem[n];	
			//No of Subjects
			int maxInSem[n]; // Storing maxmimum marks 
			for(int i = 0; i < n; i++)
			{
				int numSubj;
			 	cout<<"\nEnter Number of Subject in Semester "<<i+1<<": ";
				cin>>numSubj;
				int marks[numSubj];
				//For Max number
				int n = sizeof(marks) / sizeof(marks[0]);
				// Entering Marks
				for(int j = 0 ; j < numSubj; j++)
				{
					cout<<"\nEnter Marks of Subject "<<j+1<<" : ";
					cin>>marks[j];
					
					
				}
				
				maxInSem[i] = *max_element(marks,marks + n);
			}
			
			for(int i = 0 ; i < n; i++)
			{
				cout<<"\nMaximum Marks in Semester "<<i + 1<<" : "<<maxInSem[i];
			}
			
		}
		
		
};
int main()
{
	Marks obj;
	obj.getData();
	return 0;
}
