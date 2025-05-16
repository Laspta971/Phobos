#pragma once

#include <Utilities/Enumerable.h>
#include <Utilities/Template.h>

class RealisticArmorType final : public Enumerable<RealisticArmorType>
{
public:

	void LoadFromINI(CCINIClass* pINI) { };
	void LoadFromStream(PhobosStreamReader& Stm) { };
	void SaveToStream(PhobosStreamWriter& Stm) { };

private:
	template <typename T>
	void Serialize(T& Stm);
};

