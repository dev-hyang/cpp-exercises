#ifndef MusicClipPtr_H
#define MusicClipPtr_H
#include"MusicClip.h"
class MusicClipPtr{
public:
  MusicClipPtr(int);
  ~MusicClipPtr();
  MusicClip* operator->() const;
  MusicClip& operator*() const;
protected:
  int id;
  MusicClip* musicClip;
  MusicClipPtr(const MusicClipPtr&);
  MusicClipPtr& operator=(const MusicClipPtr&);
  static MusicClipFile clipIndex("clipIndexData");
  static int CACHE_SIZE;
  static MusicClipCache cache(CACHE_SIZE);
};
#endif
