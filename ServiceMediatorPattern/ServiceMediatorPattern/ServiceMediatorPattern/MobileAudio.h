#pragma once

#include "Audio.h"

class MobileAudio : public Audio
{
public:
	~MobileAudio() final;

	void playSound(int soundID);
	void stopSound(int soundID);
	void stopAllSounds();

};