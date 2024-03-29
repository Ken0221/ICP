#include <stdio.h>

typedef struct puzzle {
    int tb[4];
    char pic[100];
} Puzzle;

int main()
{
    int n;
    scanf("%d", &n);
    Puzzle piece[10000] = {{{0}, ""}};
    int num_of_piece = 0;
    /*int counting = 0;
    while(scanf("%d", &piece[counting].tb[0]) != EOF){
        for(int j = 1; j < 4; j++){
            scanf("%d", &piece[counting].tb[j]);
        }
        getchar(); getchar(); //吃掉空白跟雙引
        for(int j = 0; j < n * n; j++){
            scanf("%c", &piece[counting].pic[j]);
        }
        getchar(); //吃掉雙引
        num_of_piece = counting + 1;
        counting++;
    }*/
    
    for(int i = 0; i < 10000 && scanf("%d", &piece[i].tb[0]) != EOF; i++){
        for(int j = 1; j < 4; j++){
            scanf("%d", &piece[i].tb[j]);
        }
        getchar(); getchar(); //吃掉空白跟雙引
        for(int j = 0; j < n * n; j++){
            scanf("%c", &piece[i].pic[j]);
        }
        getchar(); //吃掉雙引
        num_of_piece = i + 1;
    }
    int rot[10000] = {0};
    rot[0] = 1; //第一個旋轉是正確的
    int rot_valid = 0;
    while(rot_valid == 0){ //確認全部旋轉正確
        for(int i = 0; i < num_of_piece; i++){
            if(rot[i] == 0){
                rot_valid = 0;
            }
        }
        for(int i_A = 1; i_A < num_of_piece; i_A++){ //要轉的(從第二個開始轉)
            for(int j_A = 0; j_A < 4; j_A++){
                for(int i_B = 0; i_B < num_of_piece; i_B++){ // 比對對象
                    for(int j_B = 0; j_B < 4; j_B++){
                        if(rot[i_A] == 0 && rot[i_B] == 1){
                            int rot_check = 0;
                            for(int t_A = 0; t_A < 4 && rot_check == 0; t_A++){ // 有無對應tb
                                for(int t_B = 0; t_B < 4 && rot_check == 0; t_B++){
                                    if(piece[i_A].tb[t_A] + piece[i_B].tb[t_B] == 0 && rot_check == 0){ //找到對應tb
                                        int tb_A_place = t_A;
                                        int tb_B_place = t_B;
                                        while(!(tb_A_place % 2 == tb_B_place % 2 && tb_A_place != tb_B_place)){ //轉到正確方向
                                            for(int i = 0; i < 4; i++){
                                                int temp_tb = piece[i_A].tb[0];
                                                for(int i = 0; i < 4; i++){
                                                    if(i == 3){
                                                        piece[i_A].tb[i] = temp_tb;
                                                        tb_A_place = 0;
                                                    }
                                                    else{
                                                        piece[i_A].tb[i] = piece[i_A].tb[i + 1];
                                                        tb_A_place++;
                                                    }
                                                }
                                            }
                                            //圖形轉向，待改(先以ex的2 * 2做)
                                            for(int i = 0; i < n * n; i++){
                                                int temp_pic = piece[i_A].pic[0];
                                                for(int i = 0; i < n * n; i++){
                                                    if(i == n * n - 1){
                                                        piece[i_A].pic[i] = temp_pic;
                                                    }
                                                    else{
                                                        piece[i_A].pic[i] = piece[i_A].pic[i + 1];
                                                    }
                                                }
                                            }
                                        }
                                        rot_check = 1;
                                        rot[i_A] = 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    //try
    for(int i = 0; i < 9 ; i++){
        for(int j = 0; j < 4; j++){
            printf("%d ", piece[i].tb[j]);
        }
        printf(" '");
        for(int j = 0; j < n * n; j++){
            printf("%c", piece[i].pic[j]);
        }
        printf("'\n");
    }
    return 0;
}
