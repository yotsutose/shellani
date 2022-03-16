#include <opencv2/opencv.hpp>

void solve4ts()
{
  
  cv::Mat img;
  img = cv::imread("risu.png"); // 512*512だが32*32の情報しか持ってない　つまり16pixelごと
  int data[32][32];

  // img -> data
  for(int i=0;i<512;i+=16){
    for(int j=0;j<512;j+=16){
      data[i/16][j/16]=img.data[(i+8)*img.step + (j+8)*img.elemSize() + 0];
    }
  }

  // data -> console
  for(int i=0;i<32;i++){
    for(int j=0;j<32;j++){
      if(data[i][j]<150) printf("\e[48;5;%dm  ",200);
      else printf("\e[0m  ");
    }
    printf("\e[0m\n");
  }
  
  return;
}
//-----------------------------------------------------------------

signed main(){ 
  int repeat = 1;
  // cin >> repeat;
  while(repeat--) solve4ts();
}

/*

g++ -std=c++1z code.cpp

./a.out

python3 expander.py code.cpp

*/