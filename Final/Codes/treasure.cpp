#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
class Treasure
{	int i, j, r, r1, x, y, arr[10][10];
	char choice;
	public:
	void store()
	{
	srand(time(0));
	for (i=0; i<10; i++)
	{
	for(j=0; j<10; j++)
	{
	arr[i][j] = 0;
	}}
	
	r = (rand() %10 ) + 1;
	r1 = (rand() %10 ) + 1;
	arr[r][r1] = 1;
	// cout<<"r: "<<r<<endl;
	// cout<<"r1: "<<r1<<endl;
	cout<<"\n \t The treasure is stored in an area of utmost cordinates (10,10). \n \t You have to find the treasure. \n";
/*	for (i=0; i<10; i++)
	{
    for(j=0; j<10; j++)
	{
	cout<<arr[i][j]<<"\t";
	}
	cout<<endl;
	}*/
	}
	
	void find()
	{
	choice = 'Y';
	while(choice == 'Y')
	{ 
	
	cout<<"\t Enter the co-odinates of the place where treasure might be stored: ";
	cin>>x>>y;
	if(arr[x][y] == 1)
		{ 
		cout<<"\n \t \t SUCCESS ";
		cout<<"\n \t \t Yay! You found the Treasure... \n \n";
		break;
		}
	else
		{
		 if((r==(x+1) || r==(x+2)) || (r1==(+1) || r1==(y+2)))
			{
			cout<<"\n \t  That was a HOT situation. You are very close to find the treasure...\n";
			cout<<"\t Do you want to continue? Y/N: ";
			cin>>choice;
			}
		else if((r==(x+3) || r==(x+4)) || (r1==(y+3) || r1==(y+4)))
			{
			cout<<"\n \t  That was a WARM situation. Guess for something closer than this...\n";
			cout<<"\t Do you want to continue? Y/N: ";
			cin>>choice;
			}
		else if((r==(x+5) || r1==(y+5)))
			{
			cout<<"\n \t  That was a COLD situation. Try a closer guess...\n";
			cout<<"\t Do you want to continue? Y/N: ";
			cin>>choice;
			}
	
		else
			{
			cout<<"\t Invalid guess... Try something else... \n";
			cout<<"\t Do you want to continue? Y/N: ";
			cin>>choice;
			}
		}
	}
	cout<<"The treasure was stored at ("<<x<<", "<<y<<")";
	}
	};
	
	int main()
	{
	Treasure obj;
	obj.store();
	obj.find();
	return 0;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

