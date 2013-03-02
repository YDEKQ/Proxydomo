/**
*	@file	CodeConvert.h
*	@brief	icu���g�����R�[�h�ϊ�
*/

#pragma once

#include <vector>
#include <string>
#include <unicode\ucnv.h>
#include <unicode\ustring.h>


namespace CodeConvert {

/// UTF8 -> UTF16
std::string		UTF8fromUTF16(const std::wstring& text);

/// UTF16 -> UTF8
std::wstring	UTF16fromUTF8(const std::string& text);


/// Converter -> UTF16
std::wstring	UTF16fromConverter(const char* text, int length, UConverter* pConverter);
std::wstring	UTF16fromConverter(const std::string& text, UConverter* pConverter);

/// UTF16 -> Converter
std::string		ConvertFromUTF16(const UChar* text, int length, UConverter* pConverter);
std::string		ConvertFromUTF16(const std::wstring& text, UConverter* pConverter);


}	// namespace CodeConvert











