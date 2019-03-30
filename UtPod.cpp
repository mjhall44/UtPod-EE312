
#include "UtPod.h"
#include <iostream>
#include <cstdlib>

using namespace std;

   UtPod::UtPod()
   {
      podMemSize=MAX_MEMORY;
      currMem=MAX_MEMORY;

   }
  
   UtPod::UtPod(int size)
   {
      podMemSize = size;
      currMem = size;
   }
   
   int UtPod::addSong(Song const &s)
   {
      //check to see if there is room to add a song
      if((currMem - s.getSize()) < 0){
         return NO_MEMORY; //there is not enough room
      }

      //check to see if the song is valid
      if(s.getArtist()=="" || s.getTitle()=="" || s.getSize()<0)
         return NO_MEMORY;

      //all is good, add the song
      SongNode* temp = new SongNode();
      temp->s = s;
      temp->next = songs; //adding to the front of the list
      songs = temp;

      currMem =currMem - s.getSize(); //updates the amount of memory available
      return SUCCESS;
   }
   
   int UtPod::removeSong(Song const &s)
   {
      //if the list is empty, there is no song
      if(songs==NULL){
         return NOT_FOUND;
      }
      else{
         SongNode* temp = songs;
         SongNode *prev = NULL;      
         //finds the song in the list
         while(temp !=NULL && temp->s == s){
            prev = temp;
            temp=temp->next;
         }
         //comes out with a pointer to the song
         //if the song is the first in the list
         if(prev==NULL){
            songs = temp->next;
            delete temp;
         } else if(temp->s == s){ //if the song is elsewhere in the list, set prev to jump over the node being deleted
            prev->next=temp->next;
            delete temp;

         }
         //update the current available memory, add back
         currMem= currMem + s.getSize();
         return SUCCESS;
      }
      return NOT_FOUND;
   }
   
   void UtPod::shuffle()
   {
   }
   
   void UtPod::showSongList()
   {
      //set a counter through the list at the head
      SongNode *temp = songs;
      //go through each node of the list and use default print
      while(temp != NULL){
         cout << temp->s <<endl;
         temp = temp->next;
      }
      cout << "Memory Left: " << currMem << endl;
   }  
   
   void UtPod::sortSongList()
   {
      //create a pointer and compare it to another pointer in the list
      SongNode* pointer = songs;
      SongNode* other= NULL;

      //traverse the list by finding the lowest value and swapping it to the head, then moving the head
      while(pointer->next !=NULL){//if there is only one song, the list does not perform this
         other =pointer->next;
         while(other != NULL){
            if(pointer->s > other->s){
               //if the song is less, swap it to the earlier point of the list
               pointer->s.swap(other->s);
               //increment the other node to compare the rest of the list
               other = other->next;
            }
         }
         pointer = pointer->next;
      }
   }

   void UtPod::clearMemory(){
      SongNode *temp;

      //check if empty, then your done
      if(songs == NULL){
         return;
      }
      //check the next song and delete a song if there is a song
      while(songs->next != NULL){
         temp = songs;
         songs = songs->next;
         delete temp;
      }
      //delete the head song of the list
      if(songs->next==NULL){
         temp = songs;
         songs = NULL;
         delete temp;
      }

   }


   int UtPod::getRemainingMemory(){
      return currMem;
   }
  

  
   UtPod::~UtPod()
   {
      clearMemory();
   }
   /*
   ostream& operator << (ostream& out, const Song &g)
   {
      out << g.getTitle() << ", " << g.getArtist() << ", - " << g.getSize();
      return out;
   }
  
*/
      
