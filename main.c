#include "headers/raylib.h"

#define dragSpeed 1

void dragCam(Vector2 origin, Camera camera)
{
  camera.position = (Vector3) { 
    origin.x - GetMousePosition().x,
    origin.y - GetMousePosition().y,
    camera.position.z
  };
}

int main(void)
{
  InitWindow(800, 600, "Initial Window");
  SetTargetFPS(60);

  Camera camera = { 0 };
  camera.position = (Vector3){ 0.0f, 30.0f, 10.0f};
  camera.target =(Vector3){ 0.0f, 0.0f, 0.0f };
  camera.up = (Vector3){ 0.0f, 1.0f, 0.0f };
  camera.fovy = 45.0f;
  camera.projection = CAMERA_PERSPECTIVE;

  Vector3 pos = { -2.0f, 2.0f, 0.0f };
  while (!WindowShouldClose())
  {

    // Controls
    if (IsKeyDown(KEY_D) && pos.x <= 10)    pos.x += 1.0f;
    if (IsKeyDown(KEY_A) && pos.x >= -10)    pos.x -= 1.0f;
    if (IsKeyDown(KEY_W) && pos.z >= -10)      pos.z -= 1.0f;
    if (IsKeyDown(KEY_S) && pos.z <= 10)     pos.z += 1.0f;

    if (IsKeyDown(KEY_RIGHT)) 
    {
      camera.position.x += 1.0f;
      camera.target.x += 1.0f;
    }
    if (IsKeyDown(KEY_LEFT)) 
    {
      camera.position.x -= 1.0f;
      camera.target.x -= 1.0f;
    }      
    if (IsKeyDown(KEY_UP))
    {
      camera.position.z -= 1.0f;
      camera.target.z -= 1.0f;
    }
    if (IsKeyDown(KEY_DOWN))
    {
      camera.position.z += 1.0f;
      camera.target.z += 1.0f;
    }

    //
    BeginDrawing();

      ClearBackground(BLACK);

      BeginMode3D(camera);

        DrawCube(pos, 2.0f, 4.0f, 2.0f, WHITE);
        DrawPlane((Vector3){ 0, 0, 0, }, (Vector2) { 10.0f, 10.0f }, RED);
        DrawGrid(100, 1.0f);

      EndMode3D();

      DrawFPS(10, 10);
    
    EndDrawing();
  }
  CloseWindow();
}
