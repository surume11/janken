#include "common.h"
#pragma warning(disable:4996) 

/******************************
 *【1】スタート画面
 *「0」新規ユーザー追加	→新規ユーザー追加画面
 *「1」既存ユーザでログイン　→ユーザー認証
 ******************************/
main() {
	int input = 0;
	printf("0:　新規ユーザー登録");
	printf("1:　ログイン");

	scanf("%d", &input);

	if (input == 0) {
		add_user();
	}
	else if (input == 1) {
		login();
	}

	
	
}

/******************************
 *【4】ゲーム開始画面
 *「0」ゲーム開始→ゲーム画面
 *「1」パスワードの変更
 *・記録の表示
 ******************************/
void game_start(void) {
	int input = 0;
	printf("0:　ゲーム開始");
	printf("1:　パスワード変更");
	scanf("%d", &input);

	if (input == 0) {
		janken();
	}
	else if (input == 1) {
		change_pass();
	}


}
