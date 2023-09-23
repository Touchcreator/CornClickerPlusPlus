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

        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
        {
            Rectangle cornRect = {
                (SCREENWIDTH-cornSprite.width)/2,
                (SCREENHEIGHT-cornSprite.height)/2,
                cornSprite.width,
                cornSprite.height
            };
            if (CheckCollisionPointRec(GetMousePosition(), cornRect))
            {
                AddCorn(GetMulti());
            }
        }

        BeginDrawing();

            ClearBackground(DARKGRAY);

            DrawTexture(cornSprite,(SCREENWIDTH-cornSprite.width)/2,(SCREENHEIGHT-cornSprite.height)/2,WHITE);
            DrawText(TextFormat("Corn: %i", GetCorn()), 10, 10, 40, RAYWHITE);
            DrawText(TextFormat("Multiplier: %i", GetMulti()), 10, 60, 15, RAYWHITE);

        EndDrawing();
    }

    CloseWindow();

}