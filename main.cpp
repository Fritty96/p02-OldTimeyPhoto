//Author Madison Phillips
#include <iostream>
#include<string>
#include<vector>
#include "bitmap.h"

using namespace std;

int main (){


Bitmap image;
vector<vector <Pixel> > bmp;
Pixel rgb;
bool valid;



do{
    string userbmp;
    cout << "Please enter bmp file name: ex- machupicchu.bmp " << endl;
    cin >> userbmp;


    image.open(userbmp);

    valid = image.isImage();
  
}
 
while (valid == false);


if(valid == true){ 

bmp= image.toPixelMatrix();
    

    for (int row = 0; row < bmp.size(); row++){
        for (int col = 0; col < bmp[row].size(); col++){

        rgb = bmp[row][col];
        int average = (rgb.red + rgb.blue + rgb.green)/3;
        rgb.red = average;
        rgb.green = average;
        rgb.blue = average;
        bmp[row][col] = rgb;

        }
    }
image.fromPixelMatrix(bmp);
image.save("oldtimey.bmp");
    
}


return 0;
}
