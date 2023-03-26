#include <bits/stdc++.h>
#include <cstdlib>
#include <time.h>
using namespace std;



int main(){
	cout<<"Welcome to the terminal Rock, Paper, Scissors!"<<endl;
	cout<<"Note: the game takes input in only small letter case words."<<endl;
	cout<<"Game rules: Rock beats scissors, scissors beat paper, and paper beats rock. In case where both players play the same thing, it's a tie."<<endl;
	string moves[3]; //declaring the array of possible/legal moves
	moves[0]="rock";
	moves[1]="paper";
	moves[2]="scissors";
	//declaring a random function to generate a random number
	int k=rand();
	

	string a; //a is the user-inputted move
	cout<<"Enter your move here:";
	cin>>a;
	if (rand()%3==0){ //now making the random number limited to 0,1, or 2 as we just have 3 options
		cout<<"rock"<<endl;
		if(a=="rock"){  //giving in the logic according to the rules of the game. Could have been more efficient 
			cout<<"It is a tie.";
		} else if (a=="paper"){
			cout<<"User wins.";
		} else {cout<<"Computer wins";}

	} else if (rand()%3==1){
		cout<<"paper"<<endl;
		if(a=="rock"){
			cout<<"Computer wins.";
		} else if (a=="paper"){
			cout<<"It is a tie.";
		} else {cout<<"User wins";}
	} else {
		cout<<"scissors"<<endl;
		if(a=="scissors"){
			cout<<"It is a tie.";
		} else if (a=="rock"){
			cout<<"User wins.";
		} else {cout<<"Computer wins.";}
	}


}