#include "pch.h"
#include <string>

generic<typename Key, typename Value>
inline UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>::CShorpUnOrderedMultiNode()
{
	gIntKeyClassDictionary = nullptr;
	gValueClassDictionary = nullptr;
	multiNodeUnion = new Utilities::UnOrderedMultiNodeUnion();
	Type^ keyType = Key::typeid;
	Type^ valueType = Value::typeid;
	int KeyNum = 0;
	int ValueNum = 0;

	if (keyType->Equals(System::Byte::typeid))
	{
		KeyNum = 0;
	}
	else if (keyType->Equals(System::SByte::typeid))
	{
		KeyNum = 14;
	}
	else if (keyType->Equals(System::Int16::typeid))
	{
		KeyNum = 14 * 2;
	}
	else if (keyType->Equals(System::UInt16::typeid))
	{
		KeyNum = 14 * 3;
	}
	else if (keyType->Equals(System::Int32::typeid))
	{
		KeyNum = 14 * 4;
	}
	else if (keyType->Equals(System::UInt32::typeid))
	{
		KeyNum = 14 * 5;
	}
	else if (keyType->Equals(System::Int64::typeid))
	{
		KeyNum = 14 * 6;
	}
	else if (keyType->Equals(System::UInt64::typeid))
	{
		KeyNum = 14 * 7;
	}
	else if (keyType->Equals(System::Single::typeid))
	{
		KeyNum = 14 * 8;
	}
	else if (keyType->Equals(System::Double::typeid))
	{
		KeyNum = 14 * 9;
	}
	else if (keyType->Equals(System::Char::typeid))
	{
		KeyNum = 14 * 10;
	}
	else if (keyType->Equals(System::Boolean::typeid))
	{
		KeyNum = 14 * 11;
	}
	else if (keyType->Equals(System::String::typeid))
	{
		KeyNum = 14 * 12;
	}
	else if (keyType->IsClass)
	{
		KeyNum = 14 * 13;
	}
	else if (keyType->IsValueType && !keyType->IsPrimitive && !keyType->IsEnum)
	{
		KeyNum = 14 * 13;
	}
	else if (keyType->IsInterface)
	{
		KeyNum = 14 * 13;
	}
	else
	{
		KeyNum = 200;
	}

	if (valueType->Equals(System::Byte::typeid))
	{
		ValueNum = 1;
	}
	else if (valueType->Equals(System::SByte::typeid))
	{
		ValueNum = 2;
	}
	else if (valueType->Equals(System::Int16::typeid))
	{
		ValueNum = 3;
	}
	else if (valueType->Equals(System::UInt16::typeid))
	{
		ValueNum = 4;
	}
	else if (valueType->Equals(System::Int32::typeid))
	{
		ValueNum = 5;
	}
	else if (valueType->Equals(System::UInt32::typeid))
	{
		ValueNum = 6;
	}
	else if (valueType->Equals(System::Int64::typeid))
	{
		ValueNum = 7;
	}
	else if (valueType->Equals(System::UInt64::typeid))
	{
		ValueNum = 8;
	}
	else if (valueType->Equals(System::Single::typeid))
	{
		ValueNum = 9;
	}
	else if (valueType->Equals(System::Double::typeid))
	{
		ValueNum = 10;
	}
	else if (valueType->Equals(System::Char::typeid))
	{
		ValueNum = 11;
	}
	else if (valueType->Equals(System::Boolean::typeid))
	{
		ValueNum = 12;
	}
	else if (valueType->Equals(System::String::typeid))
	{
		ValueNum = 13;
	}
	else if (valueType->IsClass)
	{
		ValueNum = 14;
	}
	else if (valueType->IsValueType && !valueType->IsPrimitive && !valueType->IsEnum)
	{
		ValueNum = 14;
	}
	else if (valueType->IsInterface)
	{
		ValueNum = 14;
	}
	else
	{
		ValueNum = 200;
	}

	nKeyValueType = KeyNum + ValueNum;

	switch (nKeyValueType)
	{
	case 0: default:
		multiNodeUnion->ptrToDelete = nullptr;
		break;
	case 1:
		multiNodeUnion->CPPmultinode1 = new UnOrderedMultiNode<unsigned char, unsigned char>();
		break;
	case 2:
		multiNodeUnion->CPPmultinode2 = new UnOrderedMultiNode<unsigned char, char>();
		break;
	case 3:
		multiNodeUnion->CPPmultinode3 = new UnOrderedMultiNode<unsigned char, short>();
		break;
	case 4:
		multiNodeUnion->CPPmultinode4 = new UnOrderedMultiNode<unsigned char, unsigned short>();
		break;
	case 5:
		multiNodeUnion->CPPmultinode5 = new UnOrderedMultiNode<unsigned char, int>();
		break;
	case 6:
		multiNodeUnion->CPPmultinode6 = new UnOrderedMultiNode<unsigned char, unsigned int>();
		break;
	case 7:
		multiNodeUnion->CPPmultinode7 = new UnOrderedMultiNode<unsigned char, long long>();
		break;
	case 8:
		multiNodeUnion->CPPmultinode8 = new UnOrderedMultiNode<unsigned char, unsigned long long>();
		break;
	case 9:
		multiNodeUnion->CPPmultinode9 = new UnOrderedMultiNode<unsigned char, float>();
		break;
	case 10:
		multiNodeUnion->CPPmultinode10 = new UnOrderedMultiNode<unsigned char, double>();
		break;
	case 11:
		multiNodeUnion->CPPmultinode11 = new UnOrderedMultiNode<unsigned char, wchar_t>();
		break;
	case 12:
		multiNodeUnion->CPPmultinode12 = new UnOrderedMultiNode<unsigned char, bool>();
		break;
	case 13:
		multiNodeUnion->CPPmultinode13 = new UnOrderedMultiNode<unsigned char, std::wstring>();
		break;
	case 14:
		multiNodeUnion->CPPmultinode14 = new UnOrderedMultiNode<unsigned char, __int64>();
		break;
	case 15:
		multiNodeUnion->CPPmultinode15 = new UnOrderedMultiNode<char, unsigned char>();
		break;
	case 16:
		multiNodeUnion->CPPmultinode16 = new UnOrderedMultiNode<char, char>();
		break;
	case 17:
		multiNodeUnion->CPPmultinode17 = new UnOrderedMultiNode<char, short>();
		break;
	case 18:
		multiNodeUnion->CPPmultinode18 = new UnOrderedMultiNode<char, unsigned short>();
		break;
	case 19:
		multiNodeUnion->CPPmultinode19 = new UnOrderedMultiNode<char, int>();
		break;
	case 20:
		multiNodeUnion->CPPmultinode20 = new UnOrderedMultiNode<char, unsigned int>();
		break;
	case 21:
		multiNodeUnion->CPPmultinode21 = new UnOrderedMultiNode<char, long long>();
		break;
	case 22:
		multiNodeUnion->CPPmultinode22 = new UnOrderedMultiNode<char, unsigned long long>();
		break;
	case 23:
		multiNodeUnion->CPPmultinode23 = new UnOrderedMultiNode<char, float>();
		break;
	case 24:
		multiNodeUnion->CPPmultinode24 = new UnOrderedMultiNode<char, double>();
		break;
	case 25:
		multiNodeUnion->CPPmultinode25 = new UnOrderedMultiNode<char, wchar_t>();
		break;
	case 26:
		multiNodeUnion->CPPmultinode26 = new UnOrderedMultiNode<char, bool>();
		break;
	case 27:
		multiNodeUnion->CPPmultinode27 = new UnOrderedMultiNode<char, std::wstring>();
		break;
	case 28:
		multiNodeUnion->CPPmultinode28 = new UnOrderedMultiNode<char, __int64>();
		break;
	case 29:
		multiNodeUnion->CPPmultinode29 = new UnOrderedMultiNode<short, unsigned char>();
		break;
	case 30:
		multiNodeUnion->CPPmultinode30 = new UnOrderedMultiNode<short, char>();
		break;
	case 31:
		multiNodeUnion->CPPmultinode31 = new UnOrderedMultiNode<short, short>();
		break;
	case 32:
		multiNodeUnion->CPPmultinode32 = new UnOrderedMultiNode<short, unsigned short>();
		break;
	case 33:
		multiNodeUnion->CPPmultinode33 = new UnOrderedMultiNode<short, int>();
		break;
	case 34:
		multiNodeUnion->CPPmultinode34 = new UnOrderedMultiNode<short, unsigned int>();
		break;
	case 35:
		multiNodeUnion->CPPmultinode35 = new UnOrderedMultiNode<short, long long>();
		break;
	case 36:
		multiNodeUnion->CPPmultinode36 = new UnOrderedMultiNode<short, unsigned long long>();
		break;
	case 37:
		multiNodeUnion->CPPmultinode37 = new UnOrderedMultiNode<short, float>();
		break;
	case 38:
		multiNodeUnion->CPPmultinode38 = new UnOrderedMultiNode<short, double>();
		break;
	case 39:
		multiNodeUnion->CPPmultinode39 = new UnOrderedMultiNode<short, wchar_t>();
		break;
	case 40:
		multiNodeUnion->CPPmultinode40 = new UnOrderedMultiNode<short, bool>();
		break;
	case 41:
		multiNodeUnion->CPPmultinode41 = new UnOrderedMultiNode<short, std::wstring>();
		break;
	case 42:
		multiNodeUnion->CPPmultinode42 = new UnOrderedMultiNode<short, __int64>();
		break;
	case 43:
		multiNodeUnion->CPPmultinode43 = new UnOrderedMultiNode<unsigned short, unsigned char>();
		break;
	case 44:
		multiNodeUnion->CPPmultinode44 = new UnOrderedMultiNode<unsigned short, char>();
		break;
	case 45:
		multiNodeUnion->CPPmultinode45 = new UnOrderedMultiNode<unsigned short, short>();
		break;
	case 46:
		multiNodeUnion->CPPmultinode46 = new UnOrderedMultiNode<unsigned short, unsigned short>();
		break;
	case 47:
		multiNodeUnion->CPPmultinode47 = new UnOrderedMultiNode<unsigned short, int>();
		break;
	case 48:
		multiNodeUnion->CPPmultinode48 = new UnOrderedMultiNode<unsigned short, unsigned int>();
		break;
	case 49:
		multiNodeUnion->CPPmultinode49 = new UnOrderedMultiNode<unsigned short, long long>();
		break;
	case 50:
		multiNodeUnion->CPPmultinode50 = new UnOrderedMultiNode<unsigned short, unsigned long long>();
		break;
	case 51:
		multiNodeUnion->CPPmultinode51 = new UnOrderedMultiNode<unsigned short, float>();
		break;
	case 52:
		multiNodeUnion->CPPmultinode52 = new UnOrderedMultiNode<unsigned short, double>();
		break;
	case 53:
		multiNodeUnion->CPPmultinode53 = new UnOrderedMultiNode<unsigned short, wchar_t>();
		break;
	case 54:
		multiNodeUnion->CPPmultinode54 = new UnOrderedMultiNode<unsigned short, bool>();
		break;
	case 55:
		multiNodeUnion->CPPmultinode55 = new UnOrderedMultiNode<unsigned short, std::wstring>();
		break;
	case 56:
		multiNodeUnion->CPPmultinode56 = new UnOrderedMultiNode<unsigned short, __int64>();
		break;
	case 57:
		multiNodeUnion->CPPmultinode57 = new UnOrderedMultiNode<int, unsigned char>();
		break;
	case 58:
		multiNodeUnion->CPPmultinode58 = new UnOrderedMultiNode<int, char>();
		break;
	case 59:
		multiNodeUnion->CPPmultinode59 = new UnOrderedMultiNode<int, short>();
		break;
	case 60:
		multiNodeUnion->CPPmultinode60 = new UnOrderedMultiNode<int, unsigned short>();
		break;
	case 61:
		multiNodeUnion->CPPmultinode61 = new UnOrderedMultiNode<int, int>();
		break;
	case 62:
		multiNodeUnion->CPPmultinode62 = new UnOrderedMultiNode<int, unsigned int>();
		break;
	case 63:
		multiNodeUnion->CPPmultinode63 = new UnOrderedMultiNode<int, long long>();
		break;
	case 64:
		multiNodeUnion->CPPmultinode64 = new UnOrderedMultiNode<int, unsigned long long>();
		break;
	case 65:
		multiNodeUnion->CPPmultinode65 = new UnOrderedMultiNode<int, float>();
		break;
	case 66:
		multiNodeUnion->CPPmultinode66 = new UnOrderedMultiNode<int, double>();
		break;
	case 67:
		multiNodeUnion->CPPmultinode67 = new UnOrderedMultiNode<int, wchar_t>();
		break;
	case 68:
		multiNodeUnion->CPPmultinode68 = new UnOrderedMultiNode<int, bool>();
		break;
	case 69:
		multiNodeUnion->CPPmultinode69 = new UnOrderedMultiNode<int, std::wstring>();
		break;
	case 70:
		multiNodeUnion->CPPmultinode70 = new UnOrderedMultiNode<int, __int64>();
		break;
	case 71:
		multiNodeUnion->CPPmultinode71 = new UnOrderedMultiNode<unsigned int, unsigned char>();
		break;
	case 72:
		multiNodeUnion->CPPmultinode72 = new UnOrderedMultiNode<unsigned int, char>();
		break;
	case 73:
		multiNodeUnion->CPPmultinode73 = new UnOrderedMultiNode<unsigned int, short>();
		break;
	case 74:
		multiNodeUnion->CPPmultinode74 = new UnOrderedMultiNode<unsigned int, unsigned short>();
		break;
	case 75:
		multiNodeUnion->CPPmultinode75 = new UnOrderedMultiNode<unsigned int, int>();
		break;
	case 76:
		multiNodeUnion->CPPmultinode76 = new UnOrderedMultiNode<unsigned int, unsigned int>();
		break;
	case 77:
		multiNodeUnion->CPPmultinode77 = new UnOrderedMultiNode<unsigned int, long long>();
		break;
	case 78:
		multiNodeUnion->CPPmultinode78 = new UnOrderedMultiNode<unsigned int, unsigned long long>();
		break;
	case 79:
		multiNodeUnion->CPPmultinode79 = new UnOrderedMultiNode<unsigned int, float>();
		break;
	case 80:
		multiNodeUnion->CPPmultinode80 = new UnOrderedMultiNode<unsigned int, double>();
		break;
	case 81:
		multiNodeUnion->CPPmultinode81 = new UnOrderedMultiNode<unsigned int, wchar_t>();
		break;
	case 82:
		multiNodeUnion->CPPmultinode82 = new UnOrderedMultiNode<unsigned int, bool>();
		break;
	case 83:
		multiNodeUnion->CPPmultinode83 = new UnOrderedMultiNode<unsigned int, std::wstring>();
		break;
	case 84:
		multiNodeUnion->CPPmultinode84 = new UnOrderedMultiNode<unsigned int, __int64>();
		break;
	case 85:
		multiNodeUnion->CPPmultinode85 = new UnOrderedMultiNode<long long, unsigned char>();
		break;
	case 86:
		multiNodeUnion->CPPmultinode86 = new UnOrderedMultiNode<long long, char>();
		break;
	case 87:
		multiNodeUnion->CPPmultinode87 = new UnOrderedMultiNode<long long, short>();
		break;
	case 88:
		multiNodeUnion->CPPmultinode88 = new UnOrderedMultiNode<long long, unsigned short>();
		break;
	case 89:
		multiNodeUnion->CPPmultinode89 = new UnOrderedMultiNode<long long, int>();
		break;
	case 90:
		multiNodeUnion->CPPmultinode90 = new UnOrderedMultiNode<long long, unsigned int>();
		break;
	case 91:
		multiNodeUnion->CPPmultinode91 = new UnOrderedMultiNode<long long, long long>();
		break;
	case 92:
		multiNodeUnion->CPPmultinode92 = new UnOrderedMultiNode<long long, unsigned long long>();
		break;
	case 93:
		multiNodeUnion->CPPmultinode93 = new UnOrderedMultiNode<long long, float>();
		break;
	case 94:
		multiNodeUnion->CPPmultinode94 = new UnOrderedMultiNode<long long, double>();
		break;
	case 95:
		multiNodeUnion->CPPmultinode95 = new UnOrderedMultiNode<long long, wchar_t>();
		break;
	case 96:
		multiNodeUnion->CPPmultinode96 = new UnOrderedMultiNode<long long, bool>();
		break;
	case 97:
		multiNodeUnion->CPPmultinode97 = new UnOrderedMultiNode<long long, std::wstring>();
		break;
	case 98:
		multiNodeUnion->CPPmultinode98 = new UnOrderedMultiNode<long long, __int64>();
		break;
	case 99:
		multiNodeUnion->CPPmultinode99 = new UnOrderedMultiNode<unsigned long long, unsigned char>();
		break;
	case 100:
		multiNodeUnion->CPPmultinode100 = new UnOrderedMultiNode<unsigned long long, char>();
		break;
	case 101:
		multiNodeUnion->CPPmultinode101 = new UnOrderedMultiNode<unsigned long long, short>();
		break;
	case 102:
		multiNodeUnion->CPPmultinode102 = new UnOrderedMultiNode<unsigned long long, unsigned short>();
		break;
	case 103:
		multiNodeUnion->CPPmultinode103 = new UnOrderedMultiNode<unsigned long long, int>();
		break;
	case 104:
		multiNodeUnion->CPPmultinode104 = new UnOrderedMultiNode<unsigned long long, unsigned int>();
		break;
	case 105:
		multiNodeUnion->CPPmultinode105 = new UnOrderedMultiNode<unsigned long long, long long>();
		break;
	case 106:
		multiNodeUnion->CPPmultinode106 = new UnOrderedMultiNode<unsigned long long, unsigned long long>();
		break;
	case 107:
		multiNodeUnion->CPPmultinode107 = new UnOrderedMultiNode<unsigned long long, float>();
		break;
	case 108:
		multiNodeUnion->CPPmultinode108 = new UnOrderedMultiNode<unsigned long long, double>();
		break;
	case 109:
		multiNodeUnion->CPPmultinode109 = new UnOrderedMultiNode<unsigned long long, wchar_t>();
		break;
	case 110:
		multiNodeUnion->CPPmultinode110 = new UnOrderedMultiNode<unsigned long long, bool>();
		break;
	case 111:
		multiNodeUnion->CPPmultinode111 = new UnOrderedMultiNode<unsigned long long, std::wstring>();
		break;
	case 112:
		multiNodeUnion->CPPmultinode112 = new UnOrderedMultiNode<unsigned long long, __int64>();
		break;
	case 113:
		multiNodeUnion->CPPmultinode113 = new UnOrderedMultiNode<float, unsigned char>();
		break;
	case 114:
		multiNodeUnion->CPPmultinode114 = new UnOrderedMultiNode<float, char>();
		break;
	case 115:
		multiNodeUnion->CPPmultinode115 = new UnOrderedMultiNode<float, short>();
		break;
	case 116:
		multiNodeUnion->CPPmultinode116 = new UnOrderedMultiNode<float, unsigned short>();
		break;
	case 117:
		multiNodeUnion->CPPmultinode117 = new UnOrderedMultiNode<float, int>();
		break;
	case 118:
		multiNodeUnion->CPPmultinode118 = new UnOrderedMultiNode<float, unsigned int>();
		break;
	case 119:
		multiNodeUnion->CPPmultinode119 = new UnOrderedMultiNode<float, long long>();
		break;
	case 120:
		multiNodeUnion->CPPmultinode120 = new UnOrderedMultiNode<float, unsigned long long>();
		break;
	case 121:
		multiNodeUnion->CPPmultinode121 = new UnOrderedMultiNode<float, float>();
		break;
	case 122:
		multiNodeUnion->CPPmultinode122 = new UnOrderedMultiNode<float, double>();
		break;
	case 123:
		multiNodeUnion->CPPmultinode123 = new UnOrderedMultiNode<float, wchar_t>();
		break;
	case 124:
		multiNodeUnion->CPPmultinode124 = new UnOrderedMultiNode<float, bool>();
		break;
	case 125:
		multiNodeUnion->CPPmultinode125 = new UnOrderedMultiNode<float, std::wstring>();
		break;
	case 126:
		multiNodeUnion->CPPmultinode126 = new UnOrderedMultiNode<float, __int64>();
		break;
	case 127:
		multiNodeUnion->CPPmultinode127 = new UnOrderedMultiNode<double, unsigned char>();
		break;
	case 128:
		multiNodeUnion->CPPmultinode128 = new UnOrderedMultiNode<double, char>();
		break;
	case 129:
		multiNodeUnion->CPPmultinode129 = new UnOrderedMultiNode<double, short>();
		break;
	case 130:
		multiNodeUnion->CPPmultinode130 = new UnOrderedMultiNode<double, unsigned short>();
		break;
	case 131:
		multiNodeUnion->CPPmultinode131 = new UnOrderedMultiNode<double, int>();
		break;
	case 132:
		multiNodeUnion->CPPmultinode132 = new UnOrderedMultiNode<double, unsigned int>();
		break;
	case 133:
		multiNodeUnion->CPPmultinode133 = new UnOrderedMultiNode<double, long long>();
		break;
	case 134:
		multiNodeUnion->CPPmultinode134 = new UnOrderedMultiNode<double, unsigned long long>();
		break;
	case 135:
		multiNodeUnion->CPPmultinode135 = new UnOrderedMultiNode<double, float>();
		break;
	case 136:
		multiNodeUnion->CPPmultinode136 = new UnOrderedMultiNode<double, double>();
		break;
	case 137:
		multiNodeUnion->CPPmultinode137 = new UnOrderedMultiNode<double, wchar_t>();
		break;
	case 138:
		multiNodeUnion->CPPmultinode138 = new UnOrderedMultiNode<double, bool>();
		break;
	case 139:
		multiNodeUnion->CPPmultinode139 = new UnOrderedMultiNode<double, std::wstring>();
		break;
	case 140:
		multiNodeUnion->CPPmultinode140 = new UnOrderedMultiNode<double, __int64>();
		break;
	case 141:
		multiNodeUnion->CPPmultinode141 = new UnOrderedMultiNode<wchar_t, unsigned char>();
		break;
	case 142:
		multiNodeUnion->CPPmultinode142 = new UnOrderedMultiNode<wchar_t, char>();
		break;
	case 143:
		multiNodeUnion->CPPmultinode143 = new UnOrderedMultiNode<wchar_t, short>();
		break;
	case 144:
		multiNodeUnion->CPPmultinode144 = new UnOrderedMultiNode<wchar_t, unsigned short>();
		break;
	case 145:
		multiNodeUnion->CPPmultinode145 = new UnOrderedMultiNode<wchar_t, int>();
		break;
	case 146:
		multiNodeUnion->CPPmultinode146 = new UnOrderedMultiNode<wchar_t, unsigned int>();
		break;
	case 147:
		multiNodeUnion->CPPmultinode147 = new UnOrderedMultiNode<wchar_t, long long>();
		break;
	case 148:
		multiNodeUnion->CPPmultinode148 = new UnOrderedMultiNode<wchar_t, unsigned long long>();
		break;
	case 149:
		multiNodeUnion->CPPmultinode149 = new UnOrderedMultiNode<wchar_t, float>();
		break;
	case 150:
		multiNodeUnion->CPPmultinode150 = new UnOrderedMultiNode<wchar_t, double>();
		break;
	case 151:
		multiNodeUnion->CPPmultinode151 = new UnOrderedMultiNode<wchar_t, wchar_t>();
		break;
	case 152:
		multiNodeUnion->CPPmultinode152 = new UnOrderedMultiNode<wchar_t, bool>();
		break;
	case 153:
		multiNodeUnion->CPPmultinode153 = new UnOrderedMultiNode<wchar_t, std::wstring>();
		break;
	case 154:
		multiNodeUnion->CPPmultinode154 = new UnOrderedMultiNode<wchar_t, __int64>();
		break;
	case 155:
		multiNodeUnion->CPPmultinode155 = new UnOrderedMultiNode<bool, unsigned char>();
		break;
	case 156:
		multiNodeUnion->CPPmultinode156 = new UnOrderedMultiNode<bool, char>();
		break;
	case 157:
		multiNodeUnion->CPPmultinode157 = new UnOrderedMultiNode<bool, short>();
		break;
	case 158:
		multiNodeUnion->CPPmultinode158 = new UnOrderedMultiNode<bool, unsigned short>();
		break;
	case 159:
		multiNodeUnion->CPPmultinode159 = new UnOrderedMultiNode<bool, int>();
		break;
	case 160:
		multiNodeUnion->CPPmultinode160 = new UnOrderedMultiNode<bool, unsigned int>();
		break;
	case 161:
		multiNodeUnion->CPPmultinode161 = new UnOrderedMultiNode<bool, long long>();
		break;
	case 162:
		multiNodeUnion->CPPmultinode162 = new UnOrderedMultiNode<bool, unsigned long long>();
		break;
	case 163:
		multiNodeUnion->CPPmultinode163 = new UnOrderedMultiNode<bool, float>();
		break;
	case 164:
		multiNodeUnion->CPPmultinode164 = new UnOrderedMultiNode<bool, double>();
		break;
	case 165:
		multiNodeUnion->CPPmultinode165 = new UnOrderedMultiNode<bool, wchar_t>();
		break;
	case 166:
		multiNodeUnion->CPPmultinode166 = new UnOrderedMultiNode<bool, bool>();
		break;
	case 167:
		multiNodeUnion->CPPmultinode167 = new UnOrderedMultiNode<bool, std::wstring>();
		break;
	case 168:
		multiNodeUnion->CPPmultinode168 = new UnOrderedMultiNode<bool, __int64>();
		break;
	case 169:
		multiNodeUnion->CPPmultinode169 = new UnOrderedMultiNode<std::wstring, unsigned char>();
		break;
	case 170:
		multiNodeUnion->CPPmultinode170 = new UnOrderedMultiNode<std::wstring, char>();
		break;
	case 171:
		multiNodeUnion->CPPmultinode171 = new UnOrderedMultiNode<std::wstring, short>();
		break;
	case 172:
		multiNodeUnion->CPPmultinode172 = new UnOrderedMultiNode<std::wstring, unsigned short>();
		break;
	case 173:
		multiNodeUnion->CPPmultinode173 = new UnOrderedMultiNode<std::wstring, int>();
		break;
	case 174:
		multiNodeUnion->CPPmultinode174 = new UnOrderedMultiNode<std::wstring, unsigned int>();
		break;
	case 175:
		multiNodeUnion->CPPmultinode175 = new UnOrderedMultiNode<std::wstring, long long>();
		break;
	case 176:
		multiNodeUnion->CPPmultinode176 = new UnOrderedMultiNode<std::wstring, unsigned long long>();
		break;
	case 177:
		multiNodeUnion->CPPmultinode177 = new UnOrderedMultiNode<std::wstring, float>();
		break;
	case 178:
		multiNodeUnion->CPPmultinode178 = new UnOrderedMultiNode<std::wstring, double>();
		break;
	case 179:
		multiNodeUnion->CPPmultinode179 = new UnOrderedMultiNode<std::wstring, wchar_t>();
		break;
	case 180:
		multiNodeUnion->CPPmultinode180 = new UnOrderedMultiNode<std::wstring, bool>();
		break;
	case 181:
		multiNodeUnion->CPPmultinode181 = new UnOrderedMultiNode<std::wstring, std::wstring>();
		break;
	case 182:
		multiNodeUnion->CPPmultinode182 = new UnOrderedMultiNode<std::wstring, __int64>();
		break;
	case 183:
		multiNodeUnion->CPPmultinode183 = new UnOrderedMultiNode<__int64, unsigned char>();
		break;
	case 184:
		multiNodeUnion->CPPmultinode184 = new UnOrderedMultiNode<__int64, char>();
		break;
	case 185:
		multiNodeUnion->CPPmultinode185 = new UnOrderedMultiNode<__int64, short>();
		break;
	case 186:
		multiNodeUnion->CPPmultinode186 = new UnOrderedMultiNode<__int64, unsigned short>();
		break;
	case 187:
		multiNodeUnion->CPPmultinode187 = new UnOrderedMultiNode<__int64, int>();
		break;
	case 188:
		multiNodeUnion->CPPmultinode188 = new UnOrderedMultiNode<__int64, unsigned int>();
		break;
	case 189:
		multiNodeUnion->CPPmultinode189 = new UnOrderedMultiNode<__int64, long long>();
		break;
	case 190:
		multiNodeUnion->CPPmultinode190 = new UnOrderedMultiNode<__int64, unsigned long long>();
		break;
	case 191:
		multiNodeUnion->CPPmultinode191 = new UnOrderedMultiNode<__int64, float>();
		break;
	case 192:
		multiNodeUnion->CPPmultinode192 = new UnOrderedMultiNode<__int64, double>();
		break;
	case 193:
		multiNodeUnion->CPPmultinode193 = new UnOrderedMultiNode<__int64, wchar_t>();
		break;
	case 194:
		multiNodeUnion->CPPmultinode194 = new UnOrderedMultiNode<__int64, bool>();
		break;
	case 195:
		multiNodeUnion->CPPmultinode195 = new UnOrderedMultiNode<__int64, std::wstring>();
		break;
	case 196:
		multiNodeUnion->CPPmultinode196 = new UnOrderedMultiNode<__int64, __int64>();
		break;
	}

}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>::~CShorpUnOrderedMultiNode()
{
	if (multiNodeUnion->ptrToDelete)
		delete multiNodeUnion->ptrToDelete;
	delete multiNodeUnion;
}


