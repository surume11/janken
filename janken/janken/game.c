#include "common.h"
#include <stdlib.h>
#pragma warning(disable:4996) 
#define gu 1
#define choki 2
#define pa 3

void hand_view(int);
/******************************
 *�y6�z�Q�[�����
 *�E�O�[�E���傫�E�p�[�𐔎��œ��͂�����
 *�E�������g���ď��s�����߂�
 *�E���ʂ��L�^����
 *���Q�[���J�n��ʂ�
 ******************************/
void janken(void) {

	int player_hand = gu;
	int cpu_hand = gu;
	printf("�o�����I��ł�������\n");
	printf("1:�O�[\t2:�`���L\t3:�p�[");

	scanf("%d", &player_hand);
	cpu_hand = rand() % 3 + 1;

	printf("�������̎�F");
	hand_view(player_hand);
	printf("\n����̎�F");
	hand_view(cpu_hand);

	if (player_hand == cpu_hand) {
		//������
		printf("�������ŁE�E�E");
		janken();
	}
	else if (
		(player_hand == gu && cpu_hand == choki)||
		(player_hand == choki && cpu_hand == pa)||
		(player_hand == pa && cpu_hand == gu) ){
		printf("�����I�I�I");
  	}
	else if  (
		(player_hand == gu && cpu_hand == pa) ||
		(player_hand == choki && cpu_hand == gu) ||
		(player_hand == pa && cpu_hand == choki)){
		printf("����������");
	}
	
	game_start();
}

void hand_view(int hand) {
	if (hand == gu) {
		printf("�O�[");
	}
	else if (hand == choki) {
		printf("�`���L");
	}
	else if (hand == pa) {
		printf("�p�[");
	}

}