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
	else if (keyType->IsEnum)
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
	else if (valueType->IsEnum)
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

#define UnOrderedMultiNode_Next_CASE(NUM) \
	case NUM: \
		(*(multiNodeUnion->CPPmultinode##NUM))++; \
		return;

generic<typename Key, typename Value>
void UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>::Next()
{
	if (Object::ReferenceEquals(this, nullptr)) return;
	if (isInitialized == 0) return;
	switch (nKeyValueType)
	{
	case 0: default:
		return;
		UnOrderedMultiNode_Next_CASE(1)
		UnOrderedMultiNode_Next_CASE(2)
		UnOrderedMultiNode_Next_CASE(3)
		UnOrderedMultiNode_Next_CASE(4)
		UnOrderedMultiNode_Next_CASE(5)
		UnOrderedMultiNode_Next_CASE(6)
		UnOrderedMultiNode_Next_CASE(7)
		UnOrderedMultiNode_Next_CASE(8)
		UnOrderedMultiNode_Next_CASE(9)
		UnOrderedMultiNode_Next_CASE(10)
		UnOrderedMultiNode_Next_CASE(11)
		UnOrderedMultiNode_Next_CASE(12)
		UnOrderedMultiNode_Next_CASE(13)
		UnOrderedMultiNode_Next_CASE(14)
		UnOrderedMultiNode_Next_CASE(15)
		UnOrderedMultiNode_Next_CASE(16)
		UnOrderedMultiNode_Next_CASE(17)
		UnOrderedMultiNode_Next_CASE(18)
		UnOrderedMultiNode_Next_CASE(19)
		UnOrderedMultiNode_Next_CASE(20)
		UnOrderedMultiNode_Next_CASE(21)
		UnOrderedMultiNode_Next_CASE(22)
		UnOrderedMultiNode_Next_CASE(23)
		UnOrderedMultiNode_Next_CASE(24)
		UnOrderedMultiNode_Next_CASE(25)
		UnOrderedMultiNode_Next_CASE(26)
		UnOrderedMultiNode_Next_CASE(27)
		UnOrderedMultiNode_Next_CASE(28)
		UnOrderedMultiNode_Next_CASE(29)
		UnOrderedMultiNode_Next_CASE(30)
		UnOrderedMultiNode_Next_CASE(31)
		UnOrderedMultiNode_Next_CASE(32)
		UnOrderedMultiNode_Next_CASE(33)
		UnOrderedMultiNode_Next_CASE(34)
		UnOrderedMultiNode_Next_CASE(35)
		UnOrderedMultiNode_Next_CASE(36)
		UnOrderedMultiNode_Next_CASE(37)
		UnOrderedMultiNode_Next_CASE(38)
		UnOrderedMultiNode_Next_CASE(39)
		UnOrderedMultiNode_Next_CASE(40)
		UnOrderedMultiNode_Next_CASE(41)
		UnOrderedMultiNode_Next_CASE(42)
		UnOrderedMultiNode_Next_CASE(43)
		UnOrderedMultiNode_Next_CASE(44)
		UnOrderedMultiNode_Next_CASE(45)
		UnOrderedMultiNode_Next_CASE(46)
		UnOrderedMultiNode_Next_CASE(47)
		UnOrderedMultiNode_Next_CASE(48)
		UnOrderedMultiNode_Next_CASE(49)
		UnOrderedMultiNode_Next_CASE(50)
		UnOrderedMultiNode_Next_CASE(51)
		UnOrderedMultiNode_Next_CASE(52)
		UnOrderedMultiNode_Next_CASE(53)
		UnOrderedMultiNode_Next_CASE(54)
		UnOrderedMultiNode_Next_CASE(55)
		UnOrderedMultiNode_Next_CASE(56)
		UnOrderedMultiNode_Next_CASE(57)
		UnOrderedMultiNode_Next_CASE(58)
		UnOrderedMultiNode_Next_CASE(59)
		UnOrderedMultiNode_Next_CASE(60)
		UnOrderedMultiNode_Next_CASE(61)
		UnOrderedMultiNode_Next_CASE(62)
		UnOrderedMultiNode_Next_CASE(63)
		UnOrderedMultiNode_Next_CASE(64)
		UnOrderedMultiNode_Next_CASE(65)
		UnOrderedMultiNode_Next_CASE(66)
		UnOrderedMultiNode_Next_CASE(67)
		UnOrderedMultiNode_Next_CASE(68)
		UnOrderedMultiNode_Next_CASE(69)
		UnOrderedMultiNode_Next_CASE(70)
		UnOrderedMultiNode_Next_CASE(71)
		UnOrderedMultiNode_Next_CASE(72)
		UnOrderedMultiNode_Next_CASE(73)
		UnOrderedMultiNode_Next_CASE(74)
		UnOrderedMultiNode_Next_CASE(75)
		UnOrderedMultiNode_Next_CASE(76)
		UnOrderedMultiNode_Next_CASE(77)
		UnOrderedMultiNode_Next_CASE(78)
		UnOrderedMultiNode_Next_CASE(79)
		UnOrderedMultiNode_Next_CASE(80)
		UnOrderedMultiNode_Next_CASE(81)
		UnOrderedMultiNode_Next_CASE(82)
		UnOrderedMultiNode_Next_CASE(83)
		UnOrderedMultiNode_Next_CASE(84)
		UnOrderedMultiNode_Next_CASE(85)
		UnOrderedMultiNode_Next_CASE(86)
		UnOrderedMultiNode_Next_CASE(87)
		UnOrderedMultiNode_Next_CASE(88)
		UnOrderedMultiNode_Next_CASE(89)
		UnOrderedMultiNode_Next_CASE(90)
		UnOrderedMultiNode_Next_CASE(91)
		UnOrderedMultiNode_Next_CASE(92)
		UnOrderedMultiNode_Next_CASE(93)
		UnOrderedMultiNode_Next_CASE(94)
		UnOrderedMultiNode_Next_CASE(95)
		UnOrderedMultiNode_Next_CASE(96)
		UnOrderedMultiNode_Next_CASE(97)
		UnOrderedMultiNode_Next_CASE(98)
		UnOrderedMultiNode_Next_CASE(99)
		UnOrderedMultiNode_Next_CASE(100)
		UnOrderedMultiNode_Next_CASE(101)
		UnOrderedMultiNode_Next_CASE(102)
		UnOrderedMultiNode_Next_CASE(103)
		UnOrderedMultiNode_Next_CASE(104)
		UnOrderedMultiNode_Next_CASE(105)
		UnOrderedMultiNode_Next_CASE(106)
		UnOrderedMultiNode_Next_CASE(107)
		UnOrderedMultiNode_Next_CASE(108)
		UnOrderedMultiNode_Next_CASE(109)
		UnOrderedMultiNode_Next_CASE(110)
		UnOrderedMultiNode_Next_CASE(111)
		UnOrderedMultiNode_Next_CASE(112)
		UnOrderedMultiNode_Next_CASE(113)
		UnOrderedMultiNode_Next_CASE(114)
		UnOrderedMultiNode_Next_CASE(115)
		UnOrderedMultiNode_Next_CASE(116)
		UnOrderedMultiNode_Next_CASE(117)
		UnOrderedMultiNode_Next_CASE(118)
		UnOrderedMultiNode_Next_CASE(119)
		UnOrderedMultiNode_Next_CASE(120)
		UnOrderedMultiNode_Next_CASE(121)
		UnOrderedMultiNode_Next_CASE(122)
		UnOrderedMultiNode_Next_CASE(123)
		UnOrderedMultiNode_Next_CASE(124)
		UnOrderedMultiNode_Next_CASE(125)
		UnOrderedMultiNode_Next_CASE(126)
		UnOrderedMultiNode_Next_CASE(127)
		UnOrderedMultiNode_Next_CASE(128)
		UnOrderedMultiNode_Next_CASE(129)
		UnOrderedMultiNode_Next_CASE(130)
		UnOrderedMultiNode_Next_CASE(131)
		UnOrderedMultiNode_Next_CASE(132)
		UnOrderedMultiNode_Next_CASE(133)
		UnOrderedMultiNode_Next_CASE(134)
		UnOrderedMultiNode_Next_CASE(135)
		UnOrderedMultiNode_Next_CASE(136)
		UnOrderedMultiNode_Next_CASE(137)
		UnOrderedMultiNode_Next_CASE(138)
		UnOrderedMultiNode_Next_CASE(139)
		UnOrderedMultiNode_Next_CASE(140)
		UnOrderedMultiNode_Next_CASE(141)
		UnOrderedMultiNode_Next_CASE(142)
		UnOrderedMultiNode_Next_CASE(143)
		UnOrderedMultiNode_Next_CASE(144)
		UnOrderedMultiNode_Next_CASE(145)
		UnOrderedMultiNode_Next_CASE(146)
		UnOrderedMultiNode_Next_CASE(147)
		UnOrderedMultiNode_Next_CASE(148)
		UnOrderedMultiNode_Next_CASE(149)
		UnOrderedMultiNode_Next_CASE(150)
		UnOrderedMultiNode_Next_CASE(151)
		UnOrderedMultiNode_Next_CASE(152)
		UnOrderedMultiNode_Next_CASE(153)
		UnOrderedMultiNode_Next_CASE(154)
		UnOrderedMultiNode_Next_CASE(155)
		UnOrderedMultiNode_Next_CASE(156)
		UnOrderedMultiNode_Next_CASE(157)
		UnOrderedMultiNode_Next_CASE(158)
		UnOrderedMultiNode_Next_CASE(159)
		UnOrderedMultiNode_Next_CASE(160)
		UnOrderedMultiNode_Next_CASE(161)
		UnOrderedMultiNode_Next_CASE(162)
		UnOrderedMultiNode_Next_CASE(163)
		UnOrderedMultiNode_Next_CASE(164)
		UnOrderedMultiNode_Next_CASE(165)
		UnOrderedMultiNode_Next_CASE(166)
		UnOrderedMultiNode_Next_CASE(167)
		UnOrderedMultiNode_Next_CASE(168)
		UnOrderedMultiNode_Next_CASE(169)
		UnOrderedMultiNode_Next_CASE(170)
		UnOrderedMultiNode_Next_CASE(171)
		UnOrderedMultiNode_Next_CASE(172)
		UnOrderedMultiNode_Next_CASE(173)
		UnOrderedMultiNode_Next_CASE(174)
		UnOrderedMultiNode_Next_CASE(175)
		UnOrderedMultiNode_Next_CASE(176)
		UnOrderedMultiNode_Next_CASE(177)
		UnOrderedMultiNode_Next_CASE(178)
		UnOrderedMultiNode_Next_CASE(179)
		UnOrderedMultiNode_Next_CASE(180)
		UnOrderedMultiNode_Next_CASE(181)
		UnOrderedMultiNode_Next_CASE(182)
		UnOrderedMultiNode_Next_CASE(183)
		UnOrderedMultiNode_Next_CASE(184)
		UnOrderedMultiNode_Next_CASE(185)
		UnOrderedMultiNode_Next_CASE(186)
		UnOrderedMultiNode_Next_CASE(187)
		UnOrderedMultiNode_Next_CASE(188)
		UnOrderedMultiNode_Next_CASE(189)
		UnOrderedMultiNode_Next_CASE(190)
		UnOrderedMultiNode_Next_CASE(191)
		UnOrderedMultiNode_Next_CASE(192)
		UnOrderedMultiNode_Next_CASE(193)
		UnOrderedMultiNode_Next_CASE(194)
		UnOrderedMultiNode_Next_CASE(195)
		UnOrderedMultiNode_Next_CASE(196)
	}
}

#define UnOrderedMultiNode_Previous_CASE(NUM) \
	case NUM: \
		(*(multiNodeUnion->CPPmultinode##NUM))--; \
		return;

generic<typename Key, typename Value>
void UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>::Previous()
{
	if (Object::ReferenceEquals(this, nullptr)) return;
	if (isInitialized == 0) return;
	switch (nKeyValueType)
	{
	case 0: default:
		return;
		UnOrderedMultiNode_Previous_CASE(1)
		UnOrderedMultiNode_Previous_CASE(2)
		UnOrderedMultiNode_Previous_CASE(3)
		UnOrderedMultiNode_Previous_CASE(4)
		UnOrderedMultiNode_Previous_CASE(5)
		UnOrderedMultiNode_Previous_CASE(6)
		UnOrderedMultiNode_Previous_CASE(7)
		UnOrderedMultiNode_Previous_CASE(8)
		UnOrderedMultiNode_Previous_CASE(9)
		UnOrderedMultiNode_Previous_CASE(10)
		UnOrderedMultiNode_Previous_CASE(11)
		UnOrderedMultiNode_Previous_CASE(12)
		UnOrderedMultiNode_Previous_CASE(13)
		UnOrderedMultiNode_Previous_CASE(14)
		UnOrderedMultiNode_Previous_CASE(15)
		UnOrderedMultiNode_Previous_CASE(16)
		UnOrderedMultiNode_Previous_CASE(17)
		UnOrderedMultiNode_Previous_CASE(18)
		UnOrderedMultiNode_Previous_CASE(19)
		UnOrderedMultiNode_Previous_CASE(20)
		UnOrderedMultiNode_Previous_CASE(21)
		UnOrderedMultiNode_Previous_CASE(22)
		UnOrderedMultiNode_Previous_CASE(23)
		UnOrderedMultiNode_Previous_CASE(24)
		UnOrderedMultiNode_Previous_CASE(25)
		UnOrderedMultiNode_Previous_CASE(26)
		UnOrderedMultiNode_Previous_CASE(27)
		UnOrderedMultiNode_Previous_CASE(28)
		UnOrderedMultiNode_Previous_CASE(29)
		UnOrderedMultiNode_Previous_CASE(30)
		UnOrderedMultiNode_Previous_CASE(31)
		UnOrderedMultiNode_Previous_CASE(32)
		UnOrderedMultiNode_Previous_CASE(33)
		UnOrderedMultiNode_Previous_CASE(34)
		UnOrderedMultiNode_Previous_CASE(35)
		UnOrderedMultiNode_Previous_CASE(36)
		UnOrderedMultiNode_Previous_CASE(37)
		UnOrderedMultiNode_Previous_CASE(38)
		UnOrderedMultiNode_Previous_CASE(39)
		UnOrderedMultiNode_Previous_CASE(40)
		UnOrderedMultiNode_Previous_CASE(41)
		UnOrderedMultiNode_Previous_CASE(42)
		UnOrderedMultiNode_Previous_CASE(43)
		UnOrderedMultiNode_Previous_CASE(44)
		UnOrderedMultiNode_Previous_CASE(45)
		UnOrderedMultiNode_Previous_CASE(46)
		UnOrderedMultiNode_Previous_CASE(47)
		UnOrderedMultiNode_Previous_CASE(48)
		UnOrderedMultiNode_Previous_CASE(49)
		UnOrderedMultiNode_Previous_CASE(50)
		UnOrderedMultiNode_Previous_CASE(51)
		UnOrderedMultiNode_Previous_CASE(52)
		UnOrderedMultiNode_Previous_CASE(53)
		UnOrderedMultiNode_Previous_CASE(54)
		UnOrderedMultiNode_Previous_CASE(55)
		UnOrderedMultiNode_Previous_CASE(56)
		UnOrderedMultiNode_Previous_CASE(57)
		UnOrderedMultiNode_Previous_CASE(58)
		UnOrderedMultiNode_Previous_CASE(59)
		UnOrderedMultiNode_Previous_CASE(60)
		UnOrderedMultiNode_Previous_CASE(61)
		UnOrderedMultiNode_Previous_CASE(62)
		UnOrderedMultiNode_Previous_CASE(63)
		UnOrderedMultiNode_Previous_CASE(64)
		UnOrderedMultiNode_Previous_CASE(65)
		UnOrderedMultiNode_Previous_CASE(66)
		UnOrderedMultiNode_Previous_CASE(67)
		UnOrderedMultiNode_Previous_CASE(68)
		UnOrderedMultiNode_Previous_CASE(69)
		UnOrderedMultiNode_Previous_CASE(70)
		UnOrderedMultiNode_Previous_CASE(71)
		UnOrderedMultiNode_Previous_CASE(72)
		UnOrderedMultiNode_Previous_CASE(73)
		UnOrderedMultiNode_Previous_CASE(74)
		UnOrderedMultiNode_Previous_CASE(75)
		UnOrderedMultiNode_Previous_CASE(76)
		UnOrderedMultiNode_Previous_CASE(77)
		UnOrderedMultiNode_Previous_CASE(78)
		UnOrderedMultiNode_Previous_CASE(79)
		UnOrderedMultiNode_Previous_CASE(80)
		UnOrderedMultiNode_Previous_CASE(81)
		UnOrderedMultiNode_Previous_CASE(82)
		UnOrderedMultiNode_Previous_CASE(83)
		UnOrderedMultiNode_Previous_CASE(84)
		UnOrderedMultiNode_Previous_CASE(85)
		UnOrderedMultiNode_Previous_CASE(86)
		UnOrderedMultiNode_Previous_CASE(87)
		UnOrderedMultiNode_Previous_CASE(88)
		UnOrderedMultiNode_Previous_CASE(89)
		UnOrderedMultiNode_Previous_CASE(90)
		UnOrderedMultiNode_Previous_CASE(91)
		UnOrderedMultiNode_Previous_CASE(92)
		UnOrderedMultiNode_Previous_CASE(93)
		UnOrderedMultiNode_Previous_CASE(94)
		UnOrderedMultiNode_Previous_CASE(95)
		UnOrderedMultiNode_Previous_CASE(96)
		UnOrderedMultiNode_Previous_CASE(97)
		UnOrderedMultiNode_Previous_CASE(98)
		UnOrderedMultiNode_Previous_CASE(99)
		UnOrderedMultiNode_Previous_CASE(100)
		UnOrderedMultiNode_Previous_CASE(101)
		UnOrderedMultiNode_Previous_CASE(102)
		UnOrderedMultiNode_Previous_CASE(103)
		UnOrderedMultiNode_Previous_CASE(104)
		UnOrderedMultiNode_Previous_CASE(105)
		UnOrderedMultiNode_Previous_CASE(106)
		UnOrderedMultiNode_Previous_CASE(107)
		UnOrderedMultiNode_Previous_CASE(108)
		UnOrderedMultiNode_Previous_CASE(109)
		UnOrderedMultiNode_Previous_CASE(110)
		UnOrderedMultiNode_Previous_CASE(111)
		UnOrderedMultiNode_Previous_CASE(112)
		UnOrderedMultiNode_Previous_CASE(113)
		UnOrderedMultiNode_Previous_CASE(114)
		UnOrderedMultiNode_Previous_CASE(115)
		UnOrderedMultiNode_Previous_CASE(116)
		UnOrderedMultiNode_Previous_CASE(117)
		UnOrderedMultiNode_Previous_CASE(118)
		UnOrderedMultiNode_Previous_CASE(119)
		UnOrderedMultiNode_Previous_CASE(120)
		UnOrderedMultiNode_Previous_CASE(121)
		UnOrderedMultiNode_Previous_CASE(122)
		UnOrderedMultiNode_Previous_CASE(123)
		UnOrderedMultiNode_Previous_CASE(124)
		UnOrderedMultiNode_Previous_CASE(125)
		UnOrderedMultiNode_Previous_CASE(126)
		UnOrderedMultiNode_Previous_CASE(127)
		UnOrderedMultiNode_Previous_CASE(128)
		UnOrderedMultiNode_Previous_CASE(129)
		UnOrderedMultiNode_Previous_CASE(130)
		UnOrderedMultiNode_Previous_CASE(131)
		UnOrderedMultiNode_Previous_CASE(132)
		UnOrderedMultiNode_Previous_CASE(133)
		UnOrderedMultiNode_Previous_CASE(134)
		UnOrderedMultiNode_Previous_CASE(135)
		UnOrderedMultiNode_Previous_CASE(136)
		UnOrderedMultiNode_Previous_CASE(137)
		UnOrderedMultiNode_Previous_CASE(138)
		UnOrderedMultiNode_Previous_CASE(139)
		UnOrderedMultiNode_Previous_CASE(140)
		UnOrderedMultiNode_Previous_CASE(141)
		UnOrderedMultiNode_Previous_CASE(142)
		UnOrderedMultiNode_Previous_CASE(143)
		UnOrderedMultiNode_Previous_CASE(144)
		UnOrderedMultiNode_Previous_CASE(145)
		UnOrderedMultiNode_Previous_CASE(146)
		UnOrderedMultiNode_Previous_CASE(147)
		UnOrderedMultiNode_Previous_CASE(148)
		UnOrderedMultiNode_Previous_CASE(149)
		UnOrderedMultiNode_Previous_CASE(150)
		UnOrderedMultiNode_Previous_CASE(151)
		UnOrderedMultiNode_Previous_CASE(152)
		UnOrderedMultiNode_Previous_CASE(153)
		UnOrderedMultiNode_Previous_CASE(154)
		UnOrderedMultiNode_Previous_CASE(155)
		UnOrderedMultiNode_Previous_CASE(156)
		UnOrderedMultiNode_Previous_CASE(157)
		UnOrderedMultiNode_Previous_CASE(158)
		UnOrderedMultiNode_Previous_CASE(159)
		UnOrderedMultiNode_Previous_CASE(160)
		UnOrderedMultiNode_Previous_CASE(161)
		UnOrderedMultiNode_Previous_CASE(162)
		UnOrderedMultiNode_Previous_CASE(163)
		UnOrderedMultiNode_Previous_CASE(164)
		UnOrderedMultiNode_Previous_CASE(165)
		UnOrderedMultiNode_Previous_CASE(166)
		UnOrderedMultiNode_Previous_CASE(167)
		UnOrderedMultiNode_Previous_CASE(168)
		UnOrderedMultiNode_Previous_CASE(169)
		UnOrderedMultiNode_Previous_CASE(170)
		UnOrderedMultiNode_Previous_CASE(171)
		UnOrderedMultiNode_Previous_CASE(172)
		UnOrderedMultiNode_Previous_CASE(173)
		UnOrderedMultiNode_Previous_CASE(174)
		UnOrderedMultiNode_Previous_CASE(175)
		UnOrderedMultiNode_Previous_CASE(176)
		UnOrderedMultiNode_Previous_CASE(177)
		UnOrderedMultiNode_Previous_CASE(178)
		UnOrderedMultiNode_Previous_CASE(179)
		UnOrderedMultiNode_Previous_CASE(180)
		UnOrderedMultiNode_Previous_CASE(181)
		UnOrderedMultiNode_Previous_CASE(182)
		UnOrderedMultiNode_Previous_CASE(183)
		UnOrderedMultiNode_Previous_CASE(184)
		UnOrderedMultiNode_Previous_CASE(185)
		UnOrderedMultiNode_Previous_CASE(186)
		UnOrderedMultiNode_Previous_CASE(187)
		UnOrderedMultiNode_Previous_CASE(188)
		UnOrderedMultiNode_Previous_CASE(189)
		UnOrderedMultiNode_Previous_CASE(190)
		UnOrderedMultiNode_Previous_CASE(191)
		UnOrderedMultiNode_Previous_CASE(192)
		UnOrderedMultiNode_Previous_CASE(193)
		UnOrderedMultiNode_Previous_CASE(194)
		UnOrderedMultiNode_Previous_CASE(195)
		UnOrderedMultiNode_Previous_CASE(196)
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

#define UnOrderedMultiNode_Compare_Equals_CASE(NUM) \
	case NUM: \
		return (*(thisObj->multiNodeUnion->CPPmultinode##NUM) == *(other->multiNodeUnion->CPPmultinode##NUM));

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
		UnOrderedMultiNode_Compare_Equals_CASE(1)
		UnOrderedMultiNode_Compare_Equals_CASE(2)
		UnOrderedMultiNode_Compare_Equals_CASE(3)
		UnOrderedMultiNode_Compare_Equals_CASE(4)
		UnOrderedMultiNode_Compare_Equals_CASE(5)
		UnOrderedMultiNode_Compare_Equals_CASE(6)
		UnOrderedMultiNode_Compare_Equals_CASE(7)
		UnOrderedMultiNode_Compare_Equals_CASE(8)
		UnOrderedMultiNode_Compare_Equals_CASE(9)
		UnOrderedMultiNode_Compare_Equals_CASE(10)
		UnOrderedMultiNode_Compare_Equals_CASE(11)
		UnOrderedMultiNode_Compare_Equals_CASE(12)
		UnOrderedMultiNode_Compare_Equals_CASE(13)
		UnOrderedMultiNode_Compare_Equals_CASE(14)
		UnOrderedMultiNode_Compare_Equals_CASE(15)
		UnOrderedMultiNode_Compare_Equals_CASE(16)
		UnOrderedMultiNode_Compare_Equals_CASE(17)
		UnOrderedMultiNode_Compare_Equals_CASE(18)
		UnOrderedMultiNode_Compare_Equals_CASE(19)
		UnOrderedMultiNode_Compare_Equals_CASE(20)
		UnOrderedMultiNode_Compare_Equals_CASE(21)
		UnOrderedMultiNode_Compare_Equals_CASE(22)
		UnOrderedMultiNode_Compare_Equals_CASE(23)
		UnOrderedMultiNode_Compare_Equals_CASE(24)
		UnOrderedMultiNode_Compare_Equals_CASE(25)
		UnOrderedMultiNode_Compare_Equals_CASE(26)
		UnOrderedMultiNode_Compare_Equals_CASE(27)
		UnOrderedMultiNode_Compare_Equals_CASE(28)
		UnOrderedMultiNode_Compare_Equals_CASE(29)
		UnOrderedMultiNode_Compare_Equals_CASE(30)
		UnOrderedMultiNode_Compare_Equals_CASE(31)
		UnOrderedMultiNode_Compare_Equals_CASE(32)
		UnOrderedMultiNode_Compare_Equals_CASE(33)
		UnOrderedMultiNode_Compare_Equals_CASE(34)
		UnOrderedMultiNode_Compare_Equals_CASE(35)
		UnOrderedMultiNode_Compare_Equals_CASE(36)
		UnOrderedMultiNode_Compare_Equals_CASE(37)
		UnOrderedMultiNode_Compare_Equals_CASE(38)
		UnOrderedMultiNode_Compare_Equals_CASE(39)
		UnOrderedMultiNode_Compare_Equals_CASE(40)
		UnOrderedMultiNode_Compare_Equals_CASE(41)
		UnOrderedMultiNode_Compare_Equals_CASE(42)
		UnOrderedMultiNode_Compare_Equals_CASE(43)
		UnOrderedMultiNode_Compare_Equals_CASE(44)
		UnOrderedMultiNode_Compare_Equals_CASE(45)
		UnOrderedMultiNode_Compare_Equals_CASE(46)
		UnOrderedMultiNode_Compare_Equals_CASE(47)
		UnOrderedMultiNode_Compare_Equals_CASE(48)
		UnOrderedMultiNode_Compare_Equals_CASE(49)
		UnOrderedMultiNode_Compare_Equals_CASE(50)
		UnOrderedMultiNode_Compare_Equals_CASE(51)
		UnOrderedMultiNode_Compare_Equals_CASE(52)
		UnOrderedMultiNode_Compare_Equals_CASE(53)
		UnOrderedMultiNode_Compare_Equals_CASE(54)
		UnOrderedMultiNode_Compare_Equals_CASE(55)
		UnOrderedMultiNode_Compare_Equals_CASE(56)
		UnOrderedMultiNode_Compare_Equals_CASE(57)
		UnOrderedMultiNode_Compare_Equals_CASE(58)
		UnOrderedMultiNode_Compare_Equals_CASE(59)
		UnOrderedMultiNode_Compare_Equals_CASE(60)
		UnOrderedMultiNode_Compare_Equals_CASE(61)
		UnOrderedMultiNode_Compare_Equals_CASE(62)
		UnOrderedMultiNode_Compare_Equals_CASE(63)
		UnOrderedMultiNode_Compare_Equals_CASE(64)
		UnOrderedMultiNode_Compare_Equals_CASE(65)
		UnOrderedMultiNode_Compare_Equals_CASE(66)
		UnOrderedMultiNode_Compare_Equals_CASE(67)
		UnOrderedMultiNode_Compare_Equals_CASE(68)
		UnOrderedMultiNode_Compare_Equals_CASE(69)
		UnOrderedMultiNode_Compare_Equals_CASE(70)
		UnOrderedMultiNode_Compare_Equals_CASE(71)
		UnOrderedMultiNode_Compare_Equals_CASE(72)
		UnOrderedMultiNode_Compare_Equals_CASE(73)
		UnOrderedMultiNode_Compare_Equals_CASE(74)
		UnOrderedMultiNode_Compare_Equals_CASE(75)
		UnOrderedMultiNode_Compare_Equals_CASE(76)
		UnOrderedMultiNode_Compare_Equals_CASE(77)
		UnOrderedMultiNode_Compare_Equals_CASE(78)
		UnOrderedMultiNode_Compare_Equals_CASE(79)
		UnOrderedMultiNode_Compare_Equals_CASE(80)
		UnOrderedMultiNode_Compare_Equals_CASE(81)
		UnOrderedMultiNode_Compare_Equals_CASE(82)
		UnOrderedMultiNode_Compare_Equals_CASE(83)
		UnOrderedMultiNode_Compare_Equals_CASE(84)
		UnOrderedMultiNode_Compare_Equals_CASE(85)
		UnOrderedMultiNode_Compare_Equals_CASE(86)
		UnOrderedMultiNode_Compare_Equals_CASE(87)
		UnOrderedMultiNode_Compare_Equals_CASE(88)
		UnOrderedMultiNode_Compare_Equals_CASE(89)
		UnOrderedMultiNode_Compare_Equals_CASE(90)
		UnOrderedMultiNode_Compare_Equals_CASE(91)
		UnOrderedMultiNode_Compare_Equals_CASE(92)
		UnOrderedMultiNode_Compare_Equals_CASE(93)
		UnOrderedMultiNode_Compare_Equals_CASE(94)
		UnOrderedMultiNode_Compare_Equals_CASE(95)
		UnOrderedMultiNode_Compare_Equals_CASE(96)
		UnOrderedMultiNode_Compare_Equals_CASE(97)
		UnOrderedMultiNode_Compare_Equals_CASE(98)
		UnOrderedMultiNode_Compare_Equals_CASE(99)
		UnOrderedMultiNode_Compare_Equals_CASE(100)
		UnOrderedMultiNode_Compare_Equals_CASE(101)
		UnOrderedMultiNode_Compare_Equals_CASE(102)
		UnOrderedMultiNode_Compare_Equals_CASE(103)
		UnOrderedMultiNode_Compare_Equals_CASE(104)
		UnOrderedMultiNode_Compare_Equals_CASE(105)
		UnOrderedMultiNode_Compare_Equals_CASE(106)
		UnOrderedMultiNode_Compare_Equals_CASE(107)
		UnOrderedMultiNode_Compare_Equals_CASE(108)
		UnOrderedMultiNode_Compare_Equals_CASE(109)
		UnOrderedMultiNode_Compare_Equals_CASE(110)
		UnOrderedMultiNode_Compare_Equals_CASE(111)
		UnOrderedMultiNode_Compare_Equals_CASE(112)
		UnOrderedMultiNode_Compare_Equals_CASE(113)
		UnOrderedMultiNode_Compare_Equals_CASE(114)
		UnOrderedMultiNode_Compare_Equals_CASE(115)
		UnOrderedMultiNode_Compare_Equals_CASE(116)
		UnOrderedMultiNode_Compare_Equals_CASE(117)
		UnOrderedMultiNode_Compare_Equals_CASE(118)
		UnOrderedMultiNode_Compare_Equals_CASE(119)
		UnOrderedMultiNode_Compare_Equals_CASE(120)
		UnOrderedMultiNode_Compare_Equals_CASE(121)
		UnOrderedMultiNode_Compare_Equals_CASE(122)
		UnOrderedMultiNode_Compare_Equals_CASE(123)
		UnOrderedMultiNode_Compare_Equals_CASE(124)
		UnOrderedMultiNode_Compare_Equals_CASE(125)
		UnOrderedMultiNode_Compare_Equals_CASE(126)
		UnOrderedMultiNode_Compare_Equals_CASE(127)
		UnOrderedMultiNode_Compare_Equals_CASE(128)
		UnOrderedMultiNode_Compare_Equals_CASE(129)
		UnOrderedMultiNode_Compare_Equals_CASE(130)
		UnOrderedMultiNode_Compare_Equals_CASE(131)
		UnOrderedMultiNode_Compare_Equals_CASE(132)
		UnOrderedMultiNode_Compare_Equals_CASE(133)
		UnOrderedMultiNode_Compare_Equals_CASE(134)
		UnOrderedMultiNode_Compare_Equals_CASE(135)
		UnOrderedMultiNode_Compare_Equals_CASE(136)
		UnOrderedMultiNode_Compare_Equals_CASE(137)
		UnOrderedMultiNode_Compare_Equals_CASE(138)
		UnOrderedMultiNode_Compare_Equals_CASE(139)
		UnOrderedMultiNode_Compare_Equals_CASE(140)
		UnOrderedMultiNode_Compare_Equals_CASE(141)
		UnOrderedMultiNode_Compare_Equals_CASE(142)
		UnOrderedMultiNode_Compare_Equals_CASE(143)
		UnOrderedMultiNode_Compare_Equals_CASE(144)
		UnOrderedMultiNode_Compare_Equals_CASE(145)
		UnOrderedMultiNode_Compare_Equals_CASE(146)
		UnOrderedMultiNode_Compare_Equals_CASE(147)
		UnOrderedMultiNode_Compare_Equals_CASE(148)
		UnOrderedMultiNode_Compare_Equals_CASE(149)
		UnOrderedMultiNode_Compare_Equals_CASE(150)
		UnOrderedMultiNode_Compare_Equals_CASE(151)
		UnOrderedMultiNode_Compare_Equals_CASE(152)
		UnOrderedMultiNode_Compare_Equals_CASE(153)
		UnOrderedMultiNode_Compare_Equals_CASE(154)
		UnOrderedMultiNode_Compare_Equals_CASE(155)
		UnOrderedMultiNode_Compare_Equals_CASE(156)
		UnOrderedMultiNode_Compare_Equals_CASE(157)
		UnOrderedMultiNode_Compare_Equals_CASE(158)
		UnOrderedMultiNode_Compare_Equals_CASE(159)
		UnOrderedMultiNode_Compare_Equals_CASE(160)
		UnOrderedMultiNode_Compare_Equals_CASE(161)
		UnOrderedMultiNode_Compare_Equals_CASE(162)
		UnOrderedMultiNode_Compare_Equals_CASE(163)
		UnOrderedMultiNode_Compare_Equals_CASE(164)
		UnOrderedMultiNode_Compare_Equals_CASE(165)
		UnOrderedMultiNode_Compare_Equals_CASE(166)
		UnOrderedMultiNode_Compare_Equals_CASE(167)
		UnOrderedMultiNode_Compare_Equals_CASE(168)
		UnOrderedMultiNode_Compare_Equals_CASE(169)
		UnOrderedMultiNode_Compare_Equals_CASE(170)
		UnOrderedMultiNode_Compare_Equals_CASE(171)
		UnOrderedMultiNode_Compare_Equals_CASE(172)
		UnOrderedMultiNode_Compare_Equals_CASE(173)
		UnOrderedMultiNode_Compare_Equals_CASE(174)
		UnOrderedMultiNode_Compare_Equals_CASE(175)
		UnOrderedMultiNode_Compare_Equals_CASE(176)
		UnOrderedMultiNode_Compare_Equals_CASE(177)
		UnOrderedMultiNode_Compare_Equals_CASE(178)
		UnOrderedMultiNode_Compare_Equals_CASE(179)
		UnOrderedMultiNode_Compare_Equals_CASE(180)
		UnOrderedMultiNode_Compare_Equals_CASE(181)
		UnOrderedMultiNode_Compare_Equals_CASE(182)
		UnOrderedMultiNode_Compare_Equals_CASE(183)
		UnOrderedMultiNode_Compare_Equals_CASE(184)
		UnOrderedMultiNode_Compare_Equals_CASE(185)
		UnOrderedMultiNode_Compare_Equals_CASE(186)
		UnOrderedMultiNode_Compare_Equals_CASE(187)
		UnOrderedMultiNode_Compare_Equals_CASE(188)
		UnOrderedMultiNode_Compare_Equals_CASE(189)
		UnOrderedMultiNode_Compare_Equals_CASE(190)
		UnOrderedMultiNode_Compare_Equals_CASE(191)
		UnOrderedMultiNode_Compare_Equals_CASE(192)
		UnOrderedMultiNode_Compare_Equals_CASE(193)
		UnOrderedMultiNode_Compare_Equals_CASE(194)
		UnOrderedMultiNode_Compare_Equals_CASE(195)
		UnOrderedMultiNode_Compare_Equals_CASE(196)
	}
	return false;
}

#define UnOrderedMultiNode_Compare_NotEquals_CASE(NUM) \
	case NUM: \
		return (*(thisObj->multiNodeUnion->CPPmultinode##NUM ) != *( other->multiNodeUnion->CPPmultinode##NUM));

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
		UnOrderedMultiNode_Compare_NotEquals_CASE(1)
		UnOrderedMultiNode_Compare_NotEquals_CASE(2)
		UnOrderedMultiNode_Compare_NotEquals_CASE(3)
		UnOrderedMultiNode_Compare_NotEquals_CASE(4)
		UnOrderedMultiNode_Compare_NotEquals_CASE(5)
		UnOrderedMultiNode_Compare_NotEquals_CASE(6)
		UnOrderedMultiNode_Compare_NotEquals_CASE(7)
		UnOrderedMultiNode_Compare_NotEquals_CASE(8)
		UnOrderedMultiNode_Compare_NotEquals_CASE(9)
		UnOrderedMultiNode_Compare_NotEquals_CASE(10)
		UnOrderedMultiNode_Compare_NotEquals_CASE(11)
		UnOrderedMultiNode_Compare_NotEquals_CASE(12)
		UnOrderedMultiNode_Compare_NotEquals_CASE(13)
		UnOrderedMultiNode_Compare_NotEquals_CASE(14)
		UnOrderedMultiNode_Compare_NotEquals_CASE(15)
		UnOrderedMultiNode_Compare_NotEquals_CASE(16)
		UnOrderedMultiNode_Compare_NotEquals_CASE(17)
		UnOrderedMultiNode_Compare_NotEquals_CASE(18)
		UnOrderedMultiNode_Compare_NotEquals_CASE(19)
		UnOrderedMultiNode_Compare_NotEquals_CASE(20)
		UnOrderedMultiNode_Compare_NotEquals_CASE(21)
		UnOrderedMultiNode_Compare_NotEquals_CASE(22)
		UnOrderedMultiNode_Compare_NotEquals_CASE(23)
		UnOrderedMultiNode_Compare_NotEquals_CASE(24)
		UnOrderedMultiNode_Compare_NotEquals_CASE(25)
		UnOrderedMultiNode_Compare_NotEquals_CASE(26)
		UnOrderedMultiNode_Compare_NotEquals_CASE(27)
		UnOrderedMultiNode_Compare_NotEquals_CASE(28)
		UnOrderedMultiNode_Compare_NotEquals_CASE(29)
		UnOrderedMultiNode_Compare_NotEquals_CASE(30)
		UnOrderedMultiNode_Compare_NotEquals_CASE(31)
		UnOrderedMultiNode_Compare_NotEquals_CASE(32)
		UnOrderedMultiNode_Compare_NotEquals_CASE(33)
		UnOrderedMultiNode_Compare_NotEquals_CASE(34)
		UnOrderedMultiNode_Compare_NotEquals_CASE(35)
		UnOrderedMultiNode_Compare_NotEquals_CASE(36)
		UnOrderedMultiNode_Compare_NotEquals_CASE(37)
		UnOrderedMultiNode_Compare_NotEquals_CASE(38)
		UnOrderedMultiNode_Compare_NotEquals_CASE(39)
		UnOrderedMultiNode_Compare_NotEquals_CASE(40)
		UnOrderedMultiNode_Compare_NotEquals_CASE(41)
		UnOrderedMultiNode_Compare_NotEquals_CASE(42)
		UnOrderedMultiNode_Compare_NotEquals_CASE(43)
		UnOrderedMultiNode_Compare_NotEquals_CASE(44)
		UnOrderedMultiNode_Compare_NotEquals_CASE(45)
		UnOrderedMultiNode_Compare_NotEquals_CASE(46)
		UnOrderedMultiNode_Compare_NotEquals_CASE(47)
		UnOrderedMultiNode_Compare_NotEquals_CASE(48)
		UnOrderedMultiNode_Compare_NotEquals_CASE(49)
		UnOrderedMultiNode_Compare_NotEquals_CASE(50)
		UnOrderedMultiNode_Compare_NotEquals_CASE(51)
		UnOrderedMultiNode_Compare_NotEquals_CASE(52)
		UnOrderedMultiNode_Compare_NotEquals_CASE(53)
		UnOrderedMultiNode_Compare_NotEquals_CASE(54)
		UnOrderedMultiNode_Compare_NotEquals_CASE(55)
		UnOrderedMultiNode_Compare_NotEquals_CASE(56)
		UnOrderedMultiNode_Compare_NotEquals_CASE(57)
		UnOrderedMultiNode_Compare_NotEquals_CASE(58)
		UnOrderedMultiNode_Compare_NotEquals_CASE(59)
		UnOrderedMultiNode_Compare_NotEquals_CASE(60)
		UnOrderedMultiNode_Compare_NotEquals_CASE(61)
		UnOrderedMultiNode_Compare_NotEquals_CASE(62)
		UnOrderedMultiNode_Compare_NotEquals_CASE(63)
		UnOrderedMultiNode_Compare_NotEquals_CASE(64)
		UnOrderedMultiNode_Compare_NotEquals_CASE(65)
		UnOrderedMultiNode_Compare_NotEquals_CASE(66)
		UnOrderedMultiNode_Compare_NotEquals_CASE(67)
		UnOrderedMultiNode_Compare_NotEquals_CASE(68)
		UnOrderedMultiNode_Compare_NotEquals_CASE(69)
		UnOrderedMultiNode_Compare_NotEquals_CASE(70)
		UnOrderedMultiNode_Compare_NotEquals_CASE(71)
		UnOrderedMultiNode_Compare_NotEquals_CASE(72)
		UnOrderedMultiNode_Compare_NotEquals_CASE(73)
		UnOrderedMultiNode_Compare_NotEquals_CASE(74)
		UnOrderedMultiNode_Compare_NotEquals_CASE(75)
		UnOrderedMultiNode_Compare_NotEquals_CASE(76)
		UnOrderedMultiNode_Compare_NotEquals_CASE(77)
		UnOrderedMultiNode_Compare_NotEquals_CASE(78)
		UnOrderedMultiNode_Compare_NotEquals_CASE(79)
		UnOrderedMultiNode_Compare_NotEquals_CASE(80)
		UnOrderedMultiNode_Compare_NotEquals_CASE(81)
		UnOrderedMultiNode_Compare_NotEquals_CASE(82)
		UnOrderedMultiNode_Compare_NotEquals_CASE(83)
		UnOrderedMultiNode_Compare_NotEquals_CASE(84)
		UnOrderedMultiNode_Compare_NotEquals_CASE(85)
		UnOrderedMultiNode_Compare_NotEquals_CASE(86)
		UnOrderedMultiNode_Compare_NotEquals_CASE(87)
		UnOrderedMultiNode_Compare_NotEquals_CASE(88)
		UnOrderedMultiNode_Compare_NotEquals_CASE(89)
		UnOrderedMultiNode_Compare_NotEquals_CASE(90)
		UnOrderedMultiNode_Compare_NotEquals_CASE(91)
		UnOrderedMultiNode_Compare_NotEquals_CASE(92)
		UnOrderedMultiNode_Compare_NotEquals_CASE(93)
		UnOrderedMultiNode_Compare_NotEquals_CASE(94)
		UnOrderedMultiNode_Compare_NotEquals_CASE(95)
		UnOrderedMultiNode_Compare_NotEquals_CASE(96)
		UnOrderedMultiNode_Compare_NotEquals_CASE(97)
		UnOrderedMultiNode_Compare_NotEquals_CASE(98)
		UnOrderedMultiNode_Compare_NotEquals_CASE(99)
		UnOrderedMultiNode_Compare_NotEquals_CASE(100)
		UnOrderedMultiNode_Compare_NotEquals_CASE(101)
		UnOrderedMultiNode_Compare_NotEquals_CASE(102)
		UnOrderedMultiNode_Compare_NotEquals_CASE(103)
		UnOrderedMultiNode_Compare_NotEquals_CASE(104)
		UnOrderedMultiNode_Compare_NotEquals_CASE(105)
		UnOrderedMultiNode_Compare_NotEquals_CASE(106)
		UnOrderedMultiNode_Compare_NotEquals_CASE(107)
		UnOrderedMultiNode_Compare_NotEquals_CASE(108)
		UnOrderedMultiNode_Compare_NotEquals_CASE(109)
		UnOrderedMultiNode_Compare_NotEquals_CASE(110)
		UnOrderedMultiNode_Compare_NotEquals_CASE(111)
		UnOrderedMultiNode_Compare_NotEquals_CASE(112)
		UnOrderedMultiNode_Compare_NotEquals_CASE(113)
		UnOrderedMultiNode_Compare_NotEquals_CASE(114)
		UnOrderedMultiNode_Compare_NotEquals_CASE(115)
		UnOrderedMultiNode_Compare_NotEquals_CASE(116)
		UnOrderedMultiNode_Compare_NotEquals_CASE(117)
		UnOrderedMultiNode_Compare_NotEquals_CASE(118)
		UnOrderedMultiNode_Compare_NotEquals_CASE(119)
		UnOrderedMultiNode_Compare_NotEquals_CASE(120)
		UnOrderedMultiNode_Compare_NotEquals_CASE(121)
		UnOrderedMultiNode_Compare_NotEquals_CASE(122)
		UnOrderedMultiNode_Compare_NotEquals_CASE(123)
		UnOrderedMultiNode_Compare_NotEquals_CASE(124)
		UnOrderedMultiNode_Compare_NotEquals_CASE(125)
		UnOrderedMultiNode_Compare_NotEquals_CASE(126)
		UnOrderedMultiNode_Compare_NotEquals_CASE(127)
		UnOrderedMultiNode_Compare_NotEquals_CASE(128)
		UnOrderedMultiNode_Compare_NotEquals_CASE(129)
		UnOrderedMultiNode_Compare_NotEquals_CASE(130)
		UnOrderedMultiNode_Compare_NotEquals_CASE(131)
		UnOrderedMultiNode_Compare_NotEquals_CASE(132)
		UnOrderedMultiNode_Compare_NotEquals_CASE(133)
		UnOrderedMultiNode_Compare_NotEquals_CASE(134)
		UnOrderedMultiNode_Compare_NotEquals_CASE(135)
		UnOrderedMultiNode_Compare_NotEquals_CASE(136)
		UnOrderedMultiNode_Compare_NotEquals_CASE(137)
		UnOrderedMultiNode_Compare_NotEquals_CASE(138)
		UnOrderedMultiNode_Compare_NotEquals_CASE(139)
		UnOrderedMultiNode_Compare_NotEquals_CASE(140)
		UnOrderedMultiNode_Compare_NotEquals_CASE(141)
		UnOrderedMultiNode_Compare_NotEquals_CASE(142)
		UnOrderedMultiNode_Compare_NotEquals_CASE(143)
		UnOrderedMultiNode_Compare_NotEquals_CASE(144)
		UnOrderedMultiNode_Compare_NotEquals_CASE(145)
		UnOrderedMultiNode_Compare_NotEquals_CASE(146)
		UnOrderedMultiNode_Compare_NotEquals_CASE(147)
		UnOrderedMultiNode_Compare_NotEquals_CASE(148)
		UnOrderedMultiNode_Compare_NotEquals_CASE(149)
		UnOrderedMultiNode_Compare_NotEquals_CASE(150)
		UnOrderedMultiNode_Compare_NotEquals_CASE(151)
		UnOrderedMultiNode_Compare_NotEquals_CASE(152)
		UnOrderedMultiNode_Compare_NotEquals_CASE(153)
		UnOrderedMultiNode_Compare_NotEquals_CASE(154)
		UnOrderedMultiNode_Compare_NotEquals_CASE(155)
		UnOrderedMultiNode_Compare_NotEquals_CASE(156)
		UnOrderedMultiNode_Compare_NotEquals_CASE(157)
		UnOrderedMultiNode_Compare_NotEquals_CASE(158)
		UnOrderedMultiNode_Compare_NotEquals_CASE(159)
		UnOrderedMultiNode_Compare_NotEquals_CASE(160)
		UnOrderedMultiNode_Compare_NotEquals_CASE(161)
		UnOrderedMultiNode_Compare_NotEquals_CASE(162)
		UnOrderedMultiNode_Compare_NotEquals_CASE(163)
		UnOrderedMultiNode_Compare_NotEquals_CASE(164)
		UnOrderedMultiNode_Compare_NotEquals_CASE(165)
		UnOrderedMultiNode_Compare_NotEquals_CASE(166)
		UnOrderedMultiNode_Compare_NotEquals_CASE(167)
		UnOrderedMultiNode_Compare_NotEquals_CASE(168)
		UnOrderedMultiNode_Compare_NotEquals_CASE(169)
		UnOrderedMultiNode_Compare_NotEquals_CASE(170)
		UnOrderedMultiNode_Compare_NotEquals_CASE(171)
		UnOrderedMultiNode_Compare_NotEquals_CASE(172)
		UnOrderedMultiNode_Compare_NotEquals_CASE(173)
		UnOrderedMultiNode_Compare_NotEquals_CASE(174)
		UnOrderedMultiNode_Compare_NotEquals_CASE(175)
		UnOrderedMultiNode_Compare_NotEquals_CASE(176)
		UnOrderedMultiNode_Compare_NotEquals_CASE(177)
		UnOrderedMultiNode_Compare_NotEquals_CASE(178)
		UnOrderedMultiNode_Compare_NotEquals_CASE(179)
		UnOrderedMultiNode_Compare_NotEquals_CASE(180)
		UnOrderedMultiNode_Compare_NotEquals_CASE(181)
		UnOrderedMultiNode_Compare_NotEquals_CASE(182)
		UnOrderedMultiNode_Compare_NotEquals_CASE(183)
		UnOrderedMultiNode_Compare_NotEquals_CASE(184)
		UnOrderedMultiNode_Compare_NotEquals_CASE(185)
		UnOrderedMultiNode_Compare_NotEquals_CASE(186)
		UnOrderedMultiNode_Compare_NotEquals_CASE(187)
		UnOrderedMultiNode_Compare_NotEquals_CASE(188)
		UnOrderedMultiNode_Compare_NotEquals_CASE(189)
		UnOrderedMultiNode_Compare_NotEquals_CASE(190)
		UnOrderedMultiNode_Compare_NotEquals_CASE(191)
		UnOrderedMultiNode_Compare_NotEquals_CASE(192)
		UnOrderedMultiNode_Compare_NotEquals_CASE(193)
		UnOrderedMultiNode_Compare_NotEquals_CASE(194)
		UnOrderedMultiNode_Compare_NotEquals_CASE(195)
		UnOrderedMultiNode_Compare_NotEquals_CASE(196)
	}
	return false;
}

#define UnOrderedMultiNode_Copy_CASE(NUM) \
	case NUM: \
		(*(thisObj->multiNodeUnion->CPPmultinode##NUM) = *(other->multiNodeUnion->CPPmultinode##NUM)); \
		break;

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
		UnOrderedMultiNode_Copy_CASE(1)
		UnOrderedMultiNode_Copy_CASE(2)
		UnOrderedMultiNode_Copy_CASE(3)
		UnOrderedMultiNode_Copy_CASE(4)
		UnOrderedMultiNode_Copy_CASE(5)
		UnOrderedMultiNode_Copy_CASE(6)
		UnOrderedMultiNode_Copy_CASE(7)
		UnOrderedMultiNode_Copy_CASE(8)
		UnOrderedMultiNode_Copy_CASE(9)
		UnOrderedMultiNode_Copy_CASE(10)
		UnOrderedMultiNode_Copy_CASE(11)
		UnOrderedMultiNode_Copy_CASE(12)
		UnOrderedMultiNode_Copy_CASE(13)
		UnOrderedMultiNode_Copy_CASE(14)
		UnOrderedMultiNode_Copy_CASE(15)
		UnOrderedMultiNode_Copy_CASE(16)
		UnOrderedMultiNode_Copy_CASE(17)
		UnOrderedMultiNode_Copy_CASE(18)
		UnOrderedMultiNode_Copy_CASE(19)
		UnOrderedMultiNode_Copy_CASE(20)
		UnOrderedMultiNode_Copy_CASE(21)
		UnOrderedMultiNode_Copy_CASE(22)
		UnOrderedMultiNode_Copy_CASE(23)
		UnOrderedMultiNode_Copy_CASE(24)
		UnOrderedMultiNode_Copy_CASE(25)
		UnOrderedMultiNode_Copy_CASE(26)
		UnOrderedMultiNode_Copy_CASE(27)
		UnOrderedMultiNode_Copy_CASE(28)
		UnOrderedMultiNode_Copy_CASE(29)
		UnOrderedMultiNode_Copy_CASE(30)
		UnOrderedMultiNode_Copy_CASE(31)
		UnOrderedMultiNode_Copy_CASE(32)
		UnOrderedMultiNode_Copy_CASE(33)
		UnOrderedMultiNode_Copy_CASE(34)
		UnOrderedMultiNode_Copy_CASE(35)
		UnOrderedMultiNode_Copy_CASE(36)
		UnOrderedMultiNode_Copy_CASE(37)
		UnOrderedMultiNode_Copy_CASE(38)
		UnOrderedMultiNode_Copy_CASE(39)
		UnOrderedMultiNode_Copy_CASE(40)
		UnOrderedMultiNode_Copy_CASE(41)
		UnOrderedMultiNode_Copy_CASE(42)
		UnOrderedMultiNode_Copy_CASE(43)
		UnOrderedMultiNode_Copy_CASE(44)
		UnOrderedMultiNode_Copy_CASE(45)
		UnOrderedMultiNode_Copy_CASE(46)
		UnOrderedMultiNode_Copy_CASE(47)
		UnOrderedMultiNode_Copy_CASE(48)
		UnOrderedMultiNode_Copy_CASE(49)
		UnOrderedMultiNode_Copy_CASE(50)
		UnOrderedMultiNode_Copy_CASE(51)
		UnOrderedMultiNode_Copy_CASE(52)
		UnOrderedMultiNode_Copy_CASE(53)
		UnOrderedMultiNode_Copy_CASE(54)
		UnOrderedMultiNode_Copy_CASE(55)
		UnOrderedMultiNode_Copy_CASE(56)
		UnOrderedMultiNode_Copy_CASE(57)
		UnOrderedMultiNode_Copy_CASE(58)
		UnOrderedMultiNode_Copy_CASE(59)
		UnOrderedMultiNode_Copy_CASE(60)
		UnOrderedMultiNode_Copy_CASE(61)
		UnOrderedMultiNode_Copy_CASE(62)
		UnOrderedMultiNode_Copy_CASE(63)
		UnOrderedMultiNode_Copy_CASE(64)
		UnOrderedMultiNode_Copy_CASE(65)
		UnOrderedMultiNode_Copy_CASE(66)
		UnOrderedMultiNode_Copy_CASE(67)
		UnOrderedMultiNode_Copy_CASE(68)
		UnOrderedMultiNode_Copy_CASE(69)
		UnOrderedMultiNode_Copy_CASE(70)
		UnOrderedMultiNode_Copy_CASE(71)
		UnOrderedMultiNode_Copy_CASE(72)
		UnOrderedMultiNode_Copy_CASE(73)
		UnOrderedMultiNode_Copy_CASE(74)
		UnOrderedMultiNode_Copy_CASE(75)
		UnOrderedMultiNode_Copy_CASE(76)
		UnOrderedMultiNode_Copy_CASE(77)
		UnOrderedMultiNode_Copy_CASE(78)
		UnOrderedMultiNode_Copy_CASE(79)
		UnOrderedMultiNode_Copy_CASE(80)
		UnOrderedMultiNode_Copy_CASE(81)
		UnOrderedMultiNode_Copy_CASE(82)
		UnOrderedMultiNode_Copy_CASE(83)
		UnOrderedMultiNode_Copy_CASE(84)
		UnOrderedMultiNode_Copy_CASE(85)
		UnOrderedMultiNode_Copy_CASE(86)
		UnOrderedMultiNode_Copy_CASE(87)
		UnOrderedMultiNode_Copy_CASE(88)
		UnOrderedMultiNode_Copy_CASE(89)
		UnOrderedMultiNode_Copy_CASE(90)
		UnOrderedMultiNode_Copy_CASE(91)
		UnOrderedMultiNode_Copy_CASE(92)
		UnOrderedMultiNode_Copy_CASE(93)
		UnOrderedMultiNode_Copy_CASE(94)
		UnOrderedMultiNode_Copy_CASE(95)
		UnOrderedMultiNode_Copy_CASE(96)
		UnOrderedMultiNode_Copy_CASE(97)
		UnOrderedMultiNode_Copy_CASE(98)
		UnOrderedMultiNode_Copy_CASE(99)
		UnOrderedMultiNode_Copy_CASE(100)
		UnOrderedMultiNode_Copy_CASE(101)
		UnOrderedMultiNode_Copy_CASE(102)
		UnOrderedMultiNode_Copy_CASE(103)
		UnOrderedMultiNode_Copy_CASE(104)
		UnOrderedMultiNode_Copy_CASE(105)
		UnOrderedMultiNode_Copy_CASE(106)
		UnOrderedMultiNode_Copy_CASE(107)
		UnOrderedMultiNode_Copy_CASE(108)
		UnOrderedMultiNode_Copy_CASE(109)
		UnOrderedMultiNode_Copy_CASE(110)
		UnOrderedMultiNode_Copy_CASE(111)
		UnOrderedMultiNode_Copy_CASE(112)
		UnOrderedMultiNode_Copy_CASE(113)
		UnOrderedMultiNode_Copy_CASE(114)
		UnOrderedMultiNode_Copy_CASE(115)
		UnOrderedMultiNode_Copy_CASE(116)
		UnOrderedMultiNode_Copy_CASE(117)
		UnOrderedMultiNode_Copy_CASE(118)
		UnOrderedMultiNode_Copy_CASE(119)
		UnOrderedMultiNode_Copy_CASE(120)
		UnOrderedMultiNode_Copy_CASE(121)
		UnOrderedMultiNode_Copy_CASE(122)
		UnOrderedMultiNode_Copy_CASE(123)
		UnOrderedMultiNode_Copy_CASE(124)
		UnOrderedMultiNode_Copy_CASE(125)
		UnOrderedMultiNode_Copy_CASE(126)
		UnOrderedMultiNode_Copy_CASE(127)
		UnOrderedMultiNode_Copy_CASE(128)
		UnOrderedMultiNode_Copy_CASE(129)
		UnOrderedMultiNode_Copy_CASE(130)
		UnOrderedMultiNode_Copy_CASE(131)
		UnOrderedMultiNode_Copy_CASE(132)
		UnOrderedMultiNode_Copy_CASE(133)
		UnOrderedMultiNode_Copy_CASE(134)
		UnOrderedMultiNode_Copy_CASE(135)
		UnOrderedMultiNode_Copy_CASE(136)
		UnOrderedMultiNode_Copy_CASE(137)
		UnOrderedMultiNode_Copy_CASE(138)
		UnOrderedMultiNode_Copy_CASE(139)
		UnOrderedMultiNode_Copy_CASE(140)
		UnOrderedMultiNode_Copy_CASE(141)
		UnOrderedMultiNode_Copy_CASE(142)
		UnOrderedMultiNode_Copy_CASE(143)
		UnOrderedMultiNode_Copy_CASE(144)
		UnOrderedMultiNode_Copy_CASE(145)
		UnOrderedMultiNode_Copy_CASE(146)
		UnOrderedMultiNode_Copy_CASE(147)
		UnOrderedMultiNode_Copy_CASE(148)
		UnOrderedMultiNode_Copy_CASE(149)
		UnOrderedMultiNode_Copy_CASE(150)
		UnOrderedMultiNode_Copy_CASE(151)
		UnOrderedMultiNode_Copy_CASE(152)
		UnOrderedMultiNode_Copy_CASE(153)
		UnOrderedMultiNode_Copy_CASE(154)
		UnOrderedMultiNode_Copy_CASE(155)
		UnOrderedMultiNode_Copy_CASE(156)
		UnOrderedMultiNode_Copy_CASE(157)
		UnOrderedMultiNode_Copy_CASE(158)
		UnOrderedMultiNode_Copy_CASE(159)
		UnOrderedMultiNode_Copy_CASE(160)
		UnOrderedMultiNode_Copy_CASE(161)
		UnOrderedMultiNode_Copy_CASE(162)
		UnOrderedMultiNode_Copy_CASE(163)
		UnOrderedMultiNode_Copy_CASE(164)
		UnOrderedMultiNode_Copy_CASE(165)
		UnOrderedMultiNode_Copy_CASE(166)
		UnOrderedMultiNode_Copy_CASE(167)
		UnOrderedMultiNode_Copy_CASE(168)
		UnOrderedMultiNode_Copy_CASE(169)
		UnOrderedMultiNode_Copy_CASE(170)
		UnOrderedMultiNode_Copy_CASE(171)
		UnOrderedMultiNode_Copy_CASE(172)
		UnOrderedMultiNode_Copy_CASE(173)
		UnOrderedMultiNode_Copy_CASE(174)
		UnOrderedMultiNode_Copy_CASE(175)
		UnOrderedMultiNode_Copy_CASE(176)
		UnOrderedMultiNode_Copy_CASE(177)
		UnOrderedMultiNode_Copy_CASE(178)
		UnOrderedMultiNode_Copy_CASE(179)
		UnOrderedMultiNode_Copy_CASE(180)
		UnOrderedMultiNode_Copy_CASE(181)
		UnOrderedMultiNode_Copy_CASE(182)
		UnOrderedMultiNode_Copy_CASE(183)
		UnOrderedMultiNode_Copy_CASE(184)
		UnOrderedMultiNode_Copy_CASE(185)
		UnOrderedMultiNode_Copy_CASE(186)
		UnOrderedMultiNode_Copy_CASE(187)
		UnOrderedMultiNode_Copy_CASE(188)
		UnOrderedMultiNode_Copy_CASE(189)
		UnOrderedMultiNode_Copy_CASE(190)
		UnOrderedMultiNode_Copy_CASE(191)
		UnOrderedMultiNode_Copy_CASE(192)
		UnOrderedMultiNode_Copy_CASE(193)
		UnOrderedMultiNode_Copy_CASE(194)
		UnOrderedMultiNode_Copy_CASE(195)
		UnOrderedMultiNode_Copy_CASE(196)
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
