#include<iostream>
#include "FriendsLinkedlist.h"



void FriendsList::addfriend(std::string nme)
{
    std::string exc_nme= FriendsList::excludename;
    
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
        std::cout << FriendsList::excludename<< ": Is the name of the current user whose you are trying to remove frinds from currently....excluding"<<std::endl;
        
    }
    return; //need to figure out to return if a bad value( user's name) is passed to add friend fucntion 


};


std::string FriendsList::removeFriend(Friendd::Friendd **head,std::string name) /* think I want to do the functions for removing current name from removed obj's  friends*/
{

    Friendd::Friendd *temp =  *head; // both pointing to head / saving head 
    Friendd::Friendd *prev = NULL;
    if (temp != NULL && temp->name==name)
    {
        std::string inversedelte;
        *head= temp->next;
        inversedelte=temp->name;
        delete temp;
        return inversedelte;

    }
    while (temp != NULL && temp->name !=name)
    {
        prev=temp;
        temp=temp->next;
        
    }

    if (temp->next == NULL)
    {
       std::cout<<"This user only has one friend deleting it would terminate linked list"<<std::endl;
       return; 
    }
   
    


}; 



void FriendsList::displayfriendslist(Friendd::Friendd *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        std::cout<<"Name "<< count <<": "<<head->name<<std::endl;
        head = head->next;
        
    }

}; 