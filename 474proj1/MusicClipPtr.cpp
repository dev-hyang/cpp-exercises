#include"MusicClipPtr.h"
//conv constructor
inline MusicClip* MusicClipPtr::MusicClipPtr(int id_)
  :id(id_),musicClip(NULL)
  {}

//overload operator->()
inline MusicClip* MusicClipPtr::operator->()
{
  if(musicClip == NULL)
  {
    musicClip = cache.loadFromFile(id,clipIndex,musicClip);
  };
  return musicClip;
}

//overload operator*()
inline MusicClip& MusicClipPtr::operator*()
{
  if(musicClip == NULL)
  {
    musicClip = cache.loadFromFile(id,clipIndex,musicClip);
  };
  return *musicClip;
}
