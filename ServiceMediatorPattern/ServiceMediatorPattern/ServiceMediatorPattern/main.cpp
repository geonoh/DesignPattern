#include "Framework.h"
#include <iostream>


int main()
{
	Framework framework;

	framework.initialize();


	//playSound를 호출하는 쪽에서는 Audio라는 추상 인터페이스만 알뿐
	//ConsoleAudio라는 구체 클래스에 대해서는 전혀 모른다는 점이 핵심.

	//어떤 구체 클래스가 실제로 사용되는지는 서비스를 제공하는 초기화 
	//코드에서만 알 수 있다.
	Audio* audio = Mediator::getAudio();
	audio->playSound(VOLUME_LOUD);
}
