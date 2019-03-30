
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
      if( < rhs.handicap);
   }
   
   bool Golfer::operator ==(Golfer const &rhs) 
   {
      return (name == rhs.name &&
              eMail == rhs.eMail &&
              handicap == rhs.handicap);
   }

   Golfer::~Golfer()
   {
      cout << "in destructor for "<< name <<endl;
   }
   
   ostream& operator << (ostream& out, const Golfer &g)
   {
      out << g.getName() << " (" << g.getEMail() << ") - " << g.getHandicap();
      return out;
   }
  

      
