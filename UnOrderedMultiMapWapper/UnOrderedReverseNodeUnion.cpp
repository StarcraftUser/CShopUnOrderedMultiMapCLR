#include "pch.h"

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedReverseNode<Key, Value>::CShorpUnOrderedReverseNode()
{
	gIntKeyClassDictionary = nullptr;
	gValueClassDictionary = nullptr;
	reverseNodeUnion = new Utilities::UnOrderedReverseNodeUnion();
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
		reverseNodeUnion->ptrToDelete = nullptr;
		break;
	case 1:
		reverseNodeUnion->CPPreversenode1 = new UnOrderedReverseNode<unsigned char, unsigned char>();
		break;
	case 2:
		reverseNodeUnion->CPPreversenode2 = new UnOrderedReverseNode<unsigned char, char>();
		break;
	case 3:
		reverseNodeUnion->CPPreversenode3 = new UnOrderedReverseNode<unsigned char, short>();
		break;
	case 4:
		reverseNodeUnion->CPPreversenode4 = new UnOrderedReverseNode<unsigned char, unsigned short>();
		break;
	case 5:
		reverseNodeUnion->CPPreversenode5 = new UnOrderedReverseNode<unsigned char, int>();
		break;
	case 6:
		reverseNodeUnion->CPPreversenode6 = new UnOrderedReverseNode<unsigned char, unsigned int>();
		break;
	case 7:
		reverseNodeUnion->CPPreversenode7 = new UnOrderedReverseNode<unsigned char, long long>();
		break;
	case 8:
		reverseNodeUnion->CPPreversenode8 = new UnOrderedReverseNode<unsigned char, unsigned long long>();
		break;
	case 9:
		reverseNodeUnion->CPPreversenode9 = new UnOrderedReverseNode<unsigned char, float>();
		break;
	case 10:
		reverseNodeUnion->CPPreversenode10 = new UnOrderedReverseNode<unsigned char, double>();
		break;
	case 11:
		reverseNodeUnion->CPPreversenode11 = new UnOrderedReverseNode<unsigned char, wchar_t>();
		break;
	case 12:
		reverseNodeUnion->CPPreversenode12 = new UnOrderedReverseNode<unsigned char, bool>();
		break;
	case 13:
		reverseNodeUnion->CPPreversenode13 = new UnOrderedReverseNode<unsigned char, std::wstring>();
		break;
	case 14:
		reverseNodeUnion->CPPreversenode14 = new UnOrderedReverseNode<unsigned char, __int64>();
		break;
	case 15:
		reverseNodeUnion->CPPreversenode15 = new UnOrderedReverseNode<char, unsigned char>();
		break;
	case 16:
		reverseNodeUnion->CPPreversenode16 = new UnOrderedReverseNode<char, char>();
		break;
	case 17:
		reverseNodeUnion->CPPreversenode17 = new UnOrderedReverseNode<char, short>();
		break;
	case 18:
		reverseNodeUnion->CPPreversenode18 = new UnOrderedReverseNode<char, unsigned short>();
		break;
	case 19:
		reverseNodeUnion->CPPreversenode19 = new UnOrderedReverseNode<char, int>();
		break;
	case 20:
		reverseNodeUnion->CPPreversenode20 = new UnOrderedReverseNode<char, unsigned int>();
		break;
	case 21:
		reverseNodeUnion->CPPreversenode21 = new UnOrderedReverseNode<char, long long>();
		break;
	case 22:
		reverseNodeUnion->CPPreversenode22 = new UnOrderedReverseNode<char, unsigned long long>();
		break;
	case 23:
		reverseNodeUnion->CPPreversenode23 = new UnOrderedReverseNode<char, float>();
		break;
	case 24:
		reverseNodeUnion->CPPreversenode24 = new UnOrderedReverseNode<char, double>();
		break;
	case 25:
		reverseNodeUnion->CPPreversenode25 = new UnOrderedReverseNode<char, wchar_t>();
		break;
	case 26:
		reverseNodeUnion->CPPreversenode26 = new UnOrderedReverseNode<char, bool>();
		break;
	case 27:
		reverseNodeUnion->CPPreversenode27 = new UnOrderedReverseNode<char, std::wstring>();
		break;
	case 28:
		reverseNodeUnion->CPPreversenode28 = new UnOrderedReverseNode<char, __int64>();
		break;
	case 29:
		reverseNodeUnion->CPPreversenode29 = new UnOrderedReverseNode<short, unsigned char>();
		break;
	case 30:
		reverseNodeUnion->CPPreversenode30 = new UnOrderedReverseNode<short, char>();
		break;
	case 31:
		reverseNodeUnion->CPPreversenode31 = new UnOrderedReverseNode<short, short>();
		break;
	case 32:
		reverseNodeUnion->CPPreversenode32 = new UnOrderedReverseNode<short, unsigned short>();
		break;
	case 33:
		reverseNodeUnion->CPPreversenode33 = new UnOrderedReverseNode<short, int>();
		break;
	case 34:
		reverseNodeUnion->CPPreversenode34 = new UnOrderedReverseNode<short, unsigned int>();
		break;
	case 35:
		reverseNodeUnion->CPPreversenode35 = new UnOrderedReverseNode<short, long long>();
		break;
	case 36:
		reverseNodeUnion->CPPreversenode36 = new UnOrderedReverseNode<short, unsigned long long>();
		break;
	case 37:
		reverseNodeUnion->CPPreversenode37 = new UnOrderedReverseNode<short, float>();
		break;
	case 38:
		reverseNodeUnion->CPPreversenode38 = new UnOrderedReverseNode<short, double>();
		break;
	case 39:
		reverseNodeUnion->CPPreversenode39 = new UnOrderedReverseNode<short, wchar_t>();
		break;
	case 40:
		reverseNodeUnion->CPPreversenode40 = new UnOrderedReverseNode<short, bool>();
		break;
	case 41:
		reverseNodeUnion->CPPreversenode41 = new UnOrderedReverseNode<short, std::wstring>();
		break;
	case 42:
		reverseNodeUnion->CPPreversenode42 = new UnOrderedReverseNode<short, __int64>();
		break;
	case 43:
		reverseNodeUnion->CPPreversenode43 = new UnOrderedReverseNode<unsigned short, unsigned char>();
		break;
	case 44:
		reverseNodeUnion->CPPreversenode44 = new UnOrderedReverseNode<unsigned short, char>();
		break;
	case 45:
		reverseNodeUnion->CPPreversenode45 = new UnOrderedReverseNode<unsigned short, short>();
		break;
	case 46:
		reverseNodeUnion->CPPreversenode46 = new UnOrderedReverseNode<unsigned short, unsigned short>();
		break;
	case 47:
		reverseNodeUnion->CPPreversenode47 = new UnOrderedReverseNode<unsigned short, int>();
		break;
	case 48:
		reverseNodeUnion->CPPreversenode48 = new UnOrderedReverseNode<unsigned short, unsigned int>();
		break;
	case 49:
		reverseNodeUnion->CPPreversenode49 = new UnOrderedReverseNode<unsigned short, long long>();
		break;
	case 50:
		reverseNodeUnion->CPPreversenode50 = new UnOrderedReverseNode<unsigned short, unsigned long long>();
		break;
	case 51:
		reverseNodeUnion->CPPreversenode51 = new UnOrderedReverseNode<unsigned short, float>();
		break;
	case 52:
		reverseNodeUnion->CPPreversenode52 = new UnOrderedReverseNode<unsigned short, double>();
		break;
	case 53:
		reverseNodeUnion->CPPreversenode53 = new UnOrderedReverseNode<unsigned short, wchar_t>();
		break;
	case 54:
		reverseNodeUnion->CPPreversenode54 = new UnOrderedReverseNode<unsigned short, bool>();
		break;
	case 55:
		reverseNodeUnion->CPPreversenode55 = new UnOrderedReverseNode<unsigned short, std::wstring>();
		break;
	case 56:
		reverseNodeUnion->CPPreversenode56 = new UnOrderedReverseNode<unsigned short, __int64>();
		break;
	case 57:
		reverseNodeUnion->CPPreversenode57 = new UnOrderedReverseNode<int, unsigned char>();
		break;
	case 58:
		reverseNodeUnion->CPPreversenode58 = new UnOrderedReverseNode<int, char>();
		break;
	case 59:
		reverseNodeUnion->CPPreversenode59 = new UnOrderedReverseNode<int, short>();
		break;
	case 60:
		reverseNodeUnion->CPPreversenode60 = new UnOrderedReverseNode<int, unsigned short>();
		break;
	case 61:
		reverseNodeUnion->CPPreversenode61 = new UnOrderedReverseNode<int, int>();
		break;
	case 62:
		reverseNodeUnion->CPPreversenode62 = new UnOrderedReverseNode<int, unsigned int>();
		break;
	case 63:
		reverseNodeUnion->CPPreversenode63 = new UnOrderedReverseNode<int, long long>();
		break;
	case 64:
		reverseNodeUnion->CPPreversenode64 = new UnOrderedReverseNode<int, unsigned long long>();
		break;
	case 65:
		reverseNodeUnion->CPPreversenode65 = new UnOrderedReverseNode<int, float>();
		break;
	case 66:
		reverseNodeUnion->CPPreversenode66 = new UnOrderedReverseNode<int, double>();
		break;
	case 67:
		reverseNodeUnion->CPPreversenode67 = new UnOrderedReverseNode<int, wchar_t>();
		break;
	case 68:
		reverseNodeUnion->CPPreversenode68 = new UnOrderedReverseNode<int, bool>();
		break;
	case 69:
		reverseNodeUnion->CPPreversenode69 = new UnOrderedReverseNode<int, std::wstring>();
		break;
	case 70:
		reverseNodeUnion->CPPreversenode70 = new UnOrderedReverseNode<int, __int64>();
		break;
	case 71:
		reverseNodeUnion->CPPreversenode71 = new UnOrderedReverseNode<unsigned int, unsigned char>();
		break;
	case 72:
		reverseNodeUnion->CPPreversenode72 = new UnOrderedReverseNode<unsigned int, char>();
		break;
	case 73:
		reverseNodeUnion->CPPreversenode73 = new UnOrderedReverseNode<unsigned int, short>();
		break;
	case 74:
		reverseNodeUnion->CPPreversenode74 = new UnOrderedReverseNode<unsigned int, unsigned short>();
		break;
	case 75:
		reverseNodeUnion->CPPreversenode75 = new UnOrderedReverseNode<unsigned int, int>();
		break;
	case 76:
		reverseNodeUnion->CPPreversenode76 = new UnOrderedReverseNode<unsigned int, unsigned int>();
		break;
	case 77:
		reverseNodeUnion->CPPreversenode77 = new UnOrderedReverseNode<unsigned int, long long>();
		break;
	case 78:
		reverseNodeUnion->CPPreversenode78 = new UnOrderedReverseNode<unsigned int, unsigned long long>();
		break;
	case 79:
		reverseNodeUnion->CPPreversenode79 = new UnOrderedReverseNode<unsigned int, float>();
		break;
	case 80:
		reverseNodeUnion->CPPreversenode80 = new UnOrderedReverseNode<unsigned int, double>();
		break;
	case 81:
		reverseNodeUnion->CPPreversenode81 = new UnOrderedReverseNode<unsigned int, wchar_t>();
		break;
	case 82:
		reverseNodeUnion->CPPreversenode82 = new UnOrderedReverseNode<unsigned int, bool>();
		break;
	case 83:
		reverseNodeUnion->CPPreversenode83 = new UnOrderedReverseNode<unsigned int, std::wstring>();
		break;
	case 84:
		reverseNodeUnion->CPPreversenode84 = new UnOrderedReverseNode<unsigned int, __int64>();
		break;
	case 85:
		reverseNodeUnion->CPPreversenode85 = new UnOrderedReverseNode<long long, unsigned char>();
		break;
	case 86:
		reverseNodeUnion->CPPreversenode86 = new UnOrderedReverseNode<long long, char>();
		break;
	case 87:
		reverseNodeUnion->CPPreversenode87 = new UnOrderedReverseNode<long long, short>();
		break;
	case 88:
		reverseNodeUnion->CPPreversenode88 = new UnOrderedReverseNode<long long, unsigned short>();
		break;
	case 89:
		reverseNodeUnion->CPPreversenode89 = new UnOrderedReverseNode<long long, int>();
		break;
	case 90:
		reverseNodeUnion->CPPreversenode90 = new UnOrderedReverseNode<long long, unsigned int>();
		break;
	case 91:
		reverseNodeUnion->CPPreversenode91 = new UnOrderedReverseNode<long long, long long>();
		break;
	case 92:
		reverseNodeUnion->CPPreversenode92 = new UnOrderedReverseNode<long long, unsigned long long>();
		break;
	case 93:
		reverseNodeUnion->CPPreversenode93 = new UnOrderedReverseNode<long long, float>();
		break;
	case 94:
		reverseNodeUnion->CPPreversenode94 = new UnOrderedReverseNode<long long, double>();
		break;
	case 95:
		reverseNodeUnion->CPPreversenode95 = new UnOrderedReverseNode<long long, wchar_t>();
		break;
	case 96:
		reverseNodeUnion->CPPreversenode96 = new UnOrderedReverseNode<long long, bool>();
		break;
	case 97:
		reverseNodeUnion->CPPreversenode97 = new UnOrderedReverseNode<long long, std::wstring>();
		break;
	case 98:
		reverseNodeUnion->CPPreversenode98 = new UnOrderedReverseNode<long long, __int64>();
		break;
	case 99:
		reverseNodeUnion->CPPreversenode99 = new UnOrderedReverseNode<unsigned long long, unsigned char>();
		break;
	case 100:
		reverseNodeUnion->CPPreversenode100 = new UnOrderedReverseNode<unsigned long long, char>();
		break;
	case 101:
		reverseNodeUnion->CPPreversenode101 = new UnOrderedReverseNode<unsigned long long, short>();
		break;
	case 102:
		reverseNodeUnion->CPPreversenode102 = new UnOrderedReverseNode<unsigned long long, unsigned short>();
		break;
	case 103:
		reverseNodeUnion->CPPreversenode103 = new UnOrderedReverseNode<unsigned long long, int>();
		break;
	case 104:
		reverseNodeUnion->CPPreversenode104 = new UnOrderedReverseNode<unsigned long long, unsigned int>();
		break;
	case 105:
		reverseNodeUnion->CPPreversenode105 = new UnOrderedReverseNode<unsigned long long, long long>();
		break;
	case 106:
		reverseNodeUnion->CPPreversenode106 = new UnOrderedReverseNode<unsigned long long, unsigned long long>();
		break;
	case 107:
		reverseNodeUnion->CPPreversenode107 = new UnOrderedReverseNode<unsigned long long, float>();
		break;
	case 108:
		reverseNodeUnion->CPPreversenode108 = new UnOrderedReverseNode<unsigned long long, double>();
		break;
	case 109:
		reverseNodeUnion->CPPreversenode109 = new UnOrderedReverseNode<unsigned long long, wchar_t>();
		break;
	case 110:
		reverseNodeUnion->CPPreversenode110 = new UnOrderedReverseNode<unsigned long long, bool>();
		break;
	case 111:
		reverseNodeUnion->CPPreversenode111 = new UnOrderedReverseNode<unsigned long long, std::wstring>();
		break;
	case 112:
		reverseNodeUnion->CPPreversenode112 = new UnOrderedReverseNode<unsigned long long, __int64>();
		break;
	case 113:
		reverseNodeUnion->CPPreversenode113 = new UnOrderedReverseNode<float, unsigned char>();
		break;
	case 114:
		reverseNodeUnion->CPPreversenode114 = new UnOrderedReverseNode<float, char>();
		break;
	case 115:
		reverseNodeUnion->CPPreversenode115 = new UnOrderedReverseNode<float, short>();
		break;
	case 116:
		reverseNodeUnion->CPPreversenode116 = new UnOrderedReverseNode<float, unsigned short>();
		break;
	case 117:
		reverseNodeUnion->CPPreversenode117 = new UnOrderedReverseNode<float, int>();
		break;
	case 118:
		reverseNodeUnion->CPPreversenode118 = new UnOrderedReverseNode<float, unsigned int>();
		break;
	case 119:
		reverseNodeUnion->CPPreversenode119 = new UnOrderedReverseNode<float, long long>();
		break;
	case 120:
		reverseNodeUnion->CPPreversenode120 = new UnOrderedReverseNode<float, unsigned long long>();
		break;
	case 121:
		reverseNodeUnion->CPPreversenode121 = new UnOrderedReverseNode<float, float>();
		break;
	case 122:
		reverseNodeUnion->CPPreversenode122 = new UnOrderedReverseNode<float, double>();
		break;
	case 123:
		reverseNodeUnion->CPPreversenode123 = new UnOrderedReverseNode<float, wchar_t>();
		break;
	case 124:
		reverseNodeUnion->CPPreversenode124 = new UnOrderedReverseNode<float, bool>();
		break;
	case 125:
		reverseNodeUnion->CPPreversenode125 = new UnOrderedReverseNode<float, std::wstring>();
		break;
	case 126:
		reverseNodeUnion->CPPreversenode126 = new UnOrderedReverseNode<float, __int64>();
		break;
	case 127:
		reverseNodeUnion->CPPreversenode127 = new UnOrderedReverseNode<double, unsigned char>();
		break;
	case 128:
		reverseNodeUnion->CPPreversenode128 = new UnOrderedReverseNode<double, char>();
		break;
	case 129:
		reverseNodeUnion->CPPreversenode129 = new UnOrderedReverseNode<double, short>();
		break;
	case 130:
		reverseNodeUnion->CPPreversenode130 = new UnOrderedReverseNode<double, unsigned short>();
		break;
	case 131:
		reverseNodeUnion->CPPreversenode131 = new UnOrderedReverseNode<double, int>();
		break;
	case 132:
		reverseNodeUnion->CPPreversenode132 = new UnOrderedReverseNode<double, unsigned int>();
		break;
	case 133:
		reverseNodeUnion->CPPreversenode133 = new UnOrderedReverseNode<double, long long>();
		break;
	case 134:
		reverseNodeUnion->CPPreversenode134 = new UnOrderedReverseNode<double, unsigned long long>();
		break;
	case 135:
		reverseNodeUnion->CPPreversenode135 = new UnOrderedReverseNode<double, float>();
		break;
	case 136:
		reverseNodeUnion->CPPreversenode136 = new UnOrderedReverseNode<double, double>();
		break;
	case 137:
		reverseNodeUnion->CPPreversenode137 = new UnOrderedReverseNode<double, wchar_t>();
		break;
	case 138:
		reverseNodeUnion->CPPreversenode138 = new UnOrderedReverseNode<double, bool>();
		break;
	case 139:
		reverseNodeUnion->CPPreversenode139 = new UnOrderedReverseNode<double, std::wstring>();
		break;
	case 140:
		reverseNodeUnion->CPPreversenode140 = new UnOrderedReverseNode<double, __int64>();
		break;
	case 141:
		reverseNodeUnion->CPPreversenode141 = new UnOrderedReverseNode<wchar_t, unsigned char>();
		break;
	case 142:
		reverseNodeUnion->CPPreversenode142 = new UnOrderedReverseNode<wchar_t, char>();
		break;
	case 143:
		reverseNodeUnion->CPPreversenode143 = new UnOrderedReverseNode<wchar_t, short>();
		break;
	case 144:
		reverseNodeUnion->CPPreversenode144 = new UnOrderedReverseNode<wchar_t, unsigned short>();
		break;
	case 145:
		reverseNodeUnion->CPPreversenode145 = new UnOrderedReverseNode<wchar_t, int>();
		break;
	case 146:
		reverseNodeUnion->CPPreversenode146 = new UnOrderedReverseNode<wchar_t, unsigned int>();
		break;
	case 147:
		reverseNodeUnion->CPPreversenode147 = new UnOrderedReverseNode<wchar_t, long long>();
		break;
	case 148:
		reverseNodeUnion->CPPreversenode148 = new UnOrderedReverseNode<wchar_t, unsigned long long>();
		break;
	case 149:
		reverseNodeUnion->CPPreversenode149 = new UnOrderedReverseNode<wchar_t, float>();
		break;
	case 150:
		reverseNodeUnion->CPPreversenode150 = new UnOrderedReverseNode<wchar_t, double>();
		break;
	case 151:
		reverseNodeUnion->CPPreversenode151 = new UnOrderedReverseNode<wchar_t, wchar_t>();
		break;
	case 152:
		reverseNodeUnion->CPPreversenode152 = new UnOrderedReverseNode<wchar_t, bool>();
		break;
	case 153:
		reverseNodeUnion->CPPreversenode153 = new UnOrderedReverseNode<wchar_t, std::wstring>();
		break;
	case 154:
		reverseNodeUnion->CPPreversenode154 = new UnOrderedReverseNode<wchar_t, __int64>();
		break;
	case 155:
		reverseNodeUnion->CPPreversenode155 = new UnOrderedReverseNode<bool, unsigned char>();
		break;
	case 156:
		reverseNodeUnion->CPPreversenode156 = new UnOrderedReverseNode<bool, char>();
		break;
	case 157:
		reverseNodeUnion->CPPreversenode157 = new UnOrderedReverseNode<bool, short>();
		break;
	case 158:
		reverseNodeUnion->CPPreversenode158 = new UnOrderedReverseNode<bool, unsigned short>();
		break;
	case 159:
		reverseNodeUnion->CPPreversenode159 = new UnOrderedReverseNode<bool, int>();
		break;
	case 160:
		reverseNodeUnion->CPPreversenode160 = new UnOrderedReverseNode<bool, unsigned int>();
		break;
	case 161:
		reverseNodeUnion->CPPreversenode161 = new UnOrderedReverseNode<bool, long long>();
		break;
	case 162:
		reverseNodeUnion->CPPreversenode162 = new UnOrderedReverseNode<bool, unsigned long long>();
		break;
	case 163:
		reverseNodeUnion->CPPreversenode163 = new UnOrderedReverseNode<bool, float>();
		break;
	case 164:
		reverseNodeUnion->CPPreversenode164 = new UnOrderedReverseNode<bool, double>();
		break;
	case 165:
		reverseNodeUnion->CPPreversenode165 = new UnOrderedReverseNode<bool, wchar_t>();
		break;
	case 166:
		reverseNodeUnion->CPPreversenode166 = new UnOrderedReverseNode<bool, bool>();
		break;
	case 167:
		reverseNodeUnion->CPPreversenode167 = new UnOrderedReverseNode<bool, std::wstring>();
		break;
	case 168:
		reverseNodeUnion->CPPreversenode168 = new UnOrderedReverseNode<bool, __int64>();
		break;
	case 169:
		reverseNodeUnion->CPPreversenode169 = new UnOrderedReverseNode<std::wstring, unsigned char>();
		break;
	case 170:
		reverseNodeUnion->CPPreversenode170 = new UnOrderedReverseNode<std::wstring, char>();
		break;
	case 171:
		reverseNodeUnion->CPPreversenode171 = new UnOrderedReverseNode<std::wstring, short>();
		break;
	case 172:
		reverseNodeUnion->CPPreversenode172 = new UnOrderedReverseNode<std::wstring, unsigned short>();
		break;
	case 173:
		reverseNodeUnion->CPPreversenode173 = new UnOrderedReverseNode<std::wstring, int>();
		break;
	case 174:
		reverseNodeUnion->CPPreversenode174 = new UnOrderedReverseNode<std::wstring, unsigned int>();
		break;
	case 175:
		reverseNodeUnion->CPPreversenode175 = new UnOrderedReverseNode<std::wstring, long long>();
		break;
	case 176:
		reverseNodeUnion->CPPreversenode176 = new UnOrderedReverseNode<std::wstring, unsigned long long>();
		break;
	case 177:
		reverseNodeUnion->CPPreversenode177 = new UnOrderedReverseNode<std::wstring, float>();
		break;
	case 178:
		reverseNodeUnion->CPPreversenode178 = new UnOrderedReverseNode<std::wstring, double>();
		break;
	case 179:
		reverseNodeUnion->CPPreversenode179 = new UnOrderedReverseNode<std::wstring, wchar_t>();
		break;
	case 180:
		reverseNodeUnion->CPPreversenode180 = new UnOrderedReverseNode<std::wstring, bool>();
		break;
	case 181:
		reverseNodeUnion->CPPreversenode181 = new UnOrderedReverseNode<std::wstring, std::wstring>();
		break;
	case 182:
		reverseNodeUnion->CPPreversenode182 = new UnOrderedReverseNode<std::wstring, __int64>();
		break;
	case 183:
		reverseNodeUnion->CPPreversenode183 = new UnOrderedReverseNode<__int64, unsigned char>();
		break;
	case 184:
		reverseNodeUnion->CPPreversenode184 = new UnOrderedReverseNode<__int64, char>();
		break;
	case 185:
		reverseNodeUnion->CPPreversenode185 = new UnOrderedReverseNode<__int64, short>();
		break;
	case 186:
		reverseNodeUnion->CPPreversenode186 = new UnOrderedReverseNode<__int64, unsigned short>();
		break;
	case 187:
		reverseNodeUnion->CPPreversenode187 = new UnOrderedReverseNode<__int64, int>();
		break;
	case 188:
		reverseNodeUnion->CPPreversenode188 = new UnOrderedReverseNode<__int64, unsigned int>();
		break;
	case 189:
		reverseNodeUnion->CPPreversenode189 = new UnOrderedReverseNode<__int64, long long>();
		break;
	case 190:
		reverseNodeUnion->CPPreversenode190 = new UnOrderedReverseNode<__int64, unsigned long long>();
		break;
	case 191:
		reverseNodeUnion->CPPreversenode191 = new UnOrderedReverseNode<__int64, float>();
		break;
	case 192:
		reverseNodeUnion->CPPreversenode192 = new UnOrderedReverseNode<__int64, double>();
		break;
	case 193:
		reverseNodeUnion->CPPreversenode193 = new UnOrderedReverseNode<__int64, wchar_t>();
		break;
	case 194:
		reverseNodeUnion->CPPreversenode194 = new UnOrderedReverseNode<__int64, bool>();
		break;
	case 195:
		reverseNodeUnion->CPPreversenode195 = new UnOrderedReverseNode<__int64, std::wstring>();
		break;
	case 196:
		reverseNodeUnion->CPPreversenode196 = new UnOrderedReverseNode<__int64, __int64>();
		break;
	}
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedReverseNode<Key, Value>::~CShorpUnOrderedReverseNode()
{
	if (reverseNodeUnion->ptrToDelete)
		delete reverseNodeUnion->ptrToDelete;
	delete reverseNodeUnion;
}

