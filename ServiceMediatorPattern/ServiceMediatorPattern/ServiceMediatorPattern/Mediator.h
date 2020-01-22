#pragma once

#include "Audio.h"
#include "NullAudio.h"

#define NULL_MEDIATOR_SET


//basic Mediator
class Mediator
{
public:
	static Audio* getAudio() { return service_; }
	static void provide(Audio* service) { service_ = service; }

private:
	static Audio* service_;
};


//NULL Mediator
class NullMediator
{
public:
	static void initialize() {
		service_ = &nullService;
	}
	static Audio& getAudio() { return *service_; }
	static void provide(Audio* service);

private:
	static Audio* service_;
	static NullAudio nullService;
};
