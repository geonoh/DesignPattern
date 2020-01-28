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
#ifndef NULL_MEDIATOR_SET
	Audio* audio = Mediator::getAudio();

#endif // !NULL_MEDIATOR_SET
	Audio* audio = &NullMediator::getAudio();
	audio->playSound(VOLUME_LOUD);
}
