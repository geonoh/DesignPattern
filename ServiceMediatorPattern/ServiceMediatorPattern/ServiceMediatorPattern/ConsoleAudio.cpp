#include "ConsoleAudio.h"
#include <iostream>

using namespace std;

ConsoleAudio::~ConsoleAudio()
{

}


void ConsoleAudio::playSound(int soundID)
{
	cout << "콘솔의 오디오 api를 사용해 사운드를 출력\n";
}

void ConsoleAudio::stopSound(int soundID)
{
	cout << "콘솔의 오디오 api를 사용해 사운드를 중지\n";
}

void ConsoleAudio::stopAllSounds()
{
	cout << "콘솔의 오디오 api를 이용해 모든 사운드를 중지\n";
}

