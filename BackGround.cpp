#include "BackGround.h"
#include "Enemy.h"
#include "EnemyBullet.h"
#include "Heroine.h"
#include "HeroineBullet.h"

void GroundInit(char **back, int r, int c){
	for(int i = 0; i < r; i++)
		for(int j= 0; j < c; j++)
			back[i][j] = ' ';
}

void GroundShow(){
	for(int i = 0; i < height; i++){
		for(int j = 0; j < width; j++)
			cout << back[i][j];
		cout << endl;
	}
}

void GroundSet(char **back, int UserHit){

	HeroMove(Hero, UserHit);
	
	back = Hero;
//	back = HeroBullet; 필요 없음
	back = Enemy;
	back = EnemyBullet;
}