generic<typename Key, typename Value>
void UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>::Next()
{
	if (Object::ReferenceEquals(this, nullptr)) return;
	if (isInitialized == 0) return;
	switch (nKeyValueType)
	{
	case 0: default:
		return;
	case 1:
		(*(multiNodeUnion->CPPmultinode1))++;
		return;
	case 2:
		(*(multiNodeUnion->CPPmultinode2))++;
		return;
	case 3:
		(*(multiNodeUnion->CPPmultinode3))++;
		return;
	case 4:
		(*(multiNodeUnion->CPPmultinode4))++;
		return;
	case 5:
		(*(multiNodeUnion->CPPmultinode5))++;
		return;
	case 6:
		(*(multiNodeUnion->CPPmultinode6))++;
		return;
	case 7:
		(*(multiNodeUnion->CPPmultinode7))++;
		return;
	case 8:
		(*(multiNodeUnion->CPPmultinode8))++;
		return;
	case 9:
		(*(multiNodeUnion->CPPmultinode9))++;
		return;
	case 10:
		(*(multiNodeUnion->CPPmultinode10))++;
		return;
	case 11:
		(*(multiNodeUnion->CPPmultinode11))++;
		return;
	case 12:
		(*(multiNodeUnion->CPPmultinode12))++;
		return;
	case 13:
		(*(multiNodeUnion->CPPmultinode13))++;
		return;
	case 14:
		(*(multiNodeUnion->CPPmultinode14))++;
		return;
	case 15:
		(*(multiNodeUnion->CPPmultinode15))++;
		return;
	case 16:
		(*(multiNodeUnion->CPPmultinode16))++;
		return;
	case 17:
		(*(multiNodeUnion->CPPmultinode17))++;
		return;
	case 18:
		(*(multiNodeUnion->CPPmultinode18))++;
		return;
	case 19:
		(*(multiNodeUnion->CPPmultinode19))++;
		return;
	case 20:
		(*(multiNodeUnion->CPPmultinode20))++;
		return;
	case 21:
		(*(multiNodeUnion->CPPmultinode21))++;
		return;
	case 22:
		(*(multiNodeUnion->CPPmultinode22))++;
		return;
	case 23:
		(*(multiNodeUnion->CPPmultinode23))++;
		return;
	case 24:
		(*(multiNodeUnion->CPPmultinode24))++;
		return;
	case 25:
		(*(multiNodeUnion->CPPmultinode25))++;
		return;
	case 26:
		(*(multiNodeUnion->CPPmultinode26))++;
		return;
	case 27:
		(*(multiNodeUnion->CPPmultinode27))++;
		return;
	case 28:
		(*(multiNodeUnion->CPPmultinode28))++;
		return;
	case 29:
		(*(multiNodeUnion->CPPmultinode29))++;
		return;
	case 30:
		(*(multiNodeUnion->CPPmultinode30))++;
		return;
	case 31:
		(*(multiNodeUnion->CPPmultinode31))++;
		return;
	case 32:
		(*(multiNodeUnion->CPPmultinode32))++;
		return;
	case 33:
		(*(multiNodeUnion->CPPmultinode33))++;
		return;
	case 34:
		(*(multiNodeUnion->CPPmultinode34))++;
		return;
	case 35:
		(*(multiNodeUnion->CPPmultinode35))++;
		return;
	case 36:
		(*(multiNodeUnion->CPPmultinode36))++;
		return;
	case 37:
		(*(multiNodeUnion->CPPmultinode37))++;
		return;
	case 38:
		(*(multiNodeUnion->CPPmultinode38))++;
		return;
	case 39:
		(*(multiNodeUnion->CPPmultinode39))++;
		return;
	case 40:
		(*(multiNodeUnion->CPPmultinode40))++;
		return;
	case 41:
		(*(multiNodeUnion->CPPmultinode41))++;
		return;
	case 42:
		(*(multiNodeUnion->CPPmultinode42))++;
		return;
	case 43:
		(*(multiNodeUnion->CPPmultinode43))++;
		return;
	case 44:
		(*(multiNodeUnion->CPPmultinode44))++;
		return;
	case 45:
		(*(multiNodeUnion->CPPmultinode45))++;
		return;
	case 46:
		(*(multiNodeUnion->CPPmultinode46))++;
		return;
	case 47:
		(*(multiNodeUnion->CPPmultinode47))++;
		return;
	case 48:
		(*(multiNodeUnion->CPPmultinode48))++;
		return;
	case 49:
		(*(multiNodeUnion->CPPmultinode49))++;
		return;
	case 50:
		(*(multiNodeUnion->CPPmultinode50))++;
		return;
	case 51:
		(*(multiNodeUnion->CPPmultinode51))++;
		return;
	case 52:
		(*(multiNodeUnion->CPPmultinode52))++;
		return;
	case 53:
		(*(multiNodeUnion->CPPmultinode53))++;
		return;
	case 54:
		(*(multiNodeUnion->CPPmultinode54))++;
		return;
	case 55:
		(*(multiNodeUnion->CPPmultinode55))++;
		return;
	case 56:
		(*(multiNodeUnion->CPPmultinode56))++;
		return;
	case 57:
		(*(multiNodeUnion->CPPmultinode57))++;
		return;
	case 58:
		(*(multiNodeUnion->CPPmultinode58))++;
		return;
	case 59:
		(*(multiNodeUnion->CPPmultinode59))++;
		return;
	case 60:
		(*(multiNodeUnion->CPPmultinode60))++;
		return;
	case 61:
		(*(multiNodeUnion->CPPmultinode61))++;
		return;
	case 62:
		(*(multiNodeUnion->CPPmultinode62))++;
		return;
	case 63:
		(*(multiNodeUnion->CPPmultinode63))++;
		return;
	case 64:
		(*(multiNodeUnion->CPPmultinode64))++;
		return;
	case 65:
		(*(multiNodeUnion->CPPmultinode65))++;
		return;
	case 66:
		(*(multiNodeUnion->CPPmultinode66))++;
		return;
	case 67:
		(*(multiNodeUnion->CPPmultinode67))++;
		return;
	case 68:
		(*(multiNodeUnion->CPPmultinode68))++;
		return;
	case 69:
		(*(multiNodeUnion->CPPmultinode69))++;
		return;
	case 70:
		(*(multiNodeUnion->CPPmultinode70))++;
		return;
	case 71:
		(*(multiNodeUnion->CPPmultinode71))++;
		return;
	case 72:
		(*(multiNodeUnion->CPPmultinode72))++;
		return;
	case 73:
		(*(multiNodeUnion->CPPmultinode73))++;
		return;
	case 74:
		(*(multiNodeUnion->CPPmultinode74))++;
		return;
	case 75:
		(*(multiNodeUnion->CPPmultinode75))++;
		return;
	case 76:
		(*(multiNodeUnion->CPPmultinode76))++;
		return;
	case 77:
		(*(multiNodeUnion->CPPmultinode77))++;
		return;
	case 78:
		(*(multiNodeUnion->CPPmultinode78))++;
		return;
	case 79:
		(*(multiNodeUnion->CPPmultinode79))++;
		return;
	case 80:
		(*(multiNodeUnion->CPPmultinode80))++;
		return;
	case 81:
		(*(multiNodeUnion->CPPmultinode81))++;
		return;
	case 82:
		(*(multiNodeUnion->CPPmultinode82))++;
		return;
	case 83:
		(*(multiNodeUnion->CPPmultinode83))++;
		return;
	case 84:
		(*(multiNodeUnion->CPPmultinode84))++;
		return;
	case 85:
		(*(multiNodeUnion->CPPmultinode85))++;
		return;
	case 86:
		(*(multiNodeUnion->CPPmultinode86))++;
		return;
	case 87:
		(*(multiNodeUnion->CPPmultinode87))++;
		return;
	case 88:
		(*(multiNodeUnion->CPPmultinode88))++;
		return;
	case 89:
		(*(multiNodeUnion->CPPmultinode89))++;
		return;
	case 90:
		(*(multiNodeUnion->CPPmultinode90))++;
		return;
	case 91:
		(*(multiNodeUnion->CPPmultinode91))++;
		return;
	case 92:
		(*(multiNodeUnion->CPPmultinode92))++;
		return;
	case 93:
		(*(multiNodeUnion->CPPmultinode93))++;
		return;
	case 94:
		(*(multiNodeUnion->CPPmultinode94))++;
		return;
	case 95:
		(*(multiNodeUnion->CPPmultinode95))++;
		return;
	case 96:
		(*(multiNodeUnion->CPPmultinode96))++;
		return;
	case 97:
		(*(multiNodeUnion->CPPmultinode97))++;
		return;
	case 98:
		(*(multiNodeUnion->CPPmultinode98))++;
		return;
	case 99:
		(*(multiNodeUnion->CPPmultinode99))++;
		return;
	case 100:
		(*(multiNodeUnion->CPPmultinode100))++;
		return;
	case 101:
		(*(multiNodeUnion->CPPmultinode101))++;
		return;
	case 102:
		(*(multiNodeUnion->CPPmultinode102))++;
		return;
	case 103:
		(*(multiNodeUnion->CPPmultinode103))++;
		return;
	case 104:
		(*(multiNodeUnion->CPPmultinode104))++;
		return;
	case 105:
		(*(multiNodeUnion->CPPmultinode105))++;
		return;
	case 106:
		(*(multiNodeUnion->CPPmultinode106))++;
		return;
	case 107:
		(*(multiNodeUnion->CPPmultinode107))++;
		return;
	case 108:
		(*(multiNodeUnion->CPPmultinode108))++;
		return;
	case 109:
		(*(multiNodeUnion->CPPmultinode109))++;
		return;
	case 110:
		(*(multiNodeUnion->CPPmultinode110))++;
		return;
	case 111:
		(*(multiNodeUnion->CPPmultinode111))++;
		return;
	case 112:
		(*(multiNodeUnion->CPPmultinode112))++;
		return;
	case 113:
		(*(multiNodeUnion->CPPmultinode113))++;
		return;
	case 114:
		(*(multiNodeUnion->CPPmultinode114))++;
		return;
	case 115:
		(*(multiNodeUnion->CPPmultinode115))++;
		return;
	case 116:
		(*(multiNodeUnion->CPPmultinode116))++;
		return;
	case 117:
		(*(multiNodeUnion->CPPmultinode117))++;
		return;
	case 118:
		(*(multiNodeUnion->CPPmultinode118))++;
		return;
	case 119:
		(*(multiNodeUnion->CPPmultinode119))++;
		return;
	case 120:
		(*(multiNodeUnion->CPPmultinode120))++;
		return;
	case 121:
		(*(multiNodeUnion->CPPmultinode121))++;
		return;
	case 122:
		(*(multiNodeUnion->CPPmultinode122))++;
		return;
	case 123:
		(*(multiNodeUnion->CPPmultinode123))++;
		return;
	case 124:
		(*(multiNodeUnion->CPPmultinode124))++;
		return;
	case 125:
		(*(multiNodeUnion->CPPmultinode125))++;
		return;
	case 126:
		(*(multiNodeUnion->CPPmultinode126))++;
		return;
	case 127:
		(*(multiNodeUnion->CPPmultinode127))++;
		return;
	case 128:
		(*(multiNodeUnion->CPPmultinode128))++;
		return;
	case 129:
		(*(multiNodeUnion->CPPmultinode129))++;
		return;
	case 130:
		(*(multiNodeUnion->CPPmultinode130))++;
		return;
	case 131:
		(*(multiNodeUnion->CPPmultinode131))++;
		return;
	case 132:
		(*(multiNodeUnion->CPPmultinode132))++;
		return;
	case 133:
		(*(multiNodeUnion->CPPmultinode133))++;
		return;
	case 134:
		(*(multiNodeUnion->CPPmultinode134))++;
		return;
	case 135:
		(*(multiNodeUnion->CPPmultinode135))++;
		return;
	case 136:
		(*(multiNodeUnion->CPPmultinode136))++;
		return;
	case 137:
		(*(multiNodeUnion->CPPmultinode137))++;
		return;
	case 138:
		(*(multiNodeUnion->CPPmultinode138))++;
		return;
	case 139:
		(*(multiNodeUnion->CPPmultinode139))++;
		return;
	case 140:
		(*(multiNodeUnion->CPPmultinode140))++;
		return;
	case 141:
		(*(multiNodeUnion->CPPmultinode141))++;
		return;
	case 142:
		(*(multiNodeUnion->CPPmultinode142))++;
		return;
	case 143:
		(*(multiNodeUnion->CPPmultinode143))++;
		return;
	case 144:
		(*(multiNodeUnion->CPPmultinode144))++;
		return;
	case 145:
		(*(multiNodeUnion->CPPmultinode145))++;
		return;
	case 146:
		(*(multiNodeUnion->CPPmultinode146))++;
		return;
	case 147:
		(*(multiNodeUnion->CPPmultinode147))++;
		return;
	case 148:
		(*(multiNodeUnion->CPPmultinode148))++;
		return;
	case 149:
		(*(multiNodeUnion->CPPmultinode149))++;
		return;
	case 150:
		(*(multiNodeUnion->CPPmultinode150))++;
		return;
	case 151:
		(*(multiNodeUnion->CPPmultinode151))++;
		return;
	case 152:
		(*(multiNodeUnion->CPPmultinode152))++;
		return;
	case 153:
		(*(multiNodeUnion->CPPmultinode153))++;
		return;
	case 154:
		(*(multiNodeUnion->CPPmultinode154))++;
		return;
	case 155:
		(*(multiNodeUnion->CPPmultinode155))++;
		return;
	case 156:
		(*(multiNodeUnion->CPPmultinode156))++;
		return;
	case 157:
		(*(multiNodeUnion->CPPmultinode157))++;
		return;
	case 158:
		(*(multiNodeUnion->CPPmultinode158))++;
		return;
	case 159:
		(*(multiNodeUnion->CPPmultinode159))++;
		return;
	case 160:
		(*(multiNodeUnion->CPPmultinode160))++;
		return;
	case 161:
		(*(multiNodeUnion->CPPmultinode161))++;
		return;
	case 162:
		(*(multiNodeUnion->CPPmultinode162))++;
		return;
	case 163:
		(*(multiNodeUnion->CPPmultinode163))++;
		return;
	case 164:
		(*(multiNodeUnion->CPPmultinode164))++;
		return;
	case 165:
		(*(multiNodeUnion->CPPmultinode165))++;
		return;
	case 166:
		(*(multiNodeUnion->CPPmultinode166))++;
		return;
	case 167:
		(*(multiNodeUnion->CPPmultinode167))++;
		return;
	case 168:
		(*(multiNodeUnion->CPPmultinode168))++;
		return;
	case 169:
		(*(multiNodeUnion->CPPmultinode169))++;
		return;
	case 170:
		(*(multiNodeUnion->CPPmultinode170))++;
		return;
	case 171:
		(*(multiNodeUnion->CPPmultinode171))++;
		return;
	case 172:
		(*(multiNodeUnion->CPPmultinode172))++;
		return;
	case 173:
		(*(multiNodeUnion->CPPmultinode173))++;
		return;
	case 174:
		(*(multiNodeUnion->CPPmultinode174))++;
		return;
	case 175:
		(*(multiNodeUnion->CPPmultinode175))++;
		return;
	case 176:
		(*(multiNodeUnion->CPPmultinode176))++;
		return;
	case 177:
		(*(multiNodeUnion->CPPmultinode177))++;
		return;
	case 178:
		(*(multiNodeUnion->CPPmultinode178))++;
		return;
	case 179:
		(*(multiNodeUnion->CPPmultinode179))++;
		return;
	case 180:
		(*(multiNodeUnion->CPPmultinode180))++;
		return;
	case 181:
		(*(multiNodeUnion->CPPmultinode181))++;
		return;
	case 182:
		(*(multiNodeUnion->CPPmultinode182))++;
		return;
	case 183:
		(*(multiNodeUnion->CPPmultinode183))++;
		return;
	case 184:
		(*(multiNodeUnion->CPPmultinode184))++;
		return;
	case 185:
		(*(multiNodeUnion->CPPmultinode185))++;
		return;
	case 186:
		(*(multiNodeUnion->CPPmultinode186))++;
		return;
	case 187:
		(*(multiNodeUnion->CPPmultinode187))++;
		return;
	case 188:
		(*(multiNodeUnion->CPPmultinode188))++;
		return;
	case 189:
		(*(multiNodeUnion->CPPmultinode189))++;
		return;
	case 190:
		(*(multiNodeUnion->CPPmultinode190))++;
		return;
	case 191:
		(*(multiNodeUnion->CPPmultinode191))++;
		return;
	case 192:
		(*(multiNodeUnion->CPPmultinode192))++;
		return;
	case 193:
		(*(multiNodeUnion->CPPmultinode193))++;
		return;
	case 194:
		(*(multiNodeUnion->CPPmultinode194))++;
		return;
	case 195:
		(*(multiNodeUnion->CPPmultinode195))++;
		return;
	case 196:
		(*(multiNodeUnion->CPPmultinode196))++;
		return;
	}
}

