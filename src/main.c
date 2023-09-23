#include "raylib.h"
#include "defines.h"

int main() 
{

    Texture2D cornSprite;

    InitWindow(SCREENWIDTH, SCREENHEIGHT, "CornClicker++");

    cornSprite = LoadTexture("resources/corn.png");

    SetTargetFPS(144);
    int corn = 0;

    while (!WindowShouldClose())
    {
        BeginDrawing();

            ClearBackground(DARKGRAY);
            DrawTexture(cornSprite,(SCREENWIDTH-cornSprite.width)/2,(SCREENHEIGHT-cornSprite.height)/2,WHITE);

        EndDrawing();
    }

    CloseWindow();

}