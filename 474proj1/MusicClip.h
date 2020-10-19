#ifndef MusicClip_H
#define MusicClip_H
#include <cstring>
#include "Genre.cpp"
class MusicClip{
private:
  static int NEXT_ID;
  String Artist;
  enum Genre genre;
  People people;
  Clip clip;
  Price price;

  int id;
  MusicClip();
  MusicClip(const MusicClip& musicClip);
  MusicClip();

public:
  printClipInfo();
};
#endif
