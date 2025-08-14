#include "LionelScene.h"


std::string LionelScene::GetName()
{
	return "LionelScene";
}

void LionelScene::GenerateContent()
{
	GameObject* playerGO = CreateEmpty();
	Camera* cam = playerGO->AddComponent<Camera>();
	cam->ChangeSkyColor(D3DCOLOR_XRGB(131, 238, 255));

	playerGO->transform->SetPosition(D3DXVECTOR3(0, 0, -10));
	AddToScene(playerGO);


	GameObject* model = CreateEmpty();
	model->AddComponent<MeshRenderer>(L"Assets\\Mesh\\tiger.x");
	model->transform->RotateYaw(45);

	AddToScene(model);

}
