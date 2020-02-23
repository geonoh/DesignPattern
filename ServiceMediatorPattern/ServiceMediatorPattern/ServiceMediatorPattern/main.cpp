#include "Framework.h"
#include <iostream>



int main()
{
	Framework framework;

	framework.initialize();


	//playSound�� ȣ���ϴ� �ʿ����� Audio��� �߻� �������̽��� �˻�
	//ConsoleAudio��� ��ü Ŭ������ ���ؼ��� ���� �𸥴ٴ� ���� �ٽ�.

	//� ��ü Ŭ������ ������ ���Ǵ����� ���񽺸� �����ϴ� �ʱ�ȭ 
	//�ڵ忡���� �� �� �ִ�.
	Audio* audio{ nullptr };
#ifndef NULL_MEDIATOR_SET
	audio = Mediator::getAudio();

#
	// audio�� ���ΰ���, �� Framework�� �ʱ�ȭ �������� NullMediator�� ����Ѵٰ� ��������̹Ƿ�, 
	// NullMediator���� getAudio�� �Ǿ���Ѵ�.
	if (!audio)
	{
		audio = NullMediator::getAudio();
	}

#endif // !NULL_MEDIATOR_SET
	audio->playSound(VOLUME_LOUD);
}
