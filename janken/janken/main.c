#include "common.h"
#pragma warning(disable:4996) 

/******************************
 *�y1�z�X�^�[�g���
 *�u0�v�V�K���[�U�[�ǉ�	���V�K���[�U�[�ǉ����
 *�u1�v�������[�U�Ń��O�C���@�����[�U�[�F��
 ******************************/
main() {
	int input = 0;
	printf("0:�@�V�K���[�U�[�o�^");
	printf("1:�@���O�C��");

	scanf("%d", &input);

	if (input == 0) {
		add_user();
	}
	else if (input == 1) {
		login();
	}

	
	
}

/******************************
 *�y4�z�Q�[���J�n���
 *�u0�v�Q�[���J�n���Q�[�����
 *�u1�v�p�X���[�h�̕ύX
 *�E�L�^�̕\��
 ******************************/
void game_start(void) {
	int input = 0;
	printf("0:�@�Q�[���J�n");
	printf("1:�@�p�X���[�h�ύX");
	scanf("%d", &input);

	if (input == 0) {
		janken();
	}
	else if (input == 1) {
		change_pass();
	}


}