generic<typename Key, typename Value>
inline void UnOrderedMultiMapWapper::CShorpUnOrderedReverseNode<Key, Value>::Next()
{
	if (Object::ReferenceEquals(this, nullptr)) return;
	if (isInitialized == 0) return;
	switch (nKeyValueType)
	{
	case 0: default:
		return;
	case 1:
		(*(reverseNodeUnion->CPPreversenode1))++;
		return;
	case 2:
		(*(reverseNodeUnion->CPPreversenode2))++;
		return;
	case 3:
		(*(reverseNodeUnion->CPPreversenode3))++;
		return;
	case 4:
		(*(reverseNodeUnion->CPPreversenode4))++;
		return;
	case 5:
		(*(reverseNodeUnion->CPPreversenode5))++;
		return;
	case 6:
		(*(reverseNodeUnion->CPPreversenode6))++;
		return;
	case 7:
		(*(reverseNodeUnion->CPPreversenode7))++;
		return;
	case 8:
		(*(reverseNodeUnion->CPPreversenode8))++;
		return;
	case 9:
		(*(reverseNodeUnion->CPPreversenode9))++;
		return;
	case 10:
		(*(reverseNodeUnion->CPPreversenode10))++;
		return;
	case 11:
		(*(reverseNodeUnion->CPPreversenode11))++;
		return;
	case 12:
		(*(reverseNodeUnion->CPPreversenode12))++;
		return;
	case 13:
		(*(reverseNodeUnion->CPPreversenode13))++;
		return;
	case 14:
		(*(reverseNodeUnion->CPPreversenode14))++;
		return;
	case 15:
		(*(reverseNodeUnion->CPPreversenode15))++;
		return;
	case 16:
		(*(reverseNodeUnion->CPPreversenode16))++;
		return;
	case 17:
		(*(reverseNodeUnion->CPPreversenode17))++;
		return;
	case 18:
		(*(reverseNodeUnion->CPPreversenode18))++;
		return;
	case 19:
		(*(reverseNodeUnion->CPPreversenode19))++;
		return;
	case 20:
		(*(reverseNodeUnion->CPPreversenode20))++;
		return;
	case 21:
		(*(reverseNodeUnion->CPPreversenode21))++;
		return;
	case 22:
		(*(reverseNodeUnion->CPPreversenode22))++;
		return;
	case 23:
		(*(reverseNodeUnion->CPPreversenode23))++;
		return;
	case 24:
		(*(reverseNodeUnion->CPPreversenode24))++;
		return;
	case 25:
		(*(reverseNodeUnion->CPPreversenode25))++;
		return;
	case 26:
		(*(reverseNodeUnion->CPPreversenode26))++;
		return;
	case 27:
		(*(reverseNodeUnion->CPPreversenode27))++;
		return;
	case 28:
		(*(reverseNodeUnion->CPPreversenode28))++;
		return;
	case 29:
		(*(reverseNodeUnion->CPPreversenode29))++;
		return;
	case 30:
		(*(reverseNodeUnion->CPPreversenode30))++;
		return;
	case 31:
		(*(reverseNodeUnion->CPPreversenode31))++;
		return;
	case 32:
		(*(reverseNodeUnion->CPPreversenode32))++;
		return;
	case 33:
		(*(reverseNodeUnion->CPPreversenode33))++;
		return;
	case 34:
		(*(reverseNodeUnion->CPPreversenode34))++;
		return;
	case 35:
		(*(reverseNodeUnion->CPPreversenode35))++;
		return;
	case 36:
		(*(reverseNodeUnion->CPPreversenode36))++;
		return;
	case 37:
		(*(reverseNodeUnion->CPPreversenode37))++;
		return;
	case 38:
		(*(reverseNodeUnion->CPPreversenode38))++;
		return;
	case 39:
		(*(reverseNodeUnion->CPPreversenode39))++;
		return;
	case 40:
		(*(reverseNodeUnion->CPPreversenode40))++;
		return;
	case 41:
		(*(reverseNodeUnion->CPPreversenode41))++;
		return;
	case 42:
		(*(reverseNodeUnion->CPPreversenode42))++;
		return;
	case 43:
		(*(reverseNodeUnion->CPPreversenode43))++;
		return;
	case 44:
		(*(reverseNodeUnion->CPPreversenode44))++;
		return;
	case 45:
		(*(reverseNodeUnion->CPPreversenode45))++;
		return;
	case 46:
		(*(reverseNodeUnion->CPPreversenode46))++;
		return;
	case 47:
		(*(reverseNodeUnion->CPPreversenode47))++;
		return;
	case 48:
		(*(reverseNodeUnion->CPPreversenode48))++;
		return;
	case 49:
		(*(reverseNodeUnion->CPPreversenode49))++;
		return;
	case 50:
		(*(reverseNodeUnion->CPPreversenode50))++;
		return;
	case 51:
		(*(reverseNodeUnion->CPPreversenode51))++;
		return;
	case 52:
		(*(reverseNodeUnion->CPPreversenode52))++;
		return;
	case 53:
		(*(reverseNodeUnion->CPPreversenode53))++;
		return;
	case 54:
		(*(reverseNodeUnion->CPPreversenode54))++;
		return;
	case 55:
		(*(reverseNodeUnion->CPPreversenode55))++;
		return;
	case 56:
		(*(reverseNodeUnion->CPPreversenode56))++;
		return;
	case 57:
		(*(reverseNodeUnion->CPPreversenode57))++;
		return;
	case 58:
		(*(reverseNodeUnion->CPPreversenode58))++;
		return;
	case 59:
		(*(reverseNodeUnion->CPPreversenode59))++;
		return;
	case 60:
		(*(reverseNodeUnion->CPPreversenode60))++;
		return;
	case 61:
		(*(reverseNodeUnion->CPPreversenode61))++;
		return;
	case 62:
		(*(reverseNodeUnion->CPPreversenode62))++;
		return;
	case 63:
		(*(reverseNodeUnion->CPPreversenode63))++;
		return;
	case 64:
		(*(reverseNodeUnion->CPPreversenode64))++;
		return;
	case 65:
		(*(reverseNodeUnion->CPPreversenode65))++;
		return;
	case 66:
		(*(reverseNodeUnion->CPPreversenode66))++;
		return;
	case 67:
		(*(reverseNodeUnion->CPPreversenode67))++;
		return;
	case 68:
		(*(reverseNodeUnion->CPPreversenode68))++;
		return;
	case 69:
		(*(reverseNodeUnion->CPPreversenode69))++;
		return;
	case 70:
		(*(reverseNodeUnion->CPPreversenode70))++;
		return;
	case 71:
		(*(reverseNodeUnion->CPPreversenode71))++;
		return;
	case 72:
		(*(reverseNodeUnion->CPPreversenode72))++;
		return;
	case 73:
		(*(reverseNodeUnion->CPPreversenode73))++;
		return;
	case 74:
		(*(reverseNodeUnion->CPPreversenode74))++;
		return;
	case 75:
		(*(reverseNodeUnion->CPPreversenode75))++;
		return;
	case 76:
		(*(reverseNodeUnion->CPPreversenode76))++;
		return;
	case 77:
		(*(reverseNodeUnion->CPPreversenode77))++;
		return;
	case 78:
		(*(reverseNodeUnion->CPPreversenode78))++;
		return;
	case 79:
		(*(reverseNodeUnion->CPPreversenode79))++;
		return;
	case 80:
		(*(reverseNodeUnion->CPPreversenode80))++;
		return;
	case 81:
		(*(reverseNodeUnion->CPPreversenode81))++;
		return;
	case 82:
		(*(reverseNodeUnion->CPPreversenode82))++;
		return;
	case 83:
		(*(reverseNodeUnion->CPPreversenode83))++;
		return;
	case 84:
		(*(reverseNodeUnion->CPPreversenode84))++;
		return;
	case 85:
		(*(reverseNodeUnion->CPPreversenode85))++;
		return;
	case 86:
		(*(reverseNodeUnion->CPPreversenode86))++;
		return;
	case 87:
		(*(reverseNodeUnion->CPPreversenode87))++;
		return;
	case 88:
		(*(reverseNodeUnion->CPPreversenode88))++;
		return;
	case 89:
		(*(reverseNodeUnion->CPPreversenode89))++;
		return;
	case 90:
		(*(reverseNodeUnion->CPPreversenode90))++;
		return;
	case 91:
		(*(reverseNodeUnion->CPPreversenode91))++;
		return;
	case 92:
		(*(reverseNodeUnion->CPPreversenode92))++;
		return;
	case 93:
		(*(reverseNodeUnion->CPPreversenode93))++;
		return;
	case 94:
		(*(reverseNodeUnion->CPPreversenode94))++;
		return;
	case 95:
		(*(reverseNodeUnion->CPPreversenode95))++;
		return;
	case 96:
		(*(reverseNodeUnion->CPPreversenode96))++;
		return;
	case 97:
		(*(reverseNodeUnion->CPPreversenode97))++;
		return;
	case 98:
		(*(reverseNodeUnion->CPPreversenode98))++;
		return;
	case 99:
		(*(reverseNodeUnion->CPPreversenode99))++;
		return;
	case 100:
		(*(reverseNodeUnion->CPPreversenode100))++;
		return;
	case 101:
		(*(reverseNodeUnion->CPPreversenode101))++;
		return;
	case 102:
		(*(reverseNodeUnion->CPPreversenode102))++;
		return;
	case 103:
		(*(reverseNodeUnion->CPPreversenode103))++;
		return;
	case 104:
		(*(reverseNodeUnion->CPPreversenode104))++;
		return;
	case 105:
		(*(reverseNodeUnion->CPPreversenode105))++;
		return;
	case 106:
		(*(reverseNodeUnion->CPPreversenode106))++;
		return;
	case 107:
		(*(reverseNodeUnion->CPPreversenode107))++;
		return;
	case 108:
		(*(reverseNodeUnion->CPPreversenode108))++;
		return;
	case 109:
		(*(reverseNodeUnion->CPPreversenode109))++;
		return;
	case 110:
		(*(reverseNodeUnion->CPPreversenode110))++;
		return;
	case 111:
		(*(reverseNodeUnion->CPPreversenode111))++;
		return;
	case 112:
		(*(reverseNodeUnion->CPPreversenode112))++;
		return;
	case 113:
		(*(reverseNodeUnion->CPPreversenode113))++;
		return;
	case 114:
		(*(reverseNodeUnion->CPPreversenode114))++;
		return;
	case 115:
		(*(reverseNodeUnion->CPPreversenode115))++;
		return;
	case 116:
		(*(reverseNodeUnion->CPPreversenode116))++;
		return;
	case 117:
		(*(reverseNodeUnion->CPPreversenode117))++;
		return;
	case 118:
		(*(reverseNodeUnion->CPPreversenode118))++;
		return;
	case 119:
		(*(reverseNodeUnion->CPPreversenode119))++;
		return;
	case 120:
		(*(reverseNodeUnion->CPPreversenode120))++;
		return;
	case 121:
		(*(reverseNodeUnion->CPPreversenode121))++;
		return;
	case 122:
		(*(reverseNodeUnion->CPPreversenode122))++;
		return;
	case 123:
		(*(reverseNodeUnion->CPPreversenode123))++;
		return;
	case 124:
		(*(reverseNodeUnion->CPPreversenode124))++;
		return;
	case 125:
		(*(reverseNodeUnion->CPPreversenode125))++;
		return;
	case 126:
		(*(reverseNodeUnion->CPPreversenode126))++;
		return;
	case 127:
		(*(reverseNodeUnion->CPPreversenode127))++;
		return;
	case 128:
		(*(reverseNodeUnion->CPPreversenode128))++;
		return;
	case 129:
		(*(reverseNodeUnion->CPPreversenode129))++;
		return;
	case 130:
		(*(reverseNodeUnion->CPPreversenode130))++;
		return;
	case 131:
		(*(reverseNodeUnion->CPPreversenode131))++;
		return;
	case 132:
		(*(reverseNodeUnion->CPPreversenode132))++;
		return;
	case 133:
		(*(reverseNodeUnion->CPPreversenode133))++;
		return;
	case 134:
		(*(reverseNodeUnion->CPPreversenode134))++;
		return;
	case 135:
		(*(reverseNodeUnion->CPPreversenode135))++;
		return;
	case 136:
		(*(reverseNodeUnion->CPPreversenode136))++;
		return;
	case 137:
		(*(reverseNodeUnion->CPPreversenode137))++;
		return;
	case 138:
		(*(reverseNodeUnion->CPPreversenode138))++;
		return;
	case 139:
		(*(reverseNodeUnion->CPPreversenode139))++;
		return;
	case 140:
		(*(reverseNodeUnion->CPPreversenode140))++;
		return;
	case 141:
		(*(reverseNodeUnion->CPPreversenode141))++;
		return;
	case 142:
		(*(reverseNodeUnion->CPPreversenode142))++;
		return;
	case 143:
		(*(reverseNodeUnion->CPPreversenode143))++;
		return;
	case 144:
		(*(reverseNodeUnion->CPPreversenode144))++;
		return;
	case 145:
		(*(reverseNodeUnion->CPPreversenode145))++;
		return;
	case 146:
		(*(reverseNodeUnion->CPPreversenode146))++;
		return;
	case 147:
		(*(reverseNodeUnion->CPPreversenode147))++;
		return;
	case 148:
		(*(reverseNodeUnion->CPPreversenode148))++;
		return;
	case 149:
		(*(reverseNodeUnion->CPPreversenode149))++;
		return;
	case 150:
		(*(reverseNodeUnion->CPPreversenode150))++;
		return;
	case 151:
		(*(reverseNodeUnion->CPPreversenode151))++;
		return;
	case 152:
		(*(reverseNodeUnion->CPPreversenode152))++;
		return;
	case 153:
		(*(reverseNodeUnion->CPPreversenode153))++;
		return;
	case 154:
		(*(reverseNodeUnion->CPPreversenode154))++;
		return;
	case 155:
		(*(reverseNodeUnion->CPPreversenode155))++;
		return;
	case 156:
		(*(reverseNodeUnion->CPPreversenode156))++;
		return;
	case 157:
		(*(reverseNodeUnion->CPPreversenode157))++;
		return;
	case 158:
		(*(reverseNodeUnion->CPPreversenode158))++;
		return;
	case 159:
		(*(reverseNodeUnion->CPPreversenode159))++;
		return;
	case 160:
		(*(reverseNodeUnion->CPPreversenode160))++;
		return;
	case 161:
		(*(reverseNodeUnion->CPPreversenode161))++;
		return;
	case 162:
		(*(reverseNodeUnion->CPPreversenode162))++;
		return;
	case 163:
		(*(reverseNodeUnion->CPPreversenode163))++;
		return;
	case 164:
		(*(reverseNodeUnion->CPPreversenode164))++;
		return;
	case 165:
		(*(reverseNodeUnion->CPPreversenode165))++;
		return;
	case 166:
		(*(reverseNodeUnion->CPPreversenode166))++;
		return;
	case 167:
		(*(reverseNodeUnion->CPPreversenode167))++;
		return;
	case 168:
		(*(reverseNodeUnion->CPPreversenode168))++;
		return;
	case 169:
		(*(reverseNodeUnion->CPPreversenode169))++;
		return;
	case 170:
		(*(reverseNodeUnion->CPPreversenode170))++;
		return;
	case 171:
		(*(reverseNodeUnion->CPPreversenode171))++;
		return;
	case 172:
		(*(reverseNodeUnion->CPPreversenode172))++;
		return;
	case 173:
		(*(reverseNodeUnion->CPPreversenode173))++;
		return;
	case 174:
		(*(reverseNodeUnion->CPPreversenode174))++;
		return;
	case 175:
		(*(reverseNodeUnion->CPPreversenode175))++;
		return;
	case 176:
		(*(reverseNodeUnion->CPPreversenode176))++;
		return;
	case 177:
		(*(reverseNodeUnion->CPPreversenode177))++;
		return;
	case 178:
		(*(reverseNodeUnion->CPPreversenode178))++;
		return;
	case 179:
		(*(reverseNodeUnion->CPPreversenode179))++;
		return;
	case 180:
		(*(reverseNodeUnion->CPPreversenode180))++;
		return;
	case 181:
		(*(reverseNodeUnion->CPPreversenode181))++;
		return;
	case 182:
		(*(reverseNodeUnion->CPPreversenode182))++;
		return;
	case 183:
		(*(reverseNodeUnion->CPPreversenode183))++;
		return;
	case 184:
		(*(reverseNodeUnion->CPPreversenode184))++;
		return;
	case 185:
		(*(reverseNodeUnion->CPPreversenode185))++;
		return;
	case 186:
		(*(reverseNodeUnion->CPPreversenode186))++;
		return;
	case 187:
		(*(reverseNodeUnion->CPPreversenode187))++;
		return;
	case 188:
		(*(reverseNodeUnion->CPPreversenode188))++;
		return;
	case 189:
		(*(reverseNodeUnion->CPPreversenode189))++;
		return;
	case 190:
		(*(reverseNodeUnion->CPPreversenode190))++;
		return;
	case 191:
		(*(reverseNodeUnion->CPPreversenode191))++;
		return;
	case 192:
		(*(reverseNodeUnion->CPPreversenode192))++;
		return;
	case 193:
		(*(reverseNodeUnion->CPPreversenode193))++;
		return;
	case 194:
		(*(reverseNodeUnion->CPPreversenode194))++;
		return;
	case 195:
		(*(reverseNodeUnion->CPPreversenode195))++;
		return;
	case 196:
		(*(reverseNodeUnion->CPPreversenode196))++;
		return;
	}
}

