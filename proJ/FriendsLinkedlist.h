#ifndef Friendslist_h
#define Friendslist_h
#include <string>

class Person;

/* Has to be given permission to be used by Person
Has to take a string to for person that the obj belongs to and also friend to be removed 
addfunctio nto friends list that checks if the exclude name was passed


all Persons should be declared before used
removefriend function that returns the name that was removed to a function to go into that obj's class to remove the name
call the name that was removeded's obj from current obj list and remove current obj name from removed friends

display list cna just be used to display friends lsit of objs
*/
class FriendsList
{
    private:
    friend class Person; // Provide Person access
    std::string excludename;// want to exclude the persons name form there own friends list
    int count_of_friends;
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
    std::string removeFriend(std::string); // remove the name that is passed and return exluded
    void addfriend(std::string, std::string);// pass the friend to be added and the persons name to be skipped
    void displayfriendslist(std::string); // Print linkedList

};
#endif