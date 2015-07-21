#include "HeroineBullet.h"
#include "Heroine.h"
#include "Enemy.h"
#include "BackGround.h"

char **BulletInit(char **herobe){
	char **NewHeroBullet;

	NewHeroBullet = new char*;
	*NewHeroBullet = new char ;
	NewHeroBullet = herobe;
	**NewHeroBullet = '|';

	return NewHeroBullet;
}

void FreeHeroBullet(char **method){
	if(method != NULL){				
		delete *method;		
		delete method;	
	}
}

void HeroBulletMove(char **HeroBulletbe){

	while(1){
		back = HeroBulletbe;
		GroundShow;

		HeroBulletbe--;
		if(HeroBulletbe == 0)
			FreeHeroBullet(HeroBulletbe);
		else if(HeroBulletbe == Enemy)
			FreeHeroBullet(HeroBulletbe);
		//적 소멸자 호출
	}
}

