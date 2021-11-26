#pragma once
#include "SoonMoom/Input.h"


namespace SoonMoom
{
	class SOONMOOM_API WindowsInput:public Input
	{
	protected:
		virtual bool IsKeyPressedImpl(int keyCode)override;
		virtual bool IsMouseButtonPressedImpl(int button) override;
		virtual float GetMouseXImpl() override;
		virtual float GetMouseYImpl() override;
		virtual std::pair<float,float> GetMousePositionImpl()override;
	};
}