#include<iostream>
using namespace std;

class cricket{
	public:
		void getTotalOvers(){
			cout<<"Total overs in a cricket match=100"<<endl;
		}
};

class T20Match{
	public:
		void getTotalOvers(){
			cout<<"Total overs in a T20 match=50"<<endl;
		}
};

main()
{
	T20Match t;
	t.getTotalOvers();
	t.T20Match::getTotalOvers();
}