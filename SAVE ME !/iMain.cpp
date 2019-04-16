#include "iGraphics.h"
#include "bitmap_loader.h"
#include "Background.h"
#include "GameMenu.h"
#include "fileOperations.h"



//#include "string.h"

int x = 0, y = 0, flag;
char hs[20],score_str[2],n_score[3];
//strcpy(n_score,"0");
int score=0;
int lScore=0;
int loadScore;
//animal AnimalList[6];
//listAllWords(AnimalList);

char userInput[10];
int change=0;
int go=0;
void fileSave()
{
FILE *fp = fopen("highscore.txt","a");

fprintf(fp,"%d\n",score);
fclose(fp);
}

void fileContinue()
{

	FILE *fp = fopen("highscore.txt","r");
	while(fscanf(fp,"%d \n",&loadScore)!=EOF);
	{
		printf("%d\n",loadScore);
		//iText use korish pore
	}
	fclose(fp);
}
void iDraw()
{

	iClear();
	

	if(Nmode==1)
	
	{
		displayFunctions();
	Menu(x,y);
	}

	if (Nmode==2)

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
			
			//listAllWords();


			if(change==0)
			{
			
				int bearq = iLoadImage("images\\Bearcloud.png");
			iShowImage(600, 600, 300,150, bearq);
			int bear = iLoadImage("images\\Bear.png");
			iShowImage(400, 350, 700,300, bear);
			}
			//iText(200,100,score);
			

			
			if(change==1)
			{
				
				
			    int tigerq = iLoadImage("images\\Tigercloud.png");
			iShowImage(600, 600, 300,150, tigerq);
				int tiger = iLoadImage("images\\Tiger.png");
			    iShowImage(400, 350, 700,300, tiger);
			}
			

			if(change==2)
			{
				int zebraq = iLoadImage("images\\Zebracloud.png");
			iShowImage(600, 600, 300,150, zebraq);
				int zebra = iLoadImage("images\\Zebra.png");
			    iShowImage(400, 350, 700,300, zebra);
			}

			if(change==3)
			{
				int lionq = iLoadImage("images\\Lioncloud.png");
			iShowImage(600, 600, 300,150, lionq);
				int lion = iLoadImage("images\\Lion.png");
			    iShowImage(400, 350, 700,300, lion);
			}

			if(change==4)
			{
				int elephantq = iLoadImage("images\\Elephantcloud.png");
			iShowImage(600, 600, 300,150, elephantq);
				int elphant = iLoadImage("images\\Elephant.png");
			    iShowImage(400, 350, 700,300,elphant);
			}
			if(go==2)
			{
				int gameover = iLoadImage("images\\youlose.jpg");
			    iShowImage(0, 0, 1300,797, gameover);
				
			}
			if(go<2 && change==4)

			{
				
				int gameover1 = iLoadImage("images\\youwon.jpg");
			    iShowImage(0, 0, 1300,797, gameover1);

			}

			
			
			


			
			/*if(flag)
			{
				iSetColor(255,0,0);
				iText(100,200,score_str);
			}*/
	}

	if(Imode==2)
	{
		int instruction = iLoadImage("images\\Instructions1.png");
		iShowImage(0, 0, 1300,797, instruction);
		int b = iLoadImage("images\\bButton1.png");
			iShowImage(30, 30, 100,70, b);
		

	}
	if(Hmode==2)
	{
		int high = iLoadImage("images\\FinalHighscore.jpg");
		iShowImage(0, 0, 1300,797, high);
		
       

        //iShowImage(30,680,250,100,bButton);
	}
	
	

	if(flag==1)
			{
				iSetColor(255,255,0);
				iText(100,200,"You got it mate!!!",GLUT_BITMAP_TIMES_ROMAN_24);
			}
	if(flag==2)
			{
				iSetColor(255,255,0);
				iText(100,200,"Alas!you have done a great mistake!!",GLUT_BITMAP_TIMES_ROMAN_24);
			}

	
	
}

