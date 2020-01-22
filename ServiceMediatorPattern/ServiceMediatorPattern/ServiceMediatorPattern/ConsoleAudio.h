#pragma once
#include "Audio.h"

class ConsoleAudio : public Audio
{
public:
	~ConsoleAudio()final;
	virtual void playSound(int soundID);
	virtual void stopSound(int soundID);
	virtual void stopAllSounds();
};