generic<typename Key, typename Value>
void UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>::Previous()
{
	if (Object::ReferenceEquals(this, nullptr)) return;
	if (isInitialized == 0) return;
	switch (nKeyValueType)
	{
	case 0: default:
		return;
	case 1:
		(*(multiNodeUnion->CPPmultinode1))--;
		return;
	case 2:
		(*(multiNodeUnion->CPPmultinode2))--;
		return;
	case 3:
		(*(multiNodeUnion->CPPmultinode3))--;
		return;
	case 4:
		(*(multiNodeUnion->CPPmultinode4))--;
		return;
	case 5:
		(*(multiNodeUnion->CPPmultinode5))--;
		return;
	case 6:
		(*(multiNodeUnion->CPPmultinode6))--;
		return;
	case 7:
		(*(multiNodeUnion->CPPmultinode7))--;
		return;
	case 8:
		(*(multiNodeUnion->CPPmultinode8))--;
		return;
	case 9:
		(*(multiNodeUnion->CPPmultinode9))--;
		return;
	case 10:
		(*(multiNodeUnion->CPPmultinode10))--;
		return;
	case 11:
		(*(multiNodeUnion->CPPmultinode11))--;
		return;
	case 12:
		(*(multiNodeUnion->CPPmultinode12))--;
		return;
	case 13:
		(*(multiNodeUnion->CPPmultinode13))--;
		return;
	case 14:
		(*(multiNodeUnion->CPPmultinode14))--;
		return;
	case 15:
		(*(multiNodeUnion->CPPmultinode15))--;
		return;
	case 16:
		(*(multiNodeUnion->CPPmultinode16))--;
		return;
	case 17:
		(*(multiNodeUnion->CPPmultinode17))--;
		return;
	case 18:
		(*(multiNodeUnion->CPPmultinode18))--;
		return;
	case 19:
		(*(multiNodeUnion->CPPmultinode19))--;
		return;
	case 20:
		(*(multiNodeUnion->CPPmultinode20))--;
		return;
	case 21:
		(*(multiNodeUnion->CPPmultinode21))--;
		return;
	case 22:
		(*(multiNodeUnion->CPPmultinode22))--;
		return;
	case 23:
		(*(multiNodeUnion->CPPmultinode23))--;
		return;
	case 24:
		(*(multiNodeUnion->CPPmultinode24))--;
		return;
	case 25:
		(*(multiNodeUnion->CPPmultinode25))--;
		return;
	case 26:
		(*(multiNodeUnion->CPPmultinode26))--;
		return;
	case 27:
		(*(multiNodeUnion->CPPmultinode27))--;
		return;
	case 28:
		(*(multiNodeUnion->CPPmultinode28))--;
		return;
	case 29:
		(*(multiNodeUnion->CPPmultinode29))--;
		return;
	case 30:
		(*(multiNodeUnion->CPPmultinode30))--;
		return;
	case 31:
		(*(multiNodeUnion->CPPmultinode31))--;
		return;
	case 32:
		(*(multiNodeUnion->CPPmultinode32))--;
		return;
	case 33:
		(*(multiNodeUnion->CPPmultinode33))--;
		return;
	case 34:
		(*(multiNodeUnion->CPPmultinode34))--;
		return;
	case 35:
		(*(multiNodeUnion->CPPmultinode35))--;
		return;
	case 36:
		(*(multiNodeUnion->CPPmultinode36))--;
		return;
	case 37:
		(*(multiNodeUnion->CPPmultinode37))--;
		return;
	case 38:
		(*(multiNodeUnion->CPPmultinode38))--;
		return;
	case 39:
		(*(multiNodeUnion->CPPmultinode39))--;
		return;
	case 40:
		(*(multiNodeUnion->CPPmultinode40))--;
		return;
	case 41:
		(*(multiNodeUnion->CPPmultinode41))--;
		return;
	case 42:
		(*(multiNodeUnion->CPPmultinode42))--;
		return;
	case 43:
		(*(multiNodeUnion->CPPmultinode43))--;
		return;
	case 44:
		(*(multiNodeUnion->CPPmultinode44))--;
		return;
	case 45:
		(*(multiNodeUnion->CPPmultinode45))--;
		return;
	case 46:
		(*(multiNodeUnion->CPPmultinode46))--;
		return;
	case 47:
		(*(multiNodeUnion->CPPmultinode47))--;
		return;
	case 48:
		(*(multiNodeUnion->CPPmultinode48))--;
		return;
	case 49:
		(*(multiNodeUnion->CPPmultinode49))--;
		return;
	case 50:
		(*(multiNodeUnion->CPPmultinode50))--;
		return;
	case 51:
		(*(multiNodeUnion->CPPmultinode51))--;
		return;
	case 52:
		(*(multiNodeUnion->CPPmultinode52))--;
		return;
	case 53:
		(*(multiNodeUnion->CPPmultinode53))--;
		return;
	case 54:
		(*(multiNodeUnion->CPPmultinode54))--;
		return;
	case 55:
		(*(multiNodeUnion->CPPmultinode55))--;
		return;
	case 56:
		(*(multiNodeUnion->CPPmultinode56))--;
		return;
	case 57:
		(*(multiNodeUnion->CPPmultinode57))--;
		return;
	case 58:
		(*(multiNodeUnion->CPPmultinode58))--;
		return;
	case 59:
		(*(multiNodeUnion->CPPmultinode59))--;
		return;
	case 60:
		(*(multiNodeUnion->CPPmultinode60))--;
		return;
	case 61:
		(*(multiNodeUnion->CPPmultinode61))--;
		return;
	case 62:
		(*(multiNodeUnion->CPPmultinode62))--;
		return;
	case 63:
		(*(multiNodeUnion->CPPmultinode63))--;
		return;
	case 64:
		(*(multiNodeUnion->CPPmultinode64))--;
		return;
	case 65:
		(*(multiNodeUnion->CPPmultinode65))--;
		return;
	case 66:
		(*(multiNodeUnion->CPPmultinode66))--;
		return;
	case 67:
		(*(multiNodeUnion->CPPmultinode67))--;
		return;
	case 68:
		(*(multiNodeUnion->CPPmultinode68))--;
		return;
	case 69:
		(*(multiNodeUnion->CPPmultinode69))--;
		return;
	case 70:
		(*(multiNodeUnion->CPPmultinode70))--;
		return;
	case 71:
		(*(multiNodeUnion->CPPmultinode71))--;
		return;
	case 72:
		(*(multiNodeUnion->CPPmultinode72))--;
		return;
	case 73:
		(*(multiNodeUnion->CPPmultinode73))--;
		return;
	case 74:
		(*(multiNodeUnion->CPPmultinode74))--;
		return;
	case 75:
		(*(multiNodeUnion->CPPmultinode75))--;
		return;
	case 76:
		(*(multiNodeUnion->CPPmultinode76))--;
		return;
	case 77:
		(*(multiNodeUnion->CPPmultinode77))--;
		return;
	case 78:
		(*(multiNodeUnion->CPPmultinode78))--;
		return;
	case 79:
		(*(multiNodeUnion->CPPmultinode79))--;
		return;
	case 80:
		(*(multiNodeUnion->CPPmultinode80))--;
		return;
	case 81:
		(*(multiNodeUnion->CPPmultinode81))--;
		return;
	case 82:
		(*(multiNodeUnion->CPPmultinode82))--;
		return;
	case 83:
		(*(multiNodeUnion->CPPmultinode83))--;
		return;
	case 84:
		(*(multiNodeUnion->CPPmultinode84))--;
		return;
	case 85:
		(*(multiNodeUnion->CPPmultinode85))--;
		return;
	case 86:
		(*(multiNodeUnion->CPPmultinode86))--;
		return;
	case 87:
		(*(multiNodeUnion->CPPmultinode87))--;
		return;
	case 88:
		(*(multiNodeUnion->CPPmultinode88))--;
		return;
	case 89:
		(*(multiNodeUnion->CPPmultinode89))--;
		return;
	case 90:
		(*(multiNodeUnion->CPPmultinode90))--;
		return;
	case 91:
		(*(multiNodeUnion->CPPmultinode91))--;
		return;
	case 92:
		(*(multiNodeUnion->CPPmultinode92))--;
		return;
	case 93:
		(*(multiNodeUnion->CPPmultinode93))--;
		return;
	case 94:
		(*(multiNodeUnion->CPPmultinode94))--;
		return;
	case 95:
		(*(multiNodeUnion->CPPmultinode95))--;
		return;
	case 96:
		(*(multiNodeUnion->CPPmultinode96))--;
		return;
	case 97:
		(*(multiNodeUnion->CPPmultinode97))--;
		return;
	case 98:
		(*(multiNodeUnion->CPPmultinode98))--;
		return;
	case 99:
		(*(multiNodeUnion->CPPmultinode99))--;
		return;
	case 100:
		(*(multiNodeUnion->CPPmultinode100))--;
		return;
	case 101:
		(*(multiNodeUnion->CPPmultinode101))--;
		return;
	case 102:
		(*(multiNodeUnion->CPPmultinode102))--;
		return;
	case 103:
		(*(multiNodeUnion->CPPmultinode103))--;
		return;
	case 104:
		(*(multiNodeUnion->CPPmultinode104))--;
		return;
	case 105:
		(*(multiNodeUnion->CPPmultinode105))--;
		return;
	case 106:
		(*(multiNodeUnion->CPPmultinode106))--;
		return;
	case 107:
		(*(multiNodeUnion->CPPmultinode107))--;
		return;
	case 108:
		(*(multiNodeUnion->CPPmultinode108))--;
		return;
	case 109:
		(*(multiNodeUnion->CPPmultinode109))--;
		return;
	case 110:
		(*(multiNodeUnion->CPPmultinode110))--;
		return;
	case 111:
		(*(multiNodeUnion->CPPmultinode111))--;
		return;
	case 112:
		(*(multiNodeUnion->CPPmultinode112))--;
		return;
	case 113:
		(*(multiNodeUnion->CPPmultinode113))--;
		return;
	case 114:
		(*(multiNodeUnion->CPPmultinode114))--;
		return;
	case 115:
		(*(multiNodeUnion->CPPmultinode115))--;
		return;
	case 116:
		(*(multiNodeUnion->CPPmultinode116))--;
		return;
	case 117:
		(*(multiNodeUnion->CPPmultinode117))--;
		return;
	case 118:
		(*(multiNodeUnion->CPPmultinode118))--;
		return;
	case 119:
		(*(multiNodeUnion->CPPmultinode119))--;
		return;
	case 120:
		(*(multiNodeUnion->CPPmultinode120))--;
		return;
	case 121:
		(*(multiNodeUnion->CPPmultinode121))--;
		return;
	case 122:
		(*(multiNodeUnion->CPPmultinode122))--;
		return;
	case 123:
		(*(multiNodeUnion->CPPmultinode123))--;
		return;
	case 124:
		(*(multiNodeUnion->CPPmultinode124))--;
		return;
	case 125:
		(*(multiNodeUnion->CPPmultinode125))--;
		return;
	case 126:
		(*(multiNodeUnion->CPPmultinode126))--;
		return;
	case 127:
		(*(multiNodeUnion->CPPmultinode127))--;
		return;
	case 128:
		(*(multiNodeUnion->CPPmultinode128))--;
		return;
	case 129:
		(*(multiNodeUnion->CPPmultinode129))--;
		return;
	case 130:
		(*(multiNodeUnion->CPPmultinode130))--;
		return;
	case 131:
		(*(multiNodeUnion->CPPmultinode131))--;
		return;
	case 132:
		(*(multiNodeUnion->CPPmultinode132))--;
		return;
	case 133:
		(*(multiNodeUnion->CPPmultinode133))--;
		return;
	case 134:
		(*(multiNodeUnion->CPPmultinode134))--;
		return;
	case 135:
		(*(multiNodeUnion->CPPmultinode135))--;
		return;
	case 136:
		(*(multiNodeUnion->CPPmultinode136))--;
		return;
	case 137:
		(*(multiNodeUnion->CPPmultinode137))--;
		return;
	case 138:
		(*(multiNodeUnion->CPPmultinode138))--;
		return;
	case 139:
		(*(multiNodeUnion->CPPmultinode139))--;
		return;
	case 140:
		(*(multiNodeUnion->CPPmultinode140))--;
		return;
	case 141:
		(*(multiNodeUnion->CPPmultinode141))--;
		return;
	case 142:
		(*(multiNodeUnion->CPPmultinode142))--;
		return;
	case 143:
		(*(multiNodeUnion->CPPmultinode143))--;
		return;
	case 144:
		(*(multiNodeUnion->CPPmultinode144))--;
		return;
	case 145:
		(*(multiNodeUnion->CPPmultinode145))--;
		return;
	case 146:
		(*(multiNodeUnion->CPPmultinode146))--;
		return;
	case 147:
		(*(multiNodeUnion->CPPmultinode147))--;
		return;
	case 148:
		(*(multiNodeUnion->CPPmultinode148))--;
		return;
	case 149:
		(*(multiNodeUnion->CPPmultinode149))--;
		return;
	case 150:
		(*(multiNodeUnion->CPPmultinode150))--;
		return;
	case 151:
		(*(multiNodeUnion->CPPmultinode151))--;
		return;
	case 152:
		(*(multiNodeUnion->CPPmultinode152))--;
		return;
	case 153:
		(*(multiNodeUnion->CPPmultinode153))--;
		return;
	case 154:
		(*(multiNodeUnion->CPPmultinode154))--;
		return;
	case 155:
		(*(multiNodeUnion->CPPmultinode155))--;
		return;
	case 156:
		(*(multiNodeUnion->CPPmultinode156))--;
		return;
	case 157:
		(*(multiNodeUnion->CPPmultinode157))--;
		return;
	case 158:
		(*(multiNodeUnion->CPPmultinode158))--;
		return;
	case 159:
		(*(multiNodeUnion->CPPmultinode159))--;
		return;
	case 160:
		(*(multiNodeUnion->CPPmultinode160))--;
		return;
	case 161:
		(*(multiNodeUnion->CPPmultinode161))--;
		return;
	case 162:
		(*(multiNodeUnion->CPPmultinode162))--;
		return;
	case 163:
		(*(multiNodeUnion->CPPmultinode163))--;
		return;
	case 164:
		(*(multiNodeUnion->CPPmultinode164))--;
		return;
	case 165:
		(*(multiNodeUnion->CPPmultinode165))--;
		return;
	case 166:
		(*(multiNodeUnion->CPPmultinode166))--;
		return;
	case 167:
		(*(multiNodeUnion->CPPmultinode167))--;
		return;
	case 168:
		(*(multiNodeUnion->CPPmultinode168))--;
		return;
	case 169:
		(*(multiNodeUnion->CPPmultinode169))--;
		return;
	case 170:
		(*(multiNodeUnion->CPPmultinode170))--;
		return;
	case 171:
		(*(multiNodeUnion->CPPmultinode171))--;
		return;
	case 172:
		(*(multiNodeUnion->CPPmultinode172))--;
		return;
	case 173:
		(*(multiNodeUnion->CPPmultinode173))--;
		return;
	case 174:
		(*(multiNodeUnion->CPPmultinode174))--;
		return;
	case 175:
		(*(multiNodeUnion->CPPmultinode175))--;
		return;
	case 176:
		(*(multiNodeUnion->CPPmultinode176))--;
		return;
	case 177:
		(*(multiNodeUnion->CPPmultinode177))--;
		return;
	case 178:
		(*(multiNodeUnion->CPPmultinode178))--;
		return;
	case 179:
		(*(multiNodeUnion->CPPmultinode179))--;
		return;
	case 180:
		(*(multiNodeUnion->CPPmultinode180))--;
		return;
	case 181:
		(*(multiNodeUnion->CPPmultinode181))--;
		return;
	case 182:
		(*(multiNodeUnion->CPPmultinode182))--;
		return;
	case 183:
		(*(multiNodeUnion->CPPmultinode183))--;
		return;
	case 184:
		(*(multiNodeUnion->CPPmultinode184))--;
		return;
	case 185:
		(*(multiNodeUnion->CPPmultinode185))--;
		return;
	case 186:
		(*(multiNodeUnion->CPPmultinode186))--;
		return;
	case 187:
		(*(multiNodeUnion->CPPmultinode187))--;
		return;
	case 188:
		(*(multiNodeUnion->CPPmultinode188))--;
		return;
	case 189:
		(*(multiNodeUnion->CPPmultinode189))--;
		return;
	case 190:
		(*(multiNodeUnion->CPPmultinode190))--;
		return;
	case 191:
		(*(multiNodeUnion->CPPmultinode191))--;
		return;
	case 192:
		(*(multiNodeUnion->CPPmultinode192))--;
		return;
	case 193:
		(*(multiNodeUnion->CPPmultinode193))--;
		return;
	case 194:
		(*(multiNodeUnion->CPPmultinode194))--;
		return;
	case 195:
		(*(multiNodeUnion->CPPmultinode195))--;
		return;
	case 196:
		(*(multiNodeUnion->CPPmultinode196))--;
		return;
	}
}


