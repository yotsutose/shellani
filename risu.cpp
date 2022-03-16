// #define _GLIBCXX_DEBUG
// #include <bits/stdc++.h>
#include <opencv2/opencv.hpp>
//#include <atcoder/all>\

void solve4ts()
{
  
  cv::Mat img,dst;

  img = cv::imread("risu.png"); // 512*512で32*32しか持ってない　つまり16pixelごと
  // dst = cv::Mat(img, cv::Rect(130,0,200,140));
  int step = img.step;
  // printf("  %d %zu %d",step, img.elemSize(),img.channels());
  for(int i=0;i<512;i+=16){
    for(int j=0;j<512;j+=16){
      int B=img.data[(i+8)*img.step + (j+8)*img.elemSize() + 0];
      if(B<=150) printf("\e[48;5;%dm  ",200);
      else printf("\e[0m  ");
      cv::rectangle(img, cv::Point(i,j), cv::Point(i+16,j+16), cv::Scalar(255,i/2,j/2), 1);
    }
    printf("\e[0m\n");
  }
  
  // cv::imshow("input", img);
  // cv::waitKey( 5  *1000);
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