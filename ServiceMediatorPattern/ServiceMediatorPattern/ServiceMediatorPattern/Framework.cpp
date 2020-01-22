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
	NullMediator::provide(audio);
#else // 
	Mediator::provide(audio);
#endif
}

void Framework::update()
{

}

void Framework::draw()
{

}
