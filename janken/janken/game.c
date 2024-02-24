#include "common.h"
#include <stdlib.h>
#pragma warning(disable:4996) 
#define gu 1
#define choki 2
#define pa 3

void hand_view(int);
/******************************
 *【6】ゲーム画面
 *・グー・ちょき・パーを数字で入力させる
 *・乱数を使って勝敗を決める
 *・結果を記録する
 *→ゲーム開始画面へ
 ******************************/
void janken(void) {

	int player_hand = gu;
	int cpu_hand = gu;
	printf("出す手を選んでください\n");
	printf("1:グー\t2:チョキ\t3:パー");

	scanf("%d", &player_hand);
	cpu_hand = rand() % 3 + 1;

	printf("あたしの手：");
	hand_view(player_hand);
	printf("\n相手の手：");
	hand_view(cpu_hand);

	if (player_hand == cpu_hand) {
		//あいこ
		printf("あいこで・・・");
		janken();
	}
	else if (
		(player_hand == gu && cpu_hand == choki)||
		(player_hand == choki && cpu_hand == pa)||
		(player_hand == pa && cpu_hand == gu) ){
		printf("勝ち！！！");
  	}
	else if  (
		(player_hand == gu && cpu_hand == pa) ||
		(player_hand == choki && cpu_hand == gu) ||
		(player_hand == pa && cpu_hand == choki)){
		printf("負け↓↓↓");
	}
	
	game_start();
}

void hand_view(int hand) {
	if (hand == gu) {
		printf("グー");
	}
	else if (hand == choki) {
		printf("チョキ");
	}
	else if (hand == pa) {
		printf("パー");
	}

}