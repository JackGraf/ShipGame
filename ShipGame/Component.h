#pragma once
class Component
{
public:
	// the lower the updateOrder, the earlier the component updates
	Component(class Actor* owner, int updateOrder = 100);
	virtual ~Component();

	virtual void update(float deltaTime);
	int getUpdateOrder() const { return mUpdateOrder; }

protected:
	class Actor* owner;
	int mUpdateOrder;
};