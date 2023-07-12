// Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "raylib.h"
#include "raymath.h"


int main(int argc, char** argv)
{
	const int screenWidth = 800;
	const int screenHeight = 450;

	InitWindow(screenWidth, screenHeight, "raylib [core] example - keyboard input");

	Vector2 ballPosition = { (float)screenWidth / 2, (float)screenHeight / 2 };


	SetTargetFPS(60);       
	
	// Set our game to run at 60 frames-per-second
	//--------------------------------------------------------------------------------------

	// Main game loop
	while (!WindowShouldClose())    // Detect window close button or ESC key
	{
		// Update
		//----------------------------------------------------------------------------------
		if (IsKeyDown(KEY_RIGHT)) ballPosition.x += 2.0f;
		if (IsKeyDown(KEY_LEFT)) ballPosition.x -= 2.0f;
		if (IsKeyDown(KEY_UP)) ballPosition.y -= 2.0f;
		if (IsKeyDown(KEY_DOWN)) ballPosition.y += 2.0f;

		if (IsKeyDown(KEY_ESCAPE))
		{
			
			//CloseWindow();
		}
		DrawText("This is Mine", 10, 10, 20, DARKGRAY);
		//----------------------------------------------------------------------------------

		// Draw
		//----------------------------------------------------------------------------------
		BeginDrawing();
		
		ClearBackground(RAYWHITE);

		DrawText("move the ball with arrow keys", 10, 10, 20, DARKGRAY);

		DrawCircleV(ballPosition, 50, MAROON);
		Clamp(2.f, 0.f, 5.f);

		EndDrawing();
		//----------------------------------------------------------------------------------
	}

	// De-Initialization
	//--------------------------------------------------------------------------------------
	      // Close window and OpenGL context
	//--------------------------------------------------------------------------------------

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
