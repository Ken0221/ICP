#include<stdio.h>

void OutputSpace (int amount){
  for(int i = 0; i < amount; i++)
    printf(" ");
  return;
}

void OutputStar (int amount){
  for(int i = 0; i < amount; i++)
    printf("*");
  return;
}

void OutputPound (int amount);
 
void LeavesPart(int H){
  for(int StarA = 1, SpaceA = H - 1; StarA <= 2 * H - 1,
      SpaceA >= 0; StarA += 2, SpaceA--){
    OutputSpace(SpaceA);
    OutputStar(StarA);
    printf("\n");
  }
  return;
}

void TrunkPart (int H){
  if(0 < H - 2){
    for(int i = 0; i < H - 2; i++){
      for(int j = 0; j < H - 2; j++)
        printf(" ");
      printf("###\n");
    }
  }
  return;
}
 
void StarTree (int H){
  LeavesPart(H);
  TrunkPart(H);
  printf("\n");
  return;
}  
void DoubleST (int H){
  for(int i = 0; i < 2; i++)
    LeavesPart(H);
  TrunkPart(H);
  printf("\n");
  return;
}
void TripleST (int H){
  for(int i = 0; i < 3; i++)
    LeavesPart(H);
  TrunkPart(H);
  printf("\n");
  return;
}
void SpStarTree (int H){
  for(int i = 1; i <= H; i++){
    for(int StarA = 1, SpaceA = i - 1; StarA <= 2 * i - 1,
      SpaceA >= 0; StarA += 2, SpaceA--){
      for(int j = H - 1; j >= i; j--)
        printf(" ");
      OutputSpace(SpaceA);
      OutputStar(StarA);
      printf("\n");
    }
  }
  TrunkPart(H);
  printf("\n");
  return;
}
void NotATree (int H){
  for(int StarA = 1, SpaceA = H - 1; StarA <= 2 * H - 1,
      SpaceA >= 0; StarA += 2, SpaceA--){
    for(int i = 0; i < SpaceA; i++)
      printf(" ");
    for(int i = 0; i < StarA; i++)
      printf("#");
    printf("\n");
  }
  if(0 < H - 2){
    for(int i = 0; i < H - 2; i++){
      for(int j = 0; j < H - 2; j++)
        printf(" ");
      printf("***\n");
    }
  }
  printf("\n");
  return;
}

int main(){
  int n;
  int h;
  while(scanf("%d", &n) != EOF){
    scanf("%d", &h);
    switch(n){
      case 0:
        StarTree(h);
        break;
      case 1:
        DoubleST(h);
        break;
      case 2:
        TripleST(h);
        break;
      case 3:
        SpStarTree(h);
        break;
      case 4:
        NotATree(h);
        break;
    }
  }
  return 0;
}