generic<typename Key, typename Value>
Value UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>::GetValue()
{
	if (this == nullptr) return Value();
	if (isInitialized == 0) return Value();
	System::Object^ managedValue;
	Value objtarget;
	switch (nKeyValueType)
	{
	case 0: default:
		return Value();
	case 1:
		managedValue = gcnew System::Byte(multiNodeUnion->CPPmultinode1->GetValue());
		return safe_cast<Value>(managedValue);
	case 2:
		managedValue = gcnew System::SByte(multiNodeUnion->CPPmultinode2->GetValue());
		return safe_cast<Value>(managedValue);
	case 3:
		managedValue = gcnew System::Int16(multiNodeUnion->CPPmultinode3->GetValue());
		return safe_cast<Value>(managedValue);
	case 4:
		managedValue = gcnew System::UInt16(multiNodeUnion->CPPmultinode4->GetValue());
		return safe_cast<Value>(managedValue);
	case 5:
		managedValue = gcnew System::Int32(multiNodeUnion->CPPmultinode5->GetValue());
		return safe_cast<Value>(managedValue);
	case 6:
		managedValue = gcnew System::UInt32(multiNodeUnion->CPPmultinode6->GetValue());
		return safe_cast<Value>(managedValue);
	case 7:
		managedValue = gcnew System::Int64(multiNodeUnion->CPPmultinode7->GetValue());
		return safe_cast<Value>(managedValue);
	case 8:
		managedValue = gcnew System::UInt64(multiNodeUnion->CPPmultinode8->GetValue());
		return safe_cast<Value>(managedValue);
	case 9:
		managedValue = gcnew System::Single(multiNodeUnion->CPPmultinode9->GetValue());
		return safe_cast<Value>(managedValue);
	case 10:
		managedValue = gcnew System::Double(multiNodeUnion->CPPmultinode10->GetValue());
		return safe_cast<Value>(managedValue);
	case 11:
		managedValue = gcnew System::Char(multiNodeUnion->CPPmultinode11->GetValue());
		return safe_cast<Value>(managedValue);
	case 12:
		managedValue = gcnew System::Boolean(multiNodeUnion->CPPmultinode12->GetValue());
		return safe_cast<Value>(managedValue);
	case 13:
		managedValue = gcnew String(multiNodeUnion->CPPmultinode13->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 15:
		managedValue = gcnew System::Byte(multiNodeUnion->CPPmultinode15->GetValue());
		return safe_cast<Value>(managedValue);
	case 16:
		managedValue = gcnew System::SByte(multiNodeUnion->CPPmultinode16->GetValue());
		return safe_cast<Value>(managedValue);
	case 17:
		managedValue = gcnew System::Int16(multiNodeUnion->CPPmultinode17->GetValue());
		return safe_cast<Value>(managedValue);
	case 18:
		managedValue = gcnew System::UInt16(multiNodeUnion->CPPmultinode18->GetValue());
		return safe_cast<Value>(managedValue);
	case 19:
		managedValue = gcnew System::Int32(multiNodeUnion->CPPmultinode19->GetValue());
		return safe_cast<Value>(managedValue);
	case 20:
		managedValue = gcnew System::UInt32(multiNodeUnion->CPPmultinode20->GetValue());
		return safe_cast<Value>(managedValue);
	case 21:
		managedValue = gcnew System::Int64(multiNodeUnion->CPPmultinode21->GetValue());
		return safe_cast<Value>(managedValue);
	case 22:
		managedValue = gcnew System::UInt64(multiNodeUnion->CPPmultinode22->GetValue());
		return safe_cast<Value>(managedValue);
	case 23:
		managedValue = gcnew System::Single(multiNodeUnion->CPPmultinode23->GetValue());
		return safe_cast<Value>(managedValue);
	case 24:
		managedValue = gcnew System::Double(multiNodeUnion->CPPmultinode24->GetValue());
		return safe_cast<Value>(managedValue);
	case 25:
		managedValue = gcnew System::Char(multiNodeUnion->CPPmultinode25->GetValue());
		return safe_cast<Value>(managedValue);
	case 26:
		managedValue = gcnew System::Boolean(multiNodeUnion->CPPmultinode26->GetValue());
		return safe_cast<Value>(managedValue);
	case 27:
		managedValue = gcnew String(multiNodeUnion->CPPmultinode27->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 29:
		managedValue = gcnew System::Byte(multiNodeUnion->CPPmultinode29->GetValue());
		return safe_cast<Value>(managedValue);
	case 30:
		managedValue = gcnew System::SByte(multiNodeUnion->CPPmultinode30->GetValue());
		return safe_cast<Value>(managedValue);
	case 31:
		managedValue = gcnew System::Int16(multiNodeUnion->CPPmultinode31->GetValue());
		return safe_cast<Value>(managedValue);
	case 32:
		managedValue = gcnew System::UInt16(multiNodeUnion->CPPmultinode32->GetValue());
		return safe_cast<Value>(managedValue);
	case 33:
		managedValue = gcnew System::Int32(multiNodeUnion->CPPmultinode33->GetValue());
		return safe_cast<Value>(managedValue);
	case 34:
		managedValue = gcnew System::UInt32(multiNodeUnion->CPPmultinode34->GetValue());
		return safe_cast<Value>(managedValue);
	case 35:
		managedValue = gcnew System::Int64(multiNodeUnion->CPPmultinode35->GetValue());
		return safe_cast<Value>(managedValue);
	case 36:
		managedValue = gcnew System::UInt64(multiNodeUnion->CPPmultinode36->GetValue());
		return safe_cast<Value>(managedValue);
	case 37:
		managedValue = gcnew System::Single(multiNodeUnion->CPPmultinode37->GetValue());
		return safe_cast<Value>(managedValue);
	case 38:
		managedValue = gcnew System::Double(multiNodeUnion->CPPmultinode38->GetValue());
		return safe_cast<Value>(managedValue);
	case 39:
		managedValue = gcnew System::Char(multiNodeUnion->CPPmultinode39->GetValue());
		return safe_cast<Value>(managedValue);
	case 40:
		managedValue = gcnew System::Boolean(multiNodeUnion->CPPmultinode40->GetValue());
		return safe_cast<Value>(managedValue);
	case 41:
		managedValue = gcnew String(multiNodeUnion->CPPmultinode41->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 43:
		managedValue = gcnew System::Byte(multiNodeUnion->CPPmultinode43->GetValue());
		return safe_cast<Value>(managedValue);
	case 44:
		managedValue = gcnew System::SByte(multiNodeUnion->CPPmultinode44->GetValue());
		return safe_cast<Value>(managedValue);
	case 45:
		managedValue = gcnew System::Int16(multiNodeUnion->CPPmultinode45->GetValue());
		return safe_cast<Value>(managedValue);
	case 46:
		managedValue = gcnew System::UInt16(multiNodeUnion->CPPmultinode46->GetValue());
		return safe_cast<Value>(managedValue);
	case 47:
		managedValue = gcnew System::Int32(multiNodeUnion->CPPmultinode47->GetValue());
		return safe_cast<Value>(managedValue);
	case 48:
		managedValue = gcnew System::UInt32(multiNodeUnion->CPPmultinode48->GetValue());
		return safe_cast<Value>(managedValue);
	case 49:
		managedValue = gcnew System::Int64(multiNodeUnion->CPPmultinode49->GetValue());
		return safe_cast<Value>(managedValue);
	case 50:
		managedValue = gcnew System::UInt64(multiNodeUnion->CPPmultinode50->GetValue());
		return safe_cast<Value>(managedValue);
	case 51:
		managedValue = gcnew System::Single(multiNodeUnion->CPPmultinode51->GetValue());
		return safe_cast<Value>(managedValue);
	case 52:
		managedValue = gcnew System::Double(multiNodeUnion->CPPmultinode52->GetValue());
		return safe_cast<Value>(managedValue);
	case 53:
		managedValue = gcnew System::Char(multiNodeUnion->CPPmultinode53->GetValue());
		return safe_cast<Value>(managedValue);
	case 54:
		managedValue = gcnew System::Boolean(multiNodeUnion->CPPmultinode54->GetValue());
		return safe_cast<Value>(managedValue);
	case 55:
		managedValue = gcnew String(multiNodeUnion->CPPmultinode55->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 57:
		managedValue = gcnew System::Byte(multiNodeUnion->CPPmultinode57->GetValue());
		return safe_cast<Value>(managedValue);
	case 58:
		managedValue = gcnew System::SByte(multiNodeUnion->CPPmultinode58->GetValue());
		return safe_cast<Value>(managedValue);
	case 59:
		managedValue = gcnew System::Int16(multiNodeUnion->CPPmultinode59->GetValue());
		return safe_cast<Value>(managedValue);
	case 60:
		managedValue = gcnew System::UInt16(multiNodeUnion->CPPmultinode60->GetValue());
		return safe_cast<Value>(managedValue);
	case 61:
		managedValue = gcnew System::Int32(multiNodeUnion->CPPmultinode61->GetValue());
		return safe_cast<Value>(managedValue);
	case 62:
		managedValue = gcnew System::UInt32(multiNodeUnion->CPPmultinode62->GetValue());
		return safe_cast<Value>(managedValue);
	case 63:
		managedValue = gcnew System::Int64(multiNodeUnion->CPPmultinode63->GetValue());
		return safe_cast<Value>(managedValue);
	case 64:
		managedValue = gcnew System::UInt64(multiNodeUnion->CPPmultinode64->GetValue());
		return safe_cast<Value>(managedValue);
	case 65:
		managedValue = gcnew System::Single(multiNodeUnion->CPPmultinode65->GetValue());
		return safe_cast<Value>(managedValue);
	case 66:
		managedValue = gcnew System::Double(multiNodeUnion->CPPmultinode66->GetValue());
		return safe_cast<Value>(managedValue);
	case 67:
		managedValue = gcnew System::Char(multiNodeUnion->CPPmultinode67->GetValue());
		return safe_cast<Value>(managedValue);
	case 68:
		managedValue = gcnew System::Boolean(multiNodeUnion->CPPmultinode68->GetValue());
		return safe_cast<Value>(managedValue);
	case 69:
		managedValue = gcnew String(multiNodeUnion->CPPmultinode69->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 71:
		managedValue = gcnew System::Byte(multiNodeUnion->CPPmultinode71->GetValue());
		return safe_cast<Value>(managedValue);
	case 72:
		managedValue = gcnew System::SByte(multiNodeUnion->CPPmultinode72->GetValue());
		return safe_cast<Value>(managedValue);
	case 73:
		managedValue = gcnew System::Int16(multiNodeUnion->CPPmultinode73->GetValue());
		return safe_cast<Value>(managedValue);
	case 74:
		managedValue = gcnew System::UInt16(multiNodeUnion->CPPmultinode74->GetValue());
		return safe_cast<Value>(managedValue);
	case 75:
		managedValue = gcnew System::Int32(multiNodeUnion->CPPmultinode75->GetValue());
		return safe_cast<Value>(managedValue);
	case 76:
		managedValue = gcnew System::UInt32(multiNodeUnion->CPPmultinode76->GetValue());
		return safe_cast<Value>(managedValue);
	case 77:
		managedValue = gcnew System::Int64(multiNodeUnion->CPPmultinode77->GetValue());
		return safe_cast<Value>(managedValue);
	case 78:
		managedValue = gcnew System::UInt64(multiNodeUnion->CPPmultinode78->GetValue());
		return safe_cast<Value>(managedValue);
	case 79:
		managedValue = gcnew System::Single(multiNodeUnion->CPPmultinode79->GetValue());
		return safe_cast<Value>(managedValue);
	case 80:
		managedValue = gcnew System::Double(multiNodeUnion->CPPmultinode80->GetValue());
		return safe_cast<Value>(managedValue);
	case 81:
		managedValue = gcnew System::Char(multiNodeUnion->CPPmultinode81->GetValue());
		return safe_cast<Value>(managedValue);
	case 82:
		managedValue = gcnew System::Boolean(multiNodeUnion->CPPmultinode82->GetValue());
		return safe_cast<Value>(managedValue);
	case 83:
		managedValue = gcnew String(multiNodeUnion->CPPmultinode83->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 85:
		managedValue = gcnew System::Byte(multiNodeUnion->CPPmultinode85->GetValue());
		return safe_cast<Value>(managedValue);
	case 86:
		managedValue = gcnew System::SByte(multiNodeUnion->CPPmultinode86->GetValue());
		return safe_cast<Value>(managedValue);
	case 87:
		managedValue = gcnew System::Int16(multiNodeUnion->CPPmultinode87->GetValue());
		return safe_cast<Value>(managedValue);
	case 88:
		managedValue = gcnew System::UInt16(multiNodeUnion->CPPmultinode88->GetValue());
		return safe_cast<Value>(managedValue);
	case 89:
		managedValue = gcnew System::Int32(multiNodeUnion->CPPmultinode89->GetValue());
		return safe_cast<Value>(managedValue);
	case 90:
		managedValue = gcnew System::UInt32(multiNodeUnion->CPPmultinode90->GetValue());
		return safe_cast<Value>(managedValue);
	case 91:
		managedValue = gcnew System::Int64(multiNodeUnion->CPPmultinode91->GetValue());
		return safe_cast<Value>(managedValue);
	case 92:
		managedValue = gcnew System::UInt64(multiNodeUnion->CPPmultinode92->GetValue());
		return safe_cast<Value>(managedValue);
	case 93:
		managedValue = gcnew System::Single(multiNodeUnion->CPPmultinode93->GetValue());
		return safe_cast<Value>(managedValue);
	case 94:
		managedValue = gcnew System::Double(multiNodeUnion->CPPmultinode94->GetValue());
		return safe_cast<Value>(managedValue);
	case 95:
		managedValue = gcnew System::Char(multiNodeUnion->CPPmultinode95->GetValue());
		return safe_cast<Value>(managedValue);
	case 96:
		managedValue = gcnew System::Boolean(multiNodeUnion->CPPmultinode96->GetValue());
		return safe_cast<Value>(managedValue);
	case 97:
		managedValue = gcnew String(multiNodeUnion->CPPmultinode97->GetValue().c_str());
		return safe_cast<Value>(managedValue);

	case 99:
		managedValue = gcnew System::Byte(multiNodeUnion->CPPmultinode99->GetValue());
		return safe_cast<Value>(managedValue);
	case 100:
		managedValue = gcnew System::SByte(multiNodeUnion->CPPmultinode100->GetValue());
		return safe_cast<Value>(managedValue);
	case 101:
		managedValue = gcnew System::Int16(multiNodeUnion->CPPmultinode101->GetValue());
		return safe_cast<Value>(managedValue);
	case 102:
		managedValue = gcnew System::UInt16(multiNodeUnion->CPPmultinode102->GetValue());
		return safe_cast<Value>(managedValue);
	case 103:
		managedValue = gcnew System::Int32(multiNodeUnion->CPPmultinode103->GetValue());
		return safe_cast<Value>(managedValue);
	case 104:
		managedValue = gcnew System::UInt32(multiNodeUnion->CPPmultinode104->GetValue());
		return safe_cast<Value>(managedValue);
	case 105:
		managedValue = gcnew System::Int64(multiNodeUnion->CPPmultinode105->GetValue());
		return safe_cast<Value>(managedValue);
	case 106:
		managedValue = gcnew System::UInt64(multiNodeUnion->CPPmultinode106->GetValue());
		return safe_cast<Value>(managedValue);
	case 107:
		managedValue = gcnew System::Single(multiNodeUnion->CPPmultinode107->GetValue());
		return safe_cast<Value>(managedValue);
	case 108:
		managedValue = gcnew System::Double(multiNodeUnion->CPPmultinode108->GetValue());
		return safe_cast<Value>(managedValue);
	case 109:
		managedValue = gcnew System::Char(multiNodeUnion->CPPmultinode109->GetValue());
		return safe_cast<Value>(managedValue);
	case 110:
		managedValue = gcnew System::Boolean(multiNodeUnion->CPPmultinode110->GetValue());
		return safe_cast<Value>(managedValue);
	case 111:
		managedValue = gcnew String(multiNodeUnion->CPPmultinode111->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 113:
		managedValue = gcnew System::Byte(multiNodeUnion->CPPmultinode113->GetValue());
		return safe_cast<Value>(managedValue);
	case 114:
		managedValue = gcnew System::SByte(multiNodeUnion->CPPmultinode114->GetValue());
		return safe_cast<Value>(managedValue);
	case 115:
		managedValue = gcnew System::Int16(multiNodeUnion->CPPmultinode115->GetValue());
		return safe_cast<Value>(managedValue);
	case 116:
		managedValue = gcnew System::UInt16(multiNodeUnion->CPPmultinode116->GetValue());
		return safe_cast<Value>(managedValue);
	case 117:
		managedValue = gcnew System::Int32(multiNodeUnion->CPPmultinode117->GetValue());
		return safe_cast<Value>(managedValue);
	case 118:
		managedValue = gcnew System::UInt32(multiNodeUnion->CPPmultinode118->GetValue());
		return safe_cast<Value>(managedValue);
	case 119:
		managedValue = gcnew System::Int64(multiNodeUnion->CPPmultinode119->GetValue());
		return safe_cast<Value>(managedValue);
	case 120:
		managedValue = gcnew System::UInt64(multiNodeUnion->CPPmultinode120->GetValue());
		return safe_cast<Value>(managedValue);
	case 121:
		managedValue = gcnew System::Single(multiNodeUnion->CPPmultinode121->GetValue());
		return safe_cast<Value>(managedValue);
	case 122:
		managedValue = gcnew System::Double(multiNodeUnion->CPPmultinode122->GetValue());
		return safe_cast<Value>(managedValue);
	case 123:
		managedValue = gcnew System::Char(multiNodeUnion->CPPmultinode123->GetValue());
		return safe_cast<Value>(managedValue);
	case 124:
		managedValue = gcnew System::Boolean(multiNodeUnion->CPPmultinode124->GetValue());
		return safe_cast<Value>(managedValue);
	case 125:
		managedValue = gcnew String(multiNodeUnion->CPPmultinode125->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 127:
		managedValue = gcnew System::Byte(multiNodeUnion->CPPmultinode127->GetValue());
		return safe_cast<Value>(managedValue);
	case 128:
		managedValue = gcnew System::SByte(multiNodeUnion->CPPmultinode128->GetValue());
		return safe_cast<Value>(managedValue);
	case 129:
		managedValue = gcnew System::Int16(multiNodeUnion->CPPmultinode129->GetValue());
		return safe_cast<Value>(managedValue);
	case 130:
		managedValue = gcnew System::UInt16(multiNodeUnion->CPPmultinode130->GetValue());
		return safe_cast<Value>(managedValue);
	case 131:
		managedValue = gcnew System::Int32(multiNodeUnion->CPPmultinode131->GetValue());
		return safe_cast<Value>(managedValue);
	case 132:
		managedValue = gcnew System::UInt32(multiNodeUnion->CPPmultinode132->GetValue());
		return safe_cast<Value>(managedValue);
	case 133:
		managedValue = gcnew System::Int64(multiNodeUnion->CPPmultinode133->GetValue());
		return safe_cast<Value>(managedValue);
	case 134:
		managedValue = gcnew System::UInt64(multiNodeUnion->CPPmultinode134->GetValue());
		return safe_cast<Value>(managedValue);
	case 135:
		managedValue = gcnew System::Single(multiNodeUnion->CPPmultinode135->GetValue());
		return safe_cast<Value>(managedValue);
	case 136:
		managedValue = gcnew System::Double(multiNodeUnion->CPPmultinode136->GetValue());
		return safe_cast<Value>(managedValue);
	case 137:
		managedValue = gcnew System::Char(multiNodeUnion->CPPmultinode137->GetValue());
		return safe_cast<Value>(managedValue);
	case 138:
		managedValue = gcnew System::Boolean(multiNodeUnion->CPPmultinode138->GetValue());
		return safe_cast<Value>(managedValue);
	case 139:
		managedValue = gcnew String(multiNodeUnion->CPPmultinode139->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 141:
		managedValue = gcnew System::Byte(multiNodeUnion->CPPmultinode141->GetValue());
		return safe_cast<Value>(managedValue);
	case 142:
		managedValue = gcnew System::SByte(multiNodeUnion->CPPmultinode142->GetValue());
		return safe_cast<Value>(managedValue);
	case 143:
		managedValue = gcnew System::Int16(multiNodeUnion->CPPmultinode143->GetValue());
		return safe_cast<Value>(managedValue);
	case 144:
		managedValue = gcnew System::UInt16(multiNodeUnion->CPPmultinode144->GetValue());
		return safe_cast<Value>(managedValue);
	case 145:
		managedValue = gcnew System::Int32(multiNodeUnion->CPPmultinode145->GetValue());
		return safe_cast<Value>(managedValue);
	case 146:
		managedValue = gcnew System::UInt32(multiNodeUnion->CPPmultinode146->GetValue());
		return safe_cast<Value>(managedValue);
	case 147:
		managedValue = gcnew System::Int64(multiNodeUnion->CPPmultinode147->GetValue());
		return safe_cast<Value>(managedValue);
	case 148:
		managedValue = gcnew System::UInt64(multiNodeUnion->CPPmultinode148->GetValue());
		return safe_cast<Value>(managedValue);
	case 149:
		managedValue = gcnew System::Single(multiNodeUnion->CPPmultinode149->GetValue());
		return safe_cast<Value>(managedValue);
	case 150:
		managedValue = gcnew System::Double(multiNodeUnion->CPPmultinode150->GetValue());
		return safe_cast<Value>(managedValue);
	case 151:
		managedValue = gcnew System::Char(multiNodeUnion->CPPmultinode151->GetValue());
		return safe_cast<Value>(managedValue);
	case 152:
		managedValue = gcnew System::Boolean(multiNodeUnion->CPPmultinode152->GetValue());
		return safe_cast<Value>(managedValue);
	case 153:
		managedValue = gcnew String(multiNodeUnion->CPPmultinode153->GetValue().c_str());
		return safe_cast<Value>(managedValue);

	case 155:
		managedValue = gcnew System::Byte(multiNodeUnion->CPPmultinode155->GetValue());
		return safe_cast<Value>(managedValue);
	case 156:
		managedValue = gcnew System::SByte(multiNodeUnion->CPPmultinode156->GetValue());
		return safe_cast<Value>(managedValue);
	case 157:
		managedValue = gcnew System::Int16(multiNodeUnion->CPPmultinode157->GetValue());
		return safe_cast<Value>(managedValue);
	case 158:
		managedValue = gcnew System::UInt16(multiNodeUnion->CPPmultinode158->GetValue());
		return safe_cast<Value>(managedValue);
	case 159:
		managedValue = gcnew System::Int32(multiNodeUnion->CPPmultinode159->GetValue());
		return safe_cast<Value>(managedValue);
	case 160:
		managedValue = gcnew System::UInt32(multiNodeUnion->CPPmultinode160->GetValue());
		return safe_cast<Value>(managedValue);
	case 161:
		managedValue = gcnew System::Int64(multiNodeUnion->CPPmultinode161->GetValue());
		return safe_cast<Value>(managedValue);
	case 162:
		managedValue = gcnew System::UInt64(multiNodeUnion->CPPmultinode162->GetValue());
		return safe_cast<Value>(managedValue);
	case 163:
		managedValue = gcnew System::Single(multiNodeUnion->CPPmultinode163->GetValue());
		return safe_cast<Value>(managedValue);
	case 164:
		managedValue = gcnew System::Double(multiNodeUnion->CPPmultinode164->GetValue());
		return safe_cast<Value>(managedValue);
	case 165:
		managedValue = gcnew System::Char(multiNodeUnion->CPPmultinode165->GetValue());
		return safe_cast<Value>(managedValue);
	case 166:
		managedValue = gcnew System::Boolean(multiNodeUnion->CPPmultinode166->GetValue());
		return safe_cast<Value>(managedValue);
	case 167:
		managedValue = gcnew String(multiNodeUnion->CPPmultinode167->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 169:
		managedValue = gcnew System::Byte(multiNodeUnion->CPPmultinode169->GetValue());
		return safe_cast<Value>(managedValue);
	case 170:
		managedValue = gcnew System::SByte(multiNodeUnion->CPPmultinode170->GetValue());
		return safe_cast<Value>(managedValue);
	case 171:
		managedValue = gcnew System::Int16(multiNodeUnion->CPPmultinode171->GetValue());
		return safe_cast<Value>(managedValue);
	case 172:
		managedValue = gcnew System::UInt16(multiNodeUnion->CPPmultinode172->GetValue());
		return safe_cast<Value>(managedValue);
	case 173:
		managedValue = gcnew System::Int32(multiNodeUnion->CPPmultinode173->GetValue());
		return safe_cast<Value>(managedValue);
	case 174:
		managedValue = gcnew System::UInt32(multiNodeUnion->CPPmultinode174->GetValue());
		return safe_cast<Value>(managedValue);
	case 175:
		managedValue = gcnew System::Int64(multiNodeUnion->CPPmultinode175->GetValue());
		return safe_cast<Value>(managedValue);
	case 176:
		managedValue = gcnew System::UInt64(multiNodeUnion->CPPmultinode176->GetValue());
		return safe_cast<Value>(managedValue);
	case 177:
		managedValue = gcnew System::Single(multiNodeUnion->CPPmultinode177->GetValue());
		return safe_cast<Value>(managedValue);
	case 178:
		managedValue = gcnew System::Double(multiNodeUnion->CPPmultinode178->GetValue());
		return safe_cast<Value>(managedValue);
	case 179:
		managedValue = gcnew System::Char(multiNodeUnion->CPPmultinode179->GetValue());
		return safe_cast<Value>(managedValue);
	case 180:
		managedValue = gcnew System::Boolean(multiNodeUnion->CPPmultinode180->GetValue());
		return safe_cast<Value>(managedValue);
	case 181:
		managedValue = gcnew String(multiNodeUnion->CPPmultinode181->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 183:
		managedValue = gcnew System::Byte(multiNodeUnion->CPPmultinode183->GetValue());
		return safe_cast<Value>(managedValue);
	case 184:
		managedValue = gcnew System::SByte(multiNodeUnion->CPPmultinode184->GetValue());
		return safe_cast<Value>(managedValue);
	case 185:
		managedValue = gcnew System::Int16(multiNodeUnion->CPPmultinode185->GetValue());
		return safe_cast<Value>(managedValue);
	case 186:
		managedValue = gcnew System::UInt16(multiNodeUnion->CPPmultinode186->GetValue());
		return safe_cast<Value>(managedValue);
	case 187:
		managedValue = gcnew System::Int32(multiNodeUnion->CPPmultinode187->GetValue());
		return safe_cast<Value>(managedValue);
	case 188:
		managedValue = gcnew System::UInt32(multiNodeUnion->CPPmultinode188->GetValue());
		return safe_cast<Value>(managedValue);
	case 189:
		managedValue = gcnew System::Int64(multiNodeUnion->CPPmultinode189->GetValue());
		return safe_cast<Value>(managedValue);
	case 190:
		managedValue = gcnew System::UInt64(multiNodeUnion->CPPmultinode190->GetValue());
		return safe_cast<Value>(managedValue);
	case 191:
		managedValue = gcnew System::Single(multiNodeUnion->CPPmultinode191->GetValue());
		return safe_cast<Value>(managedValue);
	case 192:
		managedValue = gcnew System::Double(multiNodeUnion->CPPmultinode192->GetValue());
		return safe_cast<Value>(managedValue);
	case 193:
		managedValue = gcnew System::Char(multiNodeUnion->CPPmultinode193->GetValue());
		return safe_cast<Value>(managedValue);
	case 194:
		managedValue = gcnew System::Boolean(multiNodeUnion->CPPmultinode194->GetValue());
		return safe_cast<Value>(managedValue);
	case 195:
		managedValue = gcnew String(multiNodeUnion->CPPmultinode195->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 14:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiNodeUnion->CPPmultinode14->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 28:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiNodeUnion->CPPmultinode28->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 42:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiNodeUnion->CPPmultinode42->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 56:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiNodeUnion->CPPmultinode56->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 70:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiNodeUnion->CPPmultinode70->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 84:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiNodeUnion->CPPmultinode84->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 98:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiNodeUnion->CPPmultinode98->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 112:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiNodeUnion->CPPmultinode112->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 126:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiNodeUnion->CPPmultinode126->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 140:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiNodeUnion->CPPmultinode140->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 154:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiNodeUnion->CPPmultinode154->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 168:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiNodeUnion->CPPmultinode168->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 182:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiNodeUnion->CPPmultinode182->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 196:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiNodeUnion->CPPmultinode196->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	}
	return Value();
}

generic<typename Key, typename Value>
Key UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>::GetKey()
{
	if (Object::ReferenceEquals(this, nullptr)) return Key();
	if (isInitialized == 0) return Key();
	System::Object^ managedKey;
	Key objtarget;
	switch (nKeyValueType)
	{
	case 0: default:
		return Key();
	case 1:
		managedKey = gcnew System::Byte(multiNodeUnion->CPPmultinode1->GetKey());
		return safe_cast<Key>(managedKey);
	case 2:
		managedKey = gcnew System::Byte(multiNodeUnion->CPPmultinode2->GetKey());
		return safe_cast<Key>(managedKey);
	case 3:
		managedKey = gcnew System::Byte(multiNodeUnion->CPPmultinode3->GetKey());
		return safe_cast<Key>(managedKey);
	case 4:
		managedKey = gcnew System::Byte(multiNodeUnion->CPPmultinode4->GetKey());
		return safe_cast<Key>(managedKey);
	case 5:
		managedKey = gcnew System::Byte(multiNodeUnion->CPPmultinode5->GetKey());
		return safe_cast<Key>(managedKey);
	case 6:
		managedKey = gcnew System::Byte(multiNodeUnion->CPPmultinode6->GetKey());
		return safe_cast<Key>(managedKey);
	case 7:
		managedKey = gcnew System::Byte(multiNodeUnion->CPPmultinode7->GetKey());
		return safe_cast<Key>(managedKey);
	case 8:
		managedKey = gcnew System::Byte(multiNodeUnion->CPPmultinode8->GetKey());
		return safe_cast<Key>(managedKey);
	case 9:
		managedKey = gcnew System::Byte(multiNodeUnion->CPPmultinode9->GetKey());
		return safe_cast<Key>(managedKey);
	case 10:
		managedKey = gcnew System::Byte(multiNodeUnion->CPPmultinode10->GetKey());
		return safe_cast<Key>(managedKey);
	case 11:
		managedKey = gcnew System::Byte(multiNodeUnion->CPPmultinode11->GetKey());
		return safe_cast<Key>(managedKey);
	case 12:
		managedKey = gcnew System::Byte(multiNodeUnion->CPPmultinode12->GetKey());
		return safe_cast<Key>(managedKey);
	case 13:
		managedKey = gcnew System::Byte(multiNodeUnion->CPPmultinode13->GetKey());
		return safe_cast<Key>(managedKey);
	case 14:
		managedKey = gcnew System::Byte(multiNodeUnion->CPPmultinode14->GetKey());
		return safe_cast<Key>(managedKey);
	case 15:
		managedKey = gcnew System::SByte(multiNodeUnion->CPPmultinode15->GetKey());
		return safe_cast<Key>(managedKey);
	case 16:
		managedKey = gcnew System::SByte(multiNodeUnion->CPPmultinode16->GetKey());
		return safe_cast<Key>(managedKey);
	case 17:
		managedKey = gcnew System::SByte(multiNodeUnion->CPPmultinode17->GetKey());
		return safe_cast<Key>(managedKey);
	case 18:
		managedKey = gcnew System::SByte(multiNodeUnion->CPPmultinode18->GetKey());
		return safe_cast<Key>(managedKey);
	case 19:
		managedKey = gcnew System::SByte(multiNodeUnion->CPPmultinode19->GetKey());
		return safe_cast<Key>(managedKey);
	case 20:
		managedKey = gcnew System::SByte(multiNodeUnion->CPPmultinode20->GetKey());
		return safe_cast<Key>(managedKey);
	case 21:
		managedKey = gcnew System::SByte(multiNodeUnion->CPPmultinode21->GetKey());
		return safe_cast<Key>(managedKey);
	case 22:
		managedKey = gcnew System::SByte(multiNodeUnion->CPPmultinode22->GetKey());
		return safe_cast<Key>(managedKey);
	case 23:
		managedKey = gcnew System::SByte(multiNodeUnion->CPPmultinode23->GetKey());
		return safe_cast<Key>(managedKey);
	case 24:
		managedKey = gcnew System::SByte(multiNodeUnion->CPPmultinode24->GetKey());
		return safe_cast<Key>(managedKey);
	case 25:
		managedKey = gcnew System::SByte(multiNodeUnion->CPPmultinode25->GetKey());
		return safe_cast<Key>(managedKey);
	case 26:
		managedKey = gcnew System::SByte(multiNodeUnion->CPPmultinode26->GetKey());
		return safe_cast<Key>(managedKey);
	case 27:
		managedKey = gcnew System::SByte(multiNodeUnion->CPPmultinode27->GetKey());
		return safe_cast<Key>(managedKey);
	case 28:
		managedKey = gcnew System::SByte(multiNodeUnion->CPPmultinode28->GetKey());
		return safe_cast<Key>(managedKey);
	case 29:
		managedKey = gcnew System::Int16(multiNodeUnion->CPPmultinode29->GetKey());
		return safe_cast<Key>(managedKey);
	case 30:
		managedKey = gcnew System::Int16(multiNodeUnion->CPPmultinode30->GetKey());
		return safe_cast<Key>(managedKey);
	case 31:
		managedKey = gcnew System::Int16(multiNodeUnion->CPPmultinode31->GetKey());
		return safe_cast<Key>(managedKey);
	case 32:
		managedKey = gcnew System::Int16(multiNodeUnion->CPPmultinode32->GetKey());
		return safe_cast<Key>(managedKey);
	case 33:
		managedKey = gcnew System::Int16(multiNodeUnion->CPPmultinode33->GetKey());
		return safe_cast<Key>(managedKey);
	case 34:
		managedKey = gcnew System::Int16(multiNodeUnion->CPPmultinode34->GetKey());
		return safe_cast<Key>(managedKey);
	case 35:
		managedKey = gcnew System::Int16(multiNodeUnion->CPPmultinode35->GetKey());
		return safe_cast<Key>(managedKey);
	case 36:
		managedKey = gcnew System::Int16(multiNodeUnion->CPPmultinode36->GetKey());
		return safe_cast<Key>(managedKey);
	case 37:
		managedKey = gcnew System::Int16(multiNodeUnion->CPPmultinode37->GetKey());
		return safe_cast<Key>(managedKey);
	case 38:
		managedKey = gcnew System::Int16(multiNodeUnion->CPPmultinode38->GetKey());
		return safe_cast<Key>(managedKey);
	case 39:
		managedKey = gcnew System::Int16(multiNodeUnion->CPPmultinode39->GetKey());
		return safe_cast<Key>(managedKey);
	case 40:
		managedKey = gcnew System::Int16(multiNodeUnion->CPPmultinode40->GetKey());
		return safe_cast<Key>(managedKey);
	case 41:
		managedKey = gcnew System::Int16(multiNodeUnion->CPPmultinode41->GetKey());
		return safe_cast<Key>(managedKey);
	case 42:
		managedKey = gcnew System::Int16(multiNodeUnion->CPPmultinode42->GetKey());
		return safe_cast<Key>(managedKey);
	case 43:
		managedKey = gcnew System::UInt16(multiNodeUnion->CPPmultinode43->GetKey());
		return safe_cast<Key>(managedKey);
	case 44:
		managedKey = gcnew System::UInt16(multiNodeUnion->CPPmultinode44->GetKey());
		return safe_cast<Key>(managedKey);
	case 45:
		managedKey = gcnew System::UInt16(multiNodeUnion->CPPmultinode45->GetKey());
		return safe_cast<Key>(managedKey);
	case 46:
		managedKey = gcnew System::UInt16(multiNodeUnion->CPPmultinode46->GetKey());
		return safe_cast<Key>(managedKey);
	case 47:
		managedKey = gcnew System::UInt16(multiNodeUnion->CPPmultinode47->GetKey());
		return safe_cast<Key>(managedKey);
	case 48:
		managedKey = gcnew System::UInt16(multiNodeUnion->CPPmultinode48->GetKey());
		return safe_cast<Key>(managedKey);
	case 49:
		managedKey = gcnew System::UInt16(multiNodeUnion->CPPmultinode49->GetKey());
		return safe_cast<Key>(managedKey);
	case 50:
		managedKey = gcnew System::UInt16(multiNodeUnion->CPPmultinode50->GetKey());
		return safe_cast<Key>(managedKey);
	case 51:
		managedKey = gcnew System::UInt16(multiNodeUnion->CPPmultinode51->GetKey());
		return safe_cast<Key>(managedKey);
	case 52:
		managedKey = gcnew System::UInt16(multiNodeUnion->CPPmultinode52->GetKey());
		return safe_cast<Key>(managedKey);
	case 53:
		managedKey = gcnew System::UInt16(multiNodeUnion->CPPmultinode53->GetKey());
		return safe_cast<Key>(managedKey);
	case 54:
		managedKey = gcnew System::UInt16(multiNodeUnion->CPPmultinode54->GetKey());
		return safe_cast<Key>(managedKey);
	case 55:
		managedKey = gcnew System::UInt16(multiNodeUnion->CPPmultinode55->GetKey());
		return safe_cast<Key>(managedKey);
	case 56:
		managedKey = gcnew System::UInt16(multiNodeUnion->CPPmultinode56->GetKey());
		return safe_cast<Key>(managedKey);
	case 57:
		managedKey = gcnew System::Int32(multiNodeUnion->CPPmultinode57->GetKey());
		return safe_cast<Key>(managedKey);
	case 58:
		managedKey = gcnew System::Int32(multiNodeUnion->CPPmultinode58->GetKey());
		return safe_cast<Key>(managedKey);
	case 59:
		managedKey = gcnew System::Int32(multiNodeUnion->CPPmultinode59->GetKey());
		return safe_cast<Key>(managedKey);
	case 60:
		managedKey = gcnew System::Int32(multiNodeUnion->CPPmultinode60->GetKey());
		return safe_cast<Key>(managedKey);
	case 61:
		managedKey = gcnew System::Int32(multiNodeUnion->CPPmultinode61->GetKey());
		return safe_cast<Key>(managedKey);
	case 62:
		managedKey = gcnew System::Int32(multiNodeUnion->CPPmultinode62->GetKey());
		return safe_cast<Key>(managedKey);
	case 63:
		managedKey = gcnew System::Int32(multiNodeUnion->CPPmultinode63->GetKey());
		return safe_cast<Key>(managedKey);
	case 64:
		managedKey = gcnew System::Int32(multiNodeUnion->CPPmultinode64->GetKey());
		return safe_cast<Key>(managedKey);
	case 65:
		managedKey = gcnew System::Int32(multiNodeUnion->CPPmultinode65->GetKey());
		return safe_cast<Key>(managedKey);
	case 66:
		managedKey = gcnew System::Int32(multiNodeUnion->CPPmultinode66->GetKey());
		return safe_cast<Key>(managedKey);
	case 67:
		managedKey = gcnew System::Int32(multiNodeUnion->CPPmultinode67->GetKey());
		return safe_cast<Key>(managedKey);
	case 68:
		managedKey = gcnew System::Int32(multiNodeUnion->CPPmultinode68->GetKey());
		return safe_cast<Key>(managedKey);
	case 69:
		managedKey = gcnew System::Int32(multiNodeUnion->CPPmultinode69->GetKey());
		return safe_cast<Key>(managedKey);
	case 70:
		managedKey = gcnew System::Int32(multiNodeUnion->CPPmultinode70->GetKey());
		return safe_cast<Key>(managedKey);
	case 71:
		managedKey = gcnew System::UInt32(multiNodeUnion->CPPmultinode71->GetKey());
		return safe_cast<Key>(managedKey);
	case 72:
		managedKey = gcnew System::UInt32(multiNodeUnion->CPPmultinode72->GetKey());
		return safe_cast<Key>(managedKey);
	case 73:
		managedKey = gcnew System::UInt32(multiNodeUnion->CPPmultinode73->GetKey());
		return safe_cast<Key>(managedKey);
	case 74:
		managedKey = gcnew System::UInt32(multiNodeUnion->CPPmultinode74->GetKey());
		return safe_cast<Key>(managedKey);
	case 75:
		managedKey = gcnew System::UInt32(multiNodeUnion->CPPmultinode75->GetKey());
		return safe_cast<Key>(managedKey);
	case 76:
		managedKey = gcnew System::UInt32(multiNodeUnion->CPPmultinode76->GetKey());
		return safe_cast<Key>(managedKey);
	case 77:
		managedKey = gcnew System::UInt32(multiNodeUnion->CPPmultinode77->GetKey());
		return safe_cast<Key>(managedKey);
	case 78:
		managedKey = gcnew System::UInt32(multiNodeUnion->CPPmultinode78->GetKey());
		return safe_cast<Key>(managedKey);
	case 79:
		managedKey = gcnew System::UInt32(multiNodeUnion->CPPmultinode79->GetKey());
		return safe_cast<Key>(managedKey);
	case 80:
		managedKey = gcnew System::UInt32(multiNodeUnion->CPPmultinode80->GetKey());
		return safe_cast<Key>(managedKey);
	case 81:
		managedKey = gcnew System::UInt32(multiNodeUnion->CPPmultinode81->GetKey());
		return safe_cast<Key>(managedKey);
	case 82:
		managedKey = gcnew System::UInt32(multiNodeUnion->CPPmultinode82->GetKey());
		return safe_cast<Key>(managedKey);
	case 83:
		managedKey = gcnew System::UInt32(multiNodeUnion->CPPmultinode83->GetKey());
		return safe_cast<Key>(managedKey);
	case 84:
		managedKey = gcnew System::UInt32(multiNodeUnion->CPPmultinode84->GetKey());
		return safe_cast<Key>(managedKey);
	case 85:
		managedKey = gcnew System::Int64(multiNodeUnion->CPPmultinode85->GetKey());
		return safe_cast<Key>(managedKey);
	case 86:
		managedKey = gcnew System::Int64(multiNodeUnion->CPPmultinode86->GetKey());
		return safe_cast<Key>(managedKey);
	case 87:
		managedKey = gcnew System::Int64(multiNodeUnion->CPPmultinode87->GetKey());
		return safe_cast<Key>(managedKey);
	case 88:
		managedKey = gcnew System::Int64(multiNodeUnion->CPPmultinode88->GetKey());
		return safe_cast<Key>(managedKey);
	case 89:
		managedKey = gcnew System::Int64(multiNodeUnion->CPPmultinode89->GetKey());
		return safe_cast<Key>(managedKey);
	case 90:
		managedKey = gcnew System::Int64(multiNodeUnion->CPPmultinode90->GetKey());
		return safe_cast<Key>(managedKey);
	case 91:
		managedKey = gcnew System::Int64(multiNodeUnion->CPPmultinode91->GetKey());
		return safe_cast<Key>(managedKey);
	case 92:
		managedKey = gcnew System::Int64(multiNodeUnion->CPPmultinode92->GetKey());
		return safe_cast<Key>(managedKey);
	case 93:
		managedKey = gcnew System::Int64(multiNodeUnion->CPPmultinode93->GetKey());
		return safe_cast<Key>(managedKey);
	case 94:
		managedKey = gcnew System::Int64(multiNodeUnion->CPPmultinode94->GetKey());
		return safe_cast<Key>(managedKey);
	case 95:
		managedKey = gcnew System::Int64(multiNodeUnion->CPPmultinode95->GetKey());
		return safe_cast<Key>(managedKey);
	case 96:
		managedKey = gcnew System::Int64(multiNodeUnion->CPPmultinode96->GetKey());
		return safe_cast<Key>(managedKey);
	case 97:
		managedKey = gcnew System::Int64(multiNodeUnion->CPPmultinode97->GetKey());
		return safe_cast<Key>(managedKey);
	case 98:
		managedKey = gcnew System::Int64(multiNodeUnion->CPPmultinode98->GetKey());
		return safe_cast<Key>(managedKey);
	case 99:
		managedKey = gcnew System::UInt64(multiNodeUnion->CPPmultinode99->GetKey());
		return safe_cast<Key>(managedKey);
	case 100:
		managedKey = gcnew System::UInt64(multiNodeUnion->CPPmultinode100->GetKey());
		return safe_cast<Key>(managedKey);
	case 101:
		managedKey = gcnew System::UInt64(multiNodeUnion->CPPmultinode101->GetKey());
		return safe_cast<Key>(managedKey);
	case 102:
		managedKey = gcnew System::UInt64(multiNodeUnion->CPPmultinode102->GetKey());
		return safe_cast<Key>(managedKey);
	case 103:
		managedKey = gcnew System::UInt64(multiNodeUnion->CPPmultinode103->GetKey());
		return safe_cast<Key>(managedKey);
	case 104:
		managedKey = gcnew System::UInt64(multiNodeUnion->CPPmultinode104->GetKey());
		return safe_cast<Key>(managedKey);
	case 105:
		managedKey = gcnew System::UInt64(multiNodeUnion->CPPmultinode105->GetKey());
		return safe_cast<Key>(managedKey);
	case 106:
		managedKey = gcnew System::UInt64(multiNodeUnion->CPPmultinode106->GetKey());
		return safe_cast<Key>(managedKey);
	case 107:
		managedKey = gcnew System::UInt64(multiNodeUnion->CPPmultinode107->GetKey());
		return safe_cast<Key>(managedKey);
	case 108:
		managedKey = gcnew System::UInt64(multiNodeUnion->CPPmultinode108->GetKey());
		return safe_cast<Key>(managedKey);
	case 109:
		managedKey = gcnew System::UInt64(multiNodeUnion->CPPmultinode109->GetKey());
		return safe_cast<Key>(managedKey);
	case 110:
		managedKey = gcnew System::UInt64(multiNodeUnion->CPPmultinode110->GetKey());
		return safe_cast<Key>(managedKey);
	case 111:
		managedKey = gcnew System::UInt64(multiNodeUnion->CPPmultinode111->GetKey());
		return safe_cast<Key>(managedKey);
	case 112:
		managedKey = gcnew System::UInt64(multiNodeUnion->CPPmultinode112->GetKey());
		return safe_cast<Key>(managedKey);
	case 113:
		managedKey = gcnew System::Single(multiNodeUnion->CPPmultinode113->GetKey());
		return safe_cast<Key>(managedKey);
	case 114:
		managedKey = gcnew System::Single(multiNodeUnion->CPPmultinode114->GetKey());
		return safe_cast<Key>(managedKey);
	case 115:
		managedKey = gcnew System::Single(multiNodeUnion->CPPmultinode115->GetKey());
		return safe_cast<Key>(managedKey);
	case 116:
		managedKey = gcnew System::Single(multiNodeUnion->CPPmultinode116->GetKey());
		return safe_cast<Key>(managedKey);
	case 117:
		managedKey = gcnew System::Single(multiNodeUnion->CPPmultinode117->GetKey());
		return safe_cast<Key>(managedKey);
	case 118:
		managedKey = gcnew System::Single(multiNodeUnion->CPPmultinode118->GetKey());
		return safe_cast<Key>(managedKey);
	case 119:
		managedKey = gcnew System::Single(multiNodeUnion->CPPmultinode119->GetKey());
		return safe_cast<Key>(managedKey);
	case 120:
		managedKey = gcnew System::Single(multiNodeUnion->CPPmultinode120->GetKey());
		return safe_cast<Key>(managedKey);
	case 121:
		managedKey = gcnew System::Single(multiNodeUnion->CPPmultinode121->GetKey());
		return safe_cast<Key>(managedKey);
	case 122:
		managedKey = gcnew System::Single(multiNodeUnion->CPPmultinode122->GetKey());
		return safe_cast<Key>(managedKey);
	case 123:
		managedKey = gcnew System::Single(multiNodeUnion->CPPmultinode123->GetKey());
		return safe_cast<Key>(managedKey);
	case 124:
		managedKey = gcnew System::Single(multiNodeUnion->CPPmultinode124->GetKey());
		return safe_cast<Key>(managedKey);
	case 125:
		managedKey = gcnew System::Single(multiNodeUnion->CPPmultinode125->GetKey());
		return safe_cast<Key>(managedKey);
	case 126:
		managedKey = gcnew System::Single(multiNodeUnion->CPPmultinode126->GetKey());
		return safe_cast<Key>(managedKey);
	case 127:
		managedKey = gcnew System::Double(multiNodeUnion->CPPmultinode127->GetKey());
		return safe_cast<Key>(managedKey);
	case 128:
		managedKey = gcnew System::Double(multiNodeUnion->CPPmultinode128->GetKey());
		return safe_cast<Key>(managedKey);
	case 129:
		managedKey = gcnew System::Double(multiNodeUnion->CPPmultinode129->GetKey());
		return safe_cast<Key>(managedKey);
	case 130:
		managedKey = gcnew System::Double(multiNodeUnion->CPPmultinode130->GetKey());
		return safe_cast<Key>(managedKey);
	case 131:
		managedKey = gcnew System::Double(multiNodeUnion->CPPmultinode131->GetKey());
		return safe_cast<Key>(managedKey);
	case 132:
		managedKey = gcnew System::Double(multiNodeUnion->CPPmultinode132->GetKey());
		return safe_cast<Key>(managedKey);
	case 133:
		managedKey = gcnew System::Double(multiNodeUnion->CPPmultinode133->GetKey());
		return safe_cast<Key>(managedKey);
	case 134:
		managedKey = gcnew System::Double(multiNodeUnion->CPPmultinode134->GetKey());
		return safe_cast<Key>(managedKey);
	case 135:
		managedKey = gcnew System::Double(multiNodeUnion->CPPmultinode135->GetKey());
		return safe_cast<Key>(managedKey);
	case 136:
		managedKey = gcnew System::Double(multiNodeUnion->CPPmultinode136->GetKey());
		return safe_cast<Key>(managedKey);
	case 137:
		managedKey = gcnew System::Double(multiNodeUnion->CPPmultinode137->GetKey());
		return safe_cast<Key>(managedKey);
	case 138:
		managedKey = gcnew System::Double(multiNodeUnion->CPPmultinode138->GetKey());
		return safe_cast<Key>(managedKey);
	case 139:
		managedKey = gcnew System::Double(multiNodeUnion->CPPmultinode139->GetKey());
		return safe_cast<Key>(managedKey);
	case 140:
		managedKey = gcnew System::Double(multiNodeUnion->CPPmultinode140->GetKey());
		return safe_cast<Key>(managedKey);
	case 141:
		managedKey = gcnew System::Char(multiNodeUnion->CPPmultinode141->GetKey());
		return safe_cast<Key>(managedKey);
	case 142:
		managedKey = gcnew System::Char(multiNodeUnion->CPPmultinode142->GetKey());
		return safe_cast<Key>(managedKey);
	case 143:
		managedKey = gcnew System::Char(multiNodeUnion->CPPmultinode143->GetKey());
		return safe_cast<Key>(managedKey);
	case 144:
		managedKey = gcnew System::Char(multiNodeUnion->CPPmultinode144->GetKey());
		return safe_cast<Key>(managedKey);
	case 145:
		managedKey = gcnew System::Char(multiNodeUnion->CPPmultinode145->GetKey());
		return safe_cast<Key>(managedKey);
	case 146:
		managedKey = gcnew System::Char(multiNodeUnion->CPPmultinode146->GetKey());
		return safe_cast<Key>(managedKey);
	case 147:
		managedKey = gcnew System::Char(multiNodeUnion->CPPmultinode147->GetKey());
		return safe_cast<Key>(managedKey);
	case 148:
		managedKey = gcnew System::Char(multiNodeUnion->CPPmultinode148->GetKey());
		return safe_cast<Key>(managedKey);
	case 149:
		managedKey = gcnew System::Char(multiNodeUnion->CPPmultinode149->GetKey());
		return safe_cast<Key>(managedKey);
	case 150:
		managedKey = gcnew System::Char(multiNodeUnion->CPPmultinode150->GetKey());
		return safe_cast<Key>(managedKey);
	case 151:
		managedKey = gcnew System::Char(multiNodeUnion->CPPmultinode151->GetKey());
		return safe_cast<Key>(managedKey);
	case 152:
		managedKey = gcnew System::Char(multiNodeUnion->CPPmultinode152->GetKey());
		return safe_cast<Key>(managedKey);
	case 153:
		managedKey = gcnew System::Char(multiNodeUnion->CPPmultinode153->GetKey());
		return safe_cast<Key>(managedKey);
	case 154:
		managedKey = gcnew System::Char(multiNodeUnion->CPPmultinode154->GetKey());
		return safe_cast<Key>(managedKey);
	case 155:
		managedKey = gcnew System::Boolean(multiNodeUnion->CPPmultinode155->GetKey());
		return safe_cast<Key>(managedKey);
	case 156:
		managedKey = gcnew System::Boolean(multiNodeUnion->CPPmultinode156->GetKey());
		return safe_cast<Key>(managedKey);
	case 157:
		managedKey = gcnew System::Boolean(multiNodeUnion->CPPmultinode157->GetKey());
		return safe_cast<Key>(managedKey);
	case 158:
		managedKey = gcnew System::Boolean(multiNodeUnion->CPPmultinode158->GetKey());
		return safe_cast<Key>(managedKey);
	case 159:
		managedKey = gcnew System::Boolean(multiNodeUnion->CPPmultinode159->GetKey());
		return safe_cast<Key>(managedKey);
	case 160:
		managedKey = gcnew System::Boolean(multiNodeUnion->CPPmultinode160->GetKey());
		return safe_cast<Key>(managedKey);
	case 161:
		managedKey = gcnew System::Boolean(multiNodeUnion->CPPmultinode161->GetKey());
		return safe_cast<Key>(managedKey);
	case 162:
		managedKey = gcnew System::Boolean(multiNodeUnion->CPPmultinode162->GetKey());
		return safe_cast<Key>(managedKey);
	case 163:
		managedKey = gcnew System::Boolean(multiNodeUnion->CPPmultinode163->GetKey());
		return safe_cast<Key>(managedKey);
	case 164:
		managedKey = gcnew System::Boolean(multiNodeUnion->CPPmultinode164->GetKey());
		return safe_cast<Key>(managedKey);
	case 165:
		managedKey = gcnew System::Boolean(multiNodeUnion->CPPmultinode165->GetKey());
		return safe_cast<Key>(managedKey);
	case 166:
		managedKey = gcnew System::Boolean(multiNodeUnion->CPPmultinode166->GetKey());
		return safe_cast<Key>(managedKey);
	case 167:
		managedKey = gcnew System::Boolean(multiNodeUnion->CPPmultinode167->GetKey());
		return safe_cast<Key>(managedKey);
	case 168:
		managedKey = gcnew System::Boolean(multiNodeUnion->CPPmultinode168->GetKey());
		return safe_cast<Key>(managedKey);
	case 169:
		managedKey = gcnew String(multiNodeUnion->CPPmultinode169->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 170:
		managedKey = gcnew String(multiNodeUnion->CPPmultinode170->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 171:
		managedKey = gcnew String(multiNodeUnion->CPPmultinode171->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 172:
		managedKey = gcnew String(multiNodeUnion->CPPmultinode172->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 173:
		managedKey = gcnew String(multiNodeUnion->CPPmultinode173->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 174:
		managedKey = gcnew String(multiNodeUnion->CPPmultinode174->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 175:
		managedKey = gcnew String(multiNodeUnion->CPPmultinode175->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 176:
		managedKey = gcnew String(multiNodeUnion->CPPmultinode176->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 177:
		managedKey = gcnew String(multiNodeUnion->CPPmultinode177->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 178:
		managedKey = gcnew String(multiNodeUnion->CPPmultinode178->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 179:
		managedKey = gcnew String(multiNodeUnion->CPPmultinode179->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 180:
		managedKey = gcnew String(multiNodeUnion->CPPmultinode180->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 181:
		managedKey = gcnew String(multiNodeUnion->CPPmultinode181->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 182:
		managedKey = gcnew String(multiNodeUnion->CPPmultinode182->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 183:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiNodeUnion->CPPmultinode183->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 184:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiNodeUnion->CPPmultinode184->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 185:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiNodeUnion->CPPmultinode185->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 186:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiNodeUnion->CPPmultinode186->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 187:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiNodeUnion->CPPmultinode187->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 188:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiNodeUnion->CPPmultinode188->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 189:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiNodeUnion->CPPmultinode189->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 190:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiNodeUnion->CPPmultinode190->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 191:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiNodeUnion->CPPmultinode191->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 192:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiNodeUnion->CPPmultinode192->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 193:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiNodeUnion->CPPmultinode193->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 194:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiNodeUnion->CPPmultinode194->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 195:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiNodeUnion->CPPmultinode195->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 196:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiNodeUnion->CPPmultinode196->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	}
	return Key();
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^ UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>::DeepCopy()
{
	CShorpUnOrderedMultiNode<Key, Value>^ newCopy = gcnew CShorpUnOrderedMultiNode<Key, Value>();
	newCopy->nKeyValueType = this->nKeyValueType;
	newCopy->isInitialized = this->isInitialized;
	newCopy %= this;
	return newCopy;
}

generic<typename Key, typename Value>
bool UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>::operator==(const CShorpUnOrderedMultiNode<Key, Value>^ thisObj, const CShorpUnOrderedMultiNode<Key, Value>^ other)
{
	if (Object::ReferenceEquals(const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^>(thisObj), nullptr)) return false;
	if (Object::ReferenceEquals(const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^>(other), nullptr)) return false;
	if (Object::ReferenceEquals(const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^>(thisObj), const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^>(other))) return true;
	if (thisObj->isInitialized == 0 || other->isInitialized == 0) return false;

	if (thisObj->nKeyValueType != other->nKeyValueType) return false;
	switch (thisObj->nKeyValueType)
	{
	case 0: default:
		return false;
	case 1:
		return (*(thisObj->multiNodeUnion->CPPmultinode1) == *(other->multiNodeUnion->CPPmultinode1));
	case 2:
		return (*(thisObj->multiNodeUnion->CPPmultinode2) == *(other->multiNodeUnion->CPPmultinode2));
	case 3:
		return (*(thisObj->multiNodeUnion->CPPmultinode3) == *(other->multiNodeUnion->CPPmultinode3));
	case 4:
		return (*(thisObj->multiNodeUnion->CPPmultinode4) == *(other->multiNodeUnion->CPPmultinode4));
	case 5:
		return (*(thisObj->multiNodeUnion->CPPmultinode5) == *(other->multiNodeUnion->CPPmultinode5));
	case 6:
		return (*(thisObj->multiNodeUnion->CPPmultinode6) == *(other->multiNodeUnion->CPPmultinode6));
	case 7:
		return (*(thisObj->multiNodeUnion->CPPmultinode7) == *(other->multiNodeUnion->CPPmultinode7));
	case 8:
		return (*(thisObj->multiNodeUnion->CPPmultinode8) == *(other->multiNodeUnion->CPPmultinode8));
	case 9:
		return (*(thisObj->multiNodeUnion->CPPmultinode9) == *(other->multiNodeUnion->CPPmultinode9));
	case 10:
		return (*(thisObj->multiNodeUnion->CPPmultinode10) == *(other->multiNodeUnion->CPPmultinode10));
	case 11:
		return (*(thisObj->multiNodeUnion->CPPmultinode11) == *(other->multiNodeUnion->CPPmultinode11));
	case 12:
		return (*(thisObj->multiNodeUnion->CPPmultinode12) == *(other->multiNodeUnion->CPPmultinode12));
	case 13:
		return (*(thisObj->multiNodeUnion->CPPmultinode13) == *(other->multiNodeUnion->CPPmultinode13));
	case 14:
		return (*(thisObj->multiNodeUnion->CPPmultinode14) == *(other->multiNodeUnion->CPPmultinode14));
	case 15:
		return (*(thisObj->multiNodeUnion->CPPmultinode15) == *(other->multiNodeUnion->CPPmultinode15));
	case 16:
		return (*(thisObj->multiNodeUnion->CPPmultinode16) == *(other->multiNodeUnion->CPPmultinode16));
	case 17:
		return (*(thisObj->multiNodeUnion->CPPmultinode17) == *(other->multiNodeUnion->CPPmultinode17));
	case 18:
		return (*(thisObj->multiNodeUnion->CPPmultinode18) == *(other->multiNodeUnion->CPPmultinode18));
	case 19:
		return (*(thisObj->multiNodeUnion->CPPmultinode19) == *(other->multiNodeUnion->CPPmultinode19));
	case 20:
		return (*(thisObj->multiNodeUnion->CPPmultinode20) == *(other->multiNodeUnion->CPPmultinode20));
	case 21:
		return (*(thisObj->multiNodeUnion->CPPmultinode21) == *(other->multiNodeUnion->CPPmultinode21));
	case 22:
		return (*(thisObj->multiNodeUnion->CPPmultinode22) == *(other->multiNodeUnion->CPPmultinode22));
	case 23:
		return (*(thisObj->multiNodeUnion->CPPmultinode23) == *(other->multiNodeUnion->CPPmultinode23));
	case 24:
		return (*(thisObj->multiNodeUnion->CPPmultinode24) == *(other->multiNodeUnion->CPPmultinode24));
	case 25:
		return (*(thisObj->multiNodeUnion->CPPmultinode25) == *(other->multiNodeUnion->CPPmultinode25));
	case 26:
		return (*(thisObj->multiNodeUnion->CPPmultinode26) == *(other->multiNodeUnion->CPPmultinode26));
	case 27:
		return (*(thisObj->multiNodeUnion->CPPmultinode27) == *(other->multiNodeUnion->CPPmultinode27));
	case 28:
		return (*(thisObj->multiNodeUnion->CPPmultinode28) == *(other->multiNodeUnion->CPPmultinode28));
	case 29:
		return (*(thisObj->multiNodeUnion->CPPmultinode29) == *(other->multiNodeUnion->CPPmultinode29));
	case 30:
		return (*(thisObj->multiNodeUnion->CPPmultinode30) == *(other->multiNodeUnion->CPPmultinode30));
	case 31:
		return (*(thisObj->multiNodeUnion->CPPmultinode31) == *(other->multiNodeUnion->CPPmultinode31));
	case 32:
		return (*(thisObj->multiNodeUnion->CPPmultinode32) == *(other->multiNodeUnion->CPPmultinode32));
	case 33:
		return (*(thisObj->multiNodeUnion->CPPmultinode33) == *(other->multiNodeUnion->CPPmultinode33));
	case 34:
		return (*(thisObj->multiNodeUnion->CPPmultinode34) == *(other->multiNodeUnion->CPPmultinode34));
	case 35:
		return (*(thisObj->multiNodeUnion->CPPmultinode35) == *(other->multiNodeUnion->CPPmultinode35));
	case 36:
		return (*(thisObj->multiNodeUnion->CPPmultinode36) == *(other->multiNodeUnion->CPPmultinode36));
	case 37:
		return (*(thisObj->multiNodeUnion->CPPmultinode37) == *(other->multiNodeUnion->CPPmultinode37));
	case 38:
		return (*(thisObj->multiNodeUnion->CPPmultinode38) == *(other->multiNodeUnion->CPPmultinode38));
	case 39:
		return (*(thisObj->multiNodeUnion->CPPmultinode39) == *(other->multiNodeUnion->CPPmultinode39));
	case 40:
		return (*(thisObj->multiNodeUnion->CPPmultinode40) == *(other->multiNodeUnion->CPPmultinode40));
	case 41:
		return (*(thisObj->multiNodeUnion->CPPmultinode41) == *(other->multiNodeUnion->CPPmultinode41));
	case 42:
		return (*(thisObj->multiNodeUnion->CPPmultinode42) == *(other->multiNodeUnion->CPPmultinode42));
	case 43:
		return (*(thisObj->multiNodeUnion->CPPmultinode43) == *(other->multiNodeUnion->CPPmultinode43));
	case 44:
		return (*(thisObj->multiNodeUnion->CPPmultinode44) == *(other->multiNodeUnion->CPPmultinode44));
	case 45:
		return (*(thisObj->multiNodeUnion->CPPmultinode45) == *(other->multiNodeUnion->CPPmultinode45));
	case 46:
		return (*(thisObj->multiNodeUnion->CPPmultinode46) == *(other->multiNodeUnion->CPPmultinode46));
	case 47:
		return (*(thisObj->multiNodeUnion->CPPmultinode47) == *(other->multiNodeUnion->CPPmultinode47));
	case 48:
		return (*(thisObj->multiNodeUnion->CPPmultinode48) == *(other->multiNodeUnion->CPPmultinode48));
	case 49:
		return (*(thisObj->multiNodeUnion->CPPmultinode49) == *(other->multiNodeUnion->CPPmultinode49));
	case 50:
		return (*(thisObj->multiNodeUnion->CPPmultinode50) == *(other->multiNodeUnion->CPPmultinode50));
	case 51:
		return (*(thisObj->multiNodeUnion->CPPmultinode51) == *(other->multiNodeUnion->CPPmultinode51));
	case 52:
		return (*(thisObj->multiNodeUnion->CPPmultinode52) == *(other->multiNodeUnion->CPPmultinode52));
	case 53:
		return (*(thisObj->multiNodeUnion->CPPmultinode53) == *(other->multiNodeUnion->CPPmultinode53));
	case 54:
		return (*(thisObj->multiNodeUnion->CPPmultinode54) == *(other->multiNodeUnion->CPPmultinode54));
	case 55:
		return (*(thisObj->multiNodeUnion->CPPmultinode55) == *(other->multiNodeUnion->CPPmultinode55));
	case 56:
		return (*(thisObj->multiNodeUnion->CPPmultinode56) == *(other->multiNodeUnion->CPPmultinode56));
	case 57:
		return (*(thisObj->multiNodeUnion->CPPmultinode57) == *(other->multiNodeUnion->CPPmultinode57));
	case 58:
		return (*(thisObj->multiNodeUnion->CPPmultinode58) == *(other->multiNodeUnion->CPPmultinode58));
	case 59:
		return (*(thisObj->multiNodeUnion->CPPmultinode59) == *(other->multiNodeUnion->CPPmultinode59));
	case 60:
		return (*(thisObj->multiNodeUnion->CPPmultinode60) == *(other->multiNodeUnion->CPPmultinode60));
	case 61:
		return (*(thisObj->multiNodeUnion->CPPmultinode61) == *(other->multiNodeUnion->CPPmultinode61));
	case 62:
		return (*(thisObj->multiNodeUnion->CPPmultinode62) == *(other->multiNodeUnion->CPPmultinode62));
	case 63:
		return (*(thisObj->multiNodeUnion->CPPmultinode63) == *(other->multiNodeUnion->CPPmultinode63));
	case 64:
		return (*(thisObj->multiNodeUnion->CPPmultinode64) == *(other->multiNodeUnion->CPPmultinode64));
	case 65:
		return (*(thisObj->multiNodeUnion->CPPmultinode65) == *(other->multiNodeUnion->CPPmultinode65));
	case 66:
		return (*(thisObj->multiNodeUnion->CPPmultinode66) == *(other->multiNodeUnion->CPPmultinode66));
	case 67:
		return (*(thisObj->multiNodeUnion->CPPmultinode67) == *(other->multiNodeUnion->CPPmultinode67));
	case 68:
		return (*(thisObj->multiNodeUnion->CPPmultinode68) == *(other->multiNodeUnion->CPPmultinode68));
	case 69:
		return (*(thisObj->multiNodeUnion->CPPmultinode69) == *(other->multiNodeUnion->CPPmultinode69));
	case 70:
		return (*(thisObj->multiNodeUnion->CPPmultinode70) == *(other->multiNodeUnion->CPPmultinode70));
	case 71:
		return (*(thisObj->multiNodeUnion->CPPmultinode71) == *(other->multiNodeUnion->CPPmultinode71));
	case 72:
		return (*(thisObj->multiNodeUnion->CPPmultinode72) == *(other->multiNodeUnion->CPPmultinode72));
	case 73:
		return (*(thisObj->multiNodeUnion->CPPmultinode73) == *(other->multiNodeUnion->CPPmultinode73));
	case 74:
		return (*(thisObj->multiNodeUnion->CPPmultinode74) == *(other->multiNodeUnion->CPPmultinode74));
	case 75:
		return (*(thisObj->multiNodeUnion->CPPmultinode75) == *(other->multiNodeUnion->CPPmultinode75));
	case 76:
		return (*(thisObj->multiNodeUnion->CPPmultinode76) == *(other->multiNodeUnion->CPPmultinode76));
	case 77:
		return (*(thisObj->multiNodeUnion->CPPmultinode77) == *(other->multiNodeUnion->CPPmultinode77));
	case 78:
		return (*(thisObj->multiNodeUnion->CPPmultinode78) == *(other->multiNodeUnion->CPPmultinode78));
	case 79:
		return (*(thisObj->multiNodeUnion->CPPmultinode79) == *(other->multiNodeUnion->CPPmultinode79));
	case 80:
		return (*(thisObj->multiNodeUnion->CPPmultinode80) == *(other->multiNodeUnion->CPPmultinode80));
	case 81:
		return (*(thisObj->multiNodeUnion->CPPmultinode81) == *(other->multiNodeUnion->CPPmultinode81));
	case 82:
		return (*(thisObj->multiNodeUnion->CPPmultinode82) == *(other->multiNodeUnion->CPPmultinode82));
	case 83:
		return (*(thisObj->multiNodeUnion->CPPmultinode83) == *(other->multiNodeUnion->CPPmultinode83));
	case 84:
		return (*(thisObj->multiNodeUnion->CPPmultinode84) == *(other->multiNodeUnion->CPPmultinode84));
	case 85:
		return (*(thisObj->multiNodeUnion->CPPmultinode85) == *(other->multiNodeUnion->CPPmultinode85));
	case 86:
		return (*(thisObj->multiNodeUnion->CPPmultinode86) == *(other->multiNodeUnion->CPPmultinode86));
	case 87:
		return (*(thisObj->multiNodeUnion->CPPmultinode87) == *(other->multiNodeUnion->CPPmultinode87));
	case 88:
		return (*(thisObj->multiNodeUnion->CPPmultinode88) == *(other->multiNodeUnion->CPPmultinode88));
	case 89:
		return (*(thisObj->multiNodeUnion->CPPmultinode89) == *(other->multiNodeUnion->CPPmultinode89));
	case 90:
		return (*(thisObj->multiNodeUnion->CPPmultinode90) == *(other->multiNodeUnion->CPPmultinode90));
	case 91:
		return (*(thisObj->multiNodeUnion->CPPmultinode91) == *(other->multiNodeUnion->CPPmultinode91));
	case 92:
		return (*(thisObj->multiNodeUnion->CPPmultinode92) == *(other->multiNodeUnion->CPPmultinode92));
	case 93:
		return (*(thisObj->multiNodeUnion->CPPmultinode93) == *(other->multiNodeUnion->CPPmultinode93));
	case 94:
		return (*(thisObj->multiNodeUnion->CPPmultinode94) == *(other->multiNodeUnion->CPPmultinode94));
	case 95:
		return (*(thisObj->multiNodeUnion->CPPmultinode95) == *(other->multiNodeUnion->CPPmultinode95));
	case 96:
		return (*(thisObj->multiNodeUnion->CPPmultinode96) == *(other->multiNodeUnion->CPPmultinode96));
	case 97:
		return (*(thisObj->multiNodeUnion->CPPmultinode97) == *(other->multiNodeUnion->CPPmultinode97));
	case 98:
		return (*(thisObj->multiNodeUnion->CPPmultinode98) == *(other->multiNodeUnion->CPPmultinode98));
	case 99:
		return (*(thisObj->multiNodeUnion->CPPmultinode99) == *(other->multiNodeUnion->CPPmultinode99));
	case 100:
		return (*(thisObj->multiNodeUnion->CPPmultinode100) == *(other->multiNodeUnion->CPPmultinode100));
	case 101:
		return (*(thisObj->multiNodeUnion->CPPmultinode101) == *(other->multiNodeUnion->CPPmultinode101));
	case 102:
		return (*(thisObj->multiNodeUnion->CPPmultinode102) == *(other->multiNodeUnion->CPPmultinode102));
	case 103:
		return (*(thisObj->multiNodeUnion->CPPmultinode103) == *(other->multiNodeUnion->CPPmultinode103));
	case 104:
		return (*(thisObj->multiNodeUnion->CPPmultinode104) == *(other->multiNodeUnion->CPPmultinode104));
	case 105:
		return (*(thisObj->multiNodeUnion->CPPmultinode105) == *(other->multiNodeUnion->CPPmultinode105));
	case 106:
		return (*(thisObj->multiNodeUnion->CPPmultinode106) == *(other->multiNodeUnion->CPPmultinode106));
	case 107:
		return (*(thisObj->multiNodeUnion->CPPmultinode107) == *(other->multiNodeUnion->CPPmultinode107));
	case 108:
		return (*(thisObj->multiNodeUnion->CPPmultinode108) == *(other->multiNodeUnion->CPPmultinode108));
	case 109:
		return (*(thisObj->multiNodeUnion->CPPmultinode109) == *(other->multiNodeUnion->CPPmultinode109));
	case 110:
		return (*(thisObj->multiNodeUnion->CPPmultinode110) == *(other->multiNodeUnion->CPPmultinode110));
	case 111:
		return (*(thisObj->multiNodeUnion->CPPmultinode111) == *(other->multiNodeUnion->CPPmultinode111));
	case 112:
		return (*(thisObj->multiNodeUnion->CPPmultinode112) == *(other->multiNodeUnion->CPPmultinode112));
	case 113:
		return (*(thisObj->multiNodeUnion->CPPmultinode113) == *(other->multiNodeUnion->CPPmultinode113));
	case 114:
		return (*(thisObj->multiNodeUnion->CPPmultinode114) == *(other->multiNodeUnion->CPPmultinode114));
	case 115:
		return (*(thisObj->multiNodeUnion->CPPmultinode115) == *(other->multiNodeUnion->CPPmultinode115));
	case 116:
		return (*(thisObj->multiNodeUnion->CPPmultinode116) == *(other->multiNodeUnion->CPPmultinode116));
	case 117:
		return (*(thisObj->multiNodeUnion->CPPmultinode117) == *(other->multiNodeUnion->CPPmultinode117));
	case 118:
		return (*(thisObj->multiNodeUnion->CPPmultinode118) == *(other->multiNodeUnion->CPPmultinode118));
	case 119:
		return (*(thisObj->multiNodeUnion->CPPmultinode119) == *(other->multiNodeUnion->CPPmultinode119));
	case 120:
		return (*(thisObj->multiNodeUnion->CPPmultinode120) == *(other->multiNodeUnion->CPPmultinode120));
	case 121:
		return (*(thisObj->multiNodeUnion->CPPmultinode121) == *(other->multiNodeUnion->CPPmultinode121));
	case 122:
		return (*(thisObj->multiNodeUnion->CPPmultinode122) == *(other->multiNodeUnion->CPPmultinode122));
	case 123:
		return (*(thisObj->multiNodeUnion->CPPmultinode123) == *(other->multiNodeUnion->CPPmultinode123));
	case 124:
		return (*(thisObj->multiNodeUnion->CPPmultinode124) == *(other->multiNodeUnion->CPPmultinode124));
	case 125:
		return (*(thisObj->multiNodeUnion->CPPmultinode125) == *(other->multiNodeUnion->CPPmultinode125));
	case 126:
		return (*(thisObj->multiNodeUnion->CPPmultinode126) == *(other->multiNodeUnion->CPPmultinode126));
	case 127:
		return (*(thisObj->multiNodeUnion->CPPmultinode127) == *(other->multiNodeUnion->CPPmultinode127));
	case 128:
		return (*(thisObj->multiNodeUnion->CPPmultinode128) == *(other->multiNodeUnion->CPPmultinode128));
	case 129:
		return (*(thisObj->multiNodeUnion->CPPmultinode129) == *(other->multiNodeUnion->CPPmultinode129));
	case 130:
		return (*(thisObj->multiNodeUnion->CPPmultinode130) == *(other->multiNodeUnion->CPPmultinode130));
	case 131:
		return (*(thisObj->multiNodeUnion->CPPmultinode131) == *(other->multiNodeUnion->CPPmultinode131));
	case 132:
		return (*(thisObj->multiNodeUnion->CPPmultinode132) == *(other->multiNodeUnion->CPPmultinode132));
	case 133:
		return (*(thisObj->multiNodeUnion->CPPmultinode133) == *(other->multiNodeUnion->CPPmultinode133));
	case 134:
		return (*(thisObj->multiNodeUnion->CPPmultinode134) == *(other->multiNodeUnion->CPPmultinode134));
	case 135:
		return (*(thisObj->multiNodeUnion->CPPmultinode135) == *(other->multiNodeUnion->CPPmultinode135));
	case 136:
		return (*(thisObj->multiNodeUnion->CPPmultinode136) == *(other->multiNodeUnion->CPPmultinode136));
	case 137:
		return (*(thisObj->multiNodeUnion->CPPmultinode137) == *(other->multiNodeUnion->CPPmultinode137));
	case 138:
		return (*(thisObj->multiNodeUnion->CPPmultinode138) == *(other->multiNodeUnion->CPPmultinode138));
	case 139:
		return (*(thisObj->multiNodeUnion->CPPmultinode139) == *(other->multiNodeUnion->CPPmultinode139));
	case 140:
		return (*(thisObj->multiNodeUnion->CPPmultinode140) == *(other->multiNodeUnion->CPPmultinode140));
	case 141:
		return (*(thisObj->multiNodeUnion->CPPmultinode141) == *(other->multiNodeUnion->CPPmultinode141));
	case 142:
		return (*(thisObj->multiNodeUnion->CPPmultinode142) == *(other->multiNodeUnion->CPPmultinode142));
	case 143:
		return (*(thisObj->multiNodeUnion->CPPmultinode143) == *(other->multiNodeUnion->CPPmultinode143));
	case 144:
		return (*(thisObj->multiNodeUnion->CPPmultinode144) == *(other->multiNodeUnion->CPPmultinode144));
	case 145:
		return (*(thisObj->multiNodeUnion->CPPmultinode145) == *(other->multiNodeUnion->CPPmultinode145));
	case 146:
		return (*(thisObj->multiNodeUnion->CPPmultinode146) == *(other->multiNodeUnion->CPPmultinode146));
	case 147:
		return (*(thisObj->multiNodeUnion->CPPmultinode147) == *(other->multiNodeUnion->CPPmultinode147));
	case 148:
		return (*(thisObj->multiNodeUnion->CPPmultinode148) == *(other->multiNodeUnion->CPPmultinode148));
	case 149:
		return (*(thisObj->multiNodeUnion->CPPmultinode149) == *(other->multiNodeUnion->CPPmultinode149));
	case 150:
		return (*(thisObj->multiNodeUnion->CPPmultinode150) == *(other->multiNodeUnion->CPPmultinode150));
	case 151:
		return (*(thisObj->multiNodeUnion->CPPmultinode151) == *(other->multiNodeUnion->CPPmultinode151));
	case 152:
		return (*(thisObj->multiNodeUnion->CPPmultinode152) == *(other->multiNodeUnion->CPPmultinode152));
	case 153:
		return (*(thisObj->multiNodeUnion->CPPmultinode153) == *(other->multiNodeUnion->CPPmultinode153));
	case 154:
		return (*(thisObj->multiNodeUnion->CPPmultinode154) == *(other->multiNodeUnion->CPPmultinode154));
	case 155:
		return (*(thisObj->multiNodeUnion->CPPmultinode155) == *(other->multiNodeUnion->CPPmultinode155));
	case 156:
		return (*(thisObj->multiNodeUnion->CPPmultinode156) == *(other->multiNodeUnion->CPPmultinode156));
	case 157:
		return (*(thisObj->multiNodeUnion->CPPmultinode157) == *(other->multiNodeUnion->CPPmultinode157));
	case 158:
		return (*(thisObj->multiNodeUnion->CPPmultinode158) == *(other->multiNodeUnion->CPPmultinode158));
	case 159:
		return (*(thisObj->multiNodeUnion->CPPmultinode159) == *(other->multiNodeUnion->CPPmultinode159));
	case 160:
		return (*(thisObj->multiNodeUnion->CPPmultinode160) == *(other->multiNodeUnion->CPPmultinode160));
	case 161:
		return (*(thisObj->multiNodeUnion->CPPmultinode161) == *(other->multiNodeUnion->CPPmultinode161));
	case 162:
		return (*(thisObj->multiNodeUnion->CPPmultinode162) == *(other->multiNodeUnion->CPPmultinode162));
	case 163:
		return (*(thisObj->multiNodeUnion->CPPmultinode163) == *(other->multiNodeUnion->CPPmultinode163));
	case 164:
		return (*(thisObj->multiNodeUnion->CPPmultinode164) == *(other->multiNodeUnion->CPPmultinode164));
	case 165:
		return (*(thisObj->multiNodeUnion->CPPmultinode165) == *(other->multiNodeUnion->CPPmultinode165));
	case 166:
		return (*(thisObj->multiNodeUnion->CPPmultinode166) == *(other->multiNodeUnion->CPPmultinode166));
	case 167:
		return (*(thisObj->multiNodeUnion->CPPmultinode167) == *(other->multiNodeUnion->CPPmultinode167));
	case 168:
		return (*(thisObj->multiNodeUnion->CPPmultinode168) == *(other->multiNodeUnion->CPPmultinode168));
	case 169:
		return (*(thisObj->multiNodeUnion->CPPmultinode169) == *(other->multiNodeUnion->CPPmultinode169));
	case 170:
		return (*(thisObj->multiNodeUnion->CPPmultinode170) == *(other->multiNodeUnion->CPPmultinode170));
	case 171:
		return (*(thisObj->multiNodeUnion->CPPmultinode171) == *(other->multiNodeUnion->CPPmultinode171));
	case 172:
		return (*(thisObj->multiNodeUnion->CPPmultinode172) == *(other->multiNodeUnion->CPPmultinode172));
	case 173:
		return (*(thisObj->multiNodeUnion->CPPmultinode173) == *(other->multiNodeUnion->CPPmultinode173));
	case 174:
		return (*(thisObj->multiNodeUnion->CPPmultinode174) == *(other->multiNodeUnion->CPPmultinode174));
	case 175:
		return (*(thisObj->multiNodeUnion->CPPmultinode175) == *(other->multiNodeUnion->CPPmultinode175));
	case 176:
		return (*(thisObj->multiNodeUnion->CPPmultinode176) == *(other->multiNodeUnion->CPPmultinode176));
	case 177:
		return (*(thisObj->multiNodeUnion->CPPmultinode177) == *(other->multiNodeUnion->CPPmultinode177));
	case 178:
		return (*(thisObj->multiNodeUnion->CPPmultinode178) == *(other->multiNodeUnion->CPPmultinode178));
	case 179:
		return (*(thisObj->multiNodeUnion->CPPmultinode179) == *(other->multiNodeUnion->CPPmultinode179));
	case 180:
		return (*(thisObj->multiNodeUnion->CPPmultinode180) == *(other->multiNodeUnion->CPPmultinode180));
	case 181:
		return (*(thisObj->multiNodeUnion->CPPmultinode181) == *(other->multiNodeUnion->CPPmultinode181));
	case 182:
		return (*(thisObj->multiNodeUnion->CPPmultinode182) == *(other->multiNodeUnion->CPPmultinode182));
	case 183:
		return (*(thisObj->multiNodeUnion->CPPmultinode183) == *(other->multiNodeUnion->CPPmultinode183));
	case 184:
		return (*(thisObj->multiNodeUnion->CPPmultinode184) == *(other->multiNodeUnion->CPPmultinode184));
	case 185:
		return (*(thisObj->multiNodeUnion->CPPmultinode185) == *(other->multiNodeUnion->CPPmultinode185));
	case 186:
		return (*(thisObj->multiNodeUnion->CPPmultinode186) == *(other->multiNodeUnion->CPPmultinode186));
	case 187:
		return (*(thisObj->multiNodeUnion->CPPmultinode187) == *(other->multiNodeUnion->CPPmultinode187));
	case 188:
		return (*(thisObj->multiNodeUnion->CPPmultinode188) == *(other->multiNodeUnion->CPPmultinode188));
	case 189:
		return (*(thisObj->multiNodeUnion->CPPmultinode189) == *(other->multiNodeUnion->CPPmultinode189));
	case 190:
		return (*(thisObj->multiNodeUnion->CPPmultinode190) == *(other->multiNodeUnion->CPPmultinode190));
	case 191:
		return (*(thisObj->multiNodeUnion->CPPmultinode191) == *(other->multiNodeUnion->CPPmultinode191));
	case 192:
		return (*(thisObj->multiNodeUnion->CPPmultinode192) == *(other->multiNodeUnion->CPPmultinode192));
	case 193:
		return (*(thisObj->multiNodeUnion->CPPmultinode193) == *(other->multiNodeUnion->CPPmultinode193));
	case 194:
		return (*(thisObj->multiNodeUnion->CPPmultinode194) == *(other->multiNodeUnion->CPPmultinode194));
	case 195:
		return (*(thisObj->multiNodeUnion->CPPmultinode195) == *(other->multiNodeUnion->CPPmultinode195));
	case 196:
		return (*(thisObj->multiNodeUnion->CPPmultinode196) == *(other->multiNodeUnion->CPPmultinode196));
	}
	return false;
}

generic<typename Key, typename Value>
bool UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>::operator!=(const CShorpUnOrderedMultiNode<Key, Value>^ thisObj, const CShorpUnOrderedMultiNode<Key, Value>^ other)
{
	if (Object::ReferenceEquals(const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^>(thisObj), nullptr)) return false;
	if (Object::ReferenceEquals(const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^>(other), nullptr)) return false;
	if (Object::ReferenceEquals(const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^>(thisObj), const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^>(other))) return false;
	if (thisObj->isInitialized == 0 || other->isInitialized == 0) return false;

	if (thisObj->nKeyValueType != other->nKeyValueType) return true;
	switch (thisObj->nKeyValueType)
	{
	case 0: default:
		return false;
	case 1:
		return (*(thisObj->multiNodeUnion->CPPmultinode1 ) != *( other->multiNodeUnion->CPPmultinode1));
	case 2:
		return (*(thisObj->multiNodeUnion->CPPmultinode2 ) != *( other->multiNodeUnion->CPPmultinode2));
	case 3:
		return (*(thisObj->multiNodeUnion->CPPmultinode3 ) != *( other->multiNodeUnion->CPPmultinode3));
	case 4:
		return (*(thisObj->multiNodeUnion->CPPmultinode4 ) != *( other->multiNodeUnion->CPPmultinode4));
	case 5:
		return (*(thisObj->multiNodeUnion->CPPmultinode5 ) != *( other->multiNodeUnion->CPPmultinode5));
	case 6:
		return (*(thisObj->multiNodeUnion->CPPmultinode6 ) != *( other->multiNodeUnion->CPPmultinode6));
	case 7:
		return (*(thisObj->multiNodeUnion->CPPmultinode7 ) != *( other->multiNodeUnion->CPPmultinode7));
	case 8:
		return (*(thisObj->multiNodeUnion->CPPmultinode8 ) != *( other->multiNodeUnion->CPPmultinode8));
	case 9:
		return (*(thisObj->multiNodeUnion->CPPmultinode9 ) != *( other->multiNodeUnion->CPPmultinode9));
	case 10:
		return (*(thisObj->multiNodeUnion->CPPmultinode10 ) != *( other->multiNodeUnion->CPPmultinode10));
	case 11:
		return (*(thisObj->multiNodeUnion->CPPmultinode11 ) != *( other->multiNodeUnion->CPPmultinode11));
	case 12:
		return (*(thisObj->multiNodeUnion->CPPmultinode12 ) != *( other->multiNodeUnion->CPPmultinode12));
	case 13:
		return (*(thisObj->multiNodeUnion->CPPmultinode13 ) != *( other->multiNodeUnion->CPPmultinode13));
	case 14:
		return (*(thisObj->multiNodeUnion->CPPmultinode14 ) != *( other->multiNodeUnion->CPPmultinode14));
	case 15:
		return (*(thisObj->multiNodeUnion->CPPmultinode15 ) != *( other->multiNodeUnion->CPPmultinode15));
	case 16:
		return (*(thisObj->multiNodeUnion->CPPmultinode16 ) != *( other->multiNodeUnion->CPPmultinode16));
	case 17:
		return (*(thisObj->multiNodeUnion->CPPmultinode17 ) != *( other->multiNodeUnion->CPPmultinode17));
	case 18:
		return (*(thisObj->multiNodeUnion->CPPmultinode18 ) != *( other->multiNodeUnion->CPPmultinode18));
	case 19:
		return (*(thisObj->multiNodeUnion->CPPmultinode19 ) != *( other->multiNodeUnion->CPPmultinode19));
	case 20:
		return (*(thisObj->multiNodeUnion->CPPmultinode20 ) != *( other->multiNodeUnion->CPPmultinode20));
	case 21:
		return (*(thisObj->multiNodeUnion->CPPmultinode21 ) != *( other->multiNodeUnion->CPPmultinode21));
	case 22:
		return (*(thisObj->multiNodeUnion->CPPmultinode22 ) != *( other->multiNodeUnion->CPPmultinode22));
	case 23:
		return (*(thisObj->multiNodeUnion->CPPmultinode23 ) != *( other->multiNodeUnion->CPPmultinode23));
	case 24:
		return (*(thisObj->multiNodeUnion->CPPmultinode24 ) != *( other->multiNodeUnion->CPPmultinode24));
	case 25:
		return (*(thisObj->multiNodeUnion->CPPmultinode25 ) != *( other->multiNodeUnion->CPPmultinode25));
	case 26:
		return (*(thisObj->multiNodeUnion->CPPmultinode26 ) != *( other->multiNodeUnion->CPPmultinode26));
	case 27:
		return (*(thisObj->multiNodeUnion->CPPmultinode27 ) != *( other->multiNodeUnion->CPPmultinode27));
	case 28:
		return (*(thisObj->multiNodeUnion->CPPmultinode28 ) != *( other->multiNodeUnion->CPPmultinode28));
	case 29:
		return (*(thisObj->multiNodeUnion->CPPmultinode29 ) != *( other->multiNodeUnion->CPPmultinode29));
	case 30:
		return (*(thisObj->multiNodeUnion->CPPmultinode30 ) != *( other->multiNodeUnion->CPPmultinode30));
	case 31:
		return (*(thisObj->multiNodeUnion->CPPmultinode31 ) != *( other->multiNodeUnion->CPPmultinode31));
	case 32:
		return (*(thisObj->multiNodeUnion->CPPmultinode32 ) != *( other->multiNodeUnion->CPPmultinode32));
	case 33:
		return (*(thisObj->multiNodeUnion->CPPmultinode33 ) != *( other->multiNodeUnion->CPPmultinode33));
	case 34:
		return (*(thisObj->multiNodeUnion->CPPmultinode34 ) != *( other->multiNodeUnion->CPPmultinode34));
	case 35:
		return (*(thisObj->multiNodeUnion->CPPmultinode35 ) != *( other->multiNodeUnion->CPPmultinode35));
	case 36:
		return (*(thisObj->multiNodeUnion->CPPmultinode36 ) != *( other->multiNodeUnion->CPPmultinode36));
	case 37:
		return (*(thisObj->multiNodeUnion->CPPmultinode37 ) != *( other->multiNodeUnion->CPPmultinode37));
	case 38:
		return (*(thisObj->multiNodeUnion->CPPmultinode38 ) != *( other->multiNodeUnion->CPPmultinode38));
	case 39:
		return (*(thisObj->multiNodeUnion->CPPmultinode39 ) != *( other->multiNodeUnion->CPPmultinode39));
	case 40:
		return (*(thisObj->multiNodeUnion->CPPmultinode40 ) != *( other->multiNodeUnion->CPPmultinode40));
	case 41:
		return (*(thisObj->multiNodeUnion->CPPmultinode41 ) != *( other->multiNodeUnion->CPPmultinode41));
	case 42:
		return (*(thisObj->multiNodeUnion->CPPmultinode42 ) != *( other->multiNodeUnion->CPPmultinode42));
	case 43:
		return (*(thisObj->multiNodeUnion->CPPmultinode43 ) != *( other->multiNodeUnion->CPPmultinode43));
	case 44:
		return (*(thisObj->multiNodeUnion->CPPmultinode44 ) != *( other->multiNodeUnion->CPPmultinode44));
	case 45:
		return (*(thisObj->multiNodeUnion->CPPmultinode45 ) != *( other->multiNodeUnion->CPPmultinode45));
	case 46:
		return (*(thisObj->multiNodeUnion->CPPmultinode46 ) != *( other->multiNodeUnion->CPPmultinode46));
	case 47:
		return (*(thisObj->multiNodeUnion->CPPmultinode47 ) != *( other->multiNodeUnion->CPPmultinode47));
	case 48:
		return (*(thisObj->multiNodeUnion->CPPmultinode48 ) != *( other->multiNodeUnion->CPPmultinode48));
	case 49:
		return (*(thisObj->multiNodeUnion->CPPmultinode49 ) != *( other->multiNodeUnion->CPPmultinode49));
	case 50:
		return (*(thisObj->multiNodeUnion->CPPmultinode50 ) != *( other->multiNodeUnion->CPPmultinode50));
	case 51:
		return (*(thisObj->multiNodeUnion->CPPmultinode51 ) != *( other->multiNodeUnion->CPPmultinode51));
	case 52:
		return (*(thisObj->multiNodeUnion->CPPmultinode52 ) != *( other->multiNodeUnion->CPPmultinode52));
	case 53:
		return (*(thisObj->multiNodeUnion->CPPmultinode53 ) != *( other->multiNodeUnion->CPPmultinode53));
	case 54:
		return (*(thisObj->multiNodeUnion->CPPmultinode54 ) != *( other->multiNodeUnion->CPPmultinode54));
	case 55:
		return (*(thisObj->multiNodeUnion->CPPmultinode55 ) != *( other->multiNodeUnion->CPPmultinode55));
	case 56:
		return (*(thisObj->multiNodeUnion->CPPmultinode56 ) != *( other->multiNodeUnion->CPPmultinode56));
	case 57:
		return (*(thisObj->multiNodeUnion->CPPmultinode57 ) != *( other->multiNodeUnion->CPPmultinode57));
	case 58:
		return (*(thisObj->multiNodeUnion->CPPmultinode58 ) != *( other->multiNodeUnion->CPPmultinode58));
	case 59:
		return (*(thisObj->multiNodeUnion->CPPmultinode59 ) != *( other->multiNodeUnion->CPPmultinode59));
	case 60:
		return (*(thisObj->multiNodeUnion->CPPmultinode60 ) != *( other->multiNodeUnion->CPPmultinode60));
	case 61:
		return (*(thisObj->multiNodeUnion->CPPmultinode61 ) != *( other->multiNodeUnion->CPPmultinode61));
	case 62:
		return (*(thisObj->multiNodeUnion->CPPmultinode62 ) != *( other->multiNodeUnion->CPPmultinode62));
	case 63:
		return (*(thisObj->multiNodeUnion->CPPmultinode63 ) != *( other->multiNodeUnion->CPPmultinode63));
	case 64:
		return (*(thisObj->multiNodeUnion->CPPmultinode64 ) != *( other->multiNodeUnion->CPPmultinode64));
	case 65:
		return (*(thisObj->multiNodeUnion->CPPmultinode65 ) != *( other->multiNodeUnion->CPPmultinode65));
	case 66:
		return (*(thisObj->multiNodeUnion->CPPmultinode66 ) != *( other->multiNodeUnion->CPPmultinode66));
	case 67:
		return (*(thisObj->multiNodeUnion->CPPmultinode67 ) != *( other->multiNodeUnion->CPPmultinode67));
	case 68:
		return (*(thisObj->multiNodeUnion->CPPmultinode68 ) != *( other->multiNodeUnion->CPPmultinode68));
	case 69:
		return (*(thisObj->multiNodeUnion->CPPmultinode69 ) != *( other->multiNodeUnion->CPPmultinode69));
	case 70:
		return (*(thisObj->multiNodeUnion->CPPmultinode70 ) != *( other->multiNodeUnion->CPPmultinode70));
	case 71:
		return (*(thisObj->multiNodeUnion->CPPmultinode71 ) != *( other->multiNodeUnion->CPPmultinode71));
	case 72:
		return (*(thisObj->multiNodeUnion->CPPmultinode72 ) != *( other->multiNodeUnion->CPPmultinode72));
	case 73:
		return (*(thisObj->multiNodeUnion->CPPmultinode73 ) != *( other->multiNodeUnion->CPPmultinode73));
	case 74:
		return (*(thisObj->multiNodeUnion->CPPmultinode74 ) != *( other->multiNodeUnion->CPPmultinode74));
	case 75:
		return (*(thisObj->multiNodeUnion->CPPmultinode75 ) != *( other->multiNodeUnion->CPPmultinode75));
	case 76:
		return (*(thisObj->multiNodeUnion->CPPmultinode76 ) != *( other->multiNodeUnion->CPPmultinode76));
	case 77:
		return (*(thisObj->multiNodeUnion->CPPmultinode77 ) != *( other->multiNodeUnion->CPPmultinode77));
	case 78:
		return (*(thisObj->multiNodeUnion->CPPmultinode78 ) != *( other->multiNodeUnion->CPPmultinode78));
	case 79:
		return (*(thisObj->multiNodeUnion->CPPmultinode79 ) != *( other->multiNodeUnion->CPPmultinode79));
	case 80:
		return (*(thisObj->multiNodeUnion->CPPmultinode80 ) != *( other->multiNodeUnion->CPPmultinode80));
	case 81:
		return (*(thisObj->multiNodeUnion->CPPmultinode81 ) != *( other->multiNodeUnion->CPPmultinode81));
	case 82:
		return (*(thisObj->multiNodeUnion->CPPmultinode82 ) != *( other->multiNodeUnion->CPPmultinode82));
	case 83:
		return (*(thisObj->multiNodeUnion->CPPmultinode83 ) != *( other->multiNodeUnion->CPPmultinode83));
	case 84:
		return (*(thisObj->multiNodeUnion->CPPmultinode84 ) != *( other->multiNodeUnion->CPPmultinode84));
	case 85:
		return (*(thisObj->multiNodeUnion->CPPmultinode85 ) != *( other->multiNodeUnion->CPPmultinode85));
	case 86:
		return (*(thisObj->multiNodeUnion->CPPmultinode86 ) != *( other->multiNodeUnion->CPPmultinode86));
	case 87:
		return (*(thisObj->multiNodeUnion->CPPmultinode87 ) != *( other->multiNodeUnion->CPPmultinode87));
	case 88:
		return (*(thisObj->multiNodeUnion->CPPmultinode88 ) != *( other->multiNodeUnion->CPPmultinode88));
	case 89:
		return (*(thisObj->multiNodeUnion->CPPmultinode89 ) != *( other->multiNodeUnion->CPPmultinode89));
	case 90:
		return (*(thisObj->multiNodeUnion->CPPmultinode90 ) != *( other->multiNodeUnion->CPPmultinode90));
	case 91:
		return (*(thisObj->multiNodeUnion->CPPmultinode91 ) != *( other->multiNodeUnion->CPPmultinode91));
	case 92:
		return (*(thisObj->multiNodeUnion->CPPmultinode92 ) != *( other->multiNodeUnion->CPPmultinode92));
	case 93:
		return (*(thisObj->multiNodeUnion->CPPmultinode93 ) != *( other->multiNodeUnion->CPPmultinode93));
	case 94:
		return (*(thisObj->multiNodeUnion->CPPmultinode94 ) != *( other->multiNodeUnion->CPPmultinode94));
	case 95:
		return (*(thisObj->multiNodeUnion->CPPmultinode95 ) != *( other->multiNodeUnion->CPPmultinode95));
	case 96:
		return (*(thisObj->multiNodeUnion->CPPmultinode96 ) != *( other->multiNodeUnion->CPPmultinode96));
	case 97:
		return (*(thisObj->multiNodeUnion->CPPmultinode97 ) != *( other->multiNodeUnion->CPPmultinode97));
	case 98:
		return (*(thisObj->multiNodeUnion->CPPmultinode98 ) != *( other->multiNodeUnion->CPPmultinode98));
	case 99:
		return (*(thisObj->multiNodeUnion->CPPmultinode99 ) != *( other->multiNodeUnion->CPPmultinode99));
	case 100:
		return (*(thisObj->multiNodeUnion->CPPmultinode100 ) != *( other->multiNodeUnion->CPPmultinode100));
	case 101:
		return (*(thisObj->multiNodeUnion->CPPmultinode101 ) != *( other->multiNodeUnion->CPPmultinode101));
	case 102:
		return (*(thisObj->multiNodeUnion->CPPmultinode102 ) != *( other->multiNodeUnion->CPPmultinode102));
	case 103:
		return (*(thisObj->multiNodeUnion->CPPmultinode103 ) != *( other->multiNodeUnion->CPPmultinode103));
	case 104:
		return (*(thisObj->multiNodeUnion->CPPmultinode104 ) != *( other->multiNodeUnion->CPPmultinode104));
	case 105:
		return (*(thisObj->multiNodeUnion->CPPmultinode105 ) != *( other->multiNodeUnion->CPPmultinode105));
	case 106:
		return (*(thisObj->multiNodeUnion->CPPmultinode106 ) != *( other->multiNodeUnion->CPPmultinode106));
	case 107:
		return (*(thisObj->multiNodeUnion->CPPmultinode107 ) != *( other->multiNodeUnion->CPPmultinode107));
	case 108:
		return (*(thisObj->multiNodeUnion->CPPmultinode108 ) != *( other->multiNodeUnion->CPPmultinode108));
	case 109:
		return (*(thisObj->multiNodeUnion->CPPmultinode109 ) != *( other->multiNodeUnion->CPPmultinode109));
	case 110:
		return (*(thisObj->multiNodeUnion->CPPmultinode110 ) != *( other->multiNodeUnion->CPPmultinode110));
	case 111:
		return (*(thisObj->multiNodeUnion->CPPmultinode111 ) != *( other->multiNodeUnion->CPPmultinode111));
	case 112:
		return (*(thisObj->multiNodeUnion->CPPmultinode112 ) != *( other->multiNodeUnion->CPPmultinode112));
	case 113:
		return (*(thisObj->multiNodeUnion->CPPmultinode113 ) != *( other->multiNodeUnion->CPPmultinode113));
	case 114:
		return (*(thisObj->multiNodeUnion->CPPmultinode114 ) != *( other->multiNodeUnion->CPPmultinode114));
	case 115:
		return (*(thisObj->multiNodeUnion->CPPmultinode115 ) != *( other->multiNodeUnion->CPPmultinode115));
	case 116:
		return (*(thisObj->multiNodeUnion->CPPmultinode116 ) != *( other->multiNodeUnion->CPPmultinode116));
	case 117:
		return (*(thisObj->multiNodeUnion->CPPmultinode117 ) != *( other->multiNodeUnion->CPPmultinode117));
	case 118:
		return (*(thisObj->multiNodeUnion->CPPmultinode118 ) != *( other->multiNodeUnion->CPPmultinode118));
	case 119:
		return (*(thisObj->multiNodeUnion->CPPmultinode119 ) != *( other->multiNodeUnion->CPPmultinode119));
	case 120:
		return (*(thisObj->multiNodeUnion->CPPmultinode120 ) != *( other->multiNodeUnion->CPPmultinode120));
	case 121:
		return (*(thisObj->multiNodeUnion->CPPmultinode121 ) != *( other->multiNodeUnion->CPPmultinode121));
	case 122:
		return (*(thisObj->multiNodeUnion->CPPmultinode122 ) != *( other->multiNodeUnion->CPPmultinode122));
	case 123:
		return (*(thisObj->multiNodeUnion->CPPmultinode123 ) != *( other->multiNodeUnion->CPPmultinode123));
	case 124:
		return (*(thisObj->multiNodeUnion->CPPmultinode124 ) != *( other->multiNodeUnion->CPPmultinode124));
	case 125:
		return (*(thisObj->multiNodeUnion->CPPmultinode125 ) != *( other->multiNodeUnion->CPPmultinode125));
	case 126:
		return (*(thisObj->multiNodeUnion->CPPmultinode126 ) != *( other->multiNodeUnion->CPPmultinode126));
	case 127:
		return (*(thisObj->multiNodeUnion->CPPmultinode127 ) != *( other->multiNodeUnion->CPPmultinode127));
	case 128:
		return (*(thisObj->multiNodeUnion->CPPmultinode128 ) != *( other->multiNodeUnion->CPPmultinode128));
	case 129:
		return (*(thisObj->multiNodeUnion->CPPmultinode129 ) != *( other->multiNodeUnion->CPPmultinode129));
	case 130:
		return (*(thisObj->multiNodeUnion->CPPmultinode130 ) != *( other->multiNodeUnion->CPPmultinode130));
	case 131:
		return (*(thisObj->multiNodeUnion->CPPmultinode131 ) != *( other->multiNodeUnion->CPPmultinode131));
	case 132:
		return (*(thisObj->multiNodeUnion->CPPmultinode132 ) != *( other->multiNodeUnion->CPPmultinode132));
	case 133:
		return (*(thisObj->multiNodeUnion->CPPmultinode133 ) != *( other->multiNodeUnion->CPPmultinode133));
	case 134:
		return (*(thisObj->multiNodeUnion->CPPmultinode134 ) != *( other->multiNodeUnion->CPPmultinode134));
	case 135:
		return (*(thisObj->multiNodeUnion->CPPmultinode135 ) != *( other->multiNodeUnion->CPPmultinode135));
	case 136:
		return (*(thisObj->multiNodeUnion->CPPmultinode136 ) != *( other->multiNodeUnion->CPPmultinode136));
	case 137:
		return (*(thisObj->multiNodeUnion->CPPmultinode137 ) != *( other->multiNodeUnion->CPPmultinode137));
	case 138:
		return (*(thisObj->multiNodeUnion->CPPmultinode138 ) != *( other->multiNodeUnion->CPPmultinode138));
	case 139:
		return (*(thisObj->multiNodeUnion->CPPmultinode139 ) != *( other->multiNodeUnion->CPPmultinode139));
	case 140:
		return (*(thisObj->multiNodeUnion->CPPmultinode140 ) != *( other->multiNodeUnion->CPPmultinode140));
	case 141:
		return (*(thisObj->multiNodeUnion->CPPmultinode141 ) != *( other->multiNodeUnion->CPPmultinode141));
	case 142:
		return (*(thisObj->multiNodeUnion->CPPmultinode142 ) != *( other->multiNodeUnion->CPPmultinode142));
	case 143:
		return (*(thisObj->multiNodeUnion->CPPmultinode143 ) != *( other->multiNodeUnion->CPPmultinode143));
	case 144:
		return (*(thisObj->multiNodeUnion->CPPmultinode144 ) != *( other->multiNodeUnion->CPPmultinode144));
	case 145:
		return (*(thisObj->multiNodeUnion->CPPmultinode145 ) != *( other->multiNodeUnion->CPPmultinode145));
	case 146:
		return (*(thisObj->multiNodeUnion->CPPmultinode146 ) != *( other->multiNodeUnion->CPPmultinode146));
	case 147:
		return (*(thisObj->multiNodeUnion->CPPmultinode147 ) != *( other->multiNodeUnion->CPPmultinode147));
	case 148:
		return (*(thisObj->multiNodeUnion->CPPmultinode148 ) != *( other->multiNodeUnion->CPPmultinode148));
	case 149:
		return (*(thisObj->multiNodeUnion->CPPmultinode149 ) != *( other->multiNodeUnion->CPPmultinode149));
	case 150:
		return (*(thisObj->multiNodeUnion->CPPmultinode150 ) != *( other->multiNodeUnion->CPPmultinode150));
	case 151:
		return (*(thisObj->multiNodeUnion->CPPmultinode151 ) != *( other->multiNodeUnion->CPPmultinode151));
	case 152:
		return (*(thisObj->multiNodeUnion->CPPmultinode152 ) != *( other->multiNodeUnion->CPPmultinode152));
	case 153:
		return (*(thisObj->multiNodeUnion->CPPmultinode153 ) != *( other->multiNodeUnion->CPPmultinode153));
	case 154:
		return (*(thisObj->multiNodeUnion->CPPmultinode154 ) != *( other->multiNodeUnion->CPPmultinode154));
	case 155:
		return (*(thisObj->multiNodeUnion->CPPmultinode155 ) != *( other->multiNodeUnion->CPPmultinode155));
	case 156:
		return (*(thisObj->multiNodeUnion->CPPmultinode156 ) != *( other->multiNodeUnion->CPPmultinode156));
	case 157:
		return (*(thisObj->multiNodeUnion->CPPmultinode157 ) != *( other->multiNodeUnion->CPPmultinode157));
	case 158:
		return (*(thisObj->multiNodeUnion->CPPmultinode158 ) != *( other->multiNodeUnion->CPPmultinode158));
	case 159:
		return (*(thisObj->multiNodeUnion->CPPmultinode159 ) != *( other->multiNodeUnion->CPPmultinode159));
	case 160:
		return (*(thisObj->multiNodeUnion->CPPmultinode160 ) != *( other->multiNodeUnion->CPPmultinode160));
	case 161:
		return (*(thisObj->multiNodeUnion->CPPmultinode161 ) != *( other->multiNodeUnion->CPPmultinode161));
	case 162:
		return (*(thisObj->multiNodeUnion->CPPmultinode162 ) != *( other->multiNodeUnion->CPPmultinode162));
	case 163:
		return (*(thisObj->multiNodeUnion->CPPmultinode163 ) != *( other->multiNodeUnion->CPPmultinode163));
	case 164:
		return (*(thisObj->multiNodeUnion->CPPmultinode164 ) != *( other->multiNodeUnion->CPPmultinode164));
	case 165:
		return (*(thisObj->multiNodeUnion->CPPmultinode165 ) != *( other->multiNodeUnion->CPPmultinode165));
	case 166:
		return (*(thisObj->multiNodeUnion->CPPmultinode166 ) != *( other->multiNodeUnion->CPPmultinode166));
	case 167:
		return (*(thisObj->multiNodeUnion->CPPmultinode167 ) != *( other->multiNodeUnion->CPPmultinode167));
	case 168:
		return (*(thisObj->multiNodeUnion->CPPmultinode168 ) != *( other->multiNodeUnion->CPPmultinode168));
	case 169:
		return (*(thisObj->multiNodeUnion->CPPmultinode169 ) != *( other->multiNodeUnion->CPPmultinode169));
	case 170:
		return (*(thisObj->multiNodeUnion->CPPmultinode170 ) != *( other->multiNodeUnion->CPPmultinode170));
	case 171:
		return (*(thisObj->multiNodeUnion->CPPmultinode171 ) != *( other->multiNodeUnion->CPPmultinode171));
	case 172:
		return (*(thisObj->multiNodeUnion->CPPmultinode172 ) != *( other->multiNodeUnion->CPPmultinode172));
	case 173:
		return (*(thisObj->multiNodeUnion->CPPmultinode173 ) != *( other->multiNodeUnion->CPPmultinode173));
	case 174:
		return (*(thisObj->multiNodeUnion->CPPmultinode174 ) != *( other->multiNodeUnion->CPPmultinode174));
	case 175:
		return (*(thisObj->multiNodeUnion->CPPmultinode175 ) != *( other->multiNodeUnion->CPPmultinode175));
	case 176:
		return (*(thisObj->multiNodeUnion->CPPmultinode176 ) != *( other->multiNodeUnion->CPPmultinode176));
	case 177:
		return (*(thisObj->multiNodeUnion->CPPmultinode177 ) != *( other->multiNodeUnion->CPPmultinode177));
	case 178:
		return (*(thisObj->multiNodeUnion->CPPmultinode178 ) != *( other->multiNodeUnion->CPPmultinode178));
	case 179:
		return (*(thisObj->multiNodeUnion->CPPmultinode179 ) != *( other->multiNodeUnion->CPPmultinode179));
	case 180:
		return (*(thisObj->multiNodeUnion->CPPmultinode180 ) != *( other->multiNodeUnion->CPPmultinode180));
	case 181:
		return (*(thisObj->multiNodeUnion->CPPmultinode181 ) != *( other->multiNodeUnion->CPPmultinode181));
	case 182:
		return (*(thisObj->multiNodeUnion->CPPmultinode182 ) != *( other->multiNodeUnion->CPPmultinode182));
	case 183:
		return (*(thisObj->multiNodeUnion->CPPmultinode183 ) != *( other->multiNodeUnion->CPPmultinode183));
	case 184:
		return (*(thisObj->multiNodeUnion->CPPmultinode184 ) != *( other->multiNodeUnion->CPPmultinode184));
	case 185:
		return (*(thisObj->multiNodeUnion->CPPmultinode185 ) != *( other->multiNodeUnion->CPPmultinode185));
	case 186:
		return (*(thisObj->multiNodeUnion->CPPmultinode186 ) != *( other->multiNodeUnion->CPPmultinode186));
	case 187:
		return (*(thisObj->multiNodeUnion->CPPmultinode187 ) != *( other->multiNodeUnion->CPPmultinode187));
	case 188:
		return (*(thisObj->multiNodeUnion->CPPmultinode188 ) != *( other->multiNodeUnion->CPPmultinode188));
	case 189:
		return (*(thisObj->multiNodeUnion->CPPmultinode189 ) != *( other->multiNodeUnion->CPPmultinode189));
	case 190:
		return (*(thisObj->multiNodeUnion->CPPmultinode190 ) != *( other->multiNodeUnion->CPPmultinode190));
	case 191:
		return (*(thisObj->multiNodeUnion->CPPmultinode191 ) != *( other->multiNodeUnion->CPPmultinode191));
	case 192:
		return (*(thisObj->multiNodeUnion->CPPmultinode192 ) != *( other->multiNodeUnion->CPPmultinode192));
	case 193:
		return (*(thisObj->multiNodeUnion->CPPmultinode193 ) != *( other->multiNodeUnion->CPPmultinode193));
	case 194:
		return (*(thisObj->multiNodeUnion->CPPmultinode194 ) != *( other->multiNodeUnion->CPPmultinode194));
	case 195:
		return (*(thisObj->multiNodeUnion->CPPmultinode195 ) != *( other->multiNodeUnion->CPPmultinode195));
	case 196:
		return (*(thisObj->multiNodeUnion->CPPmultinode196 ) != *( other->multiNodeUnion->CPPmultinode196));
	}
	return false;
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^ UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>::operator%(CShorpUnOrderedMultiNode<Key, Value>^ thisObj, CShorpUnOrderedMultiNode<Key, Value>^ other)
{
	if (Object::ReferenceEquals(const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^>(thisObj), nullptr)) return nullptr;
	if (Object::ReferenceEquals(const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^>(other), nullptr)) return thisObj;
	if (other->isInitialized == 0) return thisObj;
	thisObj->isInitialized = other->isInitialized;

	if (thisObj->nKeyValueType != other->nKeyValueType) return thisObj;

	if (other->gIntKeyClassDictionary) thisObj->gIntKeyClassDictionary = other->gIntKeyClassDictionary;
	if (other->gValueClassDictionary) thisObj->gValueClassDictionary = other->gValueClassDictionary;

	switch (thisObj->nKeyValueType)
	{
	case 0: default:
		break;
	case 1:
		(*(thisObj->multiNodeUnion->CPPmultinode1) = *(other->multiNodeUnion->CPPmultinode1)); break;
	case 2:
		(*(thisObj->multiNodeUnion->CPPmultinode2) = *(other->multiNodeUnion->CPPmultinode2)); break;
	case 3:
		(*(thisObj->multiNodeUnion->CPPmultinode3) = *(other->multiNodeUnion->CPPmultinode3)); break;
	case 4:
		(*(thisObj->multiNodeUnion->CPPmultinode4) = *(other->multiNodeUnion->CPPmultinode4)); break;
	case 5:
		(*(thisObj->multiNodeUnion->CPPmultinode5) = *(other->multiNodeUnion->CPPmultinode5)); break;
	case 6:
		(*(thisObj->multiNodeUnion->CPPmultinode6) = *(other->multiNodeUnion->CPPmultinode6)); break;
	case 7:
		(*(thisObj->multiNodeUnion->CPPmultinode7) = *(other->multiNodeUnion->CPPmultinode7)); break;
	case 8:
		(*(thisObj->multiNodeUnion->CPPmultinode8) = *(other->multiNodeUnion->CPPmultinode8)); break;
	case 9:
		(*(thisObj->multiNodeUnion->CPPmultinode9) = *(other->multiNodeUnion->CPPmultinode9)); break;
	case 10:
		(*(thisObj->multiNodeUnion->CPPmultinode10) = *(other->multiNodeUnion->CPPmultinode10)); break;
	case 11:
		(*(thisObj->multiNodeUnion->CPPmultinode11) = *(other->multiNodeUnion->CPPmultinode11)); break;
	case 12:
		(*(thisObj->multiNodeUnion->CPPmultinode12) = *(other->multiNodeUnion->CPPmultinode12)); break;
	case 13:
		(*(thisObj->multiNodeUnion->CPPmultinode13) = *(other->multiNodeUnion->CPPmultinode13)); break;
	case 14:
		(*(thisObj->multiNodeUnion->CPPmultinode14) = *(other->multiNodeUnion->CPPmultinode14)); break;
	case 15:
		(*(thisObj->multiNodeUnion->CPPmultinode15) = *(other->multiNodeUnion->CPPmultinode15)); break;
	case 16:
		(*(thisObj->multiNodeUnion->CPPmultinode16) = *(other->multiNodeUnion->CPPmultinode16)); break;
	case 17:
		(*(thisObj->multiNodeUnion->CPPmultinode17) = *(other->multiNodeUnion->CPPmultinode17)); break;
	case 18:
		(*(thisObj->multiNodeUnion->CPPmultinode18) = *(other->multiNodeUnion->CPPmultinode18)); break;
	case 19:
		(*(thisObj->multiNodeUnion->CPPmultinode19) = *(other->multiNodeUnion->CPPmultinode19)); break;
	case 20:
		(*(thisObj->multiNodeUnion->CPPmultinode20) = *(other->multiNodeUnion->CPPmultinode20)); break;
	case 21:
		(*(thisObj->multiNodeUnion->CPPmultinode21) = *(other->multiNodeUnion->CPPmultinode21)); break;
	case 22:
		(*(thisObj->multiNodeUnion->CPPmultinode22) = *(other->multiNodeUnion->CPPmultinode22)); break;
	case 23:
		(*(thisObj->multiNodeUnion->CPPmultinode23) = *(other->multiNodeUnion->CPPmultinode23)); break;
	case 24:
		(*(thisObj->multiNodeUnion->CPPmultinode24) = *(other->multiNodeUnion->CPPmultinode24)); break;
	case 25:
		(*(thisObj->multiNodeUnion->CPPmultinode25) = *(other->multiNodeUnion->CPPmultinode25)); break;
	case 26:
		(*(thisObj->multiNodeUnion->CPPmultinode26) = *(other->multiNodeUnion->CPPmultinode26)); break;
	case 27:
		(*(thisObj->multiNodeUnion->CPPmultinode27) = *(other->multiNodeUnion->CPPmultinode27)); break;
	case 28:
		(*(thisObj->multiNodeUnion->CPPmultinode28) = *(other->multiNodeUnion->CPPmultinode28)); break;
	case 29:
		(*(thisObj->multiNodeUnion->CPPmultinode29) = *(other->multiNodeUnion->CPPmultinode29)); break;
	case 30:
		(*(thisObj->multiNodeUnion->CPPmultinode30) = *(other->multiNodeUnion->CPPmultinode30)); break;
	case 31:
		(*(thisObj->multiNodeUnion->CPPmultinode31) = *(other->multiNodeUnion->CPPmultinode31)); break;
	case 32:
		(*(thisObj->multiNodeUnion->CPPmultinode32) = *(other->multiNodeUnion->CPPmultinode32)); break;
	case 33:
		(*(thisObj->multiNodeUnion->CPPmultinode33) = *(other->multiNodeUnion->CPPmultinode33)); break;
	case 34:
		(*(thisObj->multiNodeUnion->CPPmultinode34) = *(other->multiNodeUnion->CPPmultinode34)); break;
	case 35:
		(*(thisObj->multiNodeUnion->CPPmultinode35) = *(other->multiNodeUnion->CPPmultinode35)); break;
	case 36:
		(*(thisObj->multiNodeUnion->CPPmultinode36) = *(other->multiNodeUnion->CPPmultinode36)); break;
	case 37:
		(*(thisObj->multiNodeUnion->CPPmultinode37) = *(other->multiNodeUnion->CPPmultinode37)); break;
	case 38:
		(*(thisObj->multiNodeUnion->CPPmultinode38) = *(other->multiNodeUnion->CPPmultinode38)); break;
	case 39:
		(*(thisObj->multiNodeUnion->CPPmultinode39) = *(other->multiNodeUnion->CPPmultinode39)); break;
	case 40:
		(*(thisObj->multiNodeUnion->CPPmultinode40) = *(other->multiNodeUnion->CPPmultinode40)); break;
	case 41:
		(*(thisObj->multiNodeUnion->CPPmultinode41) = *(other->multiNodeUnion->CPPmultinode41)); break;
	case 42:
		(*(thisObj->multiNodeUnion->CPPmultinode42) = *(other->multiNodeUnion->CPPmultinode42)); break;
	case 43:
		(*(thisObj->multiNodeUnion->CPPmultinode43) = *(other->multiNodeUnion->CPPmultinode43)); break;
	case 44:
		(*(thisObj->multiNodeUnion->CPPmultinode44) = *(other->multiNodeUnion->CPPmultinode44)); break;
	case 45:
		(*(thisObj->multiNodeUnion->CPPmultinode45) = *(other->multiNodeUnion->CPPmultinode45)); break;
	case 46:
		(*(thisObj->multiNodeUnion->CPPmultinode46) = *(other->multiNodeUnion->CPPmultinode46)); break;
	case 47:
		(*(thisObj->multiNodeUnion->CPPmultinode47) = *(other->multiNodeUnion->CPPmultinode47)); break;
	case 48:
		(*(thisObj->multiNodeUnion->CPPmultinode48) = *(other->multiNodeUnion->CPPmultinode48)); break;
	case 49:
		(*(thisObj->multiNodeUnion->CPPmultinode49) = *(other->multiNodeUnion->CPPmultinode49)); break;
	case 50:
		(*(thisObj->multiNodeUnion->CPPmultinode50) = *(other->multiNodeUnion->CPPmultinode50)); break;
	case 51:
		(*(thisObj->multiNodeUnion->CPPmultinode51) = *(other->multiNodeUnion->CPPmultinode51)); break;
	case 52:
		(*(thisObj->multiNodeUnion->CPPmultinode52) = *(other->multiNodeUnion->CPPmultinode52)); break;
	case 53:
		(*(thisObj->multiNodeUnion->CPPmultinode53) = *(other->multiNodeUnion->CPPmultinode53)); break;
	case 54:
		(*(thisObj->multiNodeUnion->CPPmultinode54) = *(other->multiNodeUnion->CPPmultinode54)); break;
	case 55:
		(*(thisObj->multiNodeUnion->CPPmultinode55) = *(other->multiNodeUnion->CPPmultinode55)); break;
	case 56:
		(*(thisObj->multiNodeUnion->CPPmultinode56) = *(other->multiNodeUnion->CPPmultinode56)); break;
	case 57:
		(*(thisObj->multiNodeUnion->CPPmultinode57) = *(other->multiNodeUnion->CPPmultinode57)); break;
	case 58:
		(*(thisObj->multiNodeUnion->CPPmultinode58) = *(other->multiNodeUnion->CPPmultinode58)); break;
	case 59:
		(*(thisObj->multiNodeUnion->CPPmultinode59) = *(other->multiNodeUnion->CPPmultinode59)); break;
	case 60:
		(*(thisObj->multiNodeUnion->CPPmultinode60) = *(other->multiNodeUnion->CPPmultinode60)); break;
	case 61:
		(*(thisObj->multiNodeUnion->CPPmultinode61) = *(other->multiNodeUnion->CPPmultinode61)); break;
	case 62:
		(*(thisObj->multiNodeUnion->CPPmultinode62) = *(other->multiNodeUnion->CPPmultinode62)); break;
	case 63:
		(*(thisObj->multiNodeUnion->CPPmultinode63) = *(other->multiNodeUnion->CPPmultinode63)); break;
	case 64:
		(*(thisObj->multiNodeUnion->CPPmultinode64) = *(other->multiNodeUnion->CPPmultinode64)); break;
	case 65:
		(*(thisObj->multiNodeUnion->CPPmultinode65) = *(other->multiNodeUnion->CPPmultinode65)); break;
	case 66:
		(*(thisObj->multiNodeUnion->CPPmultinode66) = *(other->multiNodeUnion->CPPmultinode66)); break;
	case 67:
		(*(thisObj->multiNodeUnion->CPPmultinode67) = *(other->multiNodeUnion->CPPmultinode67)); break;
	case 68:
		(*(thisObj->multiNodeUnion->CPPmultinode68) = *(other->multiNodeUnion->CPPmultinode68)); break;
	case 69:
		(*(thisObj->multiNodeUnion->CPPmultinode69) = *(other->multiNodeUnion->CPPmultinode69)); break;
	case 70:
		(*(thisObj->multiNodeUnion->CPPmultinode70) = *(other->multiNodeUnion->CPPmultinode70)); break;
	case 71:
		(*(thisObj->multiNodeUnion->CPPmultinode71) = *(other->multiNodeUnion->CPPmultinode71)); break;
	case 72:
		(*(thisObj->multiNodeUnion->CPPmultinode72) = *(other->multiNodeUnion->CPPmultinode72)); break;
	case 73:
		(*(thisObj->multiNodeUnion->CPPmultinode73) = *(other->multiNodeUnion->CPPmultinode73)); break;
	case 74:
		(*(thisObj->multiNodeUnion->CPPmultinode74) = *(other->multiNodeUnion->CPPmultinode74)); break;
	case 75:
		(*(thisObj->multiNodeUnion->CPPmultinode75) = *(other->multiNodeUnion->CPPmultinode75)); break;
	case 76:
		(*(thisObj->multiNodeUnion->CPPmultinode76) = *(other->multiNodeUnion->CPPmultinode76)); break;
	case 77:
		(*(thisObj->multiNodeUnion->CPPmultinode77) = *(other->multiNodeUnion->CPPmultinode77)); break;
	case 78:
		(*(thisObj->multiNodeUnion->CPPmultinode78) = *(other->multiNodeUnion->CPPmultinode78)); break;
	case 79:
		(*(thisObj->multiNodeUnion->CPPmultinode79) = *(other->multiNodeUnion->CPPmultinode79)); break;
	case 80:
		(*(thisObj->multiNodeUnion->CPPmultinode80) = *(other->multiNodeUnion->CPPmultinode80)); break;
	case 81:
		(*(thisObj->multiNodeUnion->CPPmultinode81) = *(other->multiNodeUnion->CPPmultinode81)); break;
	case 82:
		(*(thisObj->multiNodeUnion->CPPmultinode82) = *(other->multiNodeUnion->CPPmultinode82)); break;
	case 83:
		(*(thisObj->multiNodeUnion->CPPmultinode83) = *(other->multiNodeUnion->CPPmultinode83)); break;
	case 84:
		(*(thisObj->multiNodeUnion->CPPmultinode84) = *(other->multiNodeUnion->CPPmultinode84)); break;
	case 85:
		(*(thisObj->multiNodeUnion->CPPmultinode85) = *(other->multiNodeUnion->CPPmultinode85)); break;
	case 86:
		(*(thisObj->multiNodeUnion->CPPmultinode86) = *(other->multiNodeUnion->CPPmultinode86)); break;
	case 87:
		(*(thisObj->multiNodeUnion->CPPmultinode87) = *(other->multiNodeUnion->CPPmultinode87)); break;
	case 88:
		(*(thisObj->multiNodeUnion->CPPmultinode88) = *(other->multiNodeUnion->CPPmultinode88)); break;
	case 89:
		(*(thisObj->multiNodeUnion->CPPmultinode89) = *(other->multiNodeUnion->CPPmultinode89)); break;
	case 90:
		(*(thisObj->multiNodeUnion->CPPmultinode90) = *(other->multiNodeUnion->CPPmultinode90)); break;
	case 91:
		(*(thisObj->multiNodeUnion->CPPmultinode91) = *(other->multiNodeUnion->CPPmultinode91)); break;
	case 92:
		(*(thisObj->multiNodeUnion->CPPmultinode92) = *(other->multiNodeUnion->CPPmultinode92)); break;
	case 93:
		(*(thisObj->multiNodeUnion->CPPmultinode93) = *(other->multiNodeUnion->CPPmultinode93)); break;
	case 94:
		(*(thisObj->multiNodeUnion->CPPmultinode94) = *(other->multiNodeUnion->CPPmultinode94)); break;
	case 95:
		(*(thisObj->multiNodeUnion->CPPmultinode95) = *(other->multiNodeUnion->CPPmultinode95)); break;
	case 96:
		(*(thisObj->multiNodeUnion->CPPmultinode96) = *(other->multiNodeUnion->CPPmultinode96)); break;
	case 97:
		(*(thisObj->multiNodeUnion->CPPmultinode97) = *(other->multiNodeUnion->CPPmultinode97)); break;
	case 98:
		(*(thisObj->multiNodeUnion->CPPmultinode98) = *(other->multiNodeUnion->CPPmultinode98)); break;
	case 99:
		(*(thisObj->multiNodeUnion->CPPmultinode99) = *(other->multiNodeUnion->CPPmultinode99)); break;
	case 100:
		(*(thisObj->multiNodeUnion->CPPmultinode100) = *(other->multiNodeUnion->CPPmultinode100)); break;
	case 101:
		(*(thisObj->multiNodeUnion->CPPmultinode101) = *(other->multiNodeUnion->CPPmultinode101)); break;
	case 102:
		(*(thisObj->multiNodeUnion->CPPmultinode102) = *(other->multiNodeUnion->CPPmultinode102)); break;
	case 103:
		(*(thisObj->multiNodeUnion->CPPmultinode103) = *(other->multiNodeUnion->CPPmultinode103)); break;
	case 104:
		(*(thisObj->multiNodeUnion->CPPmultinode104) = *(other->multiNodeUnion->CPPmultinode104)); break;
	case 105:
		(*(thisObj->multiNodeUnion->CPPmultinode105) = *(other->multiNodeUnion->CPPmultinode105)); break;
	case 106:
		(*(thisObj->multiNodeUnion->CPPmultinode106) = *(other->multiNodeUnion->CPPmultinode106)); break;
	case 107:
		(*(thisObj->multiNodeUnion->CPPmultinode107) = *(other->multiNodeUnion->CPPmultinode107)); break;
	case 108:
		(*(thisObj->multiNodeUnion->CPPmultinode108) = *(other->multiNodeUnion->CPPmultinode108)); break;
	case 109:
		(*(thisObj->multiNodeUnion->CPPmultinode109) = *(other->multiNodeUnion->CPPmultinode109)); break;
	case 110:
		(*(thisObj->multiNodeUnion->CPPmultinode110) = *(other->multiNodeUnion->CPPmultinode110)); break;
	case 111:
		(*(thisObj->multiNodeUnion->CPPmultinode111) = *(other->multiNodeUnion->CPPmultinode111)); break;
	case 112:
		(*(thisObj->multiNodeUnion->CPPmultinode112) = *(other->multiNodeUnion->CPPmultinode112)); break;
	case 113:
		(*(thisObj->multiNodeUnion->CPPmultinode113) = *(other->multiNodeUnion->CPPmultinode113)); break;
	case 114:
		(*(thisObj->multiNodeUnion->CPPmultinode114) = *(other->multiNodeUnion->CPPmultinode114)); break;
	case 115:
		(*(thisObj->multiNodeUnion->CPPmultinode115) = *(other->multiNodeUnion->CPPmultinode115)); break;
	case 116:
		(*(thisObj->multiNodeUnion->CPPmultinode116) = *(other->multiNodeUnion->CPPmultinode116)); break;
	case 117:
		(*(thisObj->multiNodeUnion->CPPmultinode117) = *(other->multiNodeUnion->CPPmultinode117)); break;
	case 118:
		(*(thisObj->multiNodeUnion->CPPmultinode118) = *(other->multiNodeUnion->CPPmultinode118)); break;
	case 119:
		(*(thisObj->multiNodeUnion->CPPmultinode119) = *(other->multiNodeUnion->CPPmultinode119)); break;
	case 120:
		(*(thisObj->multiNodeUnion->CPPmultinode120) = *(other->multiNodeUnion->CPPmultinode120)); break;
	case 121:
		(*(thisObj->multiNodeUnion->CPPmultinode121) = *(other->multiNodeUnion->CPPmultinode121)); break;
	case 122:
		(*(thisObj->multiNodeUnion->CPPmultinode122) = *(other->multiNodeUnion->CPPmultinode122)); break;
	case 123:
		(*(thisObj->multiNodeUnion->CPPmultinode123) = *(other->multiNodeUnion->CPPmultinode123)); break;
	case 124:
		(*(thisObj->multiNodeUnion->CPPmultinode124) = *(other->multiNodeUnion->CPPmultinode124)); break;
	case 125:
		(*(thisObj->multiNodeUnion->CPPmultinode125) = *(other->multiNodeUnion->CPPmultinode125)); break;
	case 126:
		(*(thisObj->multiNodeUnion->CPPmultinode126) = *(other->multiNodeUnion->CPPmultinode126)); break;
	case 127:
		(*(thisObj->multiNodeUnion->CPPmultinode127) = *(other->multiNodeUnion->CPPmultinode127)); break;
	case 128:
		(*(thisObj->multiNodeUnion->CPPmultinode128) = *(other->multiNodeUnion->CPPmultinode128)); break;
	case 129:
		(*(thisObj->multiNodeUnion->CPPmultinode129) = *(other->multiNodeUnion->CPPmultinode129)); break;
	case 130:
		(*(thisObj->multiNodeUnion->CPPmultinode130) = *(other->multiNodeUnion->CPPmultinode130)); break;
	case 131:
		(*(thisObj->multiNodeUnion->CPPmultinode131) = *(other->multiNodeUnion->CPPmultinode131)); break;
	case 132:
		(*(thisObj->multiNodeUnion->CPPmultinode132) = *(other->multiNodeUnion->CPPmultinode132)); break;
	case 133:
		(*(thisObj->multiNodeUnion->CPPmultinode133) = *(other->multiNodeUnion->CPPmultinode133)); break;
	case 134:
		(*(thisObj->multiNodeUnion->CPPmultinode134) = *(other->multiNodeUnion->CPPmultinode134)); break;
	case 135:
		(*(thisObj->multiNodeUnion->CPPmultinode135) = *(other->multiNodeUnion->CPPmultinode135)); break;
	case 136:
		(*(thisObj->multiNodeUnion->CPPmultinode136) = *(other->multiNodeUnion->CPPmultinode136)); break;
	case 137:
		(*(thisObj->multiNodeUnion->CPPmultinode137) = *(other->multiNodeUnion->CPPmultinode137)); break;
	case 138:
		(*(thisObj->multiNodeUnion->CPPmultinode138) = *(other->multiNodeUnion->CPPmultinode138)); break;
	case 139:
		(*(thisObj->multiNodeUnion->CPPmultinode139) = *(other->multiNodeUnion->CPPmultinode139)); break;
	case 140:
		(*(thisObj->multiNodeUnion->CPPmultinode140) = *(other->multiNodeUnion->CPPmultinode140)); break;
	case 141:
		(*(thisObj->multiNodeUnion->CPPmultinode141) = *(other->multiNodeUnion->CPPmultinode141)); break;
	case 142:
		(*(thisObj->multiNodeUnion->CPPmultinode142) = *(other->multiNodeUnion->CPPmultinode142)); break;
	case 143:
		(*(thisObj->multiNodeUnion->CPPmultinode143) = *(other->multiNodeUnion->CPPmultinode143)); break;
	case 144:
		(*(thisObj->multiNodeUnion->CPPmultinode144) = *(other->multiNodeUnion->CPPmultinode144)); break;
	case 145:
		(*(thisObj->multiNodeUnion->CPPmultinode145) = *(other->multiNodeUnion->CPPmultinode145)); break;
	case 146:
		(*(thisObj->multiNodeUnion->CPPmultinode146) = *(other->multiNodeUnion->CPPmultinode146)); break;
	case 147:
		(*(thisObj->multiNodeUnion->CPPmultinode147) = *(other->multiNodeUnion->CPPmultinode147)); break;
	case 148:
		(*(thisObj->multiNodeUnion->CPPmultinode148) = *(other->multiNodeUnion->CPPmultinode148)); break;
	case 149:
		(*(thisObj->multiNodeUnion->CPPmultinode149) = *(other->multiNodeUnion->CPPmultinode149)); break;
	case 150:
		(*(thisObj->multiNodeUnion->CPPmultinode150) = *(other->multiNodeUnion->CPPmultinode150)); break;
	case 151:
		(*(thisObj->multiNodeUnion->CPPmultinode151) = *(other->multiNodeUnion->CPPmultinode151)); break;
	case 152:
		(*(thisObj->multiNodeUnion->CPPmultinode152) = *(other->multiNodeUnion->CPPmultinode152)); break;
	case 153:
		(*(thisObj->multiNodeUnion->CPPmultinode153) = *(other->multiNodeUnion->CPPmultinode153)); break;
	case 154:
		(*(thisObj->multiNodeUnion->CPPmultinode154) = *(other->multiNodeUnion->CPPmultinode154)); break;
	case 155:
		(*(thisObj->multiNodeUnion->CPPmultinode155) = *(other->multiNodeUnion->CPPmultinode155)); break;
	case 156:
		(*(thisObj->multiNodeUnion->CPPmultinode156) = *(other->multiNodeUnion->CPPmultinode156)); break;
	case 157:
		(*(thisObj->multiNodeUnion->CPPmultinode157) = *(other->multiNodeUnion->CPPmultinode157)); break;
	case 158:
		(*(thisObj->multiNodeUnion->CPPmultinode158) = *(other->multiNodeUnion->CPPmultinode158)); break;
	case 159:
		(*(thisObj->multiNodeUnion->CPPmultinode159) = *(other->multiNodeUnion->CPPmultinode159)); break;
	case 160:
		(*(thisObj->multiNodeUnion->CPPmultinode160) = *(other->multiNodeUnion->CPPmultinode160)); break;
	case 161:
		(*(thisObj->multiNodeUnion->CPPmultinode161) = *(other->multiNodeUnion->CPPmultinode161)); break;
	case 162:
		(*(thisObj->multiNodeUnion->CPPmultinode162) = *(other->multiNodeUnion->CPPmultinode162)); break;
	case 163:
		(*(thisObj->multiNodeUnion->CPPmultinode163) = *(other->multiNodeUnion->CPPmultinode163)); break;
	case 164:
		(*(thisObj->multiNodeUnion->CPPmultinode164) = *(other->multiNodeUnion->CPPmultinode164)); break;
	case 165:
		(*(thisObj->multiNodeUnion->CPPmultinode165) = *(other->multiNodeUnion->CPPmultinode165)); break;
	case 166:
		(*(thisObj->multiNodeUnion->CPPmultinode166) = *(other->multiNodeUnion->CPPmultinode166)); break;
	case 167:
		(*(thisObj->multiNodeUnion->CPPmultinode167) = *(other->multiNodeUnion->CPPmultinode167)); break;
	case 168:
		(*(thisObj->multiNodeUnion->CPPmultinode168) = *(other->multiNodeUnion->CPPmultinode168)); break;
	case 169:
		(*(thisObj->multiNodeUnion->CPPmultinode169) = *(other->multiNodeUnion->CPPmultinode169)); break;
	case 170:
		(*(thisObj->multiNodeUnion->CPPmultinode170) = *(other->multiNodeUnion->CPPmultinode170)); break;
	case 171:
		(*(thisObj->multiNodeUnion->CPPmultinode171) = *(other->multiNodeUnion->CPPmultinode171)); break;
	case 172:
		(*(thisObj->multiNodeUnion->CPPmultinode172) = *(other->multiNodeUnion->CPPmultinode172)); break;
	case 173:
		(*(thisObj->multiNodeUnion->CPPmultinode173) = *(other->multiNodeUnion->CPPmultinode173)); break;
	case 174:
		(*(thisObj->multiNodeUnion->CPPmultinode174) = *(other->multiNodeUnion->CPPmultinode174)); break;
	case 175:
		(*(thisObj->multiNodeUnion->CPPmultinode175) = *(other->multiNodeUnion->CPPmultinode175)); break;
	case 176:
		(*(thisObj->multiNodeUnion->CPPmultinode176) = *(other->multiNodeUnion->CPPmultinode176)); break;
	case 177:
		(*(thisObj->multiNodeUnion->CPPmultinode177) = *(other->multiNodeUnion->CPPmultinode177)); break;
	case 178:
		(*(thisObj->multiNodeUnion->CPPmultinode178) = *(other->multiNodeUnion->CPPmultinode178)); break;
	case 179:
		(*(thisObj->multiNodeUnion->CPPmultinode179) = *(other->multiNodeUnion->CPPmultinode179)); break;
	case 180:
		(*(thisObj->multiNodeUnion->CPPmultinode180) = *(other->multiNodeUnion->CPPmultinode180)); break;
	case 181:
		(*(thisObj->multiNodeUnion->CPPmultinode181) = *(other->multiNodeUnion->CPPmultinode181)); break;
	case 182:
		(*(thisObj->multiNodeUnion->CPPmultinode182) = *(other->multiNodeUnion->CPPmultinode182)); break;
	case 183:
		(*(thisObj->multiNodeUnion->CPPmultinode183) = *(other->multiNodeUnion->CPPmultinode183)); break;
	case 184:
		(*(thisObj->multiNodeUnion->CPPmultinode184) = *(other->multiNodeUnion->CPPmultinode184)); break;
	case 185:
		(*(thisObj->multiNodeUnion->CPPmultinode185) = *(other->multiNodeUnion->CPPmultinode185)); break;
	case 186:
		(*(thisObj->multiNodeUnion->CPPmultinode186) = *(other->multiNodeUnion->CPPmultinode186)); break;
	case 187:
		(*(thisObj->multiNodeUnion->CPPmultinode187) = *(other->multiNodeUnion->CPPmultinode187)); break;
	case 188:
		(*(thisObj->multiNodeUnion->CPPmultinode188) = *(other->multiNodeUnion->CPPmultinode188)); break;
	case 189:
		(*(thisObj->multiNodeUnion->CPPmultinode189) = *(other->multiNodeUnion->CPPmultinode189)); break;
	case 190:
		(*(thisObj->multiNodeUnion->CPPmultinode190) = *(other->multiNodeUnion->CPPmultinode190)); break;
	case 191:
		(*(thisObj->multiNodeUnion->CPPmultinode191) = *(other->multiNodeUnion->CPPmultinode191)); break;
	case 192:
		(*(thisObj->multiNodeUnion->CPPmultinode192) = *(other->multiNodeUnion->CPPmultinode192)); break;
	case 193:
		(*(thisObj->multiNodeUnion->CPPmultinode193) = *(other->multiNodeUnion->CPPmultinode193)); break;
	case 194:
		(*(thisObj->multiNodeUnion->CPPmultinode194) = *(other->multiNodeUnion->CPPmultinode194)); break;
	case 195:
		(*(thisObj->multiNodeUnion->CPPmultinode195) = *(other->multiNodeUnion->CPPmultinode195)); break;
	case 196:
		(*(thisObj->multiNodeUnion->CPPmultinode196) = *(other->multiNodeUnion->CPPmultinode196)); break;
	}
	return thisObj;
}


generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^ UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>::operator++(CShorpUnOrderedMultiNode<Key, Value>^ thisObj)
{
		if (Object::ReferenceEquals(thisObj, nullptr)) return nullptr;
		if (thisObj->isInitialized == 0) return thisObj;
		thisObj->Next();
		return thisObj;
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^ UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>::operator--(CShorpUnOrderedMultiNode<Key, Value>^ thisObj)
{
	if (Object::ReferenceEquals(thisObj, nullptr)) return nullptr;
	if (thisObj->isInitialized == 0) return thisObj;
	thisObj->Previous();
	return thisObj;
}

generic<typename Key, typename Value>
void UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>::SetIntKeyClassDictionary(System::Collections::Generic::Dictionary<System::Int64, Key>^ ClassDictionary)
{
	if (ClassDictionary == nullptr) return;
	gIntKeyClassDictionary = ClassDictionary;
}

generic<typename Key, typename Value>
void UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>::SetValueClassDictionary(System::Collections::Generic::Dictionary<System::Int64, Value>^ ClassDictionary)
{
	if (ClassDictionary == nullptr) return;
	gValueClassDictionary = ClassDictionary;
}

//
//generic<typename Key, typename Value>
//MultiMapWapper::CShorpMultiNode<Key, Value>^ MultiMapWapper::CShorpMultiNode<Key, Value>::operator++()
//{
//	if (Object::ReferenceEquals(this, nullptr)) return this;
//	if (isInitialized == 0) return this;
//	Next();
//	return this;
//}
//
//generic<typename Key, typename Value>
//MultiMapWapper::CShorpMultiNode<Key, Value>^ MultiMapWapper::CShorpMultiNode<Key, Value>::operator++(int)
//{
//	if (Object::ReferenceEquals(this, nullptr)) return this;
//	if (isInitialized == false) return this;
//	Next();
//	return this;
//}
