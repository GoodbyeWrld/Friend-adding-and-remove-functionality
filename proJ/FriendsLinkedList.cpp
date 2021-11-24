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
            FriendsList::count_of_friends++;
        
        }
        else
        {
            Friendptr = head;

            while(Friendptr->next)
            {
                Friendptr =Friendptr->next;
            }

            Friendptr->next = newFriend;
            FriendsList::count_of_friends++;
            
        }
        return;
    }
    else
    {
        std::cout << FriendsList::excludename<< ": Is the name of the current user whose friendlist you are in currently in....excluding"<<std::endl;
        
    }
    return; //need to figure out to return if a bad value( user's name) is passed to add friend fucntion 


};


std::string FriendsList::removeFriend(std::string) /* think I want to do the functions for removing  current name from removed obj's  friends*/
{


}; 







void FriendsList::displayfriendslist(std::string)
{


}; 