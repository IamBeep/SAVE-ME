#define _BACKGROUND_H
#ifdef _BACKGROUND_H

void showDisplay()
{
	int image1 = iLoadImage("images\\sky.jpg");
	iShowImage(0, 0, 1300,797, image1);
}
void showNewGame()
{
	int image4 = iLoadImage("images\\ButtonNewGame.png");
	iShowImage(500, 450, 250, 90, image4);
}
void showHighScore()
{
	int image3 = iLoadImage("images\\ButtonHighScores.png");
	iShowImage(500, 300, 250, 90,image3);
}
void showExit()
{
	int image6 = iLoadImage("images\\quit.png");
	iShowImage(1250, 0, 50, 50,image6 );
}
void showInstruction()
{
	int image5= iLoadImage("images\\instruction.png");
	iShowImage(1, 1, 50, 50,image5);
}
/*void nameInput()
{


}*/
void displayFunctions(){

	showDisplay();
	showNewGame();
	showHighScore();
	showExit();
	showInstruction();
}


#endif