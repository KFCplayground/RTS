#include "headers/raylib.h"

int main(void)
{
  InitWindow(800, 600, "Initial Window");
  SetTargetFPS(60);

  while (!WindowShouldClose())
  {
    BeginDrawing();

    ClearBackground(RAYWHITE);
    DrawText("TEST WINDOW", 300, 400, 16, RED);

    EndDrawing();
  }

  CloseWindow();
}
