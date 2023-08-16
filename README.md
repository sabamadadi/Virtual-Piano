# Virtual Piano

The Virtual Piano is a simple program that allows you to play piano keys using your computer keyboard. Each key on the keyboard corresponds to a specific piano key, and pressing the corresponding key will play the sound of that piano key.

## Instructions

1. Run the program.

1. Press the corresponding keys on your keyboard to play the piano keys.

1. The keys and their corresponding piano notes are as follows:

   | Key | Piano Note |
   | --- | ---------- |
   | A   | C4         |
   | W   | C#4        |
   | S   | D4         |
   | E   | D#4        |
   | D   | E4         |
   | F   | F4         |
   | T   | F#4        |
   | G   | G4         |
   | Y   | G#4        |
   | H   | A4         |
   | U   | A#4        |
   | J   | B4         |

1. The piano keys will play sound for 300 milliseconds each time a key is pressed.

1. Press the `ESC` key to exit the program.

## Requirements

- Windows operating system (Windows API is used for sound playback)
- C++ compiler

## Notes

- The program uses the `Beep` function from the Windows API to generate sound. If you are using a different operating system, you may need to modify the sound playback mechanism.
- You can customize the program by adding more piano keys or changing the frequencies and durations of the sounds.

## Acknowledgments

- The program was inspired by the need for a simple virtual piano for learning and experimentation purposes.
