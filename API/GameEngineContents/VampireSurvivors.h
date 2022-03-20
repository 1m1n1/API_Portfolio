#pragma once
#include <GameEngine/GameEngine.h>

// ���� : �������� ������� ������ �����ϱ� �׳� ���͵�����̶� �������ϴ�.
//       �����е��� ���� �ڽ��� ������� ���ӿ� �´� �̸��� �̳༮���� �ٿ��ֽø� �˴ϴ�.
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

