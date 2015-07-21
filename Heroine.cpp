#include "Heroine.h"
#include "HeroineBullet.h"

char **Heroine(int r, int c){
	char **hero;
	hero = new char* [r];		
	hero[r] = new char [c];	
	hero[r][c] = '+';
	return hero;		
}

void FreeHero(char **method){
	if(method != NULL){				
		delete *method;		
		delete method;	
	}
}

void HeroMove(char **herobe, int key){

	Hero = herobe;
	char **NowBullet;

	switch(key){
		case 72 : 
			Hero++;
			break;
		case 80 :
			Hero--;
			break;
		case 77 :
			*Hero++;
			break;
		case 75 :
			*Hero--;
			break;
		case 'a' :
			NowBullet = BulletInit(herobe);
			HeroBulletMove(NowBullet);
			break;
		default :
			break;
	}
}
