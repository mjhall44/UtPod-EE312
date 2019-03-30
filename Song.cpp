
#include "Song.h"
#include "string.h"
using namespace std;

   Song::Song()
   {
      title = "";
      artist = "";
      size = 0;
   }

   Song::Song(string _artist, string _title, int _size)
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
   
   void Song::swap(Song &p)
   {
      Song temp = p;
      p = *this;
      *this = temp;
   }
       
   bool Song::operator >(Song const &rhs) 
   {

     if(artist.compare(rhs.artist)==0){
	if(title.compare(rhs.title)==0){
		return (size >= rhs.size); //all but size is equal so compare sizes last
	}
	return (title.compare( rhs.title) >= 0); //the titles are not equal so return the titles next
     }else
	return (artist.compare(rhs.artist) >=0);//the artists are not equal so compare the artist first	
   }
   
   bool Song::operator <(Song const &rhs) 
   {
     if(artist.compare(rhs.artist)==0){
	if(title.compare(rhs.title)==0){
		return (size < rhs.size); //all but size is equal so compare sizes last
	}
	return (title.compare( rhs.title) < 0); //the titles are not equal so return the titles next
     }else
	return (artist.compare(rhs.artist) < 0);//the artists are not equal so compare the artist first	
   }


   bool Song::operator ==(Song const &rhs) 
   {
      return (( title == rhs.title)&&(artist==rhs.artist)&&(size == rhs.size));
   }

   Song::~Song(){}
   
   ostream& operator << (ostream& out, const Song &g)
   {
      out << g.getArtist() << "   \t|\t" << g.getTitle() << "   \t|\t" << g.getSize();
      return out;
   }
  

      
