#include <iostream>
#include <Windows.h> // for Windows platform only

// Function to play a piano key sound
void PlaySound(int frequency, int duration) {
    if (frequency == 0) {
        Sleep(duration);
    } else {
        Beep(frequency, duration);
    }
}

int main() {
    // Define piano key frequencies
    const int numKeys = 12;
    const int frequencies[numKeys] = {
        261, 277, 293, 311, 329, 349, 369, 392, 415, 440, 466, 493
    };  // C4, C#4, D4, D#4, E4, F4, F#4, G4, G#4, A4, A#4, B4

    // Define piano key labels
    const char keyLabels[numKeys] = {
        'A', 'W', 'S', 'E', 'D', 'F', 'T', 'G', 'Y', 'H', 'U', 'J'
    };

    // Print piano key labels
    std::cout << "Virtual Piano\n";
    std::cout << "Press the corresponding keys to play the piano:\n";
    for (int i = 0; i < numKeys; ++i) {
        std::cout << keyLabels[i] << " ";
    }
    std::cout << "\n\n";

    // Play piano keys until program termination
    while (true) {
        if (GetAsyncKeyState(VK_ESCAPE)) {  // Exit program if ESC key is pressed
            break;
        }

        for (int i = 0; i < numKeys; ++i) {
            if (GetAsyncKeyState(keyLabels[i])) {
                PlaySound(frequencies[i], 300);  // Play sound for 300 milliseconds
            }
        }
    }

    return 0;
}
