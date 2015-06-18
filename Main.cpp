#include "GameWindow.h"
#include "GameTexture.h"

GameTexture* image1;
GameTexture* image2;
GameTexture* image3;
GameTexture* image4;
GameTexture* image5;
GameTexture* image6;
GameTexture* image7;
GameTexture* image8;
GameWindow* bis;


void Start()
{
	image1 = new GameTexture();
	image1->SetRenderer(bis->GetRenderer());

	image2 = new GameTexture();
	image2->SetRenderer(bis->GetRenderer());

	image3 = new GameTexture();
	image3->SetRenderer(bis->GetRenderer());

	image4 = new GameTexture();
	image4->SetRenderer(bis->GetRenderer());

	image5 = new GameTexture();
	image5->SetRenderer(bis->GetRenderer());

	image6 = new GameTexture();
	image6->SetRenderer(bis->GetRenderer());

	image7 = new GameTexture();
	image7->SetRenderer(bis->GetRenderer());

	image8 = new GameTexture();
	image8->SetRenderer(bis->GetRenderer());

	if(!image1->Load("Picture/SPtest.png") || !image2->Load("Picture/SPtest.png") || !image3->Load("Picture/SPtest.png") || !image4->Load("Picture/SPtest.png") || !image5->Load("Picture/SPtest.png") || !image6->Load("Picture/SPtest.png") || !image7->Load("Picture/SPtest.png") || !image8->Load("Picture/SPtest.png"))
	{
		cerr << "Load source/SPtest.png Fail" << endl;
	}

	image1->SetClip(0, 0, 90, 140);
	image2->SetClip(90, 0, 90, 140);
	image3->SetClip(180, 0, 90, 140);
	image4->SetClip(270, 0, 90, 140);
	image5->SetClip(360, 0, 90, 140);
	image6->SetClip(450, 0, 90, 140);
	image7->SetClip(540, 0, 90, 140);
	image8->SetClip(630, 0, 90, 140);

	image2->SetX(150); 
	image3->SetX(300);
	image4->SetX(450);
	image5->SetX(0);
	image6->SetX(150);
	image7->SetX(300);
	image8->SetX(450);

	image5->SetY(150);
	image6->SetY(150);
	image7->SetY(150);
	image8->SetY(150);


}

void Update()
{
	image1->Render();
	image2->Render();
	image3->Render();
	image4->Render();
	image5->Render();
	image6->Render();
	image7->Render();
	image8->Render();

}

void Close()
{
	delete image1;
	delete image2;
	delete image3;
	delete image4;
	delete image5;
	delete image6;
	delete image7;
	delete image8;
	delete bis;
}

int main(int argc, char* argv[])
{
	bis = new GameWindow();
	if(!bis->CreateWindow("Sample Game", 800, 600))
	{
		cerr << "Can't Create GameWindow" << endl;
	}else{
		bis->Run((void*)&Start, (void*)Update);
	}

	Close();

	return 0;
}