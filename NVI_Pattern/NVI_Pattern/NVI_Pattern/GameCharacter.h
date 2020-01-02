#pragma once
class GameCharacter{
	

public:
	GameCharacter();
	virtual ~GameCharacter();

	void Control();			

	void DoPreWork();		//사전 동작을 수행 -- 부모 클래스에서 사전 동작을 구현
	void DoPostWork();		//사후 동작을 수행 -- 부모 클래스에서 사후 동작을 구현


private:

	virtual void DoSkill()const = 0;		//자식 클래스에서 재정의 가능

};