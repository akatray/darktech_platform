#pragma once

// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Imports.
// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <dt/Types.hpp>


// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// DarkTECH domain.
// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
namespace dt::ops_str
{
	// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	// Chop string by delimiter character.
	// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	auto chop ( const str& _String, char _Delim = ' ' ) -> vec<str>
	{
		auto String = sstr(_String);
		auto Block = str();
		auto Chain = vec<str>();

		while(std::getline(String, Block, _Delim)) Chain.push_back(Block);

		return Chain;
	}
}
