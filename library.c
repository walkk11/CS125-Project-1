#include <stdio.h>
#include <string.h>
#include "header.h"

#define ROWS 5
#define COLS 10

char *presentVerbs[ROWS][COLS] = {
    {"run", "jump", "swim", "dance", "sing", "laugh", "smile", "write", "draw", "read"},
    {"climb", "cook", "bake", "help", "play", "walk", "look", "talk", "listen", "build"},
    {"create", "watch", "move", "drive", "study", "learn", "type", "think", "dream", "call"},
    {"push", "pull", "carry", "fix", "throw", "catch", "ride", "paint", "plan", "open"},
    {"close", "shine", "wave", "travel", "sleep", "wake", "wish", "jog", "glow", "yell"}
};

char *pastVerbs[ROWS][COLS] = {
    {"ran", "jumped", "swam", "danced", "sang", "laughed", "smiled", "wrote", "drew", "read"},
    {"climbed", "cooked", "baked", "helped", "played", "walked", "looked", "talked", "listened", "built"},
    {"created", "watched", "moved", "drove", "studied", "learned", "typed", "thought", "dreamed", "called"},
    {"pushed", "pulled", "carried", "fixed", "threw", "caught", "rode", "painted", "planned", "opened"},
    {"closed", "shone", "waved", "traveled", "slept", "woke", "wished", "jogged", "glowed", "yelled"}
};

char *nouns[ROWS][COLS] = {
    {"dog", "cat", "bird", "fish", "car", "tree", "house", "book", "computer", "phone"},
    {"river", "mountain", "ocean", "city", "robot", "friend", "teacher", "student", "apple", "banana"},
    {"desk", "chair", "lamp", "window", "cloud", "storm", "flower", "garden", "shoe", "hat"},
    {"door", "road", "ship", "plane", "star", "moon", "sun", "island", "camera", "painting"},
    {"key", "pencil", "bed", "blanket", "cookie", "monster", "hero", "villain", "song", "dream"}
};

char *adjs[ROWS][COLS] = {
    {"happy", "sad", "angry", "tired", "excited", "brave", "funny", "clever", "silly", "kind"},
    {"lazy", "quick", "slow", "loud", "quiet", "bright", "dark", "strong", "weak", "tall"},
    {"short", "huge", "tiny", "new", "old", "cold", "hot", "warm", "cool", "friendly"},
    {"mean", "beautiful", "ugly", "crazy", "wild", "calm", "smart", "dumb", "rich", "poor"},
    {"curious", "sleepy", "shiny", "dusty", "colorful", "boring", "creative", "energetic", "grumpy", "magical"}
};

int checkVerbs() {

}

int checkNouns() {

}

int checkAdjs() {

}
