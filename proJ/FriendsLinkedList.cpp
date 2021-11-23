#include<iostream>
#include "FriendsLinkedlist.h"



void FriendsList::addfriend(std::string nme, std::string exc_nme)
{
    if (nme != exc_nme)
    {
        Friendd *newFriend;
        Friendd *Friendptr;
        
        newFriend = new Friendd;
        newFriend->name = nme;
        newFriend->next = nullptr;


        if (!head)
        {
            head = newFriend;
        
        }
        else
        {
            Friendptr = head;

            while(Friendptr->next)
            {
                Friendptr =Friendptr->next;
            }

            Friendptr->next = newFriend;
            
        }
        
    }
    else return;// need to figure out to return if a bad value( user's name) is passed to add friend fucntion 


};


std::string FriendsList::removeFriend(std::string)
{


}; 







void FriendsList::displayfriendslist(std::string)
{


}; 