#ifndef __SCENEMONOBEHAIOUR_H__
#define __SCENEMONOBEHAIOUR_H__
#include <vector>
#include <string>
#include "State.h"

class GameObject;

class SceneMonoBehaviour : public State
{
public:
	SceneMonoBehaviour() {}
	virtual ~SceneMonoBehaviour() = 0 {}

	std::vector<GameObject*> gameObjects;
	int index;
	std::string name;
	void LoadScene();
protected:
	void Enter();
	void Execute();
	void Exit() {}
private:
};

#endif // !__SCENESTATE_H__
