#include "raymob.h" // This header can replace 'raylib.h' and includes additional functions related to Android.

Texture texture;
int main(void)
{
    InitWindow(0, 0, "raylib [core] example - basic window");

    texture = LoadTexture("sprites/test.png");
    SetTargetFPS(60);
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        BeginDrawing();
        ClearBackground(BLACK);
        if (texture.id != 0)
        {
            DrawTexture(texture, 0, 0, WHITE);
            DrawText("texture draw called", 100, 60, 20, RED);
        }
        else
        {
            DrawText("texture load failed", 100, 100, 20, RED);
        }
        EndDrawing();
    }
    CloseWindow();        // Close window and OpenGL context
    return 0;
}