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
int p=0;
p=p+1;
 text txt=create_text();
load(txt, (char*)"first.txt");
c_to_pos(txt,1,1);
p=currentline(txt);
ASSERT_EQ(p,1);
}
    
TEST(third,r3)
{
char*arg=(char*)"second.txt";
    int p=0;
    p=p+1;
    text txt=create_text();
    load(txt, arg);
    c_to_pos(txt,1,0);
    p=currentline(txt);
    ASSERT_EQ(p,1);

}

TEST(fourth,r4)
{

    char*arg=(char*)"4.txt";
        int p=0;
        p=p+1;
        text txt=create_text();
        load(txt, arg);
        c_to_pos(txt,6,6);
        p=currentline(txt);
        ASSERT_EQ(p,3);
}












    
  #endif // FIBONACHI_H