void iMouseMove(int mx, int my)
{
	//x=mx;
	//y=my;
	//printf("x= %d,y=%d\n",x,y);
	;
}
void iPassiveMouse(int mx, int my)
{
		;
}
void iMouse(int button, int state, int mx, int my)
{
	
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN){
		x = mx;
		y = my;
		//600, 350, 700,300
		if(x>=496 && x<=736 && y>=418 && y<=456 && Nmode==2 && change==0 )
		{
			score+=10;
			fileSave();
			fileContinue();
			//score_str[0]=score;
			//score_str[1]='\0';
			flag = 1;
			change++;
	}
		
		 if(x>=493 && x<=732 && y>=475 && y<=514 && Nmode==2 && change==1)
		{
			
			score+=10;
			fileSave();
			fileContinue();
			//score_str[0]=score;
			//score_str[1]='\0';
			flag = 1;
			change++;
			
			
	}
		
		if(x>=496 && x<=736 && y>=418 && y<=456  && Nmode==2 && change==2)
		{
			score+=10;
			fileSave();
			fileContinue();
			//score_str[0]=score;
			//score_str[1]='\0';
			flag = 1;
			change++;
	}
		if(x>=782 && x<=1026 && y>=481 && y<=516 && Nmode==2 && change==3)
		{
			score+=10;
			fileSave();
			fileContinue();
			//score_str[0]=score;
			//score_str[1]='\0';
			flag = 1;
			change++;
	}
		if(x>=828 && x<=1024 && y>=417 && y<=460 && Nmode==2 && change==4)
		{
			score+=10;
			fileSave();
			fileContinue();
			//score_str[0]=score;
			//score_str[1]='\0';
			flag = 1;
			change++;
	}
		 if(x>=493 && x<=732 && y>=475 && y<=514   && Nmode==2 && change==0)
		{
			score-=5;
			fileSave();
			fileContinue();
			//score_str[0]=score;
			//score_str[1]='\0';
			flag = 2;
			change++;
			go++;
	}
		 if(x>=782 && x<=1026 && y>=481 && y<=516 && Nmode==2 && change==0)
		{
			score-=5;
			fileSave();
			fileContinue();
			//score_str[0]=score;
			//score_str[1]='\0';
			flag = 2;
			change++;
			go++;
	}
		 if(x>=828 && x<=1024 && y>=417 && y<=460  && Nmode==2 && change==0)
		{
			score-=5;
			fileSave();
			fileContinue();
			//score_str[0]=score;
			//score_str[1]='\0';
			flag = 2;
			change++;
			go++;
	}
		 if(x>=782 && x<=1026 && y>=481 && y<=516  && Nmode==2 && change==1)
		{
			score-=5;
			fileSave();
			fileContinue();
			//score_str[0]=score;
			//score_str[1]='\0';
			flag = 2;
			change++;
			go++;
	}
		 if(x>=496 && x<=736 && y>=418 && y<=456 && Nmode==2 && change==1)
		{
			score-=5;
			fileSave();
			fileContinue();
			//score_str[0]=score;
			//score_str[1]='\0';
			flag = 2;
			change++;
			go++;
	}
		 if(x>=828 && x<=1024 && y>=417 && y<=460  && Nmode==2 && change==1)
		{
			score-=5;
			fileSave();
			fileContinue();
			//score_str[0]=score;
			//score_str[1]='\0';
			flag = 2;
			change++;
			go++;
	}
		 if(x>=493 && x<=732 && y>=475 && y<=514  && Nmode==2 && change==2)
		{
			score-=5;
			fileSave();
			fileContinue();
			//score_str[0]=score;
			//score_str[1]='\0';
			flag = 2;
			change++;
			go++;
	}
		 if(x>=782 && x<=1026 && y>=481 && y<=516   && Nmode==2 && change==2)
		{
			score-=5;
			fileSave();
			fileContinue();
			//score_str[0]=score;
			//score_str[1]='\0';
			flag = 2;
			change++;
			go++;
	}
		 if(x>=828 && x<=1024 && y>=417 && y<=460  && Nmode==2 && change==2)
		{
			score+=10;
			fileSave();
			fileContinue();
			//score_str[0]=score;
			//score_str[1]='\0';
			flag = 2;
			change++;
			go++;
	}
		 if(x>=493 && x<=732 && y>=475 && y<=514   && Nmode==2 && change==3)
		{
			score-=5;
			fileSave();
			fileContinue();
			//score_str[0]=score;
			//score_str[1]='\0';
			flag = 2;
			change++;
			go++;
	}
		 if(x>=496 && x<=736 && y>=418 && y<=456 && Nmode==2 && change==3)
		{
			score-=5;
			fileSave();
			fileContinue();
			//score_str[0]=score;
			//score_str[1]='\0';
			flag = 2;
			change++;
			go++;
	}
		 if(x>=828 && x<=1024 && y>=417 && y<=460  && Nmode==2 && change==3)
		{
			score-=5;
			fileSave();
			fileContinue();
			//score_str[0]=score;
			//score_str[1]='\0';
			flag = 2;
			change++;
			go++;
	}
		if(x>=493 && x<=732 && y>=475 && y<=514   && Nmode==2 && change==4)
		{
			score-=5;
			fileSave();
			fileContinue();
			//score_str[0]=score;
			//score_str[1]='\0';
			flag = 2;
			change++;
			go++;
	}
		 if(x>=782 && x<=1026 && y>=481 && y<=516   && Nmode==2 && change==4)
		{
			score-=5;
			fileSave();
			fileContinue();
			//score_str[0]=score;
			//score_str[1]='\0';
			flag = 2;
			change++;
			go++;
	}
		 if(x>=496 && x<=736 && y>=418 && y<=456 && Nmode==2 && change==4)
		{
			score-=5;
			fileSave();
			fileContinue();
			//score_str[0]=score;
			//score_str[1]='\0';
			flag = 2;
			change++;
			go++;
	}

		if(x>=0 && x<=1300 && y>=0 && y<=797 && Nmode==2 && go==2)
		{
			exit(0);
		}

	
   


		
		
}
}
void iKeyboard(unsigned char key)
{
	if(key >= 'a' && key <= 'z'){
		//MyWords();
		
	}
}
void iSpecialKeyboard(unsigned char key)
{

	if (key == GLUT_KEY_END)
	{
		exit(0);
	}
}
int main()
{
	
	iInitialize(1300, 797, "Demo");
	//LoadImage();	
	iStart(); 
	return 0;
}