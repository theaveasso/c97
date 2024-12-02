#include <raylib.h>

int main() {
	InitWindow(640, 360, "c97");

	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(RAYWHITE);
		EndDrawing();
	}
	return 0; 
}