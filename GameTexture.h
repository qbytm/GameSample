#ifndef GAMETEXTURE_INCLUDE_H
#define GAMETEXTURE_INCLUDE_H

#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include <string>

using namespace std;

class GameTexture
{
public:
	GameTexture();
	~GameTexture();

	void SetRenderer(SDL_Renderer* renderer);
	bool Load(string paht);

	void SetX(int value);
	void SetY(int value);
	void SetWidth(int value);
	void SetHeight(int value);
	void SetCenter(int x, int y);
	void SetRotate(int angle);

	int GetX();
	int GetY();
	int GetWidth();
	int GetHeight();

	void Render();
private:
	SDL_Renderer* renderer;
	SDL_Texture* tex;
	int x,y,width,height;
	SDL_Point center;
	SDL_RendererFlip flip;
	SDL_Rect clip;
	double rotation;
};

#endif