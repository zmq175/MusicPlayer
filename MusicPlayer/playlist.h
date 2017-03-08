#pragma once
#include "QStringList"
#include "vector"
#include "track.h"


class Playlist
{
public:
	Playlist();

	void add(QStringList files);

	void remove(int index);

	void save();

	QStringList getTracksNameList();

	std::vector<Track> tracks;

private:

};

