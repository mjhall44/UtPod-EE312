
#include "UtPod.h"

using namespace std;

   UtPod::UtPod()
   {
      podMemSize=MAX_MEMORY;
   }
  
   UtPod::UtPod(int size)
   {
      podMemSize = size;
   }
   
   int UtPod::addSong(Song const &s) const
   {
      return 0;
   }
   
   int UtPod::removeSong(Song const &s)
   {
      return 0;
   }
   
   void UtPod::shuffle()
   {

   }
   
   void UtPod::showSongList()
   {
   
   }  
   
   void UtPod::sortSongList()
   {
   }

   void UtPod::clearMemory(){

   }


   int getRemainingMemory(){

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
  

      
