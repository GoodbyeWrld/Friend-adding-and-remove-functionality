#ifndef Friendslist_h
#define Friendslist_h
#include <string>

class Person;
class FriendsList
{
    private:
    std::string excludename;// want to exclude the persons name form there own friends list
struct Friendd 
{
    std::string name;
    struct Friendd *next;

};
Friendd::Friendd *head; 

public:
FriendsList(std::string P)
{
    excludename = P; //name of the person whose friends list this call belongs to
    head = nullptr;
}


~FriendsList();


std::string removeFriend(std::string); // remove the name that is passed
void addfriend(std::string, std::string);// pass the friend to be added and the persons name to be skipped
void displayfriendslist(std::string); // Print linkedList
};
#endif