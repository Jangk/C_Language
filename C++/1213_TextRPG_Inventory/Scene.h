#pragma once
class Scene
{
public:
	virtual void Init() = 0;
	virtual void Render() = 0;
	virtual void Release() = 0;

protected:
};

