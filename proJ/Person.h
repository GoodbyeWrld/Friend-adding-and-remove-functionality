#include<iostream>
#include "FriendsLinkedlist.h"
#ifndef Person_H
#define Person_H

/*gateway to friendslisthead 
through it we can remove friends, add, display friends list and height of list*/
class Person
{
private:
    std::string name;
    int* linkedlist;// dead 
    int numfriends;
    FriendsList FriendsList(Person::Person name); // pass friends list the name of the user
    FriendsList::Friendd *head; //<--trying to make this the pointer to the friendlist
public:
Person();
Person(std::string nme) 
{
    name = nme;
};
~Person();
std::string getnameP()
    { return name;};
std::string removefriend(std::string nm);//remove friend from with Person
FriendsList::FriendsList displayList(); // call print from within Person
FriendsList::FriendsList addfriend(); // add friend from within Person
FriendsList::FriendsList count_of_friends; // count
};


#endif