generic<typename Key, typename Value>
void UnOrderedMultiMapWapper::CShorpUnOrderedReverseNode<Key, Value>::Previous()
{
	if (Object::ReferenceEquals(this, nullptr)) return;
	if (isInitialized == 0) return;
	switch (nKeyValueType)
	{
	case 0: default:
		return;
	case 1:
		(*(reverseNodeUnion->CPPreversenode1))--;
		return;
	case 2:
		(*(reverseNodeUnion->CPPreversenode2))--;
		return;
	case 3:
		(*(reverseNodeUnion->CPPreversenode3))--;
		return;
	case 4:
		(*(reverseNodeUnion->CPPreversenode4))--;
		return;
	case 5:
		(*(reverseNodeUnion->CPPreversenode5))--;
		return;
	case 6:
		(*(reverseNodeUnion->CPPreversenode6))--;
		return;
	case 7:
		(*(reverseNodeUnion->CPPreversenode7))--;
		return;
	case 8:
		(*(reverseNodeUnion->CPPreversenode8))--;
		return;
	case 9:
		(*(reverseNodeUnion->CPPreversenode9))--;
		return;
	case 10:
		(*(reverseNodeUnion->CPPreversenode10))--;
		return;
	case 11:
		(*(reverseNodeUnion->CPPreversenode11))--;
		return;
	case 12:
		(*(reverseNodeUnion->CPPreversenode12))--;
		return;
	case 13:
		(*(reverseNodeUnion->CPPreversenode13))--;
		return;
	case 14:
		(*(reverseNodeUnion->CPPreversenode14))--;
		return;
	case 15:
		(*(reverseNodeUnion->CPPreversenode15))--;
		return;
	case 16:
		(*(reverseNodeUnion->CPPreversenode16))--;
		return;
	case 17:
		(*(reverseNodeUnion->CPPreversenode17))--;
		return;
	case 18:
		(*(reverseNodeUnion->CPPreversenode18))--;
		return;
	case 19:
		(*(reverseNodeUnion->CPPreversenode19))--;
		return;
	case 20:
		(*(reverseNodeUnion->CPPreversenode20))--;
		return;
	case 21:
		(*(reverseNodeUnion->CPPreversenode21))--;
		return;
	case 22:
		(*(reverseNodeUnion->CPPreversenode22))--;
		return;
	case 23:
		(*(reverseNodeUnion->CPPreversenode23))--;
		return;
	case 24:
		(*(reverseNodeUnion->CPPreversenode24))--;
		return;
	case 25:
		(*(reverseNodeUnion->CPPreversenode25))--;
		return;
	case 26:
		(*(reverseNodeUnion->CPPreversenode26))--;
		return;
	case 27:
		(*(reverseNodeUnion->CPPreversenode27))--;
		return;
	case 28:
		(*(reverseNodeUnion->CPPreversenode28))--;
		return;
	case 29:
		(*(reverseNodeUnion->CPPreversenode29))--;
		return;
	case 30:
		(*(reverseNodeUnion->CPPreversenode30))--;
		return;
	case 31:
		(*(reverseNodeUnion->CPPreversenode31))--;
		return;
	case 32:
		(*(reverseNodeUnion->CPPreversenode32))--;
		return;
	case 33:
		(*(reverseNodeUnion->CPPreversenode33))--;
		return;
	case 34:
		(*(reverseNodeUnion->CPPreversenode34))--;
		return;
	case 35:
		(*(reverseNodeUnion->CPPreversenode35))--;
		return;
	case 36:
		(*(reverseNodeUnion->CPPreversenode36))--;
		return;
	case 37:
		(*(reverseNodeUnion->CPPreversenode37))--;
		return;
	case 38:
		(*(reverseNodeUnion->CPPreversenode38))--;
		return;
	case 39:
		(*(reverseNodeUnion->CPPreversenode39))--;
		return;
	case 40:
		(*(reverseNodeUnion->CPPreversenode40))--;
		return;
	case 41:
		(*(reverseNodeUnion->CPPreversenode41))--;
		return;
	case 42:
		(*(reverseNodeUnion->CPPreversenode42))--;
		return;
	case 43:
		(*(reverseNodeUnion->CPPreversenode43))--;
		return;
	case 44:
		(*(reverseNodeUnion->CPPreversenode44))--;
		return;
	case 45:
		(*(reverseNodeUnion->CPPreversenode45))--;
		return;
	case 46:
		(*(reverseNodeUnion->CPPreversenode46))--;
		return;
	case 47:
		(*(reverseNodeUnion->CPPreversenode47))--;
		return;
	case 48:
		(*(reverseNodeUnion->CPPreversenode48))--;
		return;
	case 49:
		(*(reverseNodeUnion->CPPreversenode49))--;
		return;
	case 50:
		(*(reverseNodeUnion->CPPreversenode50))--;
		return;
	case 51:
		(*(reverseNodeUnion->CPPreversenode51))--;
		return;
	case 52:
		(*(reverseNodeUnion->CPPreversenode52))--;
		return;
	case 53:
		(*(reverseNodeUnion->CPPreversenode53))--;
		return;
	case 54:
		(*(reverseNodeUnion->CPPreversenode54))--;
		return;
	case 55:
		(*(reverseNodeUnion->CPPreversenode55))--;
		return;
	case 56:
		(*(reverseNodeUnion->CPPreversenode56))--;
		return;
	case 57:
		(*(reverseNodeUnion->CPPreversenode57))--;
		return;
	case 58:
		(*(reverseNodeUnion->CPPreversenode58))--;
		return;
	case 59:
		(*(reverseNodeUnion->CPPreversenode59))--;
		return;
	case 60:
		(*(reverseNodeUnion->CPPreversenode60))--;
		return;
	case 61:
		(*(reverseNodeUnion->CPPreversenode61))--;
		return;
	case 62:
		(*(reverseNodeUnion->CPPreversenode62))--;
		return;
	case 63:
		(*(reverseNodeUnion->CPPreversenode63))--;
		return;
	case 64:
		(*(reverseNodeUnion->CPPreversenode64))--;
		return;
	case 65:
		(*(reverseNodeUnion->CPPreversenode65))--;
		return;
	case 66:
		(*(reverseNodeUnion->CPPreversenode66))--;
		return;
	case 67:
		(*(reverseNodeUnion->CPPreversenode67))--;
		return;
	case 68:
		(*(reverseNodeUnion->CPPreversenode68))--;
		return;
	case 69:
		(*(reverseNodeUnion->CPPreversenode69))--;
		return;
	case 70:
		(*(reverseNodeUnion->CPPreversenode70))--;
		return;
	case 71:
		(*(reverseNodeUnion->CPPreversenode71))--;
		return;
	case 72:
		(*(reverseNodeUnion->CPPreversenode72))--;
		return;
	case 73:
		(*(reverseNodeUnion->CPPreversenode73))--;
		return;
	case 74:
		(*(reverseNodeUnion->CPPreversenode74))--;
		return;
	case 75:
		(*(reverseNodeUnion->CPPreversenode75))--;
		return;
	case 76:
		(*(reverseNodeUnion->CPPreversenode76))--;
		return;
	case 77:
		(*(reverseNodeUnion->CPPreversenode77))--;
		return;
	case 78:
		(*(reverseNodeUnion->CPPreversenode78))--;
		return;
	case 79:
		(*(reverseNodeUnion->CPPreversenode79))--;
		return;
	case 80:
		(*(reverseNodeUnion->CPPreversenode80))--;
		return;
	case 81:
		(*(reverseNodeUnion->CPPreversenode81))--;
		return;
	case 82:
		(*(reverseNodeUnion->CPPreversenode82))--;
		return;
	case 83:
		(*(reverseNodeUnion->CPPreversenode83))--;
		return;
	case 84:
		(*(reverseNodeUnion->CPPreversenode84))--;
		return;
	case 85:
		(*(reverseNodeUnion->CPPreversenode85))--;
		return;
	case 86:
		(*(reverseNodeUnion->CPPreversenode86))--;
		return;
	case 87:
		(*(reverseNodeUnion->CPPreversenode87))--;
		return;
	case 88:
		(*(reverseNodeUnion->CPPreversenode88))--;
		return;
	case 89:
		(*(reverseNodeUnion->CPPreversenode89))--;
		return;
	case 90:
		(*(reverseNodeUnion->CPPreversenode90))--;
		return;
	case 91:
		(*(reverseNodeUnion->CPPreversenode91))--;
		return;
	case 92:
		(*(reverseNodeUnion->CPPreversenode92))--;
		return;
	case 93:
		(*(reverseNodeUnion->CPPreversenode93))--;
		return;
	case 94:
		(*(reverseNodeUnion->CPPreversenode94))--;
		return;
	case 95:
		(*(reverseNodeUnion->CPPreversenode95))--;
		return;
	case 96:
		(*(reverseNodeUnion->CPPreversenode96))--;
		return;
	case 97:
		(*(reverseNodeUnion->CPPreversenode97))--;
		return;
	case 98:
		(*(reverseNodeUnion->CPPreversenode98))--;
		return;
	case 99:
		(*(reverseNodeUnion->CPPreversenode99))--;
		return;
	case 100:
		(*(reverseNodeUnion->CPPreversenode100))--;
		return;
	case 101:
		(*(reverseNodeUnion->CPPreversenode101))--;
		return;
	case 102:
		(*(reverseNodeUnion->CPPreversenode102))--;
		return;
	case 103:
		(*(reverseNodeUnion->CPPreversenode103))--;
		return;
	case 104:
		(*(reverseNodeUnion->CPPreversenode104))--;
		return;
	case 105:
		(*(reverseNodeUnion->CPPreversenode105))--;
		return;
	case 106:
		(*(reverseNodeUnion->CPPreversenode106))--;
		return;
	case 107:
		(*(reverseNodeUnion->CPPreversenode107))--;
		return;
	case 108:
		(*(reverseNodeUnion->CPPreversenode108))--;
		return;
	case 109:
		(*(reverseNodeUnion->CPPreversenode109))--;
		return;
	case 110:
		(*(reverseNodeUnion->CPPreversenode110))--;
		return;
	case 111:
		(*(reverseNodeUnion->CPPreversenode111))--;
		return;
	case 112:
		(*(reverseNodeUnion->CPPreversenode112))--;
		return;
	case 113:
		(*(reverseNodeUnion->CPPreversenode113))--;
		return;
	case 114:
		(*(reverseNodeUnion->CPPreversenode114))--;
		return;
	case 115:
		(*(reverseNodeUnion->CPPreversenode115))--;
		return;
	case 116:
		(*(reverseNodeUnion->CPPreversenode116))--;
		return;
	case 117:
		(*(reverseNodeUnion->CPPreversenode117))--;
		return;
	case 118:
		(*(reverseNodeUnion->CPPreversenode118))--;
		return;
	case 119:
		(*(reverseNodeUnion->CPPreversenode119))--;
		return;
	case 120:
		(*(reverseNodeUnion->CPPreversenode120))--;
		return;
	case 121:
		(*(reverseNodeUnion->CPPreversenode121))--;
		return;
	case 122:
		(*(reverseNodeUnion->CPPreversenode122))--;
		return;
	case 123:
		(*(reverseNodeUnion->CPPreversenode123))--;
		return;
	case 124:
		(*(reverseNodeUnion->CPPreversenode124))--;
		return;
	case 125:
		(*(reverseNodeUnion->CPPreversenode125))--;
		return;
	case 126:
		(*(reverseNodeUnion->CPPreversenode126))--;
		return;
	case 127:
		(*(reverseNodeUnion->CPPreversenode127))--;
		return;
	case 128:
		(*(reverseNodeUnion->CPPreversenode128))--;
		return;
	case 129:
		(*(reverseNodeUnion->CPPreversenode129))--;
		return;
	case 130:
		(*(reverseNodeUnion->CPPreversenode130))--;
		return;
	case 131:
		(*(reverseNodeUnion->CPPreversenode131))--;
		return;
	case 132:
		(*(reverseNodeUnion->CPPreversenode132))--;
		return;
	case 133:
		(*(reverseNodeUnion->CPPreversenode133))--;
		return;
	case 134:
		(*(reverseNodeUnion->CPPreversenode134))--;
		return;
	case 135:
		(*(reverseNodeUnion->CPPreversenode135))--;
		return;
	case 136:
		(*(reverseNodeUnion->CPPreversenode136))--;
		return;
	case 137:
		(*(reverseNodeUnion->CPPreversenode137))--;
		return;
	case 138:
		(*(reverseNodeUnion->CPPreversenode138))--;
		return;
	case 139:
		(*(reverseNodeUnion->CPPreversenode139))--;
		return;
	case 140:
		(*(reverseNodeUnion->CPPreversenode140))--;
		return;
	case 141:
		(*(reverseNodeUnion->CPPreversenode141))--;
		return;
	case 142:
		(*(reverseNodeUnion->CPPreversenode142))--;
		return;
	case 143:
		(*(reverseNodeUnion->CPPreversenode143))--;
		return;
	case 144:
		(*(reverseNodeUnion->CPPreversenode144))--;
		return;
	case 145:
		(*(reverseNodeUnion->CPPreversenode145))--;
		return;
	case 146:
		(*(reverseNodeUnion->CPPreversenode146))--;
		return;
	case 147:
		(*(reverseNodeUnion->CPPreversenode147))--;
		return;
	case 148:
		(*(reverseNodeUnion->CPPreversenode148))--;
		return;
	case 149:
		(*(reverseNodeUnion->CPPreversenode149))--;
		return;
	case 150:
		(*(reverseNodeUnion->CPPreversenode150))--;
		return;
	case 151:
		(*(reverseNodeUnion->CPPreversenode151))--;
		return;
	case 152:
		(*(reverseNodeUnion->CPPreversenode152))--;
		return;
	case 153:
		(*(reverseNodeUnion->CPPreversenode153))--;
		return;
	case 154:
		(*(reverseNodeUnion->CPPreversenode154))--;
		return;
	case 155:
		(*(reverseNodeUnion->CPPreversenode155))--;
		return;
	case 156:
		(*(reverseNodeUnion->CPPreversenode156))--;
		return;
	case 157:
		(*(reverseNodeUnion->CPPreversenode157))--;
		return;
	case 158:
		(*(reverseNodeUnion->CPPreversenode158))--;
		return;
	case 159:
		(*(reverseNodeUnion->CPPreversenode159))--;
		return;
	case 160:
		(*(reverseNodeUnion->CPPreversenode160))--;
		return;
	case 161:
		(*(reverseNodeUnion->CPPreversenode161))--;
		return;
	case 162:
		(*(reverseNodeUnion->CPPreversenode162))--;
		return;
	case 163:
		(*(reverseNodeUnion->CPPreversenode163))--;
		return;
	case 164:
		(*(reverseNodeUnion->CPPreversenode164))--;
		return;
	case 165:
		(*(reverseNodeUnion->CPPreversenode165))--;
		return;
	case 166:
		(*(reverseNodeUnion->CPPreversenode166))--;
		return;
	case 167:
		(*(reverseNodeUnion->CPPreversenode167))--;
		return;
	case 168:
		(*(reverseNodeUnion->CPPreversenode168))--;
		return;
	case 169:
		(*(reverseNodeUnion->CPPreversenode169))--;
		return;
	case 170:
		(*(reverseNodeUnion->CPPreversenode170))--;
		return;
	case 171:
		(*(reverseNodeUnion->CPPreversenode171))--;
		return;
	case 172:
		(*(reverseNodeUnion->CPPreversenode172))--;
		return;
	case 173:
		(*(reverseNodeUnion->CPPreversenode173))--;
		return;
	case 174:
		(*(reverseNodeUnion->CPPreversenode174))--;
		return;
	case 175:
		(*(reverseNodeUnion->CPPreversenode175))--;
		return;
	case 176:
		(*(reverseNodeUnion->CPPreversenode176))--;
		return;
	case 177:
		(*(reverseNodeUnion->CPPreversenode177))--;
		return;
	case 178:
		(*(reverseNodeUnion->CPPreversenode178))--;
		return;
	case 179:
		(*(reverseNodeUnion->CPPreversenode179))--;
		return;
	case 180:
		(*(reverseNodeUnion->CPPreversenode180))--;
		return;
	case 181:
		(*(reverseNodeUnion->CPPreversenode181))--;
		return;
	case 182:
		(*(reverseNodeUnion->CPPreversenode182))--;
		return;
	case 183:
		(*(reverseNodeUnion->CPPreversenode183))--;
		return;
	case 184:
		(*(reverseNodeUnion->CPPreversenode184))--;
		return;
	case 185:
		(*(reverseNodeUnion->CPPreversenode185))--;
		return;
	case 186:
		(*(reverseNodeUnion->CPPreversenode186))--;
		return;
	case 187:
		(*(reverseNodeUnion->CPPreversenode187))--;
		return;
	case 188:
		(*(reverseNodeUnion->CPPreversenode188))--;
		return;
	case 189:
		(*(reverseNodeUnion->CPPreversenode189))--;
		return;
	case 190:
		(*(reverseNodeUnion->CPPreversenode190))--;
		return;
	case 191:
		(*(reverseNodeUnion->CPPreversenode191))--;
		return;
	case 192:
		(*(reverseNodeUnion->CPPreversenode192))--;
		return;
	case 193:
		(*(reverseNodeUnion->CPPreversenode193))--;
		return;
	case 194:
		(*(reverseNodeUnion->CPPreversenode194))--;
		return;
	case 195:
		(*(reverseNodeUnion->CPPreversenode195))--;
		return;
	case 196:
		(*(reverseNodeUnion->CPPreversenode196))--;
		return;
	}
}


