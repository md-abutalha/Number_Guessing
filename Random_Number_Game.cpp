#include<iostream>
#include<conio.h>
#include<cstdlib>

using namespace std;

 int main(){
 	while(1)
 	{
 	int guessNumber,randomNumber;
 	cout <<"Hi i'm Talha this my small project and best of luck for guessing number!" <<endl <<endl;
 	cout <<"Enter your guess between 1 to 5 : ";
 	cin >> guessNumber;
 	
 	randomNumber = 1 + rand()%5;
 	
 	if(guessNumber==randomNumber)
	 {
	 	cout << "Yeah!  you have been won!" <<endl <<endl;
	 }
	 else{
	 	cout << "Opps! you have lost" <<endl<<endl;
	 	cout <<"random number was :"<<randomNumber<<endl<<endl;
	 }
	 
	 
	 
	 }
 	
 	 getch();
 		
 }
