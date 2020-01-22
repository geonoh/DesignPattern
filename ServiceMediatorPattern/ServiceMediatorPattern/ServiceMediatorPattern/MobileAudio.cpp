#include "MobileAudio.h"
#include <iostream>

using namespace std;

MobileAudio::~MobileAudio()
{
}

void MobileAudio::playSound(int soundID)
{
	cout << "모바일 오디오 api를 사용해 사운드를 출력\n";
}

void MobileAudio::stopSound(int soundID)
{
	cout << "모바일 오디오 api를 사용해 사운드를 중지\n";
}

void MobileAudio::stopAllSounds()
{
	cout << "모바일 오디오 api를 사용해 모든 사운드를 중지\n";
}

