#include "Mediator.h"
#include <iostream>

Audio* Mediator::service_{ nullptr };

Audio* NullMediator::service_{ nullptr };
NullAudio NullMediator::nullService{};


void NullMediator::provide(Audio* service)
{
	if (service_ == nullptr) {
		//reset to NullService
		service_ = &nullService;
		std::cout << "현재 이 서비스는 잠금 상태입니다\n";
	}
	else
	{
		service_ = service;
	}
}