generic<typename Key, typename Value>
Value UnOrderedMultiMapWapper::CShorpUnOrderedReverseNode<Key, Value>::GetValue()
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
		managedValue = gcnew System::Byte(reverseNodeUnion->CPPreversenode1->GetValue());
		return safe_cast<Value>(managedValue);
	case 2:
		managedValue = gcnew System::SByte(reverseNodeUnion->CPPreversenode2->GetValue());
		return safe_cast<Value>(managedValue);
	case 3:
		managedValue = gcnew System::Int16(reverseNodeUnion->CPPreversenode3->GetValue());
		return safe_cast<Value>(managedValue);
	case 4:
		managedValue = gcnew System::UInt16(reverseNodeUnion->CPPreversenode4->GetValue());
		return safe_cast<Value>(managedValue);
	case 5:
		managedValue = gcnew System::Int32(reverseNodeUnion->CPPreversenode5->GetValue());
		return safe_cast<Value>(managedValue);
	case 6:
		managedValue = gcnew System::UInt32(reverseNodeUnion->CPPreversenode6->GetValue());
		return safe_cast<Value>(managedValue);
	case 7:
		managedValue = gcnew System::Int64(reverseNodeUnion->CPPreversenode7->GetValue());
		return safe_cast<Value>(managedValue);
	case 8:
		managedValue = gcnew System::UInt64(reverseNodeUnion->CPPreversenode8->GetValue());
		return safe_cast<Value>(managedValue);
	case 9:
		managedValue = gcnew System::Single(reverseNodeUnion->CPPreversenode9->GetValue());
		return safe_cast<Value>(managedValue);
	case 10:
		managedValue = gcnew System::Double(reverseNodeUnion->CPPreversenode10->GetValue());
		return safe_cast<Value>(managedValue);
	case 11:
		managedValue = gcnew System::Char(reverseNodeUnion->CPPreversenode11->GetValue());
		return safe_cast<Value>(managedValue);
	case 12:
		managedValue = gcnew System::Boolean(reverseNodeUnion->CPPreversenode12->GetValue());
		return safe_cast<Value>(managedValue);
	case 13:
		managedValue = gcnew String(reverseNodeUnion->CPPreversenode13->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 15:
		managedValue = gcnew System::Byte(reverseNodeUnion->CPPreversenode15->GetValue());
		return safe_cast<Value>(managedValue);
	case 16:
		managedValue = gcnew System::SByte(reverseNodeUnion->CPPreversenode16->GetValue());
		return safe_cast<Value>(managedValue);
	case 17:
		managedValue = gcnew System::Int16(reverseNodeUnion->CPPreversenode17->GetValue());
		return safe_cast<Value>(managedValue);
	case 18:
		managedValue = gcnew System::UInt16(reverseNodeUnion->CPPreversenode18->GetValue());
		return safe_cast<Value>(managedValue);
	case 19:
		managedValue = gcnew System::Int32(reverseNodeUnion->CPPreversenode19->GetValue());
		return safe_cast<Value>(managedValue);
	case 20:
		managedValue = gcnew System::UInt32(reverseNodeUnion->CPPreversenode20->GetValue());
		return safe_cast<Value>(managedValue);
	case 21:
		managedValue = gcnew System::Int64(reverseNodeUnion->CPPreversenode21->GetValue());
		return safe_cast<Value>(managedValue);
	case 22:
		managedValue = gcnew System::UInt64(reverseNodeUnion->CPPreversenode22->GetValue());
		return safe_cast<Value>(managedValue);
	case 23:
		managedValue = gcnew System::Single(reverseNodeUnion->CPPreversenode23->GetValue());
		return safe_cast<Value>(managedValue);
	case 24:
		managedValue = gcnew System::Double(reverseNodeUnion->CPPreversenode24->GetValue());
		return safe_cast<Value>(managedValue);
	case 25:
		managedValue = gcnew System::Char(reverseNodeUnion->CPPreversenode25->GetValue());
		return safe_cast<Value>(managedValue);
	case 26:
		managedValue = gcnew System::Boolean(reverseNodeUnion->CPPreversenode26->GetValue());
		return safe_cast<Value>(managedValue);
	case 27:
		managedValue = gcnew String(reverseNodeUnion->CPPreversenode27->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 29:
		managedValue = gcnew System::Byte(reverseNodeUnion->CPPreversenode29->GetValue());
		return safe_cast<Value>(managedValue);
	case 30:
		managedValue = gcnew System::SByte(reverseNodeUnion->CPPreversenode30->GetValue());
		return safe_cast<Value>(managedValue);
	case 31:
		managedValue = gcnew System::Int16(reverseNodeUnion->CPPreversenode31->GetValue());
		return safe_cast<Value>(managedValue);
	case 32:
		managedValue = gcnew System::UInt16(reverseNodeUnion->CPPreversenode32->GetValue());
		return safe_cast<Value>(managedValue);
	case 33:
		managedValue = gcnew System::Int32(reverseNodeUnion->CPPreversenode33->GetValue());
		return safe_cast<Value>(managedValue);
	case 34:
		managedValue = gcnew System::UInt32(reverseNodeUnion->CPPreversenode34->GetValue());
		return safe_cast<Value>(managedValue);
	case 35:
		managedValue = gcnew System::Int64(reverseNodeUnion->CPPreversenode35->GetValue());
		return safe_cast<Value>(managedValue);
	case 36:
		managedValue = gcnew System::UInt64(reverseNodeUnion->CPPreversenode36->GetValue());
		return safe_cast<Value>(managedValue);
	case 37:
		managedValue = gcnew System::Single(reverseNodeUnion->CPPreversenode37->GetValue());
		return safe_cast<Value>(managedValue);
	case 38:
		managedValue = gcnew System::Double(reverseNodeUnion->CPPreversenode38->GetValue());
		return safe_cast<Value>(managedValue);
	case 39:
		managedValue = gcnew System::Char(reverseNodeUnion->CPPreversenode39->GetValue());
		return safe_cast<Value>(managedValue);
	case 40:
		managedValue = gcnew System::Boolean(reverseNodeUnion->CPPreversenode40->GetValue());
		return safe_cast<Value>(managedValue);
	case 41:
		managedValue = gcnew String(reverseNodeUnion->CPPreversenode41->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 43:
		managedValue = gcnew System::Byte(reverseNodeUnion->CPPreversenode43->GetValue());
		return safe_cast<Value>(managedValue);
	case 44:
		managedValue = gcnew System::SByte(reverseNodeUnion->CPPreversenode44->GetValue());
		return safe_cast<Value>(managedValue);
	case 45:
		managedValue = gcnew System::Int16(reverseNodeUnion->CPPreversenode45->GetValue());
		return safe_cast<Value>(managedValue);
	case 46:
		managedValue = gcnew System::UInt16(reverseNodeUnion->CPPreversenode46->GetValue());
		return safe_cast<Value>(managedValue);
	case 47:
		managedValue = gcnew System::Int32(reverseNodeUnion->CPPreversenode47->GetValue());
		return safe_cast<Value>(managedValue);
	case 48:
		managedValue = gcnew System::UInt32(reverseNodeUnion->CPPreversenode48->GetValue());
		return safe_cast<Value>(managedValue);
	case 49:
		managedValue = gcnew System::Int64(reverseNodeUnion->CPPreversenode49->GetValue());
		return safe_cast<Value>(managedValue);
	case 50:
		managedValue = gcnew System::UInt64(reverseNodeUnion->CPPreversenode50->GetValue());
		return safe_cast<Value>(managedValue);
	case 51:
		managedValue = gcnew System::Single(reverseNodeUnion->CPPreversenode51->GetValue());
		return safe_cast<Value>(managedValue);
	case 52:
		managedValue = gcnew System::Double(reverseNodeUnion->CPPreversenode52->GetValue());
		return safe_cast<Value>(managedValue);
	case 53:
		managedValue = gcnew System::Char(reverseNodeUnion->CPPreversenode53->GetValue());
		return safe_cast<Value>(managedValue);
	case 54:
		managedValue = gcnew System::Boolean(reverseNodeUnion->CPPreversenode54->GetValue());
		return safe_cast<Value>(managedValue);
	case 55:
		managedValue = gcnew String(reverseNodeUnion->CPPreversenode55->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 57:
		managedValue = gcnew System::Byte(reverseNodeUnion->CPPreversenode57->GetValue());
		return safe_cast<Value>(managedValue);
	case 58:
		managedValue = gcnew System::SByte(reverseNodeUnion->CPPreversenode58->GetValue());
		return safe_cast<Value>(managedValue);
	case 59:
		managedValue = gcnew System::Int16(reverseNodeUnion->CPPreversenode59->GetValue());
		return safe_cast<Value>(managedValue);
	case 60:
		managedValue = gcnew System::UInt16(reverseNodeUnion->CPPreversenode60->GetValue());
		return safe_cast<Value>(managedValue);
	case 61:
		managedValue = gcnew System::Int32(reverseNodeUnion->CPPreversenode61->GetValue());
		return safe_cast<Value>(managedValue);
	case 62:
		managedValue = gcnew System::UInt32(reverseNodeUnion->CPPreversenode62->GetValue());
		return safe_cast<Value>(managedValue);
	case 63:
		managedValue = gcnew System::Int64(reverseNodeUnion->CPPreversenode63->GetValue());
		return safe_cast<Value>(managedValue);
	case 64:
		managedValue = gcnew System::UInt64(reverseNodeUnion->CPPreversenode64->GetValue());
		return safe_cast<Value>(managedValue);
	case 65:
		managedValue = gcnew System::Single(reverseNodeUnion->CPPreversenode65->GetValue());
		return safe_cast<Value>(managedValue);
	case 66:
		managedValue = gcnew System::Double(reverseNodeUnion->CPPreversenode66->GetValue());
		return safe_cast<Value>(managedValue);
	case 67:
		managedValue = gcnew System::Char(reverseNodeUnion->CPPreversenode67->GetValue());
		return safe_cast<Value>(managedValue);
	case 68:
		managedValue = gcnew System::Boolean(reverseNodeUnion->CPPreversenode68->GetValue());
		return safe_cast<Value>(managedValue);
	case 69:
		managedValue = gcnew String(reverseNodeUnion->CPPreversenode69->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 71:
		managedValue = gcnew System::Byte(reverseNodeUnion->CPPreversenode71->GetValue());
		return safe_cast<Value>(managedValue);
	case 72:
		managedValue = gcnew System::SByte(reverseNodeUnion->CPPreversenode72->GetValue());
		return safe_cast<Value>(managedValue);
	case 73:
		managedValue = gcnew System::Int16(reverseNodeUnion->CPPreversenode73->GetValue());
		return safe_cast<Value>(managedValue);
	case 74:
		managedValue = gcnew System::UInt16(reverseNodeUnion->CPPreversenode74->GetValue());
		return safe_cast<Value>(managedValue);
	case 75:
		managedValue = gcnew System::Int32(reverseNodeUnion->CPPreversenode75->GetValue());
		return safe_cast<Value>(managedValue);
	case 76:
		managedValue = gcnew System::UInt32(reverseNodeUnion->CPPreversenode76->GetValue());
		return safe_cast<Value>(managedValue);
	case 77:
		managedValue = gcnew System::Int64(reverseNodeUnion->CPPreversenode77->GetValue());
		return safe_cast<Value>(managedValue);
	case 78:
		managedValue = gcnew System::UInt64(reverseNodeUnion->CPPreversenode78->GetValue());
		return safe_cast<Value>(managedValue);
	case 79:
		managedValue = gcnew System::Single(reverseNodeUnion->CPPreversenode79->GetValue());
		return safe_cast<Value>(managedValue);
	case 80:
		managedValue = gcnew System::Double(reverseNodeUnion->CPPreversenode80->GetValue());
		return safe_cast<Value>(managedValue);
	case 81:
		managedValue = gcnew System::Char(reverseNodeUnion->CPPreversenode81->GetValue());
		return safe_cast<Value>(managedValue);
	case 82:
		managedValue = gcnew System::Boolean(reverseNodeUnion->CPPreversenode82->GetValue());
		return safe_cast<Value>(managedValue);
	case 83:
		managedValue = gcnew String(reverseNodeUnion->CPPreversenode83->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 85:
		managedValue = gcnew System::Byte(reverseNodeUnion->CPPreversenode85->GetValue());
		return safe_cast<Value>(managedValue);
	case 86:
		managedValue = gcnew System::SByte(reverseNodeUnion->CPPreversenode86->GetValue());
		return safe_cast<Value>(managedValue);
	case 87:
		managedValue = gcnew System::Int16(reverseNodeUnion->CPPreversenode87->GetValue());
		return safe_cast<Value>(managedValue);
	case 88:
		managedValue = gcnew System::UInt16(reverseNodeUnion->CPPreversenode88->GetValue());
		return safe_cast<Value>(managedValue);
	case 89:
		managedValue = gcnew System::Int32(reverseNodeUnion->CPPreversenode89->GetValue());
		return safe_cast<Value>(managedValue);
	case 90:
		managedValue = gcnew System::UInt32(reverseNodeUnion->CPPreversenode90->GetValue());
		return safe_cast<Value>(managedValue);
	case 91:
		managedValue = gcnew System::Int64(reverseNodeUnion->CPPreversenode91->GetValue());
		return safe_cast<Value>(managedValue);
	case 92:
		managedValue = gcnew System::UInt64(reverseNodeUnion->CPPreversenode92->GetValue());
		return safe_cast<Value>(managedValue);
	case 93:
		managedValue = gcnew System::Single(reverseNodeUnion->CPPreversenode93->GetValue());
		return safe_cast<Value>(managedValue);
	case 94:
		managedValue = gcnew System::Double(reverseNodeUnion->CPPreversenode94->GetValue());
		return safe_cast<Value>(managedValue);
	case 95:
		managedValue = gcnew System::Char(reverseNodeUnion->CPPreversenode95->GetValue());
		return safe_cast<Value>(managedValue);
	case 96:
		managedValue = gcnew System::Boolean(reverseNodeUnion->CPPreversenode96->GetValue());
		return safe_cast<Value>(managedValue);
	case 97:
		managedValue = gcnew String(reverseNodeUnion->CPPreversenode97->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 99:
		managedValue = gcnew System::Byte(reverseNodeUnion->CPPreversenode99->GetValue());
		return safe_cast<Value>(managedValue);
	case 100:
		managedValue = gcnew System::SByte(reverseNodeUnion->CPPreversenode100->GetValue());
		return safe_cast<Value>(managedValue);
	case 101:
		managedValue = gcnew System::Int16(reverseNodeUnion->CPPreversenode101->GetValue());
		return safe_cast<Value>(managedValue);
	case 102:
		managedValue = gcnew System::UInt16(reverseNodeUnion->CPPreversenode102->GetValue());
		return safe_cast<Value>(managedValue);
	case 103:
		managedValue = gcnew System::Int32(reverseNodeUnion->CPPreversenode103->GetValue());
		return safe_cast<Value>(managedValue);
	case 104:
		managedValue = gcnew System::UInt32(reverseNodeUnion->CPPreversenode104->GetValue());
		return safe_cast<Value>(managedValue);
	case 105:
		managedValue = gcnew System::Int64(reverseNodeUnion->CPPreversenode105->GetValue());
		return safe_cast<Value>(managedValue);
	case 106:
		managedValue = gcnew System::UInt64(reverseNodeUnion->CPPreversenode106->GetValue());
		return safe_cast<Value>(managedValue);
	case 107:
		managedValue = gcnew System::Single(reverseNodeUnion->CPPreversenode107->GetValue());
		return safe_cast<Value>(managedValue);
	case 108:
		managedValue = gcnew System::Double(reverseNodeUnion->CPPreversenode108->GetValue());
		return safe_cast<Value>(managedValue);
	case 109:
		managedValue = gcnew System::Char(reverseNodeUnion->CPPreversenode109->GetValue());
		return safe_cast<Value>(managedValue);
	case 110:
		managedValue = gcnew System::Boolean(reverseNodeUnion->CPPreversenode110->GetValue());
		return safe_cast<Value>(managedValue);
	case 111:
		managedValue = gcnew String(reverseNodeUnion->CPPreversenode111->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 113:
		managedValue = gcnew System::Byte(reverseNodeUnion->CPPreversenode113->GetValue());
		return safe_cast<Value>(managedValue);
	case 114:
		managedValue = gcnew System::SByte(reverseNodeUnion->CPPreversenode114->GetValue());
		return safe_cast<Value>(managedValue);
	case 115:
		managedValue = gcnew System::Int16(reverseNodeUnion->CPPreversenode115->GetValue());
		return safe_cast<Value>(managedValue);
	case 116:
		managedValue = gcnew System::UInt16(reverseNodeUnion->CPPreversenode116->GetValue());
		return safe_cast<Value>(managedValue);
	case 117:
		managedValue = gcnew System::Int32(reverseNodeUnion->CPPreversenode117->GetValue());
		return safe_cast<Value>(managedValue);
	case 118:
		managedValue = gcnew System::UInt32(reverseNodeUnion->CPPreversenode118->GetValue());
		return safe_cast<Value>(managedValue);
	case 119:
		managedValue = gcnew System::Int64(reverseNodeUnion->CPPreversenode119->GetValue());
		return safe_cast<Value>(managedValue);
	case 120:
		managedValue = gcnew System::UInt64(reverseNodeUnion->CPPreversenode120->GetValue());
		return safe_cast<Value>(managedValue);
	case 121:
		managedValue = gcnew System::Single(reverseNodeUnion->CPPreversenode121->GetValue());
		return safe_cast<Value>(managedValue);
	case 122:
		managedValue = gcnew System::Double(reverseNodeUnion->CPPreversenode122->GetValue());
		return safe_cast<Value>(managedValue);
	case 123:
		managedValue = gcnew System::Char(reverseNodeUnion->CPPreversenode123->GetValue());
		return safe_cast<Value>(managedValue);
	case 124:
		managedValue = gcnew System::Boolean(reverseNodeUnion->CPPreversenode124->GetValue());
		return safe_cast<Value>(managedValue);
	case 125:
		managedValue = gcnew String(reverseNodeUnion->CPPreversenode125->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 127:
		managedValue = gcnew System::Byte(reverseNodeUnion->CPPreversenode127->GetValue());
		return safe_cast<Value>(managedValue);
	case 128:
		managedValue = gcnew System::SByte(reverseNodeUnion->CPPreversenode128->GetValue());
		return safe_cast<Value>(managedValue);
	case 129:
		managedValue = gcnew System::Int16(reverseNodeUnion->CPPreversenode129->GetValue());
		return safe_cast<Value>(managedValue);
	case 130:
		managedValue = gcnew System::UInt16(reverseNodeUnion->CPPreversenode130->GetValue());
		return safe_cast<Value>(managedValue);
	case 131:
		managedValue = gcnew System::Int32(reverseNodeUnion->CPPreversenode131->GetValue());
		return safe_cast<Value>(managedValue);
	case 132:
		managedValue = gcnew System::UInt32(reverseNodeUnion->CPPreversenode132->GetValue());
		return safe_cast<Value>(managedValue);
	case 133:
		managedValue = gcnew System::Int64(reverseNodeUnion->CPPreversenode133->GetValue());
		return safe_cast<Value>(managedValue);
	case 134:
		managedValue = gcnew System::UInt64(reverseNodeUnion->CPPreversenode134->GetValue());
		return safe_cast<Value>(managedValue);
	case 135:
		managedValue = gcnew System::Single(reverseNodeUnion->CPPreversenode135->GetValue());
		return safe_cast<Value>(managedValue);
	case 136:
		managedValue = gcnew System::Double(reverseNodeUnion->CPPreversenode136->GetValue());
		return safe_cast<Value>(managedValue);
	case 137:
		managedValue = gcnew System::Char(reverseNodeUnion->CPPreversenode137->GetValue());
		return safe_cast<Value>(managedValue);
	case 138:
		managedValue = gcnew System::Boolean(reverseNodeUnion->CPPreversenode138->GetValue());
		return safe_cast<Value>(managedValue);
	case 139:
		managedValue = gcnew String(reverseNodeUnion->CPPreversenode139->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 141:
		managedValue = gcnew System::Byte(reverseNodeUnion->CPPreversenode141->GetValue());
		return safe_cast<Value>(managedValue);
	case 142:
		managedValue = gcnew System::SByte(reverseNodeUnion->CPPreversenode142->GetValue());
		return safe_cast<Value>(managedValue);
	case 143:
		managedValue = gcnew System::Int16(reverseNodeUnion->CPPreversenode143->GetValue());
		return safe_cast<Value>(managedValue);
	case 144:
		managedValue = gcnew System::UInt16(reverseNodeUnion->CPPreversenode144->GetValue());
		return safe_cast<Value>(managedValue);
	case 145:
		managedValue = gcnew System::Int32(reverseNodeUnion->CPPreversenode145->GetValue());
		return safe_cast<Value>(managedValue);
	case 146:
		managedValue = gcnew System::UInt32(reverseNodeUnion->CPPreversenode146->GetValue());
		return safe_cast<Value>(managedValue);
	case 147:
		managedValue = gcnew System::Int64(reverseNodeUnion->CPPreversenode147->GetValue());
		return safe_cast<Value>(managedValue);
	case 148:
		managedValue = gcnew System::UInt64(reverseNodeUnion->CPPreversenode148->GetValue());
		return safe_cast<Value>(managedValue);
	case 149:
		managedValue = gcnew System::Single(reverseNodeUnion->CPPreversenode149->GetValue());
		return safe_cast<Value>(managedValue);
	case 150:
		managedValue = gcnew System::Double(reverseNodeUnion->CPPreversenode150->GetValue());
		return safe_cast<Value>(managedValue);
	case 151:
		managedValue = gcnew System::Char(reverseNodeUnion->CPPreversenode151->GetValue());
		return safe_cast<Value>(managedValue);
	case 152:
		managedValue = gcnew System::Boolean(reverseNodeUnion->CPPreversenode152->GetValue());
		return safe_cast<Value>(managedValue);
	case 153:
		managedValue = gcnew String(reverseNodeUnion->CPPreversenode153->GetValue().c_str());
		return safe_cast<Value>(managedValue);

	case 155:
		managedValue = gcnew System::Byte(reverseNodeUnion->CPPreversenode155->GetValue());
		return safe_cast<Value>(managedValue);
	case 156:
		managedValue = gcnew System::SByte(reverseNodeUnion->CPPreversenode156->GetValue());
		return safe_cast<Value>(managedValue);
	case 157:
		managedValue = gcnew System::Int16(reverseNodeUnion->CPPreversenode157->GetValue());
		return safe_cast<Value>(managedValue);
	case 158:
		managedValue = gcnew System::UInt16(reverseNodeUnion->CPPreversenode158->GetValue());
		return safe_cast<Value>(managedValue);
	case 159:
		managedValue = gcnew System::Int32(reverseNodeUnion->CPPreversenode159->GetValue());
		return safe_cast<Value>(managedValue);
	case 160:
		managedValue = gcnew System::UInt32(reverseNodeUnion->CPPreversenode160->GetValue());
		return safe_cast<Value>(managedValue);
	case 161:
		managedValue = gcnew System::Int64(reverseNodeUnion->CPPreversenode161->GetValue());
		return safe_cast<Value>(managedValue);
	case 162:
		managedValue = gcnew System::UInt64(reverseNodeUnion->CPPreversenode162->GetValue());
		return safe_cast<Value>(managedValue);
	case 163:
		managedValue = gcnew System::Single(reverseNodeUnion->CPPreversenode163->GetValue());
		return safe_cast<Value>(managedValue);
	case 164:
		managedValue = gcnew System::Double(reverseNodeUnion->CPPreversenode164->GetValue());
		return safe_cast<Value>(managedValue);
	case 165:
		managedValue = gcnew System::Char(reverseNodeUnion->CPPreversenode165->GetValue());
		return safe_cast<Value>(managedValue);
	case 166:
		managedValue = gcnew System::Boolean(reverseNodeUnion->CPPreversenode166->GetValue());
		return safe_cast<Value>(managedValue);
	case 167:
		managedValue = gcnew String(reverseNodeUnion->CPPreversenode167->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 169:
		managedValue = gcnew System::Byte(reverseNodeUnion->CPPreversenode169->GetValue());
		return safe_cast<Value>(managedValue);
	case 170:
		managedValue = gcnew System::SByte(reverseNodeUnion->CPPreversenode170->GetValue());
		return safe_cast<Value>(managedValue);
	case 171:
		managedValue = gcnew System::Int16(reverseNodeUnion->CPPreversenode171->GetValue());
		return safe_cast<Value>(managedValue);
	case 172:
		managedValue = gcnew System::UInt16(reverseNodeUnion->CPPreversenode172->GetValue());
		return safe_cast<Value>(managedValue);
	case 173:
		managedValue = gcnew System::Int32(reverseNodeUnion->CPPreversenode173->GetValue());
		return safe_cast<Value>(managedValue);
	case 174:
		managedValue = gcnew System::UInt32(reverseNodeUnion->CPPreversenode174->GetValue());
		return safe_cast<Value>(managedValue);
	case 175:
		managedValue = gcnew System::Int64(reverseNodeUnion->CPPreversenode175->GetValue());
		return safe_cast<Value>(managedValue);
	case 176:
		managedValue = gcnew System::UInt64(reverseNodeUnion->CPPreversenode176->GetValue());
		return safe_cast<Value>(managedValue);
	case 177:
		managedValue = gcnew System::Single(reverseNodeUnion->CPPreversenode177->GetValue());
		return safe_cast<Value>(managedValue);
	case 178:
		managedValue = gcnew System::Double(reverseNodeUnion->CPPreversenode178->GetValue());
		return safe_cast<Value>(managedValue);
	case 179:
		managedValue = gcnew System::Char(reverseNodeUnion->CPPreversenode179->GetValue());
		return safe_cast<Value>(managedValue);
	case 180:
		managedValue = gcnew System::Boolean(reverseNodeUnion->CPPreversenode180->GetValue());
		return safe_cast<Value>(managedValue);
	case 181:
		managedValue = gcnew String(reverseNodeUnion->CPPreversenode181->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 183:
		managedValue = gcnew System::Byte(reverseNodeUnion->CPPreversenode183->GetValue());
		return safe_cast<Value>(managedValue);
	case 184:
		managedValue = gcnew System::SByte(reverseNodeUnion->CPPreversenode184->GetValue());
		return safe_cast<Value>(managedValue);
	case 185:
		managedValue = gcnew System::Int16(reverseNodeUnion->CPPreversenode185->GetValue());
		return safe_cast<Value>(managedValue);
	case 186:
		managedValue = gcnew System::UInt16(reverseNodeUnion->CPPreversenode186->GetValue());
		return safe_cast<Value>(managedValue);
	case 187:
		managedValue = gcnew System::Int32(reverseNodeUnion->CPPreversenode187->GetValue());
		return safe_cast<Value>(managedValue);
	case 188:
		managedValue = gcnew System::UInt32(reverseNodeUnion->CPPreversenode188->GetValue());
		return safe_cast<Value>(managedValue);
	case 189:
		managedValue = gcnew System::Int64(reverseNodeUnion->CPPreversenode189->GetValue());
		return safe_cast<Value>(managedValue);
	case 190:
		managedValue = gcnew System::UInt64(reverseNodeUnion->CPPreversenode190->GetValue());
		return safe_cast<Value>(managedValue);
	case 191:
		managedValue = gcnew System::Single(reverseNodeUnion->CPPreversenode191->GetValue());
		return safe_cast<Value>(managedValue);
	case 192:
		managedValue = gcnew System::Double(reverseNodeUnion->CPPreversenode192->GetValue());
		return safe_cast<Value>(managedValue);
	case 193:
		managedValue = gcnew System::Char(reverseNodeUnion->CPPreversenode193->GetValue());
		return safe_cast<Value>(managedValue);
	case 194:
		managedValue = gcnew System::Boolean(reverseNodeUnion->CPPreversenode194->GetValue());
		return safe_cast<Value>(managedValue);
	case 195:
		managedValue = gcnew String(reverseNodeUnion->CPPreversenode195->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 14:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode14->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 28:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode28->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 42:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode42->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 56:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode56->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 70:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode70->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 84:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode84->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 98:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode98->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 112:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode112->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 126:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode126->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 140:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode140->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 154:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode154->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 168:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode168->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 182:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode182->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 196:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode196->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	}
	return Value();
}

generic<typename Key, typename Value>
Key UnOrderedMultiMapWapper::CShorpUnOrderedReverseNode<Key, Value>::GetKey()
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
		managedKey = gcnew System::Byte(reverseNodeUnion->CPPreversenode1->GetKey());
		return safe_cast<Key>(managedKey);
	case 2:
		managedKey = gcnew System::Byte(reverseNodeUnion->CPPreversenode2->GetKey());
		return safe_cast<Key>(managedKey);
	case 3:
		managedKey = gcnew System::Byte(reverseNodeUnion->CPPreversenode3->GetKey());
		return safe_cast<Key>(managedKey);
	case 4:
		managedKey = gcnew System::Byte(reverseNodeUnion->CPPreversenode4->GetKey());
		return safe_cast<Key>(managedKey);
	case 5:
		managedKey = gcnew System::Byte(reverseNodeUnion->CPPreversenode5->GetKey());
		return safe_cast<Key>(managedKey);
	case 6:
		managedKey = gcnew System::Byte(reverseNodeUnion->CPPreversenode6->GetKey());
		return safe_cast<Key>(managedKey);
	case 7:
		managedKey = gcnew System::Byte(reverseNodeUnion->CPPreversenode7->GetKey());
		return safe_cast<Key>(managedKey);
	case 8:
		managedKey = gcnew System::Byte(reverseNodeUnion->CPPreversenode8->GetKey());
		return safe_cast<Key>(managedKey);
	case 9:
		managedKey = gcnew System::Byte(reverseNodeUnion->CPPreversenode9->GetKey());
		return safe_cast<Key>(managedKey);
	case 10:
		managedKey = gcnew System::Byte(reverseNodeUnion->CPPreversenode10->GetKey());
		return safe_cast<Key>(managedKey);
	case 11:
		managedKey = gcnew System::Byte(reverseNodeUnion->CPPreversenode11->GetKey());
		return safe_cast<Key>(managedKey);
	case 12:
		managedKey = gcnew System::Byte(reverseNodeUnion->CPPreversenode12->GetKey());
		return safe_cast<Key>(managedKey);
	case 13:
		managedKey = gcnew System::Byte(reverseNodeUnion->CPPreversenode13->GetKey());
		return safe_cast<Key>(managedKey);
	case 14:
		managedKey = gcnew System::Byte(reverseNodeUnion->CPPreversenode14->GetKey());
		return safe_cast<Key>(managedKey);
	case 15:
		managedKey = gcnew System::SByte(reverseNodeUnion->CPPreversenode15->GetKey());
		return safe_cast<Key>(managedKey);
	case 16:
		managedKey = gcnew System::SByte(reverseNodeUnion->CPPreversenode16->GetKey());
		return safe_cast<Key>(managedKey);
	case 17:
		managedKey = gcnew System::SByte(reverseNodeUnion->CPPreversenode17->GetKey());
		return safe_cast<Key>(managedKey);
	case 18:
		managedKey = gcnew System::SByte(reverseNodeUnion->CPPreversenode18->GetKey());
		return safe_cast<Key>(managedKey);
	case 19:
		managedKey = gcnew System::SByte(reverseNodeUnion->CPPreversenode19->GetKey());
		return safe_cast<Key>(managedKey);
	case 20:
		managedKey = gcnew System::SByte(reverseNodeUnion->CPPreversenode20->GetKey());
		return safe_cast<Key>(managedKey);
	case 21:
		managedKey = gcnew System::SByte(reverseNodeUnion->CPPreversenode21->GetKey());
		return safe_cast<Key>(managedKey);
	case 22:
		managedKey = gcnew System::SByte(reverseNodeUnion->CPPreversenode22->GetKey());
		return safe_cast<Key>(managedKey);
	case 23:
		managedKey = gcnew System::SByte(reverseNodeUnion->CPPreversenode23->GetKey());
		return safe_cast<Key>(managedKey);
	case 24:
		managedKey = gcnew System::SByte(reverseNodeUnion->CPPreversenode24->GetKey());
		return safe_cast<Key>(managedKey);
	case 25:
		managedKey = gcnew System::SByte(reverseNodeUnion->CPPreversenode25->GetKey());
		return safe_cast<Key>(managedKey);
	case 26:
		managedKey = gcnew System::SByte(reverseNodeUnion->CPPreversenode26->GetKey());
		return safe_cast<Key>(managedKey);
	case 27:
		managedKey = gcnew System::SByte(reverseNodeUnion->CPPreversenode27->GetKey());
		return safe_cast<Key>(managedKey);
	case 28:
		managedKey = gcnew System::SByte(reverseNodeUnion->CPPreversenode28->GetKey());
		return safe_cast<Key>(managedKey);
	case 29:
		managedKey = gcnew System::Int16(reverseNodeUnion->CPPreversenode29->GetKey());
		return safe_cast<Key>(managedKey);
	case 30:
		managedKey = gcnew System::Int16(reverseNodeUnion->CPPreversenode30->GetKey());
		return safe_cast<Key>(managedKey);
	case 31:
		managedKey = gcnew System::Int16(reverseNodeUnion->CPPreversenode31->GetKey());
		return safe_cast<Key>(managedKey);
	case 32:
		managedKey = gcnew System::Int16(reverseNodeUnion->CPPreversenode32->GetKey());
		return safe_cast<Key>(managedKey);
	case 33:
		managedKey = gcnew System::Int16(reverseNodeUnion->CPPreversenode33->GetKey());
		return safe_cast<Key>(managedKey);
	case 34:
		managedKey = gcnew System::Int16(reverseNodeUnion->CPPreversenode34->GetKey());
		return safe_cast<Key>(managedKey);
	case 35:
		managedKey = gcnew System::Int16(reverseNodeUnion->CPPreversenode35->GetKey());
		return safe_cast<Key>(managedKey);
	case 36:
		managedKey = gcnew System::Int16(reverseNodeUnion->CPPreversenode36->GetKey());
		return safe_cast<Key>(managedKey);
	case 37:
		managedKey = gcnew System::Int16(reverseNodeUnion->CPPreversenode37->GetKey());
		return safe_cast<Key>(managedKey);
	case 38:
		managedKey = gcnew System::Int16(reverseNodeUnion->CPPreversenode38->GetKey());
		return safe_cast<Key>(managedKey);
	case 39:
		managedKey = gcnew System::Int16(reverseNodeUnion->CPPreversenode39->GetKey());
		return safe_cast<Key>(managedKey);
	case 40:
		managedKey = gcnew System::Int16(reverseNodeUnion->CPPreversenode40->GetKey());
		return safe_cast<Key>(managedKey);
	case 41:
		managedKey = gcnew System::Int16(reverseNodeUnion->CPPreversenode41->GetKey());
		return safe_cast<Key>(managedKey);
	case 42:
		managedKey = gcnew System::Int16(reverseNodeUnion->CPPreversenode42->GetKey());
		return safe_cast<Key>(managedKey);
	case 43:
		managedKey = gcnew System::UInt16(reverseNodeUnion->CPPreversenode43->GetKey());
		return safe_cast<Key>(managedKey);
	case 44:
		managedKey = gcnew System::UInt16(reverseNodeUnion->CPPreversenode44->GetKey());
		return safe_cast<Key>(managedKey);
	case 45:
		managedKey = gcnew System::UInt16(reverseNodeUnion->CPPreversenode45->GetKey());
		return safe_cast<Key>(managedKey);
	case 46:
		managedKey = gcnew System::UInt16(reverseNodeUnion->CPPreversenode46->GetKey());
		return safe_cast<Key>(managedKey);
	case 47:
		managedKey = gcnew System::UInt16(reverseNodeUnion->CPPreversenode47->GetKey());
		return safe_cast<Key>(managedKey);
	case 48:
		managedKey = gcnew System::UInt16(reverseNodeUnion->CPPreversenode48->GetKey());
		return safe_cast<Key>(managedKey);
	case 49:
		managedKey = gcnew System::UInt16(reverseNodeUnion->CPPreversenode49->GetKey());
		return safe_cast<Key>(managedKey);
	case 50:
		managedKey = gcnew System::UInt16(reverseNodeUnion->CPPreversenode50->GetKey());
		return safe_cast<Key>(managedKey);
	case 51:
		managedKey = gcnew System::UInt16(reverseNodeUnion->CPPreversenode51->GetKey());
		return safe_cast<Key>(managedKey);
	case 52:
		managedKey = gcnew System::UInt16(reverseNodeUnion->CPPreversenode52->GetKey());
		return safe_cast<Key>(managedKey);
	case 53:
		managedKey = gcnew System::UInt16(reverseNodeUnion->CPPreversenode53->GetKey());
		return safe_cast<Key>(managedKey);
	case 54:
		managedKey = gcnew System::UInt16(reverseNodeUnion->CPPreversenode54->GetKey());
		return safe_cast<Key>(managedKey);
	case 55:
		managedKey = gcnew System::UInt16(reverseNodeUnion->CPPreversenode55->GetKey());
		return safe_cast<Key>(managedKey);
	case 56:
		managedKey = gcnew System::UInt16(reverseNodeUnion->CPPreversenode56->GetKey());
		return safe_cast<Key>(managedKey);
	case 57:
		managedKey = gcnew System::Int32(reverseNodeUnion->CPPreversenode57->GetKey());
		return safe_cast<Key>(managedKey);
	case 58:
		managedKey = gcnew System::Int32(reverseNodeUnion->CPPreversenode58->GetKey());
		return safe_cast<Key>(managedKey);
	case 59:
		managedKey = gcnew System::Int32(reverseNodeUnion->CPPreversenode59->GetKey());
		return safe_cast<Key>(managedKey);
	case 60:
		managedKey = gcnew System::Int32(reverseNodeUnion->CPPreversenode60->GetKey());
		return safe_cast<Key>(managedKey);
	case 61:
		managedKey = gcnew System::Int32(reverseNodeUnion->CPPreversenode61->GetKey());
		return safe_cast<Key>(managedKey);
	case 62:
		managedKey = gcnew System::Int32(reverseNodeUnion->CPPreversenode62->GetKey());
		return safe_cast<Key>(managedKey);
	case 63:
		managedKey = gcnew System::Int32(reverseNodeUnion->CPPreversenode63->GetKey());
		return safe_cast<Key>(managedKey);
	case 64:
		managedKey = gcnew System::Int32(reverseNodeUnion->CPPreversenode64->GetKey());
		return safe_cast<Key>(managedKey);
	case 65:
		managedKey = gcnew System::Int32(reverseNodeUnion->CPPreversenode65->GetKey());
		return safe_cast<Key>(managedKey);
	case 66:
		managedKey = gcnew System::Int32(reverseNodeUnion->CPPreversenode66->GetKey());
		return safe_cast<Key>(managedKey);
	case 67:
		managedKey = gcnew System::Int32(reverseNodeUnion->CPPreversenode67->GetKey());
		return safe_cast<Key>(managedKey);
	case 68:
		managedKey = gcnew System::Int32(reverseNodeUnion->CPPreversenode68->GetKey());
		return safe_cast<Key>(managedKey);
	case 69:
		managedKey = gcnew System::Int32(reverseNodeUnion->CPPreversenode69->GetKey());
		return safe_cast<Key>(managedKey);
	case 70:
		managedKey = gcnew System::Int32(reverseNodeUnion->CPPreversenode70->GetKey());
		return safe_cast<Key>(managedKey);
	case 71:
		managedKey = gcnew System::UInt32(reverseNodeUnion->CPPreversenode71->GetKey());
		return safe_cast<Key>(managedKey);
	case 72:
		managedKey = gcnew System::UInt32(reverseNodeUnion->CPPreversenode72->GetKey());
		return safe_cast<Key>(managedKey);
	case 73:
		managedKey = gcnew System::UInt32(reverseNodeUnion->CPPreversenode73->GetKey());
		return safe_cast<Key>(managedKey);
	case 74:
		managedKey = gcnew System::UInt32(reverseNodeUnion->CPPreversenode74->GetKey());
		return safe_cast<Key>(managedKey);
	case 75:
		managedKey = gcnew System::UInt32(reverseNodeUnion->CPPreversenode75->GetKey());
		return safe_cast<Key>(managedKey);
	case 76:
		managedKey = gcnew System::UInt32(reverseNodeUnion->CPPreversenode76->GetKey());
		return safe_cast<Key>(managedKey);
	case 77:
		managedKey = gcnew System::UInt32(reverseNodeUnion->CPPreversenode77->GetKey());
		return safe_cast<Key>(managedKey);
	case 78:
		managedKey = gcnew System::UInt32(reverseNodeUnion->CPPreversenode78->GetKey());
		return safe_cast<Key>(managedKey);
	case 79:
		managedKey = gcnew System::UInt32(reverseNodeUnion->CPPreversenode79->GetKey());
		return safe_cast<Key>(managedKey);
	case 80:
		managedKey = gcnew System::UInt32(reverseNodeUnion->CPPreversenode80->GetKey());
		return safe_cast<Key>(managedKey);
	case 81:
		managedKey = gcnew System::UInt32(reverseNodeUnion->CPPreversenode81->GetKey());
		return safe_cast<Key>(managedKey);
	case 82:
		managedKey = gcnew System::UInt32(reverseNodeUnion->CPPreversenode82->GetKey());
		return safe_cast<Key>(managedKey);
	case 83:
		managedKey = gcnew System::UInt32(reverseNodeUnion->CPPreversenode83->GetKey());
		return safe_cast<Key>(managedKey);
	case 84:
		managedKey = gcnew System::UInt32(reverseNodeUnion->CPPreversenode84->GetKey());
		return safe_cast<Key>(managedKey);
	case 85:
		managedKey = gcnew System::Int64(reverseNodeUnion->CPPreversenode85->GetKey());
		return safe_cast<Key>(managedKey);
	case 86:
		managedKey = gcnew System::Int64(reverseNodeUnion->CPPreversenode86->GetKey());
		return safe_cast<Key>(managedKey);
	case 87:
		managedKey = gcnew System::Int64(reverseNodeUnion->CPPreversenode87->GetKey());
		return safe_cast<Key>(managedKey);
	case 88:
		managedKey = gcnew System::Int64(reverseNodeUnion->CPPreversenode88->GetKey());
		return safe_cast<Key>(managedKey);
	case 89:
		managedKey = gcnew System::Int64(reverseNodeUnion->CPPreversenode89->GetKey());
		return safe_cast<Key>(managedKey);
	case 90:
		managedKey = gcnew System::Int64(reverseNodeUnion->CPPreversenode90->GetKey());
		return safe_cast<Key>(managedKey);
	case 91:
		managedKey = gcnew System::Int64(reverseNodeUnion->CPPreversenode91->GetKey());
		return safe_cast<Key>(managedKey);
	case 92:
		managedKey = gcnew System::Int64(reverseNodeUnion->CPPreversenode92->GetKey());
		return safe_cast<Key>(managedKey);
	case 93:
		managedKey = gcnew System::Int64(reverseNodeUnion->CPPreversenode93->GetKey());
		return safe_cast<Key>(managedKey);
	case 94:
		managedKey = gcnew System::Int64(reverseNodeUnion->CPPreversenode94->GetKey());
		return safe_cast<Key>(managedKey);
	case 95:
		managedKey = gcnew System::Int64(reverseNodeUnion->CPPreversenode95->GetKey());
		return safe_cast<Key>(managedKey);
	case 96:
		managedKey = gcnew System::Int64(reverseNodeUnion->CPPreversenode96->GetKey());
		return safe_cast<Key>(managedKey);
	case 97:
		managedKey = gcnew System::Int64(reverseNodeUnion->CPPreversenode97->GetKey());
		return safe_cast<Key>(managedKey);
	case 98:
		managedKey = gcnew System::Int64(reverseNodeUnion->CPPreversenode98->GetKey());
		return safe_cast<Key>(managedKey);
	case 99:
		managedKey = gcnew System::UInt64(reverseNodeUnion->CPPreversenode99->GetKey());
		return safe_cast<Key>(managedKey);
	case 100:
		managedKey = gcnew System::UInt64(reverseNodeUnion->CPPreversenode100->GetKey());
		return safe_cast<Key>(managedKey);
	case 101:
		managedKey = gcnew System::UInt64(reverseNodeUnion->CPPreversenode101->GetKey());
		return safe_cast<Key>(managedKey);
	case 102:
		managedKey = gcnew System::UInt64(reverseNodeUnion->CPPreversenode102->GetKey());
		return safe_cast<Key>(managedKey);
	case 103:
		managedKey = gcnew System::UInt64(reverseNodeUnion->CPPreversenode103->GetKey());
		return safe_cast<Key>(managedKey);
	case 104:
		managedKey = gcnew System::UInt64(reverseNodeUnion->CPPreversenode104->GetKey());
		return safe_cast<Key>(managedKey);
	case 105:
		managedKey = gcnew System::UInt64(reverseNodeUnion->CPPreversenode105->GetKey());
		return safe_cast<Key>(managedKey);
	case 106:
		managedKey = gcnew System::UInt64(reverseNodeUnion->CPPreversenode106->GetKey());
		return safe_cast<Key>(managedKey);
	case 107:
		managedKey = gcnew System::UInt64(reverseNodeUnion->CPPreversenode107->GetKey());
		return safe_cast<Key>(managedKey);
	case 108:
		managedKey = gcnew System::UInt64(reverseNodeUnion->CPPreversenode108->GetKey());
		return safe_cast<Key>(managedKey);
	case 109:
		managedKey = gcnew System::UInt64(reverseNodeUnion->CPPreversenode109->GetKey());
		return safe_cast<Key>(managedKey);
	case 110:
		managedKey = gcnew System::UInt64(reverseNodeUnion->CPPreversenode110->GetKey());
		return safe_cast<Key>(managedKey);
	case 111:
		managedKey = gcnew System::UInt64(reverseNodeUnion->CPPreversenode111->GetKey());
		return safe_cast<Key>(managedKey);
	case 112:
		managedKey = gcnew System::UInt64(reverseNodeUnion->CPPreversenode112->GetKey());
		return safe_cast<Key>(managedKey);
	case 113:
		managedKey = gcnew System::Single(reverseNodeUnion->CPPreversenode113->GetKey());
		return safe_cast<Key>(managedKey);
	case 114:
		managedKey = gcnew System::Single(reverseNodeUnion->CPPreversenode114->GetKey());
		return safe_cast<Key>(managedKey);
	case 115:
		managedKey = gcnew System::Single(reverseNodeUnion->CPPreversenode115->GetKey());
		return safe_cast<Key>(managedKey);
	case 116:
		managedKey = gcnew System::Single(reverseNodeUnion->CPPreversenode116->GetKey());
		return safe_cast<Key>(managedKey);
	case 117:
		managedKey = gcnew System::Single(reverseNodeUnion->CPPreversenode117->GetKey());
		return safe_cast<Key>(managedKey);
	case 118:
		managedKey = gcnew System::Single(reverseNodeUnion->CPPreversenode118->GetKey());
		return safe_cast<Key>(managedKey);
	case 119:
		managedKey = gcnew System::Single(reverseNodeUnion->CPPreversenode119->GetKey());
		return safe_cast<Key>(managedKey);
	case 120:
		managedKey = gcnew System::Single(reverseNodeUnion->CPPreversenode120->GetKey());
		return safe_cast<Key>(managedKey);
	case 121:
		managedKey = gcnew System::Single(reverseNodeUnion->CPPreversenode121->GetKey());
		return safe_cast<Key>(managedKey);
	case 122:
		managedKey = gcnew System::Single(reverseNodeUnion->CPPreversenode122->GetKey());
		return safe_cast<Key>(managedKey);
	case 123:
		managedKey = gcnew System::Single(reverseNodeUnion->CPPreversenode123->GetKey());
		return safe_cast<Key>(managedKey);
	case 124:
		managedKey = gcnew System::Single(reverseNodeUnion->CPPreversenode124->GetKey());
		return safe_cast<Key>(managedKey);
	case 125:
		managedKey = gcnew System::Single(reverseNodeUnion->CPPreversenode125->GetKey());
		return safe_cast<Key>(managedKey);
	case 126:
		managedKey = gcnew System::Single(reverseNodeUnion->CPPreversenode126->GetKey());
		return safe_cast<Key>(managedKey);
	case 127:
		managedKey = gcnew System::Double(reverseNodeUnion->CPPreversenode127->GetKey());
		return safe_cast<Key>(managedKey);
	case 128:
		managedKey = gcnew System::Double(reverseNodeUnion->CPPreversenode128->GetKey());
		return safe_cast<Key>(managedKey);
	case 129:
		managedKey = gcnew System::Double(reverseNodeUnion->CPPreversenode129->GetKey());
		return safe_cast<Key>(managedKey);
	case 130:
		managedKey = gcnew System::Double(reverseNodeUnion->CPPreversenode130->GetKey());
		return safe_cast<Key>(managedKey);
	case 131:
		managedKey = gcnew System::Double(reverseNodeUnion->CPPreversenode131->GetKey());
		return safe_cast<Key>(managedKey);
	case 132:
		managedKey = gcnew System::Double(reverseNodeUnion->CPPreversenode132->GetKey());
		return safe_cast<Key>(managedKey);
	case 133:
		managedKey = gcnew System::Double(reverseNodeUnion->CPPreversenode133->GetKey());
		return safe_cast<Key>(managedKey);
	case 134:
		managedKey = gcnew System::Double(reverseNodeUnion->CPPreversenode134->GetKey());
		return safe_cast<Key>(managedKey);
	case 135:
		managedKey = gcnew System::Double(reverseNodeUnion->CPPreversenode135->GetKey());
		return safe_cast<Key>(managedKey);
	case 136:
		managedKey = gcnew System::Double(reverseNodeUnion->CPPreversenode136->GetKey());
		return safe_cast<Key>(managedKey);
	case 137:
		managedKey = gcnew System::Double(reverseNodeUnion->CPPreversenode137->GetKey());
		return safe_cast<Key>(managedKey);
	case 138:
		managedKey = gcnew System::Double(reverseNodeUnion->CPPreversenode138->GetKey());
		return safe_cast<Key>(managedKey);
	case 139:
		managedKey = gcnew System::Double(reverseNodeUnion->CPPreversenode139->GetKey());
		return safe_cast<Key>(managedKey);
	case 140:
		managedKey = gcnew System::Double(reverseNodeUnion->CPPreversenode140->GetKey());
		return safe_cast<Key>(managedKey);
	case 141:
		managedKey = gcnew System::Char(reverseNodeUnion->CPPreversenode141->GetKey());
		return safe_cast<Key>(managedKey);
	case 142:
		managedKey = gcnew System::Char(reverseNodeUnion->CPPreversenode142->GetKey());
		return safe_cast<Key>(managedKey);
	case 143:
		managedKey = gcnew System::Char(reverseNodeUnion->CPPreversenode143->GetKey());
		return safe_cast<Key>(managedKey);
	case 144:
		managedKey = gcnew System::Char(reverseNodeUnion->CPPreversenode144->GetKey());
		return safe_cast<Key>(managedKey);
	case 145:
		managedKey = gcnew System::Char(reverseNodeUnion->CPPreversenode145->GetKey());
		return safe_cast<Key>(managedKey);
	case 146:
		managedKey = gcnew System::Char(reverseNodeUnion->CPPreversenode146->GetKey());
		return safe_cast<Key>(managedKey);
	case 147:
		managedKey = gcnew System::Char(reverseNodeUnion->CPPreversenode147->GetKey());
		return safe_cast<Key>(managedKey);
	case 148:
		managedKey = gcnew System::Char(reverseNodeUnion->CPPreversenode148->GetKey());
		return safe_cast<Key>(managedKey);
	case 149:
		managedKey = gcnew System::Char(reverseNodeUnion->CPPreversenode149->GetKey());
		return safe_cast<Key>(managedKey);
	case 150:
		managedKey = gcnew System::Char(reverseNodeUnion->CPPreversenode150->GetKey());
		return safe_cast<Key>(managedKey);
	case 151:
		managedKey = gcnew System::Char(reverseNodeUnion->CPPreversenode151->GetKey());
		return safe_cast<Key>(managedKey);
	case 152:
		managedKey = gcnew System::Char(reverseNodeUnion->CPPreversenode152->GetKey());
		return safe_cast<Key>(managedKey);
	case 153:
		managedKey = gcnew System::Char(reverseNodeUnion->CPPreversenode153->GetKey());
		return safe_cast<Key>(managedKey);
	case 154:
		managedKey = gcnew System::Char(reverseNodeUnion->CPPreversenode154->GetKey());
		return safe_cast<Key>(managedKey);
	case 155:
		managedKey = gcnew System::Boolean(reverseNodeUnion->CPPreversenode155->GetKey());
		return safe_cast<Key>(managedKey);
	case 156:
		managedKey = gcnew System::Boolean(reverseNodeUnion->CPPreversenode156->GetKey());
		return safe_cast<Key>(managedKey);
	case 157:
		managedKey = gcnew System::Boolean(reverseNodeUnion->CPPreversenode157->GetKey());
		return safe_cast<Key>(managedKey);
	case 158:
		managedKey = gcnew System::Boolean(reverseNodeUnion->CPPreversenode158->GetKey());
		return safe_cast<Key>(managedKey);
	case 159:
		managedKey = gcnew System::Boolean(reverseNodeUnion->CPPreversenode159->GetKey());
		return safe_cast<Key>(managedKey);
	case 160:
		managedKey = gcnew System::Boolean(reverseNodeUnion->CPPreversenode160->GetKey());
		return safe_cast<Key>(managedKey);
	case 161:
		managedKey = gcnew System::Boolean(reverseNodeUnion->CPPreversenode161->GetKey());
		return safe_cast<Key>(managedKey);
	case 162:
		managedKey = gcnew System::Boolean(reverseNodeUnion->CPPreversenode162->GetKey());
		return safe_cast<Key>(managedKey);
	case 163:
		managedKey = gcnew System::Boolean(reverseNodeUnion->CPPreversenode163->GetKey());
		return safe_cast<Key>(managedKey);
	case 164:
		managedKey = gcnew System::Boolean(reverseNodeUnion->CPPreversenode164->GetKey());
		return safe_cast<Key>(managedKey);
	case 165:
		managedKey = gcnew System::Boolean(reverseNodeUnion->CPPreversenode165->GetKey());
		return safe_cast<Key>(managedKey);
	case 166:
		managedKey = gcnew System::Boolean(reverseNodeUnion->CPPreversenode166->GetKey());
		return safe_cast<Key>(managedKey);
	case 167:
		managedKey = gcnew System::Boolean(reverseNodeUnion->CPPreversenode167->GetKey());
		return safe_cast<Key>(managedKey);
	case 168:
		managedKey = gcnew System::Boolean(reverseNodeUnion->CPPreversenode168->GetKey());
		return safe_cast<Key>(managedKey);
	case 169:
		managedKey = gcnew String(reverseNodeUnion->CPPreversenode169->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 170:
		managedKey = gcnew String(reverseNodeUnion->CPPreversenode170->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 171:
		managedKey = gcnew String(reverseNodeUnion->CPPreversenode171->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 172:
		managedKey = gcnew String(reverseNodeUnion->CPPreversenode172->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 173:
		managedKey = gcnew String(reverseNodeUnion->CPPreversenode173->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 174:
		managedKey = gcnew String(reverseNodeUnion->CPPreversenode174->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 175:
		managedKey = gcnew String(reverseNodeUnion->CPPreversenode175->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 176:
		managedKey = gcnew String(reverseNodeUnion->CPPreversenode176->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 177:
		managedKey = gcnew String(reverseNodeUnion->CPPreversenode177->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 178:
		managedKey = gcnew String(reverseNodeUnion->CPPreversenode178->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 179:
		managedKey = gcnew String(reverseNodeUnion->CPPreversenode179->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 180:
		managedKey = gcnew String(reverseNodeUnion->CPPreversenode180->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 181:
		managedKey = gcnew String(reverseNodeUnion->CPPreversenode181->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 182:
		managedKey = gcnew String(reverseNodeUnion->CPPreversenode182->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 183:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode183->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 184:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode184->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 185:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode185->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 186:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode186->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 187:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode187->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 188:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode188->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 189:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode189->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 190:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode190->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 191:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode191->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 192:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode192->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 193:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode193->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 194:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode194->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 195:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode195->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 196:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode196->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	}
	return Key();
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedReverseNode<Key, Value>^ UnOrderedMultiMapWapper::CShorpUnOrderedReverseNode<Key, Value>::DeepCopy()
{
	CShorpUnOrderedReverseNode<Key, Value>^ newCopy = gcnew CShorpUnOrderedReverseNode<Key, Value>();
	newCopy->nKeyValueType = this->nKeyValueType;
	newCopy->isInitialized = this->isInitialized;
	newCopy %= this;
	return newCopy;
}

generic<typename Key, typename Value>
bool UnOrderedMultiMapWapper::CShorpUnOrderedReverseNode<Key, Value>::operator==(const CShorpUnOrderedReverseNode<Key, Value>^ thisObj, const CShorpUnOrderedReverseNode<Key, Value>^ other)
{
	if (Object::ReferenceEquals(const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedReverseNode<Key, Value>^>(thisObj), nullptr)) return false;
	if (Object::ReferenceEquals(const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedReverseNode<Key, Value>^>(other), nullptr)) return false;
	if (Object::ReferenceEquals(const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedReverseNode<Key, Value>^>(thisObj), const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedReverseNode<Key, Value>^>(other))) return true;
	if (thisObj->isInitialized == 0 || other->isInitialized == 0) return false;

	if (thisObj->nKeyValueType != other->nKeyValueType) return false;
	switch (thisObj->nKeyValueType)
	{
	case 0: default:
		return false;
	case 1:
		return (*(thisObj->reverseNodeUnion->CPPreversenode1) == *(other->reverseNodeUnion->CPPreversenode1));
	case 2:
		return (*(thisObj->reverseNodeUnion->CPPreversenode2) == *(other->reverseNodeUnion->CPPreversenode2));
	case 3:
		return (*(thisObj->reverseNodeUnion->CPPreversenode3) == *(other->reverseNodeUnion->CPPreversenode3));
	case 4:
		return (*(thisObj->reverseNodeUnion->CPPreversenode4) == *(other->reverseNodeUnion->CPPreversenode4));
	case 5:
		return (*(thisObj->reverseNodeUnion->CPPreversenode5) == *(other->reverseNodeUnion->CPPreversenode5));
	case 6:
		return (*(thisObj->reverseNodeUnion->CPPreversenode6) == *(other->reverseNodeUnion->CPPreversenode6));
	case 7:
		return (*(thisObj->reverseNodeUnion->CPPreversenode7) == *(other->reverseNodeUnion->CPPreversenode7));
	case 8:
		return (*(thisObj->reverseNodeUnion->CPPreversenode8) == *(other->reverseNodeUnion->CPPreversenode8));
	case 9:
		return (*(thisObj->reverseNodeUnion->CPPreversenode9) == *(other->reverseNodeUnion->CPPreversenode9));
	case 10:
		return (*(thisObj->reverseNodeUnion->CPPreversenode10) == *(other->reverseNodeUnion->CPPreversenode10));
	case 11:
		return (*(thisObj->reverseNodeUnion->CPPreversenode11) == *(other->reverseNodeUnion->CPPreversenode11));
	case 12:
		return (*(thisObj->reverseNodeUnion->CPPreversenode12) == *(other->reverseNodeUnion->CPPreversenode12));
	case 13:
		return (*(thisObj->reverseNodeUnion->CPPreversenode13) == *(other->reverseNodeUnion->CPPreversenode13));
	case 14:
		return (*(thisObj->reverseNodeUnion->CPPreversenode14) == *(other->reverseNodeUnion->CPPreversenode14));
	case 15:
		return (*(thisObj->reverseNodeUnion->CPPreversenode15) == *(other->reverseNodeUnion->CPPreversenode15));
	case 16:
		return (*(thisObj->reverseNodeUnion->CPPreversenode16) == *(other->reverseNodeUnion->CPPreversenode16));
	case 17:
		return (*(thisObj->reverseNodeUnion->CPPreversenode17) == *(other->reverseNodeUnion->CPPreversenode17));
	case 18:
		return (*(thisObj->reverseNodeUnion->CPPreversenode18) == *(other->reverseNodeUnion->CPPreversenode18));
	case 19:
		return (*(thisObj->reverseNodeUnion->CPPreversenode19) == *(other->reverseNodeUnion->CPPreversenode19));
	case 20:
		return (*(thisObj->reverseNodeUnion->CPPreversenode20) == *(other->reverseNodeUnion->CPPreversenode20));
	case 21:
		return (*(thisObj->reverseNodeUnion->CPPreversenode21) == *(other->reverseNodeUnion->CPPreversenode21));
	case 22:
		return (*(thisObj->reverseNodeUnion->CPPreversenode22) == *(other->reverseNodeUnion->CPPreversenode22));
	case 23:
		return (*(thisObj->reverseNodeUnion->CPPreversenode23) == *(other->reverseNodeUnion->CPPreversenode23));
	case 24:
		return (*(thisObj->reverseNodeUnion->CPPreversenode24) == *(other->reverseNodeUnion->CPPreversenode24));
	case 25:
		return (*(thisObj->reverseNodeUnion->CPPreversenode25) == *(other->reverseNodeUnion->CPPreversenode25));
	case 26:
		return (*(thisObj->reverseNodeUnion->CPPreversenode26) == *(other->reverseNodeUnion->CPPreversenode26));
	case 27:
		return (*(thisObj->reverseNodeUnion->CPPreversenode27) == *(other->reverseNodeUnion->CPPreversenode27));
	case 28:
		return (*(thisObj->reverseNodeUnion->CPPreversenode28) == *(other->reverseNodeUnion->CPPreversenode28));
	case 29:
		return (*(thisObj->reverseNodeUnion->CPPreversenode29) == *(other->reverseNodeUnion->CPPreversenode29));
	case 30:
		return (*(thisObj->reverseNodeUnion->CPPreversenode30) == *(other->reverseNodeUnion->CPPreversenode30));
	case 31:
		return (*(thisObj->reverseNodeUnion->CPPreversenode31) == *(other->reverseNodeUnion->CPPreversenode31));
	case 32:
		return (*(thisObj->reverseNodeUnion->CPPreversenode32) == *(other->reverseNodeUnion->CPPreversenode32));
	case 33:
		return (*(thisObj->reverseNodeUnion->CPPreversenode33) == *(other->reverseNodeUnion->CPPreversenode33));
	case 34:
		return (*(thisObj->reverseNodeUnion->CPPreversenode34) == *(other->reverseNodeUnion->CPPreversenode34));
	case 35:
		return (*(thisObj->reverseNodeUnion->CPPreversenode35) == *(other->reverseNodeUnion->CPPreversenode35));
	case 36:
		return (*(thisObj->reverseNodeUnion->CPPreversenode36) == *(other->reverseNodeUnion->CPPreversenode36));
	case 37:
		return (*(thisObj->reverseNodeUnion->CPPreversenode37) == *(other->reverseNodeUnion->CPPreversenode37));
	case 38:
		return (*(thisObj->reverseNodeUnion->CPPreversenode38) == *(other->reverseNodeUnion->CPPreversenode38));
	case 39:
		return (*(thisObj->reverseNodeUnion->CPPreversenode39) == *(other->reverseNodeUnion->CPPreversenode39));
	case 40:
		return (*(thisObj->reverseNodeUnion->CPPreversenode40) == *(other->reverseNodeUnion->CPPreversenode40));
	case 41:
		return (*(thisObj->reverseNodeUnion->CPPreversenode41) == *(other->reverseNodeUnion->CPPreversenode41));
	case 42:
		return (*(thisObj->reverseNodeUnion->CPPreversenode42) == *(other->reverseNodeUnion->CPPreversenode42));
	case 43:
		return (*(thisObj->reverseNodeUnion->CPPreversenode43) == *(other->reverseNodeUnion->CPPreversenode43));
	case 44:
		return (*(thisObj->reverseNodeUnion->CPPreversenode44) == *(other->reverseNodeUnion->CPPreversenode44));
	case 45:
		return (*(thisObj->reverseNodeUnion->CPPreversenode45) == *(other->reverseNodeUnion->CPPreversenode45));
	case 46:
		return (*(thisObj->reverseNodeUnion->CPPreversenode46) == *(other->reverseNodeUnion->CPPreversenode46));
	case 47:
		return (*(thisObj->reverseNodeUnion->CPPreversenode47) == *(other->reverseNodeUnion->CPPreversenode47));
	case 48:
		return (*(thisObj->reverseNodeUnion->CPPreversenode48) == *(other->reverseNodeUnion->CPPreversenode48));
	case 49:
		return (*(thisObj->reverseNodeUnion->CPPreversenode49) == *(other->reverseNodeUnion->CPPreversenode49));
	case 50:
		return (*(thisObj->reverseNodeUnion->CPPreversenode50) == *(other->reverseNodeUnion->CPPreversenode50));
	case 51:
		return (*(thisObj->reverseNodeUnion->CPPreversenode51) == *(other->reverseNodeUnion->CPPreversenode51));
	case 52:
		return (*(thisObj->reverseNodeUnion->CPPreversenode52) == *(other->reverseNodeUnion->CPPreversenode52));
	case 53:
		return (*(thisObj->reverseNodeUnion->CPPreversenode53) == *(other->reverseNodeUnion->CPPreversenode53));
	case 54:
		return (*(thisObj->reverseNodeUnion->CPPreversenode54) == *(other->reverseNodeUnion->CPPreversenode54));
	case 55:
		return (*(thisObj->reverseNodeUnion->CPPreversenode55) == *(other->reverseNodeUnion->CPPreversenode55));
	case 56:
		return (*(thisObj->reverseNodeUnion->CPPreversenode56) == *(other->reverseNodeUnion->CPPreversenode56));
	case 57:
		return (*(thisObj->reverseNodeUnion->CPPreversenode57) == *(other->reverseNodeUnion->CPPreversenode57));
	case 58:
		return (*(thisObj->reverseNodeUnion->CPPreversenode58) == *(other->reverseNodeUnion->CPPreversenode58));
	case 59:
		return (*(thisObj->reverseNodeUnion->CPPreversenode59) == *(other->reverseNodeUnion->CPPreversenode59));
	case 60:
		return (*(thisObj->reverseNodeUnion->CPPreversenode60) == *(other->reverseNodeUnion->CPPreversenode60));
	case 61:
		return (*(thisObj->reverseNodeUnion->CPPreversenode61) == *(other->reverseNodeUnion->CPPreversenode61));
	case 62:
		return (*(thisObj->reverseNodeUnion->CPPreversenode62) == *(other->reverseNodeUnion->CPPreversenode62));
	case 63:
		return (*(thisObj->reverseNodeUnion->CPPreversenode63) == *(other->reverseNodeUnion->CPPreversenode63));
	case 64:
		return (*(thisObj->reverseNodeUnion->CPPreversenode64) == *(other->reverseNodeUnion->CPPreversenode64));
	case 65:
		return (*(thisObj->reverseNodeUnion->CPPreversenode65) == *(other->reverseNodeUnion->CPPreversenode65));
	case 66:
		return (*(thisObj->reverseNodeUnion->CPPreversenode66) == *(other->reverseNodeUnion->CPPreversenode66));
	case 67:
		return (*(thisObj->reverseNodeUnion->CPPreversenode67) == *(other->reverseNodeUnion->CPPreversenode67));
	case 68:
		return (*(thisObj->reverseNodeUnion->CPPreversenode68) == *(other->reverseNodeUnion->CPPreversenode68));
	case 69:
		return (*(thisObj->reverseNodeUnion->CPPreversenode69) == *(other->reverseNodeUnion->CPPreversenode69));
	case 70:
		return (*(thisObj->reverseNodeUnion->CPPreversenode70) == *(other->reverseNodeUnion->CPPreversenode70));
	case 71:
		return (*(thisObj->reverseNodeUnion->CPPreversenode71) == *(other->reverseNodeUnion->CPPreversenode71));
	case 72:
		return (*(thisObj->reverseNodeUnion->CPPreversenode72) == *(other->reverseNodeUnion->CPPreversenode72));
	case 73:
		return (*(thisObj->reverseNodeUnion->CPPreversenode73) == *(other->reverseNodeUnion->CPPreversenode73));
	case 74:
		return (*(thisObj->reverseNodeUnion->CPPreversenode74) == *(other->reverseNodeUnion->CPPreversenode74));
	case 75:
		return (*(thisObj->reverseNodeUnion->CPPreversenode75) == *(other->reverseNodeUnion->CPPreversenode75));
	case 76:
		return (*(thisObj->reverseNodeUnion->CPPreversenode76) == *(other->reverseNodeUnion->CPPreversenode76));
	case 77:
		return (*(thisObj->reverseNodeUnion->CPPreversenode77) == *(other->reverseNodeUnion->CPPreversenode77));
	case 78:
		return (*(thisObj->reverseNodeUnion->CPPreversenode78) == *(other->reverseNodeUnion->CPPreversenode78));
	case 79:
		return (*(thisObj->reverseNodeUnion->CPPreversenode79) == *(other->reverseNodeUnion->CPPreversenode79));
	case 80:
		return (*(thisObj->reverseNodeUnion->CPPreversenode80) == *(other->reverseNodeUnion->CPPreversenode80));
	case 81:
		return (*(thisObj->reverseNodeUnion->CPPreversenode81) == *(other->reverseNodeUnion->CPPreversenode81));
	case 82:
		return (*(thisObj->reverseNodeUnion->CPPreversenode82) == *(other->reverseNodeUnion->CPPreversenode82));
	case 83:
		return (*(thisObj->reverseNodeUnion->CPPreversenode83) == *(other->reverseNodeUnion->CPPreversenode83));
	case 84:
		return (*(thisObj->reverseNodeUnion->CPPreversenode84) == *(other->reverseNodeUnion->CPPreversenode84));
	case 85:
		return (*(thisObj->reverseNodeUnion->CPPreversenode85) == *(other->reverseNodeUnion->CPPreversenode85));
	case 86:
		return (*(thisObj->reverseNodeUnion->CPPreversenode86) == *(other->reverseNodeUnion->CPPreversenode86));
	case 87:
		return (*(thisObj->reverseNodeUnion->CPPreversenode87) == *(other->reverseNodeUnion->CPPreversenode87));
	case 88:
		return (*(thisObj->reverseNodeUnion->CPPreversenode88) == *(other->reverseNodeUnion->CPPreversenode88));
	case 89:
		return (*(thisObj->reverseNodeUnion->CPPreversenode89) == *(other->reverseNodeUnion->CPPreversenode89));
	case 90:
		return (*(thisObj->reverseNodeUnion->CPPreversenode90) == *(other->reverseNodeUnion->CPPreversenode90));
	case 91:
		return (*(thisObj->reverseNodeUnion->CPPreversenode91) == *(other->reverseNodeUnion->CPPreversenode91));
	case 92:
		return (*(thisObj->reverseNodeUnion->CPPreversenode92) == *(other->reverseNodeUnion->CPPreversenode92));
	case 93:
		return (*(thisObj->reverseNodeUnion->CPPreversenode93) == *(other->reverseNodeUnion->CPPreversenode93));
	case 94:
		return (*(thisObj->reverseNodeUnion->CPPreversenode94) == *(other->reverseNodeUnion->CPPreversenode94));
	case 95:
		return (*(thisObj->reverseNodeUnion->CPPreversenode95) == *(other->reverseNodeUnion->CPPreversenode95));
	case 96:
		return (*(thisObj->reverseNodeUnion->CPPreversenode96) == *(other->reverseNodeUnion->CPPreversenode96));
	case 97:
		return (*(thisObj->reverseNodeUnion->CPPreversenode97) == *(other->reverseNodeUnion->CPPreversenode97));
	case 98:
		return (*(thisObj->reverseNodeUnion->CPPreversenode98) == *(other->reverseNodeUnion->CPPreversenode98));
	case 99:
		return (*(thisObj->reverseNodeUnion->CPPreversenode99) == *(other->reverseNodeUnion->CPPreversenode99));
	case 100:
		return (*(thisObj->reverseNodeUnion->CPPreversenode100) == *(other->reverseNodeUnion->CPPreversenode100));
	case 101:
		return (*(thisObj->reverseNodeUnion->CPPreversenode101) == *(other->reverseNodeUnion->CPPreversenode101));
	case 102:
		return (*(thisObj->reverseNodeUnion->CPPreversenode102) == *(other->reverseNodeUnion->CPPreversenode102));
	case 103:
		return (*(thisObj->reverseNodeUnion->CPPreversenode103) == *(other->reverseNodeUnion->CPPreversenode103));
	case 104:
		return (*(thisObj->reverseNodeUnion->CPPreversenode104) == *(other->reverseNodeUnion->CPPreversenode104));
	case 105:
		return (*(thisObj->reverseNodeUnion->CPPreversenode105) == *(other->reverseNodeUnion->CPPreversenode105));
	case 106:
		return (*(thisObj->reverseNodeUnion->CPPreversenode106) == *(other->reverseNodeUnion->CPPreversenode106));
	case 107:
		return (*(thisObj->reverseNodeUnion->CPPreversenode107) == *(other->reverseNodeUnion->CPPreversenode107));
	case 108:
		return (*(thisObj->reverseNodeUnion->CPPreversenode108) == *(other->reverseNodeUnion->CPPreversenode108));
	case 109:
		return (*(thisObj->reverseNodeUnion->CPPreversenode109) == *(other->reverseNodeUnion->CPPreversenode109));
	case 110:
		return (*(thisObj->reverseNodeUnion->CPPreversenode110) == *(other->reverseNodeUnion->CPPreversenode110));
	case 111:
		return (*(thisObj->reverseNodeUnion->CPPreversenode111) == *(other->reverseNodeUnion->CPPreversenode111));
	case 112:
		return (*(thisObj->reverseNodeUnion->CPPreversenode112) == *(other->reverseNodeUnion->CPPreversenode112));
	case 113:
		return (*(thisObj->reverseNodeUnion->CPPreversenode113) == *(other->reverseNodeUnion->CPPreversenode113));
	case 114:
		return (*(thisObj->reverseNodeUnion->CPPreversenode114) == *(other->reverseNodeUnion->CPPreversenode114));
	case 115:
		return (*(thisObj->reverseNodeUnion->CPPreversenode115) == *(other->reverseNodeUnion->CPPreversenode115));
	case 116:
		return (*(thisObj->reverseNodeUnion->CPPreversenode116) == *(other->reverseNodeUnion->CPPreversenode116));
	case 117:
		return (*(thisObj->reverseNodeUnion->CPPreversenode117) == *(other->reverseNodeUnion->CPPreversenode117));
	case 118:
		return (*(thisObj->reverseNodeUnion->CPPreversenode118) == *(other->reverseNodeUnion->CPPreversenode118));
	case 119:
		return (*(thisObj->reverseNodeUnion->CPPreversenode119) == *(other->reverseNodeUnion->CPPreversenode119));
	case 120:
		return (*(thisObj->reverseNodeUnion->CPPreversenode120) == *(other->reverseNodeUnion->CPPreversenode120));
	case 121:
		return (*(thisObj->reverseNodeUnion->CPPreversenode121) == *(other->reverseNodeUnion->CPPreversenode121));
	case 122:
		return (*(thisObj->reverseNodeUnion->CPPreversenode122) == *(other->reverseNodeUnion->CPPreversenode122));
	case 123:
		return (*(thisObj->reverseNodeUnion->CPPreversenode123) == *(other->reverseNodeUnion->CPPreversenode123));
	case 124:
		return (*(thisObj->reverseNodeUnion->CPPreversenode124) == *(other->reverseNodeUnion->CPPreversenode124));
	case 125:
		return (*(thisObj->reverseNodeUnion->CPPreversenode125) == *(other->reverseNodeUnion->CPPreversenode125));
	case 126:
		return (*(thisObj->reverseNodeUnion->CPPreversenode126) == *(other->reverseNodeUnion->CPPreversenode126));
	case 127:
		return (*(thisObj->reverseNodeUnion->CPPreversenode127) == *(other->reverseNodeUnion->CPPreversenode127));
	case 128:
		return (*(thisObj->reverseNodeUnion->CPPreversenode128) == *(other->reverseNodeUnion->CPPreversenode128));
	case 129:
		return (*(thisObj->reverseNodeUnion->CPPreversenode129) == *(other->reverseNodeUnion->CPPreversenode129));
	case 130:
		return (*(thisObj->reverseNodeUnion->CPPreversenode130) == *(other->reverseNodeUnion->CPPreversenode130));
	case 131:
		return (*(thisObj->reverseNodeUnion->CPPreversenode131) == *(other->reverseNodeUnion->CPPreversenode131));
	case 132:
		return (*(thisObj->reverseNodeUnion->CPPreversenode132) == *(other->reverseNodeUnion->CPPreversenode132));
	case 133:
		return (*(thisObj->reverseNodeUnion->CPPreversenode133) == *(other->reverseNodeUnion->CPPreversenode133));
	case 134:
		return (*(thisObj->reverseNodeUnion->CPPreversenode134) == *(other->reverseNodeUnion->CPPreversenode134));
	case 135:
		return (*(thisObj->reverseNodeUnion->CPPreversenode135) == *(other->reverseNodeUnion->CPPreversenode135));
	case 136:
		return (*(thisObj->reverseNodeUnion->CPPreversenode136) == *(other->reverseNodeUnion->CPPreversenode136));
	case 137:
		return (*(thisObj->reverseNodeUnion->CPPreversenode137) == *(other->reverseNodeUnion->CPPreversenode137));
	case 138:
		return (*(thisObj->reverseNodeUnion->CPPreversenode138) == *(other->reverseNodeUnion->CPPreversenode138));
	case 139:
		return (*(thisObj->reverseNodeUnion->CPPreversenode139) == *(other->reverseNodeUnion->CPPreversenode139));
	case 140:
		return (*(thisObj->reverseNodeUnion->CPPreversenode140) == *(other->reverseNodeUnion->CPPreversenode140));
	case 141:
		return (*(thisObj->reverseNodeUnion->CPPreversenode141) == *(other->reverseNodeUnion->CPPreversenode141));
	case 142:
		return (*(thisObj->reverseNodeUnion->CPPreversenode142) == *(other->reverseNodeUnion->CPPreversenode142));
	case 143:
		return (*(thisObj->reverseNodeUnion->CPPreversenode143) == *(other->reverseNodeUnion->CPPreversenode143));
	case 144:
		return (*(thisObj->reverseNodeUnion->CPPreversenode144) == *(other->reverseNodeUnion->CPPreversenode144));
	case 145:
		return (*(thisObj->reverseNodeUnion->CPPreversenode145) == *(other->reverseNodeUnion->CPPreversenode145));
	case 146:
		return (*(thisObj->reverseNodeUnion->CPPreversenode146) == *(other->reverseNodeUnion->CPPreversenode146));
	case 147:
		return (*(thisObj->reverseNodeUnion->CPPreversenode147) == *(other->reverseNodeUnion->CPPreversenode147));
	case 148:
		return (*(thisObj->reverseNodeUnion->CPPreversenode148) == *(other->reverseNodeUnion->CPPreversenode148));
	case 149:
		return (*(thisObj->reverseNodeUnion->CPPreversenode149) == *(other->reverseNodeUnion->CPPreversenode149));
	case 150:
		return (*(thisObj->reverseNodeUnion->CPPreversenode150) == *(other->reverseNodeUnion->CPPreversenode150));
	case 151:
		return (*(thisObj->reverseNodeUnion->CPPreversenode151) == *(other->reverseNodeUnion->CPPreversenode151));
	case 152:
		return (*(thisObj->reverseNodeUnion->CPPreversenode152) == *(other->reverseNodeUnion->CPPreversenode152));
	case 153:
		return (*(thisObj->reverseNodeUnion->CPPreversenode153) == *(other->reverseNodeUnion->CPPreversenode153));
	case 154:
		return (*(thisObj->reverseNodeUnion->CPPreversenode154) == *(other->reverseNodeUnion->CPPreversenode154));
	case 155:
		return (*(thisObj->reverseNodeUnion->CPPreversenode155) == *(other->reverseNodeUnion->CPPreversenode155));
	case 156:
		return (*(thisObj->reverseNodeUnion->CPPreversenode156) == *(other->reverseNodeUnion->CPPreversenode156));
	case 157:
		return (*(thisObj->reverseNodeUnion->CPPreversenode157) == *(other->reverseNodeUnion->CPPreversenode157));
	case 158:
		return (*(thisObj->reverseNodeUnion->CPPreversenode158) == *(other->reverseNodeUnion->CPPreversenode158));
	case 159:
		return (*(thisObj->reverseNodeUnion->CPPreversenode159) == *(other->reverseNodeUnion->CPPreversenode159));
	case 160:
		return (*(thisObj->reverseNodeUnion->CPPreversenode160) == *(other->reverseNodeUnion->CPPreversenode160));
	case 161:
		return (*(thisObj->reverseNodeUnion->CPPreversenode161) == *(other->reverseNodeUnion->CPPreversenode161));
	case 162:
		return (*(thisObj->reverseNodeUnion->CPPreversenode162) == *(other->reverseNodeUnion->CPPreversenode162));
	case 163:
		return (*(thisObj->reverseNodeUnion->CPPreversenode163) == *(other->reverseNodeUnion->CPPreversenode163));
	case 164:
		return (*(thisObj->reverseNodeUnion->CPPreversenode164) == *(other->reverseNodeUnion->CPPreversenode164));
	case 165:
		return (*(thisObj->reverseNodeUnion->CPPreversenode165) == *(other->reverseNodeUnion->CPPreversenode165));
	case 166:
		return (*(thisObj->reverseNodeUnion->CPPreversenode166) == *(other->reverseNodeUnion->CPPreversenode166));
	case 167:
		return (*(thisObj->reverseNodeUnion->CPPreversenode167) == *(other->reverseNodeUnion->CPPreversenode167));
	case 168:
		return (*(thisObj->reverseNodeUnion->CPPreversenode168) == *(other->reverseNodeUnion->CPPreversenode168));
	case 169:
		return (*(thisObj->reverseNodeUnion->CPPreversenode169) == *(other->reverseNodeUnion->CPPreversenode169));
	case 170:
		return (*(thisObj->reverseNodeUnion->CPPreversenode170) == *(other->reverseNodeUnion->CPPreversenode170));
	case 171:
		return (*(thisObj->reverseNodeUnion->CPPreversenode171) == *(other->reverseNodeUnion->CPPreversenode171));
	case 172:
		return (*(thisObj->reverseNodeUnion->CPPreversenode172) == *(other->reverseNodeUnion->CPPreversenode172));
	case 173:
		return (*(thisObj->reverseNodeUnion->CPPreversenode173) == *(other->reverseNodeUnion->CPPreversenode173));
	case 174:
		return (*(thisObj->reverseNodeUnion->CPPreversenode174) == *(other->reverseNodeUnion->CPPreversenode174));
	case 175:
		return (*(thisObj->reverseNodeUnion->CPPreversenode175) == *(other->reverseNodeUnion->CPPreversenode175));
	case 176:
		return (*(thisObj->reverseNodeUnion->CPPreversenode176) == *(other->reverseNodeUnion->CPPreversenode176));
	case 177:
		return (*(thisObj->reverseNodeUnion->CPPreversenode177) == *(other->reverseNodeUnion->CPPreversenode177));
	case 178:
		return (*(thisObj->reverseNodeUnion->CPPreversenode178) == *(other->reverseNodeUnion->CPPreversenode178));
	case 179:
		return (*(thisObj->reverseNodeUnion->CPPreversenode179) == *(other->reverseNodeUnion->CPPreversenode179));
	case 180:
		return (*(thisObj->reverseNodeUnion->CPPreversenode180) == *(other->reverseNodeUnion->CPPreversenode180));
	case 181:
		return (*(thisObj->reverseNodeUnion->CPPreversenode181) == *(other->reverseNodeUnion->CPPreversenode181));
	case 182:
		return (*(thisObj->reverseNodeUnion->CPPreversenode182) == *(other->reverseNodeUnion->CPPreversenode182));
	case 183:
		return (*(thisObj->reverseNodeUnion->CPPreversenode183) == *(other->reverseNodeUnion->CPPreversenode183));
	case 184:
		return (*(thisObj->reverseNodeUnion->CPPreversenode184) == *(other->reverseNodeUnion->CPPreversenode184));
	case 185:
		return (*(thisObj->reverseNodeUnion->CPPreversenode185) == *(other->reverseNodeUnion->CPPreversenode185));
	case 186:
		return (*(thisObj->reverseNodeUnion->CPPreversenode186) == *(other->reverseNodeUnion->CPPreversenode186));
	case 187:
		return (*(thisObj->reverseNodeUnion->CPPreversenode187) == *(other->reverseNodeUnion->CPPreversenode187));
	case 188:
		return (*(thisObj->reverseNodeUnion->CPPreversenode188) == *(other->reverseNodeUnion->CPPreversenode188));
	case 189:
		return (*(thisObj->reverseNodeUnion->CPPreversenode189) == *(other->reverseNodeUnion->CPPreversenode189));
	case 190:
		return (*(thisObj->reverseNodeUnion->CPPreversenode190) == *(other->reverseNodeUnion->CPPreversenode190));
	case 191:
		return (*(thisObj->reverseNodeUnion->CPPreversenode191) == *(other->reverseNodeUnion->CPPreversenode191));
	case 192:
		return (*(thisObj->reverseNodeUnion->CPPreversenode192) == *(other->reverseNodeUnion->CPPreversenode192));
	case 193:
		return (*(thisObj->reverseNodeUnion->CPPreversenode193) == *(other->reverseNodeUnion->CPPreversenode193));
	case 194:
		return (*(thisObj->reverseNodeUnion->CPPreversenode194) == *(other->reverseNodeUnion->CPPreversenode194));
	case 195:
		return (*(thisObj->reverseNodeUnion->CPPreversenode195) == *(other->reverseNodeUnion->CPPreversenode195));
	case 196:
		return (*(thisObj->reverseNodeUnion->CPPreversenode196) == *(other->reverseNodeUnion->CPPreversenode196));
	}
	return false;
}

generic<typename Key, typename Value>
bool UnOrderedMultiMapWapper::CShorpUnOrderedReverseNode<Key, Value>::operator!=(const CShorpUnOrderedReverseNode<Key, Value>^ thisObj, const CShorpUnOrderedReverseNode<Key, Value>^ other)
{
	if (Object::ReferenceEquals(const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedReverseNode<Key, Value>^>(thisObj), nullptr)) return false;
	if (Object::ReferenceEquals(const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedReverseNode<Key, Value>^>(other), nullptr)) return false;
	if (Object::ReferenceEquals(const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedReverseNode<Key, Value>^>(thisObj), const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedReverseNode<Key, Value>^>(other))) return false;
	if (thisObj->isInitialized == 0 || other->isInitialized == 0) return false;

	if (thisObj->nKeyValueType != other->nKeyValueType) return true;

	switch (thisObj->nKeyValueType)
	{
	case 0: default:
		return false;
	case 1:
		return (*(thisObj->reverseNodeUnion->CPPreversenode1) != *(other->reverseNodeUnion->CPPreversenode1));
	case 2:
		return (*(thisObj->reverseNodeUnion->CPPreversenode2) != *(other->reverseNodeUnion->CPPreversenode2));
	case 3:
		return (*(thisObj->reverseNodeUnion->CPPreversenode3) != *(other->reverseNodeUnion->CPPreversenode3));
	case 4:
		return (*(thisObj->reverseNodeUnion->CPPreversenode4) != *(other->reverseNodeUnion->CPPreversenode4));
	case 5:
		return (*(thisObj->reverseNodeUnion->CPPreversenode5) != *(other->reverseNodeUnion->CPPreversenode5));
	case 6:
		return (*(thisObj->reverseNodeUnion->CPPreversenode6) != *(other->reverseNodeUnion->CPPreversenode6));
	case 7:
		return (*(thisObj->reverseNodeUnion->CPPreversenode7) != *(other->reverseNodeUnion->CPPreversenode7));
	case 8:
		return (*(thisObj->reverseNodeUnion->CPPreversenode8) != *(other->reverseNodeUnion->CPPreversenode8));
	case 9:
		return (*(thisObj->reverseNodeUnion->CPPreversenode9) != *(other->reverseNodeUnion->CPPreversenode9));
	case 10:
		return (*(thisObj->reverseNodeUnion->CPPreversenode10) != *(other->reverseNodeUnion->CPPreversenode10));
	case 11:
		return (*(thisObj->reverseNodeUnion->CPPreversenode11) != *(other->reverseNodeUnion->CPPreversenode11));
	case 12:
		return (*(thisObj->reverseNodeUnion->CPPreversenode12) != *(other->reverseNodeUnion->CPPreversenode12));
	case 13:
		return (*(thisObj->reverseNodeUnion->CPPreversenode13) != *(other->reverseNodeUnion->CPPreversenode13));
	case 14:
		return (*(thisObj->reverseNodeUnion->CPPreversenode14) != *(other->reverseNodeUnion->CPPreversenode14));
	case 15:
		return (*(thisObj->reverseNodeUnion->CPPreversenode15) != *(other->reverseNodeUnion->CPPreversenode15));
	case 16:
		return (*(thisObj->reverseNodeUnion->CPPreversenode16) != *(other->reverseNodeUnion->CPPreversenode16));
	case 17:
		return (*(thisObj->reverseNodeUnion->CPPreversenode17) != *(other->reverseNodeUnion->CPPreversenode17));
	case 18:
		return (*(thisObj->reverseNodeUnion->CPPreversenode18) != *(other->reverseNodeUnion->CPPreversenode18));
	case 19:
		return (*(thisObj->reverseNodeUnion->CPPreversenode19) != *(other->reverseNodeUnion->CPPreversenode19));
	case 20:
		return (*(thisObj->reverseNodeUnion->CPPreversenode20) != *(other->reverseNodeUnion->CPPreversenode20));
	case 21:
		return (*(thisObj->reverseNodeUnion->CPPreversenode21) != *(other->reverseNodeUnion->CPPreversenode21));
	case 22:
		return (*(thisObj->reverseNodeUnion->CPPreversenode22) != *(other->reverseNodeUnion->CPPreversenode22));
	case 23:
		return (*(thisObj->reverseNodeUnion->CPPreversenode23) != *(other->reverseNodeUnion->CPPreversenode23));
	case 24:
		return (*(thisObj->reverseNodeUnion->CPPreversenode24) != *(other->reverseNodeUnion->CPPreversenode24));
	case 25:
		return (*(thisObj->reverseNodeUnion->CPPreversenode25) != *(other->reverseNodeUnion->CPPreversenode25));
	case 26:
		return (*(thisObj->reverseNodeUnion->CPPreversenode26) != *(other->reverseNodeUnion->CPPreversenode26));
	case 27:
		return (*(thisObj->reverseNodeUnion->CPPreversenode27) != *(other->reverseNodeUnion->CPPreversenode27));
	case 28:
		return (*(thisObj->reverseNodeUnion->CPPreversenode28) != *(other->reverseNodeUnion->CPPreversenode28));
	case 29:
		return (*(thisObj->reverseNodeUnion->CPPreversenode29) != *(other->reverseNodeUnion->CPPreversenode29));
	case 30:
		return (*(thisObj->reverseNodeUnion->CPPreversenode30) != *(other->reverseNodeUnion->CPPreversenode30));
	case 31:
		return (*(thisObj->reverseNodeUnion->CPPreversenode31) != *(other->reverseNodeUnion->CPPreversenode31));
	case 32:
		return (*(thisObj->reverseNodeUnion->CPPreversenode32) != *(other->reverseNodeUnion->CPPreversenode32));
	case 33:
		return (*(thisObj->reverseNodeUnion->CPPreversenode33) != *(other->reverseNodeUnion->CPPreversenode33));
	case 34:
		return (*(thisObj->reverseNodeUnion->CPPreversenode34) != *(other->reverseNodeUnion->CPPreversenode34));
	case 35:
		return (*(thisObj->reverseNodeUnion->CPPreversenode35) != *(other->reverseNodeUnion->CPPreversenode35));
	case 36:
		return (*(thisObj->reverseNodeUnion->CPPreversenode36) != *(other->reverseNodeUnion->CPPreversenode36));
	case 37:
		return (*(thisObj->reverseNodeUnion->CPPreversenode37) != *(other->reverseNodeUnion->CPPreversenode37));
	case 38:
		return (*(thisObj->reverseNodeUnion->CPPreversenode38) != *(other->reverseNodeUnion->CPPreversenode38));
	case 39:
		return (*(thisObj->reverseNodeUnion->CPPreversenode39) != *(other->reverseNodeUnion->CPPreversenode39));
	case 40:
		return (*(thisObj->reverseNodeUnion->CPPreversenode40) != *(other->reverseNodeUnion->CPPreversenode40));
	case 41:
		return (*(thisObj->reverseNodeUnion->CPPreversenode41) != *(other->reverseNodeUnion->CPPreversenode41));
	case 42:
		return (*(thisObj->reverseNodeUnion->CPPreversenode42) != *(other->reverseNodeUnion->CPPreversenode42));
	case 43:
		return (*(thisObj->reverseNodeUnion->CPPreversenode43) != *(other->reverseNodeUnion->CPPreversenode43));
	case 44:
		return (*(thisObj->reverseNodeUnion->CPPreversenode44) != *(other->reverseNodeUnion->CPPreversenode44));
	case 45:
		return (*(thisObj->reverseNodeUnion->CPPreversenode45) != *(other->reverseNodeUnion->CPPreversenode45));
	case 46:
		return (*(thisObj->reverseNodeUnion->CPPreversenode46) != *(other->reverseNodeUnion->CPPreversenode46));
	case 47:
		return (*(thisObj->reverseNodeUnion->CPPreversenode47) != *(other->reverseNodeUnion->CPPreversenode47));
	case 48:
		return (*(thisObj->reverseNodeUnion->CPPreversenode48) != *(other->reverseNodeUnion->CPPreversenode48));
	case 49:
		return (*(thisObj->reverseNodeUnion->CPPreversenode49) != *(other->reverseNodeUnion->CPPreversenode49));
	case 50:
		return (*(thisObj->reverseNodeUnion->CPPreversenode50) != *(other->reverseNodeUnion->CPPreversenode50));
	case 51:
		return (*(thisObj->reverseNodeUnion->CPPreversenode51) != *(other->reverseNodeUnion->CPPreversenode51));
	case 52:
		return (*(thisObj->reverseNodeUnion->CPPreversenode52) != *(other->reverseNodeUnion->CPPreversenode52));
	case 53:
		return (*(thisObj->reverseNodeUnion->CPPreversenode53) != *(other->reverseNodeUnion->CPPreversenode53));
	case 54:
		return (*(thisObj->reverseNodeUnion->CPPreversenode54) != *(other->reverseNodeUnion->CPPreversenode54));
	case 55:
		return (*(thisObj->reverseNodeUnion->CPPreversenode55) != *(other->reverseNodeUnion->CPPreversenode55));
	case 56:
		return (*(thisObj->reverseNodeUnion->CPPreversenode56) != *(other->reverseNodeUnion->CPPreversenode56));
	case 57:
		return (*(thisObj->reverseNodeUnion->CPPreversenode57) != *(other->reverseNodeUnion->CPPreversenode57));
	case 58:
		return (*(thisObj->reverseNodeUnion->CPPreversenode58) != *(other->reverseNodeUnion->CPPreversenode58));
	case 59:
		return (*(thisObj->reverseNodeUnion->CPPreversenode59) != *(other->reverseNodeUnion->CPPreversenode59));
	case 60:
		return (*(thisObj->reverseNodeUnion->CPPreversenode60) != *(other->reverseNodeUnion->CPPreversenode60));
	case 61:
		return (*(thisObj->reverseNodeUnion->CPPreversenode61) != *(other->reverseNodeUnion->CPPreversenode61));
	case 62:
		return (*(thisObj->reverseNodeUnion->CPPreversenode62) != *(other->reverseNodeUnion->CPPreversenode62));
	case 63:
		return (*(thisObj->reverseNodeUnion->CPPreversenode63) != *(other->reverseNodeUnion->CPPreversenode63));
	case 64:
		return (*(thisObj->reverseNodeUnion->CPPreversenode64) != *(other->reverseNodeUnion->CPPreversenode64));
	case 65:
		return (*(thisObj->reverseNodeUnion->CPPreversenode65) != *(other->reverseNodeUnion->CPPreversenode65));
	case 66:
		return (*(thisObj->reverseNodeUnion->CPPreversenode66) != *(other->reverseNodeUnion->CPPreversenode66));
	case 67:
		return (*(thisObj->reverseNodeUnion->CPPreversenode67) != *(other->reverseNodeUnion->CPPreversenode67));
	case 68:
		return (*(thisObj->reverseNodeUnion->CPPreversenode68) != *(other->reverseNodeUnion->CPPreversenode68));
	case 69:
		return (*(thisObj->reverseNodeUnion->CPPreversenode69) != *(other->reverseNodeUnion->CPPreversenode69));
	case 70:
		return (*(thisObj->reverseNodeUnion->CPPreversenode70) != *(other->reverseNodeUnion->CPPreversenode70));
	case 71:
		return (*(thisObj->reverseNodeUnion->CPPreversenode71) != *(other->reverseNodeUnion->CPPreversenode71));
	case 72:
		return (*(thisObj->reverseNodeUnion->CPPreversenode72) != *(other->reverseNodeUnion->CPPreversenode72));
	case 73:
		return (*(thisObj->reverseNodeUnion->CPPreversenode73) != *(other->reverseNodeUnion->CPPreversenode73));
	case 74:
		return (*(thisObj->reverseNodeUnion->CPPreversenode74) != *(other->reverseNodeUnion->CPPreversenode74));
	case 75:
		return (*(thisObj->reverseNodeUnion->CPPreversenode75) != *(other->reverseNodeUnion->CPPreversenode75));
	case 76:
		return (*(thisObj->reverseNodeUnion->CPPreversenode76) != *(other->reverseNodeUnion->CPPreversenode76));
	case 77:
		return (*(thisObj->reverseNodeUnion->CPPreversenode77) != *(other->reverseNodeUnion->CPPreversenode77));
	case 78:
		return (*(thisObj->reverseNodeUnion->CPPreversenode78) != *(other->reverseNodeUnion->CPPreversenode78));
	case 79:
		return (*(thisObj->reverseNodeUnion->CPPreversenode79) != *(other->reverseNodeUnion->CPPreversenode79));
	case 80:
		return (*(thisObj->reverseNodeUnion->CPPreversenode80) != *(other->reverseNodeUnion->CPPreversenode80));
	case 81:
		return (*(thisObj->reverseNodeUnion->CPPreversenode81) != *(other->reverseNodeUnion->CPPreversenode81));
	case 82:
		return (*(thisObj->reverseNodeUnion->CPPreversenode82) != *(other->reverseNodeUnion->CPPreversenode82));
	case 83:
		return (*(thisObj->reverseNodeUnion->CPPreversenode83) != *(other->reverseNodeUnion->CPPreversenode83));
	case 84:
		return (*(thisObj->reverseNodeUnion->CPPreversenode84) != *(other->reverseNodeUnion->CPPreversenode84));
	case 85:
		return (*(thisObj->reverseNodeUnion->CPPreversenode85) != *(other->reverseNodeUnion->CPPreversenode85));
	case 86:
		return (*(thisObj->reverseNodeUnion->CPPreversenode86) != *(other->reverseNodeUnion->CPPreversenode86));
	case 87:
		return (*(thisObj->reverseNodeUnion->CPPreversenode87) != *(other->reverseNodeUnion->CPPreversenode87));
	case 88:
		return (*(thisObj->reverseNodeUnion->CPPreversenode88) != *(other->reverseNodeUnion->CPPreversenode88));
	case 89:
		return (*(thisObj->reverseNodeUnion->CPPreversenode89) != *(other->reverseNodeUnion->CPPreversenode89));
	case 90:
		return (*(thisObj->reverseNodeUnion->CPPreversenode90) != *(other->reverseNodeUnion->CPPreversenode90));
	case 91:
		return (*(thisObj->reverseNodeUnion->CPPreversenode91) != *(other->reverseNodeUnion->CPPreversenode91));
	case 92:
		return (*(thisObj->reverseNodeUnion->CPPreversenode92) != *(other->reverseNodeUnion->CPPreversenode92));
	case 93:
		return (*(thisObj->reverseNodeUnion->CPPreversenode93) != *(other->reverseNodeUnion->CPPreversenode93));
	case 94:
		return (*(thisObj->reverseNodeUnion->CPPreversenode94) != *(other->reverseNodeUnion->CPPreversenode94));
	case 95:
		return (*(thisObj->reverseNodeUnion->CPPreversenode95) != *(other->reverseNodeUnion->CPPreversenode95));
	case 96:
		return (*(thisObj->reverseNodeUnion->CPPreversenode96) != *(other->reverseNodeUnion->CPPreversenode96));
	case 97:
		return (*(thisObj->reverseNodeUnion->CPPreversenode97) != *(other->reverseNodeUnion->CPPreversenode97));
	case 98:
		return (*(thisObj->reverseNodeUnion->CPPreversenode98) != *(other->reverseNodeUnion->CPPreversenode98));
	case 99:
		return (*(thisObj->reverseNodeUnion->CPPreversenode99) != *(other->reverseNodeUnion->CPPreversenode99));
	case 100:
		return (*(thisObj->reverseNodeUnion->CPPreversenode100) != *(other->reverseNodeUnion->CPPreversenode100));
	case 101:
		return (*(thisObj->reverseNodeUnion->CPPreversenode101) != *(other->reverseNodeUnion->CPPreversenode101));
	case 102:
		return (*(thisObj->reverseNodeUnion->CPPreversenode102) != *(other->reverseNodeUnion->CPPreversenode102));
	case 103:
		return (*(thisObj->reverseNodeUnion->CPPreversenode103) != *(other->reverseNodeUnion->CPPreversenode103));
	case 104:
		return (*(thisObj->reverseNodeUnion->CPPreversenode104) != *(other->reverseNodeUnion->CPPreversenode104));
	case 105:
		return (*(thisObj->reverseNodeUnion->CPPreversenode105) != *(other->reverseNodeUnion->CPPreversenode105));
	case 106:
		return (*(thisObj->reverseNodeUnion->CPPreversenode106) != *(other->reverseNodeUnion->CPPreversenode106));
	case 107:
		return (*(thisObj->reverseNodeUnion->CPPreversenode107) != *(other->reverseNodeUnion->CPPreversenode107));
	case 108:
		return (*(thisObj->reverseNodeUnion->CPPreversenode108) != *(other->reverseNodeUnion->CPPreversenode108));
	case 109:
		return (*(thisObj->reverseNodeUnion->CPPreversenode109) != *(other->reverseNodeUnion->CPPreversenode109));
	case 110:
		return (*(thisObj->reverseNodeUnion->CPPreversenode110) != *(other->reverseNodeUnion->CPPreversenode110));
	case 111:
		return (*(thisObj->reverseNodeUnion->CPPreversenode111) != *(other->reverseNodeUnion->CPPreversenode111));
	case 112:
		return (*(thisObj->reverseNodeUnion->CPPreversenode112) != *(other->reverseNodeUnion->CPPreversenode112));
	case 113:
		return (*(thisObj->reverseNodeUnion->CPPreversenode113) != *(other->reverseNodeUnion->CPPreversenode113));
	case 114:
		return (*(thisObj->reverseNodeUnion->CPPreversenode114) != *(other->reverseNodeUnion->CPPreversenode114));
	case 115:
		return (*(thisObj->reverseNodeUnion->CPPreversenode115) != *(other->reverseNodeUnion->CPPreversenode115));
	case 116:
		return (*(thisObj->reverseNodeUnion->CPPreversenode116) != *(other->reverseNodeUnion->CPPreversenode116));
	case 117:
		return (*(thisObj->reverseNodeUnion->CPPreversenode117) != *(other->reverseNodeUnion->CPPreversenode117));
	case 118:
		return (*(thisObj->reverseNodeUnion->CPPreversenode118) != *(other->reverseNodeUnion->CPPreversenode118));
	case 119:
		return (*(thisObj->reverseNodeUnion->CPPreversenode119) != *(other->reverseNodeUnion->CPPreversenode119));
	case 120:
		return (*(thisObj->reverseNodeUnion->CPPreversenode120) != *(other->reverseNodeUnion->CPPreversenode120));
	case 121:
		return (*(thisObj->reverseNodeUnion->CPPreversenode121) != *(other->reverseNodeUnion->CPPreversenode121));
	case 122:
		return (*(thisObj->reverseNodeUnion->CPPreversenode122) != *(other->reverseNodeUnion->CPPreversenode122));
	case 123:
		return (*(thisObj->reverseNodeUnion->CPPreversenode123) != *(other->reverseNodeUnion->CPPreversenode123));
	case 124:
		return (*(thisObj->reverseNodeUnion->CPPreversenode124) != *(other->reverseNodeUnion->CPPreversenode124));
	case 125:
		return (*(thisObj->reverseNodeUnion->CPPreversenode125) != *(other->reverseNodeUnion->CPPreversenode125));
	case 126:
		return (*(thisObj->reverseNodeUnion->CPPreversenode126) != *(other->reverseNodeUnion->CPPreversenode126));
	case 127:
		return (*(thisObj->reverseNodeUnion->CPPreversenode127) != *(other->reverseNodeUnion->CPPreversenode127));
	case 128:
		return (*(thisObj->reverseNodeUnion->CPPreversenode128) != *(other->reverseNodeUnion->CPPreversenode128));
	case 129:
		return (*(thisObj->reverseNodeUnion->CPPreversenode129) != *(other->reverseNodeUnion->CPPreversenode129));
	case 130:
		return (*(thisObj->reverseNodeUnion->CPPreversenode130) != *(other->reverseNodeUnion->CPPreversenode130));
	case 131:
		return (*(thisObj->reverseNodeUnion->CPPreversenode131) != *(other->reverseNodeUnion->CPPreversenode131));
	case 132:
		return (*(thisObj->reverseNodeUnion->CPPreversenode132) != *(other->reverseNodeUnion->CPPreversenode132));
	case 133:
		return (*(thisObj->reverseNodeUnion->CPPreversenode133) != *(other->reverseNodeUnion->CPPreversenode133));
	case 134:
		return (*(thisObj->reverseNodeUnion->CPPreversenode134) != *(other->reverseNodeUnion->CPPreversenode134));
	case 135:
		return (*(thisObj->reverseNodeUnion->CPPreversenode135) != *(other->reverseNodeUnion->CPPreversenode135));
	case 136:
		return (*(thisObj->reverseNodeUnion->CPPreversenode136) != *(other->reverseNodeUnion->CPPreversenode136));
	case 137:
		return (*(thisObj->reverseNodeUnion->CPPreversenode137) != *(other->reverseNodeUnion->CPPreversenode137));
	case 138:
		return (*(thisObj->reverseNodeUnion->CPPreversenode138) != *(other->reverseNodeUnion->CPPreversenode138));
	case 139:
		return (*(thisObj->reverseNodeUnion->CPPreversenode139) != *(other->reverseNodeUnion->CPPreversenode139));
	case 140:
		return (*(thisObj->reverseNodeUnion->CPPreversenode140) != *(other->reverseNodeUnion->CPPreversenode140));
	case 141:
		return (*(thisObj->reverseNodeUnion->CPPreversenode141) != *(other->reverseNodeUnion->CPPreversenode141));
	case 142:
		return (*(thisObj->reverseNodeUnion->CPPreversenode142) != *(other->reverseNodeUnion->CPPreversenode142));
	case 143:
		return (*(thisObj->reverseNodeUnion->CPPreversenode143) != *(other->reverseNodeUnion->CPPreversenode143));
	case 144:
		return (*(thisObj->reverseNodeUnion->CPPreversenode144) != *(other->reverseNodeUnion->CPPreversenode144));
	case 145:
		return (*(thisObj->reverseNodeUnion->CPPreversenode145) != *(other->reverseNodeUnion->CPPreversenode145));
	case 146:
		return (*(thisObj->reverseNodeUnion->CPPreversenode146) != *(other->reverseNodeUnion->CPPreversenode146));
	case 147:
		return (*(thisObj->reverseNodeUnion->CPPreversenode147) != *(other->reverseNodeUnion->CPPreversenode147));
	case 148:
		return (*(thisObj->reverseNodeUnion->CPPreversenode148) != *(other->reverseNodeUnion->CPPreversenode148));
	case 149:
		return (*(thisObj->reverseNodeUnion->CPPreversenode149) != *(other->reverseNodeUnion->CPPreversenode149));
	case 150:
		return (*(thisObj->reverseNodeUnion->CPPreversenode150) != *(other->reverseNodeUnion->CPPreversenode150));
	case 151:
		return (*(thisObj->reverseNodeUnion->CPPreversenode151) != *(other->reverseNodeUnion->CPPreversenode151));
	case 152:
		return (*(thisObj->reverseNodeUnion->CPPreversenode152) != *(other->reverseNodeUnion->CPPreversenode152));
	case 153:
		return (*(thisObj->reverseNodeUnion->CPPreversenode153) != *(other->reverseNodeUnion->CPPreversenode153));
	case 154:
		return (*(thisObj->reverseNodeUnion->CPPreversenode154) != *(other->reverseNodeUnion->CPPreversenode154));
	case 155:
		return (*(thisObj->reverseNodeUnion->CPPreversenode155) != *(other->reverseNodeUnion->CPPreversenode155));
	case 156:
		return (*(thisObj->reverseNodeUnion->CPPreversenode156) != *(other->reverseNodeUnion->CPPreversenode156));
	case 157:
		return (*(thisObj->reverseNodeUnion->CPPreversenode157) != *(other->reverseNodeUnion->CPPreversenode157));
	case 158:
		return (*(thisObj->reverseNodeUnion->CPPreversenode158) != *(other->reverseNodeUnion->CPPreversenode158));
	case 159:
		return (*(thisObj->reverseNodeUnion->CPPreversenode159) != *(other->reverseNodeUnion->CPPreversenode159));
	case 160:
		return (*(thisObj->reverseNodeUnion->CPPreversenode160) != *(other->reverseNodeUnion->CPPreversenode160));
	case 161:
		return (*(thisObj->reverseNodeUnion->CPPreversenode161) != *(other->reverseNodeUnion->CPPreversenode161));
	case 162:
		return (*(thisObj->reverseNodeUnion->CPPreversenode162) != *(other->reverseNodeUnion->CPPreversenode162));
	case 163:
		return (*(thisObj->reverseNodeUnion->CPPreversenode163) != *(other->reverseNodeUnion->CPPreversenode163));
	case 164:
		return (*(thisObj->reverseNodeUnion->CPPreversenode164) != *(other->reverseNodeUnion->CPPreversenode164));
	case 165:
		return (*(thisObj->reverseNodeUnion->CPPreversenode165) != *(other->reverseNodeUnion->CPPreversenode165));
	case 166:
		return (*(thisObj->reverseNodeUnion->CPPreversenode166) != *(other->reverseNodeUnion->CPPreversenode166));
	case 167:
		return (*(thisObj->reverseNodeUnion->CPPreversenode167) != *(other->reverseNodeUnion->CPPreversenode167));
	case 168:
		return (*(thisObj->reverseNodeUnion->CPPreversenode168) != *(other->reverseNodeUnion->CPPreversenode168));
	case 169:
		return (*(thisObj->reverseNodeUnion->CPPreversenode169) != *(other->reverseNodeUnion->CPPreversenode169));
	case 170:
		return (*(thisObj->reverseNodeUnion->CPPreversenode170) != *(other->reverseNodeUnion->CPPreversenode170));
	case 171:
		return (*(thisObj->reverseNodeUnion->CPPreversenode171) != *(other->reverseNodeUnion->CPPreversenode171));
	case 172:
		return (*(thisObj->reverseNodeUnion->CPPreversenode172) != *(other->reverseNodeUnion->CPPreversenode172));
	case 173:
		return (*(thisObj->reverseNodeUnion->CPPreversenode173) != *(other->reverseNodeUnion->CPPreversenode173));
	case 174:
		return (*(thisObj->reverseNodeUnion->CPPreversenode174) != *(other->reverseNodeUnion->CPPreversenode174));
	case 175:
		return (*(thisObj->reverseNodeUnion->CPPreversenode175) != *(other->reverseNodeUnion->CPPreversenode175));
	case 176:
		return (*(thisObj->reverseNodeUnion->CPPreversenode176) != *(other->reverseNodeUnion->CPPreversenode176));
	case 177:
		return (*(thisObj->reverseNodeUnion->CPPreversenode177) != *(other->reverseNodeUnion->CPPreversenode177));
	case 178:
		return (*(thisObj->reverseNodeUnion->CPPreversenode178) != *(other->reverseNodeUnion->CPPreversenode178));
	case 179:
		return (*(thisObj->reverseNodeUnion->CPPreversenode179) != *(other->reverseNodeUnion->CPPreversenode179));
	case 180:
		return (*(thisObj->reverseNodeUnion->CPPreversenode180) != *(other->reverseNodeUnion->CPPreversenode180));
	case 181:
		return (*(thisObj->reverseNodeUnion->CPPreversenode181) != *(other->reverseNodeUnion->CPPreversenode181));
	case 182:
		return (*(thisObj->reverseNodeUnion->CPPreversenode182) != *(other->reverseNodeUnion->CPPreversenode182));
	case 183:
		return (*(thisObj->reverseNodeUnion->CPPreversenode183) != *(other->reverseNodeUnion->CPPreversenode183));
	case 184:
		return (*(thisObj->reverseNodeUnion->CPPreversenode184) != *(other->reverseNodeUnion->CPPreversenode184));
	case 185:
		return (*(thisObj->reverseNodeUnion->CPPreversenode185) != *(other->reverseNodeUnion->CPPreversenode185));
	case 186:
		return (*(thisObj->reverseNodeUnion->CPPreversenode186) != *(other->reverseNodeUnion->CPPreversenode186));
	case 187:
		return (*(thisObj->reverseNodeUnion->CPPreversenode187) != *(other->reverseNodeUnion->CPPreversenode187));
	case 188:
		return (*(thisObj->reverseNodeUnion->CPPreversenode188) != *(other->reverseNodeUnion->CPPreversenode188));
	case 189:
		return (*(thisObj->reverseNodeUnion->CPPreversenode189) != *(other->reverseNodeUnion->CPPreversenode189));
	case 190:
		return (*(thisObj->reverseNodeUnion->CPPreversenode190) != *(other->reverseNodeUnion->CPPreversenode190));
	case 191:
		return (*(thisObj->reverseNodeUnion->CPPreversenode191) != *(other->reverseNodeUnion->CPPreversenode191));
	case 192:
		return (*(thisObj->reverseNodeUnion->CPPreversenode192) != *(other->reverseNodeUnion->CPPreversenode192));
	case 193:
		return (*(thisObj->reverseNodeUnion->CPPreversenode193) != *(other->reverseNodeUnion->CPPreversenode193));
	case 194:
		return (*(thisObj->reverseNodeUnion->CPPreversenode194) != *(other->reverseNodeUnion->CPPreversenode194));
	case 195:
		return (*(thisObj->reverseNodeUnion->CPPreversenode195) != *(other->reverseNodeUnion->CPPreversenode195));
	case 196:
		return (*(thisObj->reverseNodeUnion->CPPreversenode196) != *(other->reverseNodeUnion->CPPreversenode196));
	}
	return false;
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedReverseNode<Key, Value>^ UnOrderedMultiMapWapper::CShorpUnOrderedReverseNode<Key, Value>::operator%(CShorpUnOrderedReverseNode<Key, Value>^ thisObj, CShorpUnOrderedReverseNode<Key, Value>^ other)
{
	if (Object::ReferenceEquals(const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedReverseNode<Key, Value>^>(thisObj), nullptr)) return nullptr;
	if (Object::ReferenceEquals(const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedReverseNode<Key, Value>^>(other), nullptr)) return thisObj;
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
		(*(thisObj->reverseNodeUnion->CPPreversenode1) = *(other->reverseNodeUnion->CPPreversenode1)); break;
	case 2:
		(*(thisObj->reverseNodeUnion->CPPreversenode2) = *(other->reverseNodeUnion->CPPreversenode2)); break;
	case 3:
		(*(thisObj->reverseNodeUnion->CPPreversenode3) = *(other->reverseNodeUnion->CPPreversenode3)); break;
	case 4:
		(*(thisObj->reverseNodeUnion->CPPreversenode4) = *(other->reverseNodeUnion->CPPreversenode4)); break;
	case 5:
		(*(thisObj->reverseNodeUnion->CPPreversenode5) = *(other->reverseNodeUnion->CPPreversenode5)); break;
	case 6:
		(*(thisObj->reverseNodeUnion->CPPreversenode6) = *(other->reverseNodeUnion->CPPreversenode6)); break;
	case 7:
		(*(thisObj->reverseNodeUnion->CPPreversenode7) = *(other->reverseNodeUnion->CPPreversenode7)); break;
	case 8:
		(*(thisObj->reverseNodeUnion->CPPreversenode8) = *(other->reverseNodeUnion->CPPreversenode8)); break;
	case 9:
		(*(thisObj->reverseNodeUnion->CPPreversenode9) = *(other->reverseNodeUnion->CPPreversenode9)); break;
	case 10:
		(*(thisObj->reverseNodeUnion->CPPreversenode10) = *(other->reverseNodeUnion->CPPreversenode10)); break;
	case 11:
		(*(thisObj->reverseNodeUnion->CPPreversenode11) = *(other->reverseNodeUnion->CPPreversenode11)); break;
	case 12:
		(*(thisObj->reverseNodeUnion->CPPreversenode12) = *(other->reverseNodeUnion->CPPreversenode12)); break;
	case 13:
		(*(thisObj->reverseNodeUnion->CPPreversenode13) = *(other->reverseNodeUnion->CPPreversenode13)); break;
	case 14:
		(*(thisObj->reverseNodeUnion->CPPreversenode14) = *(other->reverseNodeUnion->CPPreversenode14)); break;
	case 15:
		(*(thisObj->reverseNodeUnion->CPPreversenode15) = *(other->reverseNodeUnion->CPPreversenode15)); break;
	case 16:
		(*(thisObj->reverseNodeUnion->CPPreversenode16) = *(other->reverseNodeUnion->CPPreversenode16)); break;
	case 17:
		(*(thisObj->reverseNodeUnion->CPPreversenode17) = *(other->reverseNodeUnion->CPPreversenode17)); break;
	case 18:
		(*(thisObj->reverseNodeUnion->CPPreversenode18) = *(other->reverseNodeUnion->CPPreversenode18)); break;
	case 19:
		(*(thisObj->reverseNodeUnion->CPPreversenode19) = *(other->reverseNodeUnion->CPPreversenode19)); break;
	case 20:
		(*(thisObj->reverseNodeUnion->CPPreversenode20) = *(other->reverseNodeUnion->CPPreversenode20)); break;
	case 21:
		(*(thisObj->reverseNodeUnion->CPPreversenode21) = *(other->reverseNodeUnion->CPPreversenode21)); break;
	case 22:
		(*(thisObj->reverseNodeUnion->CPPreversenode22) = *(other->reverseNodeUnion->CPPreversenode22)); break;
	case 23:
		(*(thisObj->reverseNodeUnion->CPPreversenode23) = *(other->reverseNodeUnion->CPPreversenode23)); break;
	case 24:
		(*(thisObj->reverseNodeUnion->CPPreversenode24) = *(other->reverseNodeUnion->CPPreversenode24)); break;
	case 25:
		(*(thisObj->reverseNodeUnion->CPPreversenode25) = *(other->reverseNodeUnion->CPPreversenode25)); break;
	case 26:
		(*(thisObj->reverseNodeUnion->CPPreversenode26) = *(other->reverseNodeUnion->CPPreversenode26)); break;
	case 27:
		(*(thisObj->reverseNodeUnion->CPPreversenode27) = *(other->reverseNodeUnion->CPPreversenode27)); break;
	case 28:
		(*(thisObj->reverseNodeUnion->CPPreversenode28) = *(other->reverseNodeUnion->CPPreversenode28)); break;
	case 29:
		(*(thisObj->reverseNodeUnion->CPPreversenode29) = *(other->reverseNodeUnion->CPPreversenode29)); break;
	case 30:
		(*(thisObj->reverseNodeUnion->CPPreversenode30) = *(other->reverseNodeUnion->CPPreversenode30)); break;
	case 31:
		(*(thisObj->reverseNodeUnion->CPPreversenode31) = *(other->reverseNodeUnion->CPPreversenode31)); break;
	case 32:
		(*(thisObj->reverseNodeUnion->CPPreversenode32) = *(other->reverseNodeUnion->CPPreversenode32)); break;
	case 33:
		(*(thisObj->reverseNodeUnion->CPPreversenode33) = *(other->reverseNodeUnion->CPPreversenode33)); break;
	case 34:
		(*(thisObj->reverseNodeUnion->CPPreversenode34) = *(other->reverseNodeUnion->CPPreversenode34)); break;
	case 35:
		(*(thisObj->reverseNodeUnion->CPPreversenode35) = *(other->reverseNodeUnion->CPPreversenode35)); break;
	case 36:
		(*(thisObj->reverseNodeUnion->CPPreversenode36) = *(other->reverseNodeUnion->CPPreversenode36)); break;
	case 37:
		(*(thisObj->reverseNodeUnion->CPPreversenode37) = *(other->reverseNodeUnion->CPPreversenode37)); break;
	case 38:
		(*(thisObj->reverseNodeUnion->CPPreversenode38) = *(other->reverseNodeUnion->CPPreversenode38)); break;
	case 39:
		(*(thisObj->reverseNodeUnion->CPPreversenode39) = *(other->reverseNodeUnion->CPPreversenode39)); break;
	case 40:
		(*(thisObj->reverseNodeUnion->CPPreversenode40) = *(other->reverseNodeUnion->CPPreversenode40)); break;
	case 41:
		(*(thisObj->reverseNodeUnion->CPPreversenode41) = *(other->reverseNodeUnion->CPPreversenode41)); break;
	case 42:
		(*(thisObj->reverseNodeUnion->CPPreversenode42) = *(other->reverseNodeUnion->CPPreversenode42)); break;
	case 43:
		(*(thisObj->reverseNodeUnion->CPPreversenode43) = *(other->reverseNodeUnion->CPPreversenode43)); break;
	case 44:
		(*(thisObj->reverseNodeUnion->CPPreversenode44) = *(other->reverseNodeUnion->CPPreversenode44)); break;
	case 45:
		(*(thisObj->reverseNodeUnion->CPPreversenode45) = *(other->reverseNodeUnion->CPPreversenode45)); break;
	case 46:
		(*(thisObj->reverseNodeUnion->CPPreversenode46) = *(other->reverseNodeUnion->CPPreversenode46)); break;
	case 47:
		(*(thisObj->reverseNodeUnion->CPPreversenode47) = *(other->reverseNodeUnion->CPPreversenode47)); break;
	case 48:
		(*(thisObj->reverseNodeUnion->CPPreversenode48) = *(other->reverseNodeUnion->CPPreversenode48)); break;
	case 49:
		(*(thisObj->reverseNodeUnion->CPPreversenode49) = *(other->reverseNodeUnion->CPPreversenode49)); break;
	case 50:
		(*(thisObj->reverseNodeUnion->CPPreversenode50) = *(other->reverseNodeUnion->CPPreversenode50)); break;
	case 51:
		(*(thisObj->reverseNodeUnion->CPPreversenode51) = *(other->reverseNodeUnion->CPPreversenode51)); break;
	case 52:
		(*(thisObj->reverseNodeUnion->CPPreversenode52) = *(other->reverseNodeUnion->CPPreversenode52)); break;
	case 53:
		(*(thisObj->reverseNodeUnion->CPPreversenode53) = *(other->reverseNodeUnion->CPPreversenode53)); break;
	case 54:
		(*(thisObj->reverseNodeUnion->CPPreversenode54) = *(other->reverseNodeUnion->CPPreversenode54)); break;
	case 55:
		(*(thisObj->reverseNodeUnion->CPPreversenode55) = *(other->reverseNodeUnion->CPPreversenode55)); break;
	case 56:
		(*(thisObj->reverseNodeUnion->CPPreversenode56) = *(other->reverseNodeUnion->CPPreversenode56)); break;
	case 57:
		(*(thisObj->reverseNodeUnion->CPPreversenode57) = *(other->reverseNodeUnion->CPPreversenode57)); break;
	case 58:
		(*(thisObj->reverseNodeUnion->CPPreversenode58) = *(other->reverseNodeUnion->CPPreversenode58)); break;
	case 59:
		(*(thisObj->reverseNodeUnion->CPPreversenode59) = *(other->reverseNodeUnion->CPPreversenode59)); break;
	case 60:
		(*(thisObj->reverseNodeUnion->CPPreversenode60) = *(other->reverseNodeUnion->CPPreversenode60)); break;
	case 61:
		(*(thisObj->reverseNodeUnion->CPPreversenode61) = *(other->reverseNodeUnion->CPPreversenode61)); break;
	case 62:
		(*(thisObj->reverseNodeUnion->CPPreversenode62) = *(other->reverseNodeUnion->CPPreversenode62)); break;
	case 63:
		(*(thisObj->reverseNodeUnion->CPPreversenode63) = *(other->reverseNodeUnion->CPPreversenode63)); break;
	case 64:
		(*(thisObj->reverseNodeUnion->CPPreversenode64) = *(other->reverseNodeUnion->CPPreversenode64)); break;
	case 65:
		(*(thisObj->reverseNodeUnion->CPPreversenode65) = *(other->reverseNodeUnion->CPPreversenode65)); break;
	case 66:
		(*(thisObj->reverseNodeUnion->CPPreversenode66) = *(other->reverseNodeUnion->CPPreversenode66)); break;
	case 67:
		(*(thisObj->reverseNodeUnion->CPPreversenode67) = *(other->reverseNodeUnion->CPPreversenode67)); break;
	case 68:
		(*(thisObj->reverseNodeUnion->CPPreversenode68) = *(other->reverseNodeUnion->CPPreversenode68)); break;
	case 69:
		(*(thisObj->reverseNodeUnion->CPPreversenode69) = *(other->reverseNodeUnion->CPPreversenode69)); break;
	case 70:
		(*(thisObj->reverseNodeUnion->CPPreversenode70) = *(other->reverseNodeUnion->CPPreversenode70)); break;
	case 71:
		(*(thisObj->reverseNodeUnion->CPPreversenode71) = *(other->reverseNodeUnion->CPPreversenode71)); break;
	case 72:
		(*(thisObj->reverseNodeUnion->CPPreversenode72) = *(other->reverseNodeUnion->CPPreversenode72)); break;
	case 73:
		(*(thisObj->reverseNodeUnion->CPPreversenode73) = *(other->reverseNodeUnion->CPPreversenode73)); break;
	case 74:
		(*(thisObj->reverseNodeUnion->CPPreversenode74) = *(other->reverseNodeUnion->CPPreversenode74)); break;
	case 75:
		(*(thisObj->reverseNodeUnion->CPPreversenode75) = *(other->reverseNodeUnion->CPPreversenode75)); break;
	case 76:
		(*(thisObj->reverseNodeUnion->CPPreversenode76) = *(other->reverseNodeUnion->CPPreversenode76)); break;
	case 77:
		(*(thisObj->reverseNodeUnion->CPPreversenode77) = *(other->reverseNodeUnion->CPPreversenode77)); break;
	case 78:
		(*(thisObj->reverseNodeUnion->CPPreversenode78) = *(other->reverseNodeUnion->CPPreversenode78)); break;
	case 79:
		(*(thisObj->reverseNodeUnion->CPPreversenode79) = *(other->reverseNodeUnion->CPPreversenode79)); break;
	case 80:
		(*(thisObj->reverseNodeUnion->CPPreversenode80) = *(other->reverseNodeUnion->CPPreversenode80)); break;
	case 81:
		(*(thisObj->reverseNodeUnion->CPPreversenode81) = *(other->reverseNodeUnion->CPPreversenode81)); break;
	case 82:
		(*(thisObj->reverseNodeUnion->CPPreversenode82) = *(other->reverseNodeUnion->CPPreversenode82)); break;
	case 83:
		(*(thisObj->reverseNodeUnion->CPPreversenode83) = *(other->reverseNodeUnion->CPPreversenode83)); break;
	case 84:
		(*(thisObj->reverseNodeUnion->CPPreversenode84) = *(other->reverseNodeUnion->CPPreversenode84)); break;
	case 85:
		(*(thisObj->reverseNodeUnion->CPPreversenode85) = *(other->reverseNodeUnion->CPPreversenode85)); break;
	case 86:
		(*(thisObj->reverseNodeUnion->CPPreversenode86) = *(other->reverseNodeUnion->CPPreversenode86)); break;
	case 87:
		(*(thisObj->reverseNodeUnion->CPPreversenode87) = *(other->reverseNodeUnion->CPPreversenode87)); break;
	case 88:
		(*(thisObj->reverseNodeUnion->CPPreversenode88) = *(other->reverseNodeUnion->CPPreversenode88)); break;
	case 89:
		(*(thisObj->reverseNodeUnion->CPPreversenode89) = *(other->reverseNodeUnion->CPPreversenode89)); break;
	case 90:
		(*(thisObj->reverseNodeUnion->CPPreversenode90) = *(other->reverseNodeUnion->CPPreversenode90)); break;
	case 91:
		(*(thisObj->reverseNodeUnion->CPPreversenode91) = *(other->reverseNodeUnion->CPPreversenode91)); break;
	case 92:
		(*(thisObj->reverseNodeUnion->CPPreversenode92) = *(other->reverseNodeUnion->CPPreversenode92)); break;
	case 93:
		(*(thisObj->reverseNodeUnion->CPPreversenode93) = *(other->reverseNodeUnion->CPPreversenode93)); break;
	case 94:
		(*(thisObj->reverseNodeUnion->CPPreversenode94) = *(other->reverseNodeUnion->CPPreversenode94)); break;
	case 95:
		(*(thisObj->reverseNodeUnion->CPPreversenode95) = *(other->reverseNodeUnion->CPPreversenode95)); break;
	case 96:
		(*(thisObj->reverseNodeUnion->CPPreversenode96) = *(other->reverseNodeUnion->CPPreversenode96)); break;
	case 97:
		(*(thisObj->reverseNodeUnion->CPPreversenode97) = *(other->reverseNodeUnion->CPPreversenode97)); break;
	case 98:
		(*(thisObj->reverseNodeUnion->CPPreversenode98) = *(other->reverseNodeUnion->CPPreversenode98)); break;
	case 99:
		(*(thisObj->reverseNodeUnion->CPPreversenode99) = *(other->reverseNodeUnion->CPPreversenode99)); break;
	case 100:
		(*(thisObj->reverseNodeUnion->CPPreversenode100) = *(other->reverseNodeUnion->CPPreversenode100)); break;
	case 101:
		(*(thisObj->reverseNodeUnion->CPPreversenode101) = *(other->reverseNodeUnion->CPPreversenode101)); break;
	case 102:
		(*(thisObj->reverseNodeUnion->CPPreversenode102) = *(other->reverseNodeUnion->CPPreversenode102)); break;
	case 103:
		(*(thisObj->reverseNodeUnion->CPPreversenode103) = *(other->reverseNodeUnion->CPPreversenode103)); break;
	case 104:
		(*(thisObj->reverseNodeUnion->CPPreversenode104) = *(other->reverseNodeUnion->CPPreversenode104)); break;
	case 105:
		(*(thisObj->reverseNodeUnion->CPPreversenode105) = *(other->reverseNodeUnion->CPPreversenode105)); break;
	case 106:
		(*(thisObj->reverseNodeUnion->CPPreversenode106) = *(other->reverseNodeUnion->CPPreversenode106)); break;
	case 107:
		(*(thisObj->reverseNodeUnion->CPPreversenode107) = *(other->reverseNodeUnion->CPPreversenode107)); break;
	case 108:
		(*(thisObj->reverseNodeUnion->CPPreversenode108) = *(other->reverseNodeUnion->CPPreversenode108)); break;
	case 109:
		(*(thisObj->reverseNodeUnion->CPPreversenode109) = *(other->reverseNodeUnion->CPPreversenode109)); break;
	case 110:
		(*(thisObj->reverseNodeUnion->CPPreversenode110) = *(other->reverseNodeUnion->CPPreversenode110)); break;
	case 111:
		(*(thisObj->reverseNodeUnion->CPPreversenode111) = *(other->reverseNodeUnion->CPPreversenode111)); break;
	case 112:
		(*(thisObj->reverseNodeUnion->CPPreversenode112) = *(other->reverseNodeUnion->CPPreversenode112)); break;
	case 113:
		(*(thisObj->reverseNodeUnion->CPPreversenode113) = *(other->reverseNodeUnion->CPPreversenode113)); break;
	case 114:
		(*(thisObj->reverseNodeUnion->CPPreversenode114) = *(other->reverseNodeUnion->CPPreversenode114)); break;
	case 115:
		(*(thisObj->reverseNodeUnion->CPPreversenode115) = *(other->reverseNodeUnion->CPPreversenode115)); break;
	case 116:
		(*(thisObj->reverseNodeUnion->CPPreversenode116) = *(other->reverseNodeUnion->CPPreversenode116)); break;
	case 117:
		(*(thisObj->reverseNodeUnion->CPPreversenode117) = *(other->reverseNodeUnion->CPPreversenode117)); break;
	case 118:
		(*(thisObj->reverseNodeUnion->CPPreversenode118) = *(other->reverseNodeUnion->CPPreversenode118)); break;
	case 119:
		(*(thisObj->reverseNodeUnion->CPPreversenode119) = *(other->reverseNodeUnion->CPPreversenode119)); break;
	case 120:
		(*(thisObj->reverseNodeUnion->CPPreversenode120) = *(other->reverseNodeUnion->CPPreversenode120)); break;
	case 121:
		(*(thisObj->reverseNodeUnion->CPPreversenode121) = *(other->reverseNodeUnion->CPPreversenode121)); break;
	case 122:
		(*(thisObj->reverseNodeUnion->CPPreversenode122) = *(other->reverseNodeUnion->CPPreversenode122)); break;
	case 123:
		(*(thisObj->reverseNodeUnion->CPPreversenode123) = *(other->reverseNodeUnion->CPPreversenode123)); break;
	case 124:
		(*(thisObj->reverseNodeUnion->CPPreversenode124) = *(other->reverseNodeUnion->CPPreversenode124)); break;
	case 125:
		(*(thisObj->reverseNodeUnion->CPPreversenode125) = *(other->reverseNodeUnion->CPPreversenode125)); break;
	case 126:
		(*(thisObj->reverseNodeUnion->CPPreversenode126) = *(other->reverseNodeUnion->CPPreversenode126)); break;
	case 127:
		(*(thisObj->reverseNodeUnion->CPPreversenode127) = *(other->reverseNodeUnion->CPPreversenode127)); break;
	case 128:
		(*(thisObj->reverseNodeUnion->CPPreversenode128) = *(other->reverseNodeUnion->CPPreversenode128)); break;
	case 129:
		(*(thisObj->reverseNodeUnion->CPPreversenode129) = *(other->reverseNodeUnion->CPPreversenode129)); break;
	case 130:
		(*(thisObj->reverseNodeUnion->CPPreversenode130) = *(other->reverseNodeUnion->CPPreversenode130)); break;
	case 131:
		(*(thisObj->reverseNodeUnion->CPPreversenode131) = *(other->reverseNodeUnion->CPPreversenode131)); break;
	case 132:
		(*(thisObj->reverseNodeUnion->CPPreversenode132) = *(other->reverseNodeUnion->CPPreversenode132)); break;
	case 133:
		(*(thisObj->reverseNodeUnion->CPPreversenode133) = *(other->reverseNodeUnion->CPPreversenode133)); break;
	case 134:
		(*(thisObj->reverseNodeUnion->CPPreversenode134) = *(other->reverseNodeUnion->CPPreversenode134)); break;
	case 135:
		(*(thisObj->reverseNodeUnion->CPPreversenode135) = *(other->reverseNodeUnion->CPPreversenode135)); break;
	case 136:
		(*(thisObj->reverseNodeUnion->CPPreversenode136) = *(other->reverseNodeUnion->CPPreversenode136)); break;
	case 137:
		(*(thisObj->reverseNodeUnion->CPPreversenode137) = *(other->reverseNodeUnion->CPPreversenode137)); break;
	case 138:
		(*(thisObj->reverseNodeUnion->CPPreversenode138) = *(other->reverseNodeUnion->CPPreversenode138)); break;
	case 139:
		(*(thisObj->reverseNodeUnion->CPPreversenode139) = *(other->reverseNodeUnion->CPPreversenode139)); break;
	case 140:
		(*(thisObj->reverseNodeUnion->CPPreversenode140) = *(other->reverseNodeUnion->CPPreversenode140)); break;
	case 141:
		(*(thisObj->reverseNodeUnion->CPPreversenode141) = *(other->reverseNodeUnion->CPPreversenode141)); break;
	case 142:
		(*(thisObj->reverseNodeUnion->CPPreversenode142) = *(other->reverseNodeUnion->CPPreversenode142)); break;
	case 143:
		(*(thisObj->reverseNodeUnion->CPPreversenode143) = *(other->reverseNodeUnion->CPPreversenode143)); break;
	case 144:
		(*(thisObj->reverseNodeUnion->CPPreversenode144) = *(other->reverseNodeUnion->CPPreversenode144)); break;
	case 145:
		(*(thisObj->reverseNodeUnion->CPPreversenode145) = *(other->reverseNodeUnion->CPPreversenode145)); break;
	case 146:
		(*(thisObj->reverseNodeUnion->CPPreversenode146) = *(other->reverseNodeUnion->CPPreversenode146)); break;
	case 147:
		(*(thisObj->reverseNodeUnion->CPPreversenode147) = *(other->reverseNodeUnion->CPPreversenode147)); break;
	case 148:
		(*(thisObj->reverseNodeUnion->CPPreversenode148) = *(other->reverseNodeUnion->CPPreversenode148)); break;
	case 149:
		(*(thisObj->reverseNodeUnion->CPPreversenode149) = *(other->reverseNodeUnion->CPPreversenode149)); break;
	case 150:
		(*(thisObj->reverseNodeUnion->CPPreversenode150) = *(other->reverseNodeUnion->CPPreversenode150)); break;
	case 151:
		(*(thisObj->reverseNodeUnion->CPPreversenode151) = *(other->reverseNodeUnion->CPPreversenode151)); break;
	case 152:
		(*(thisObj->reverseNodeUnion->CPPreversenode152) = *(other->reverseNodeUnion->CPPreversenode152)); break;
	case 153:
		(*(thisObj->reverseNodeUnion->CPPreversenode153) = *(other->reverseNodeUnion->CPPreversenode153)); break;
	case 154:
		(*(thisObj->reverseNodeUnion->CPPreversenode154) = *(other->reverseNodeUnion->CPPreversenode154)); break;
	case 155:
		(*(thisObj->reverseNodeUnion->CPPreversenode155) = *(other->reverseNodeUnion->CPPreversenode155)); break;
	case 156:
		(*(thisObj->reverseNodeUnion->CPPreversenode156) = *(other->reverseNodeUnion->CPPreversenode156)); break;
	case 157:
		(*(thisObj->reverseNodeUnion->CPPreversenode157) = *(other->reverseNodeUnion->CPPreversenode157)); break;
	case 158:
		(*(thisObj->reverseNodeUnion->CPPreversenode158) = *(other->reverseNodeUnion->CPPreversenode158)); break;
	case 159:
		(*(thisObj->reverseNodeUnion->CPPreversenode159) = *(other->reverseNodeUnion->CPPreversenode159)); break;
	case 160:
		(*(thisObj->reverseNodeUnion->CPPreversenode160) = *(other->reverseNodeUnion->CPPreversenode160)); break;
	case 161:
		(*(thisObj->reverseNodeUnion->CPPreversenode161) = *(other->reverseNodeUnion->CPPreversenode161)); break;
	case 162:
		(*(thisObj->reverseNodeUnion->CPPreversenode162) = *(other->reverseNodeUnion->CPPreversenode162)); break;
	case 163:
		(*(thisObj->reverseNodeUnion->CPPreversenode163) = *(other->reverseNodeUnion->CPPreversenode163)); break;
	case 164:
		(*(thisObj->reverseNodeUnion->CPPreversenode164) = *(other->reverseNodeUnion->CPPreversenode164)); break;
	case 165:
		(*(thisObj->reverseNodeUnion->CPPreversenode165) = *(other->reverseNodeUnion->CPPreversenode165)); break;
	case 166:
		(*(thisObj->reverseNodeUnion->CPPreversenode166) = *(other->reverseNodeUnion->CPPreversenode166)); break;
	case 167:
		(*(thisObj->reverseNodeUnion->CPPreversenode167) = *(other->reverseNodeUnion->CPPreversenode167)); break;
	case 168:
		(*(thisObj->reverseNodeUnion->CPPreversenode168) = *(other->reverseNodeUnion->CPPreversenode168)); break;
	case 169:
		(*(thisObj->reverseNodeUnion->CPPreversenode169) = *(other->reverseNodeUnion->CPPreversenode169)); break;
	case 170:
		(*(thisObj->reverseNodeUnion->CPPreversenode170) = *(other->reverseNodeUnion->CPPreversenode170)); break;
	case 171:
		(*(thisObj->reverseNodeUnion->CPPreversenode171) = *(other->reverseNodeUnion->CPPreversenode171)); break;
	case 172:
		(*(thisObj->reverseNodeUnion->CPPreversenode172) = *(other->reverseNodeUnion->CPPreversenode172)); break;
	case 173:
		(*(thisObj->reverseNodeUnion->CPPreversenode173) = *(other->reverseNodeUnion->CPPreversenode173)); break;
	case 174:
		(*(thisObj->reverseNodeUnion->CPPreversenode174) = *(other->reverseNodeUnion->CPPreversenode174)); break;
	case 175:
		(*(thisObj->reverseNodeUnion->CPPreversenode175) = *(other->reverseNodeUnion->CPPreversenode175)); break;
	case 176:
		(*(thisObj->reverseNodeUnion->CPPreversenode176) = *(other->reverseNodeUnion->CPPreversenode176)); break;
	case 177:
		(*(thisObj->reverseNodeUnion->CPPreversenode177) = *(other->reverseNodeUnion->CPPreversenode177)); break;
	case 178:
		(*(thisObj->reverseNodeUnion->CPPreversenode178) = *(other->reverseNodeUnion->CPPreversenode178)); break;
	case 179:
		(*(thisObj->reverseNodeUnion->CPPreversenode179) = *(other->reverseNodeUnion->CPPreversenode179)); break;
	case 180:
		(*(thisObj->reverseNodeUnion->CPPreversenode180) = *(other->reverseNodeUnion->CPPreversenode180)); break;
	case 181:
		(*(thisObj->reverseNodeUnion->CPPreversenode181) = *(other->reverseNodeUnion->CPPreversenode181)); break;
	case 182:
		(*(thisObj->reverseNodeUnion->CPPreversenode182) = *(other->reverseNodeUnion->CPPreversenode182)); break;
	case 183:
		(*(thisObj->reverseNodeUnion->CPPreversenode183) = *(other->reverseNodeUnion->CPPreversenode183)); break;
	case 184:
		(*(thisObj->reverseNodeUnion->CPPreversenode184) = *(other->reverseNodeUnion->CPPreversenode184)); break;
	case 185:
		(*(thisObj->reverseNodeUnion->CPPreversenode185) = *(other->reverseNodeUnion->CPPreversenode185)); break;
	case 186:
		(*(thisObj->reverseNodeUnion->CPPreversenode186) = *(other->reverseNodeUnion->CPPreversenode186)); break;
	case 187:
		(*(thisObj->reverseNodeUnion->CPPreversenode187) = *(other->reverseNodeUnion->CPPreversenode187)); break;
	case 188:
		(*(thisObj->reverseNodeUnion->CPPreversenode188) = *(other->reverseNodeUnion->CPPreversenode188)); break;
	case 189:
		(*(thisObj->reverseNodeUnion->CPPreversenode189) = *(other->reverseNodeUnion->CPPreversenode189)); break;
	case 190:
		(*(thisObj->reverseNodeUnion->CPPreversenode190) = *(other->reverseNodeUnion->CPPreversenode190)); break;
	case 191:
		(*(thisObj->reverseNodeUnion->CPPreversenode191) = *(other->reverseNodeUnion->CPPreversenode191)); break;
	case 192:
		(*(thisObj->reverseNodeUnion->CPPreversenode192) = *(other->reverseNodeUnion->CPPreversenode192)); break;
	case 193:
		(*(thisObj->reverseNodeUnion->CPPreversenode193) = *(other->reverseNodeUnion->CPPreversenode193)); break;
	case 194:
		(*(thisObj->reverseNodeUnion->CPPreversenode194) = *(other->reverseNodeUnion->CPPreversenode194)); break;
	case 195:
		(*(thisObj->reverseNodeUnion->CPPreversenode195) = *(other->reverseNodeUnion->CPPreversenode195)); break;
	case 196:
		(*(thisObj->reverseNodeUnion->CPPreversenode196) = *(other->reverseNodeUnion->CPPreversenode196)); break;
	}
	return thisObj;
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedReverseNode<Key, Value>^ UnOrderedMultiMapWapper::CShorpUnOrderedReverseNode<Key, Value>::operator++(CShorpUnOrderedReverseNode<Key, Value>^ thisObj)
{
	if (Object::ReferenceEquals(thisObj, nullptr)) return nullptr;
	if (thisObj->isInitialized == 0) return thisObj;
	thisObj->Next();
	return thisObj;
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedReverseNode<Key, Value>^ UnOrderedMultiMapWapper::CShorpUnOrderedReverseNode<Key, Value>::operator--(CShorpUnOrderedReverseNode<Key, Value>^ thisObj)
{
	if (Object::ReferenceEquals(thisObj, nullptr)) return nullptr;
	if (thisObj->isInitialized == 0) return thisObj;
	thisObj->Previous();
	return thisObj;
}

generic<typename Key, typename Value>
void UnOrderedMultiMapWapper::CShorpUnOrderedReverseNode<Key, Value>::SetIntKeyClassDictionary(System::Collections::Generic::Dictionary<System::Int64, Key>^ ClassDictionary)
{
	if (ClassDictionary == nullptr) return;
	gIntKeyClassDictionary = ClassDictionary;
}

generic<typename Key, typename Value>
void UnOrderedMultiMapWapper::CShorpUnOrderedReverseNode<Key, Value>::SetValueClassDictionary(System::Collections::Generic::Dictionary<System::Int64, Value>^ ClassDictionary)
{
	if (gValueClassDictionary == nullptr) return;
	gValueClassDictionary = ClassDictionary;
}

//generic<typename Key, typename Value>
//MultiMapWapper::CShorpReverseNode<Key, Value>^ MultiMapWapper::CShorpReverseNode<Key, Value>::operator++()
//{
//	if (Object::ReferenceEquals(this, nullptr)) return this;
//	if (isInitialized == 0) return this;
//	Next();
//	return this;
//}

//generic<typename Key, typename Value>
//MultiMapWapper::CShorpReverseNode<Key, Value>^ MultiMapWapper::CShorpReverseNode<Key, Value>::operator++(int)
//{
//	if (Object::ReferenceEquals(this, nullptr)) return this;
//	if (isInitialized == 0) return this;
//	Next();
//	return this;
//}

