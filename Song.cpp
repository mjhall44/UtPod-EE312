
#include "Song.h"

using namespace std;

   Song::Song()
   {
      title = "";
      artist = "";
      size = MAX_SIZE;
   }

   Song::Song(string title)
   {
      this->title = title;
      artist = "";
      size = MAX_SIZE;
   }
   
   Song::Song(string _title, string _artist, int _size)
   {
      title = _title;
      artist = _artist;
      size = _size;
   }
   
   string Song::getArtist() const
   {
      return artist;
   }
   
   void Song::setArtist(string _artist)
   {
      artist = _artist;
   }
   
   int Song::getSize() const
   {
      return size;
   }
   
   void Song::setSize(int _size)
   {
        this->size = _size;
   }  
   
   void Song::swap(Song &g2)
   {
      Song temp = g2;
      g2 = *this;
      *this = temp;
   }
       
   bool Song::operator >(Song const &rhs) 
   {

      if(artist >rhs.artist){
         return true;
      } else if(artist < rhs.artist){
         return false;
      }
      if( title > rhs.title){
         return true;
      } else if(title < rhs.title){

         return false;
      }

      if (size > rhs.size) {
               return true;
      }
      return false;
   }
   
   bool Song::operator <(Song const &rhs) 
   {

      if(artist <rhs.artist){
         return true;
      } else if(artist>rhs.artist){
         return false;
      }
      if( title < rhs.title){
         return true;
      } else if(title > rhs.title){

         return false;
      }

      if (size < rhs.size) {
               return true;
      }
      return false;
   }

   bool Song::operator ==(Song const &rhs) 
   {
      if( title == rhs.title){
         if(artist==rhs.artist){
            if (size == rhs.size) {
               return true;
            }
         
         }
      }
      return false;
   }

   Song::~Song()
   {
      cout << "in destructor for "<< title <<endl;
   }
   
   ostream& operator << (ostream& out, const Song &g)
   {
      out << g.getTitle() << ", " << g.getArtist() << ", - " << g.getSize();
      return out;
   }
  

      
