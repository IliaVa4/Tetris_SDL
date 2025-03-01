#pragma once

class Game
{
private:
	SDL_Window* window;
	SDL_Renderer* renderer;
	SDL_Event event;

public:
	Game();
	~Game();

	void CreateWindow(const char* title, int width, int height, bool fullscreen);
	void Run();
	void Terminate();
};