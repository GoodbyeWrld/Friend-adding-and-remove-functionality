#include<iostream>
#include<string>
#include "FriendsLinkedlist.h"
#include "Person.h"

void addfriend(Person::Person*,Person::Person,int);

int main()
{
    int numofpeople = 6;
    Person Gabe("Gabe");
    //FriendsList::FriendsList Gabe(Gabe.getnameP());
    Person Liz("Liz");
    //FriendsList::FriendsList Liz(Liz.getnameP());
    Person Jane("Jane");
    //FriendsList::FriendsList Jane(Jane.getnameP());
    Person Jon("Jon");
    //FriendsList::FriendsList Jon(Jon.getnameP());
    Person Destiny("Destiny");
    //FriendsList::FriendsList Destiny(Destiny.getnameP());
    Person Noah("Noah");
    //FriendsList::FriendsList Noah(Noah.getnameP());

    Person allPeople[numofpeople]= {Gabe,Liz,Jane,Jon,Destiny,Noah};
    Person *ptrtolist= allPeople;

    for (int i = 0; i < numofpeople; i++)
    {
        addfriend(ptrtolist, allPeople[i], numofpeople);

    /*addfriend(ptrtolist,Gabe,numofpeople);
    addfriend(ptrtolist,Liz,numofpeople);
    addfriend(ptrtolist,Jane,numofpeople);
    addfriend(ptrtolist,Jon,numofpeople);
    addfriend(ptrtolist,Destiny,numofpeople);
    addfriend(ptrtolist,Noah,numofpeople); //does this*/

    }



}


void addfriend(Person::Person *list,Person::Person curr, int num)
{
    int numofpeople = num; 
    
    for (int i = 0; i < numofpeople; i++)
    {
        Person::Person Userinlist = *(list + i);
        if (Userinlist.getnameP() != curr.getnameP())
        {
            curr.addfriend(Userinlist.getnameP());
        }
        else//shouldn't really need this part because of linked list error catching
        {
            std::cout<<"Excluding"<<std::endl;
        }
        
    }
    return;
    /*Gabe.addfriend(Liz.getnameP());
    Gabe.addfriend(Jane.getnameP());
    Gabe.addfriend(Jon.getnameP());
    Gabe.addfriend(Destiny.getnameP());
    Gabe.addfriend(Noah.getnameP())//does this;*/
    
}
