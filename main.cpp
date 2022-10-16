#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <strings.h>
#include <random>
#include <ctime>
using namespace std;

int main (){
    string r="rock", p="paper" , s="scissors" , usr , replay ;
    int random= 3 , comp = 0 , i=1 ;
do{
system("cls");

// Total Faliure to create randomness always gives '3' as result
// random_device rd;
// uniform_int_distribution <int> dist(1,3);
// cout<<endl<<"computer choosed = "<<dist(rd)<<endl;

// another try to create randomness 
srand(time(NULL));
comp = rand() % random + 1;
// Successfull :)


cout<<"Instructions \n R = Rock \n P = Paper \n S = Scissors \n E = Exit the Game"<<endl;
cout<<"\nChoose Rockk Paperr Scizzorss = ";
cin>>usr;

if(usr=="e"){
break;
};
if(usr=="r"){
cout<<"\nYou Choosed = "<<r;
};
if(usr=="p"){
cout<<"\nYou Choosed =  "<<p;
};
if(usr=="s"){
cout<<"\nYou Choosed = "<<s;
};

if(comp==1){
cout<<"\nComputer Choosed = "<<r<<endl;
cout<<endl;
};
if(comp==2){
cout<<"\nComputer Choosed =  "<<p<<endl;
cout<<endl;
};
if(comp==3){
cout<<"\nComputer Choosed = "<<s<<endl;
cout<<endl;
};


if(usr=="r"){
if(comp==1){
cout<<"------------ DRAW ^_^ ------------"<<endl;
cout<<endl;
    break;
};
if(comp==2){
cout<<"------------ Computer Win :( ------------ \n Try Next Time ;)"<<endl;
cout<<endl;
    break;
};
if(comp==3){
cout<<" ------------ YOU WIN :) ------------"<<endl;
cout<<endl;
 break;
};
};

if(usr=="p"){
if(comp==2){
cout<<"------------ DRAW ^_^ ------------"<<endl;
cout<<endl;
    break;
};
if(comp==3){
cout<<"------------ Computer Win :( ------------ \n Try Next Time ;)"<<endl;
cout<<endl;
    break;
};
if(comp==1){
cout<<" ------------ YOU WIN :) ------------"<<endl;
cout<<endl;
 break;
};
};

if(usr=="s"){
if(comp==3){
cout<<"------------ DRAW ^_^ ------------"<<endl;
cout<<endl;
    break;
};
if(comp==1){
cout<<"------------ Computer Win :( ------------ \n Try Next Time ;)"<<endl;
cout<<endl;
    break;
};
if(comp==2){
cout<<" ------------ YOU WIN :) ------------"<<endl;
cout<<endl;
 break;
};
};
}
while(i==1);
system("PAUSE");
return 0;
}

