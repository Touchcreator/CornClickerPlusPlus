#include "raylib.h"
#include "defines.h"
#include "corn.h"
#include <stdio.h>

int main() 
{

    Texture2D cornSprite;

    InitWindow(SCREENWIDTH, SCREENHEIGHT, "CornClicker++");

    cornSprite = LoadTexture("resources/corn.png");

    SetTargetFPS(144);

    while (!WindowShouldClose())
    {
        BeginDrawing();

            ClearBackground(DARKGRAY);
            DrawTexture(cornSprite,(SCREENWIDTH-cornSprite.width)/2,(SCREENHEIGHT-cornSprite.height)/2,WHITE);

        EndDrawing();
    }

    CloseWindow();

}