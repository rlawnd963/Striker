#include <conio.h>
#include <Windows.h>

#include "Enemy.h"
#include "EnemyBullet.h"
#include "Heroine.h"
#include "HeroineBullet.h"
#include "BackGround.h"


void mian(){
	//화면 초기화
	GroundInit(back, height, width);

	//주인공 초기화
	**Hero = **Heroine(49, 15);

	while(1)
	{
		system("cls");
		GroundShow();	//화면 출력

		if(_kbhit())
			UserHit = _getch();	//입력 받음

		GroundSet(back, UserHit);

	}

	Sleep(100);			//속도 100을 늦춰줌
}
