#pragma once

// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Imports.
// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <cstdint>
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include <initializer_list>
#include <iostream>

// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// DarkTECH domain.
// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
namespace dt
{
	// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	// Type renaming.
	// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	using ptr = void*;

	using u8 = std::uint8_t;
	using u16 = std::uint16_t;
	using u32 = std::uint32_t;
	using u64 = std::uint64_t;
	using uMAX = std::uint64_t; // Max unsigned integer.

	using i8 = std::int8_t;
	using i16 = std::int16_t;
	using i32 = std::int32_t;
	using i64 = std::int64_t;
	using iMAX = std::int64_t;  // Max unsigned integer.

	using r32 = float;
	using r64 = double;
	using rMAX = double; // Max real integer.

	using str = std::string;
	using sstr = std::stringstream;
	using namespace std::string_literals;

	template<class T> using vec = std::vector<T>;
	template<class T, class S> using map = std::map<T, S>;
	template<class T> using ilist = std::initializer_list<T>;
	using in = std::istream;
	using out = std::ostream;
	

	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	// Check if types match their expected size.
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	static_assert(sizeof(ptr) == 8, "Size of dt::ptr is not 8!");

	static_assert(sizeof(u8) == 1, "Size of dt::u8 is not 1!");
	static_assert(sizeof(u16) == 2, "Size of dt::u16 is not 2!");
	static_assert(sizeof(u32) == 4, "Size of dt::u32 is not 4!");
	static_assert(sizeof(u64) == 8, "Size of dt::u64 is not 8!");

	static_assert(sizeof(i8) == 1, "Size of dt::i8 is not 1!");
	static_assert(sizeof(i16) == 2, "Size of dt::i16 is not 2!");
	static_assert(sizeof(i32) == 4, "Size of dt::i32 is not 4!");
	static_assert(sizeof(i64) == 8, "Size of dt::i64 is not 8!");

	static_assert(sizeof(r32) == 4, "Size of dt::r32 is not 4!");
	static_assert(sizeof(r64) == 8, "Size of dt::r64 is not 8!");


	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	// Common errors.
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class ERR_FILENOTOPEN {};
}
