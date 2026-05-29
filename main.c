#include "raylib/raylib.h"

int main()
{
    const int width = 800;
    const int height = 600;

    SetConfigFlags(FLAG_WINDOW_RESIZABLE);

    InitWindow(width, height, "Hello, Window!");

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLUE);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}