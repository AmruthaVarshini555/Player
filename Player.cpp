#include"Player.h"
Player::Player(){
        name=" ";
        age=0;
}

Player::Player(string nm,int age){
        name=nm;
        this->age=age;
}
void Player::accept(){
        cout<<"\nEnter player details:";
        cout<<"\nEnter Name of the player: ";
        cin>>name;
        cout<<"Enter age of the player: ";
        cin>>age;
}
void Player::display(){
        cout<<"\nPlayer details: ";
        cout<<"\nName of the player: "<<name;
        cout<<"\nAge of the player: "<<age;
}
