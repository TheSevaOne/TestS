#ifndef FIBONACHI_H
#define FIBONACHI_H
#include <gtest/gtest.h>
#include <stdio.h>
extern "C" {
#include "text/text.h"
}
TEST (first, r1)
{

    text txt=create_text();
    ASSERT_EQ(currentline(txt), 1);

}

TEST(second,r2)
{
    char* filename=(char*) malloc(1024 * sizeof(char));
    sprintf(filename,"%s/first.txt",INPUTDIR);
int p=0;
p=p+1;
 text txt=create_text();
load(txt, filename);
c_to_pos(txt,1,1);
p=currentline(txt);
ASSERT_EQ(p,1);
}
    
TEST(third,r3)
{

    char* filename=(char*) malloc(1024 * sizeof(char));
    sprintf(filename,"%s/second.txt",INPUTDIR);



    int p=0;
    p=p+1;
    text txt=create_text();
    load(txt, filename);
    c_to_pos(txt,1,0);
    p=currentline(txt);
    ASSERT_EQ(p,1);

}

TEST(fourth,r4)
{

    char* filename=(char*) malloc(1024 * sizeof(char));
    sprintf(filename,"%s/4.txt",INPUTDIR);
        int p=0;
        p=p+1;
        text txt=create_text();
        load(txt, filename);
        c_to_pos(txt,6,6);
        p=currentline(txt);
        ASSERT_EQ(p,3);
}


TEST (rh,r1)
{
   char* filename=(char*) malloc(1024 * sizeof(char));
        sprintf(filename,"%s/stroka.txt",INPUTDIR);


 text txt =create_text();
          load(txt,filename);
                    rh(txt);



                        SUCCEED();


}








    
  #endif // FIBONACHI_H



