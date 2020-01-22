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
		std::cout << "���� �� ���񽺴� ��� �����Դϴ�\n";
	}
	else
	{
		service_ = service;
	}
}