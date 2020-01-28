#include "Framework.h"
#ifdef CONSOLE_VERSION
#include "ConsoleAudio.h"
#endif

#ifdef MOBILE_VERSION
#include "MobileAudio.h"
#endif


void Framework::initialize()
{
#ifdef CONSOLE_VERSION
	ConsoleAudio* audio = new ConsoleAudio();
	
#endif

#ifdef MOBILE_VERSION
	MobileAudio* audio = new MobileAudio();
	
#endif

#ifdef NULL_MEDIATOR_SET

	// 단 이렇게 이니셜라이즈를 해주면 위에 모바일오디오를 또 사용하게 된다.
	//NullMediator::initialize();	// 본래의 의도가 어떤건지 궁금스

	NullMediator::provide(audio);
#else 
	Mediator::provide(audio);
#endif
}

void Framework::update()
{

}

void Framework::draw()
{

}
