#ifndef SONG_H
#define SONG_H

#include <string>
#include <iostream>

using namespace std;

class Song {
      
  private:
   string title;
   string artist;
   int size;

   static const int MAX_SIZE = 5;
 
  public:
   Song();
   Song(string title);
   Song(string title, string artist, int size);
   
   string getTitle() const 
   { return title; }
   
   void setTitle(string n)
   {
      title = n;
   };
   
   string getArtist() const;
   void setArtist(string artist);
   int getSize() const;
   void setSize(int h);
  
   void swap(Song &p);
 
   bool operator >(Song const &rhs); 
   bool operator ==(Song const &rhs);
   bool operator <(Song const &rhs);

   
   ~Song();
  
};


ostream& operator << (ostream& out, const Song &g);


#endif
