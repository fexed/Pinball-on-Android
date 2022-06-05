#ifndef SPACECADETPINBALLJNI_H
#define SPACECADETPINBALLJNI_H

#include <string>

class SpaceCadetPinballJNI {
public:
    static void show_error_dialog(std::string title, std::string message);

    static void notifyGameState(int state);

    static void setBallInPlunger(bool state);

    static void addHighScore(int score);

    static int getHighScore();

    static void displayText(const char* text);

    static void clearText();

    static void postScore(int score);

    enum GAMESTATE {
        RUNNING = 1,
        FINISHED = 2
    };
};

#endif // SPACECADETPINBALLJNI_H
