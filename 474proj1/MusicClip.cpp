#include<iostream>
#include<cstring>
#include"MusicClip.h"

int MusicClip::NEXT_ID = 0;

MusicClip::MusicClip()
{
  id = NEXT_ID++;
}
