char* video_memory = (char*)0xB8000;

void print_char(char character, int row, int col, char color) {
    int index = (row * 80 + col) * 2;
    video_memory[index] = character;
    video_memory[index + 1] = color;
}

void screen_print(const char* message, int row, int col) {
    char color = 0x0F;
    int i = 0;

    while (message[i] != '\0') {
        print_char(message[i], row, col, color);
        col++;
        i++;
    }
}
void clear_screen() {
    char color = 0x0F;
    for (int row = 0; row < 25; row++) {
        for (int col = 0; col < 80; col++) {
            int index = (row * 80 + col) * 2;
            video_memory[index] = ' ';
            video_memory[index + 1] = color;
        }
    }
}

void kmain() {
    clear_screen();
    screen_print("Hello World!!!", 0, 0);
    while(1) {}
}
