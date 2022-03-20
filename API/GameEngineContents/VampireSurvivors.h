#pragma once
#include <GameEngine/GameEngine.h>

// 설명 : 선생님은 만들려는 게임이 없으니까 그냥 스터디게임이라도 지었습니다.
//       여러분들은 각자 자신이 만들려는 게임에 맞는 이름을 이녀석에게 붙여주시면 됩니다.
class VampireSurvivors : public GameEngine
{
public:
	// constrcuter destructer
	VampireSurvivors();
	~VampireSurvivors();

	// delete Function
	VampireSurvivors(const VampireSurvivors& _Other) = delete;
	VampireSurvivors(VampireSurvivors&& _Other) noexcept = delete;
	VampireSurvivors& operator=(const VampireSurvivors& _Other) = delete;
	VampireSurvivors& operator=(VampireSurvivors&& _Other) noexcept = delete;

	void GameInit() override;
	void GameLoop() override;
	void GameEnd() override;

protected:

private:

};

