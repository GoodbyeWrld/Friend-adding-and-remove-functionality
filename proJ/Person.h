#include<iostream>
#include "FriendsLinkedlist.h"
#ifndef Person_H
#define Person_H

class Person
{
private:
    std::string name;
    int* linkedlist;
    int numfriends;
    FriendsList FriendsList(Person::Person name); // pass friends list the name of the user
    
public:
Person(std::string);
~Person();

std::string removefriend(std::string nm)
{
    FriendsList::FriendsList removeFriend(nm);
}
 //remove friend from with Person
FriendsList::FriendsList displayList(); // call print from within Person
FriendsList::FriendsList addfriend(); // add friend from within Person


};


#endif







