// miniblip play notes with interrupts - Not tested with led matrix
// For documentation see http://mbed.org/users/4180_1/notebook/using-a-speaker-for-audio-output/

#include "mbed.h"
#include "SongPlayer.h"

//Set up notes and durations for sample song to play
// A 0.0 duration note at end terminates song play
float note[18]= {1568.0,1396.9,1244.5,1244.5,1396.9,1568.0,1568.0,1568.0,1396.9,
                 1244.5,1396.9,1568.0,1396.9,1244.5,1174.7,1244.5,1244.5, 0.0
                };
float duration[18]= {0.48,0.24,0.72,0.48,0.24,0.48,0.24,0.24,0.24,
                     0.24,0.24,0.24,0.24,0.48,0.24,0.48,0.48, 0.0
                    };

int main()
{
    // Buzzer pin
    SongPlayer mySpeaker(P0_8);
    // Start song and return once playing starts
    mySpeaker.PlaySong(note,duration);
    // loops forever while song continues to play to end using interrupts
    while(1) {
        wait(.1);
    }
}

