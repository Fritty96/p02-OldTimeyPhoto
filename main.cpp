#include <iostream>
#include<string>
#include<vector>
#include "bitmap.h"

using namespace std;

int main (){





Bitmap image;
vector<vector <Pixel> > bmp;
Pixel rgb;


image.open("machupicchu.bmp");
bmp= image.toPixelMatrix();


cout <<"machupicchu.bmp has loaded. It is " << bmp[0].size()
<< " pixels wide and " << bmp.size() <<" pixels tall."
<<endl;







/*
Program Decompisition

    Output Ask User for BMP Picture File
        Store File if valid 
        If not valid, tell user and reprompt


    Convert User File into Matrix
    
    Create Loop
        Checks RGB of each Pixel And finds average
        Change Value of RGB so each equals   
        Store New Value and move onto next pixel

    
    Save new updated bitmap




*/








return 0;
}
