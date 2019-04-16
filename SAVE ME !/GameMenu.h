#define _GAMEMENU_H
#ifdef _GAMEMENU_H

int Nmode=1,Hmode=1,Imode=1;


/*void change()
		{
			int deepjol = iLoadImage("images\\deepjol.png");
			iShowImage(0, 0, 1300,797, deepjol);
		}*/
/*void GameShow(int x,int y)
	{
		
		if (mode==2)
		{
			int newGameScreen = iLoadImage("images\\Background.png");
			iShowImage(0, 0, 1300,797, newGameScreen);
			int x = iLoadImage("images\\h1.png");
			iShowImage(950, 60, 90,120, x);
			int y = iLoadImage("images\\h2.png");
			iShowImage(140, 380, 50,60, y);
			int n = iLoadImage("images\\e1.png");
			iShowImage(850, 60, 90,120, n);
			int m = iLoadImage("images\\e2.png");
			iShowImage(70, 350, 70,90, m);

		}
}*/

void newGame(int x, int y){
	//FILE *fp = fopen("animal.txt","r");
	if((x >= 500 && x <=750) && (y >= 450 && y <= 540)){

		
       Nmode=2;
		
		
		}
	}

void instruction(int x, int y){
	if((x >= 1 && x <=50) && (y >= 1 && y <= 50)){
		Imode=2;
	}
}
void highScore(int x, int y){
	if((x >= 500 && x <=750) && (y >= 300 && y <= 390)){
		Hmode=2;
      	}
}
void quitGame(int x, int y){
	if((x >= 1250 && x <=1300) && (y >= 1 && y <= 50)){
		exit(0);
	}
}

void work(int x,int y)
{
	if((x>=30 && x<=130) && (y>=30 && y<=100) )
	{
		Nmode=1;
		Hmode=1;
		Imode=1;
	}
}
void Menu(int x, int y)
{  
	newGame(x, y);
	highScore(x, y);
	instruction(x, y);
	quitGame(x, y);
	work(x,y);
}

#endif