/* utPod_driver.cpp
Demo Driver for the UtPod.

Roger Priebe
EE 312 10/16/18

This is a basic driver for the UtPod.

You will want to do more complete testing.

*/
#include <cstdlib>
#include <iostream>
#include "Song.h"
#include "UtPod.h"

using namespace std;

int main(int argc, char *argv[])
{
    UtPod t;
    cout << "UtPod Created\nTotal Mem: " << t.getTotalMemory() << endl;    
    Song s1("Beatles", "Hey Jude", 4);
    int result = t.addSong(s1);
          
    Song s2("Beatles", "Elenor Rigby", 5);
    result = t.addSong(s2);
    
    cout << "mem available= " << t.getRemainingMemory() << endl;
    
       
    Song s3("Pink Floyd", "Brain Damage", 6);
    result = t.addSong(s3);

    Song s4("Beatles", "Yesterday", 7);
    result = t.addSong(s4);
       
    Song s5("Pink Floyd", "Echoes", 12);
    result = t.addSong(s5);
    
    Song s10("Billy Joel", "Piano Man", 10);
    result = t.addSong(s10);
    Song s6("Billy Joel", "Piano Man", 10);
    result = t.addSong(s6);
    Song s7("Billy Joel", "Piano Man", 5);
    result = t.addSong(s7);
  
    Song s11("Rush", "Signals", 500);
    result = t.addSong(s11);
    cout << "Mem too big result = " << result <<endl;

    t.showSongList();
    cout << "Now sort the list" << endl;
    t.sortSongList();
    t.showSongList();
    
    cout << "Shuffle the list" << endl;
    t.shuffle();
    t.showSongList();
    

    cout <<"Memory available: " << t.getRemainingMemory() << endl;
    t.removeSong(s7);
    t.removeSong(s6);
    t.removeSong(s10);
    t.removeSong(s4);
cout << "Removed" << endl;
    t.showSongList();
cout << "Remove More" << endl;
    t.removeSong(s5);
   result= t.removeSong(s3);
 
    cout << "Remove existing song case: "<< result<<endl;
    t.showSongList();
    cout <<"Memory available: " << t.getRemainingMemory() << endl;
    result = t.removeSong(s3);
    cout << "Remove nonexistant song case: "<< result<<endl;
    cout <<"Memory available: " << t.getRemainingMemory() << endl;
   
    

    cout << "Shuffle the list" << endl;
    t.shuffle();
    t.showSongList();
    t.clearMemory();
    cout << "Memory Cleared" <<endl;
    t.showSongList();
}
