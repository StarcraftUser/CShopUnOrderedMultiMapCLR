#include "pch.h"
#include <type_traits>

template <typename T>
void CheckIfPointer(T& var) {
	if (std::is_pointer<T>::value) {
		delete var;
	}
	else {
	}
}

void MarshalString(String^ s, std::string& os)
{
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}

void MarshalString(String^ s, std::wstring& os)
{
	using namespace Runtime::InteropServices;
	const wchar_t* chars =
		(const wchar_t*)(Marshal::StringToHGlobalUni(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}


generic<typename Key, typename Value>
void UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::clear()
{
	switch (nKeyValueType)
	{
	case 0: default:
		return;
	case 1:
		multimapUnion->CPPmultimap1->clear();
		break;
	case 2:
		multimapUnion->CPPmultimap2->clear();
		break;
	case 3:
		multimapUnion->CPPmultimap3->clear();
		break;
	case 4:
		multimapUnion->CPPmultimap4->clear();
		break;
	case 5:
		multimapUnion->CPPmultimap5->clear();
		break;
	case 6:
		multimapUnion->CPPmultimap6->clear();
		break;
	case 7:
		multimapUnion->CPPmultimap7->clear();
		break;
	case 8:
		multimapUnion->CPPmultimap8->clear();
		break;
	case 9:
		multimapUnion->CPPmultimap9->clear();
		break;
	case 10:
		multimapUnion->CPPmultimap10->clear();
		break;
	case 11:
		multimapUnion->CPPmultimap11->clear();
		break;
	case 12:
		multimapUnion->CPPmultimap12->clear();
		break;
	case 13:
		multimapUnion->CPPmultimap13->clear();
		break;
	case 14:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<unsigned char, __int64> iter;
			for (iter = multimapUnion->CPPmultimap14->begin(); iter != multimapUnion->CPPmultimap14->end(); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		multimapUnion->CPPmultimap14->clear();
		break;
	case 15:
		multimapUnion->CPPmultimap15->clear();
		break;
	case 16:
		multimapUnion->CPPmultimap16->clear();
		break;
	case 17:
		multimapUnion->CPPmultimap17->clear();
		break;
	case 18:
		multimapUnion->CPPmultimap18->clear();
		break;
	case 19:
		multimapUnion->CPPmultimap19->clear();
		break;
	case 20:
		multimapUnion->CPPmultimap20->clear();
		break;
	case 21:
		multimapUnion->CPPmultimap21->clear();
		break;
	case 22:
		multimapUnion->CPPmultimap22->clear();
		break;
	case 23:
		multimapUnion->CPPmultimap23->clear();
		break;
	case 24:
		multimapUnion->CPPmultimap24->clear();
		break;
	case 25:
		multimapUnion->CPPmultimap25->clear();
		break;
	case 26:
		multimapUnion->CPPmultimap26->clear();
		break;
	case 27:
		multimapUnion->CPPmultimap27->clear();
		break;
	case 28:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<char, __int64> iter;
			for (iter = multimapUnion->CPPmultimap28->begin(); iter != multimapUnion->CPPmultimap28->end(); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		multimapUnion->CPPmultimap28->clear();
		break;
	case 29:
		multimapUnion->CPPmultimap29->clear();
		break;
	case 30:
		multimapUnion->CPPmultimap30->clear();
		break;
	case 31:
		multimapUnion->CPPmultimap31->clear();
		break;
	case 32:
		multimapUnion->CPPmultimap32->clear();
		break;
	case 33:
		multimapUnion->CPPmultimap33->clear();
		break;
	case 34:
		multimapUnion->CPPmultimap34->clear();
		break;
	case 35:
		multimapUnion->CPPmultimap35->clear();
		break;
	case 36:
		multimapUnion->CPPmultimap36->clear();
		break;
	case 37:
		multimapUnion->CPPmultimap37->clear();
		break;
	case 38:
		multimapUnion->CPPmultimap38->clear();
		break;
	case 39:
		multimapUnion->CPPmultimap39->clear();
		break;
	case 40:
		multimapUnion->CPPmultimap40->clear();
		break;
	case 41:
		multimapUnion->CPPmultimap41->clear();
		break;
	case 42:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<short, __int64> iter;
			for (iter = multimapUnion->CPPmultimap42->begin(); iter != multimapUnion->CPPmultimap42->end(); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		multimapUnion->CPPmultimap42->clear();
		break;
	case 43:
		multimapUnion->CPPmultimap43->clear();
		break;
	case 44:
		multimapUnion->CPPmultimap44->clear();
		break;
	case 45:
		multimapUnion->CPPmultimap45->clear();
		break;
	case 46:
		multimapUnion->CPPmultimap46->clear();
		break;
	case 47:
		multimapUnion->CPPmultimap47->clear();
		break;
	case 48:
		multimapUnion->CPPmultimap48->clear();
		break;
	case 49:
		multimapUnion->CPPmultimap49->clear();
		break;
	case 50:
		multimapUnion->CPPmultimap50->clear();
		break;
	case 51:
		multimapUnion->CPPmultimap51->clear();
		break;
	case 52:
		multimapUnion->CPPmultimap52->clear();
		break;
	case 53:
		multimapUnion->CPPmultimap53->clear();
		break;
	case 54:
		multimapUnion->CPPmultimap54->clear();
		break;
	case 55:
		multimapUnion->CPPmultimap55->clear();
		break;
	case 56:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<unsigned short, __int64> iter;
			for (iter = multimapUnion->CPPmultimap56->begin(); iter != multimapUnion->CPPmultimap56->end(); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		multimapUnion->CPPmultimap56->clear();
		break;
	case 57:
		multimapUnion->CPPmultimap57->clear();
		break;
	case 58:
		multimapUnion->CPPmultimap58->clear();
		break;
	case 59:
		multimapUnion->CPPmultimap59->clear();
		break;
	case 60:
		multimapUnion->CPPmultimap60->clear();
		break;
	case 61:
		multimapUnion->CPPmultimap61->clear();
		break;
	case 62:
		multimapUnion->CPPmultimap62->clear();
		break;
	case 63:
		multimapUnion->CPPmultimap63->clear();
		break;
	case 64:
		multimapUnion->CPPmultimap64->clear();
		break;
	case 65:
		multimapUnion->CPPmultimap65->clear();
		break;
	case 66:
		multimapUnion->CPPmultimap66->clear();
		break;
	case 67:
		multimapUnion->CPPmultimap67->clear();
		break;
	case 68:
		multimapUnion->CPPmultimap68->clear();
		break;
	case 69:
		multimapUnion->CPPmultimap69->clear();
		break;
	case 70:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<int, __int64> iter;
			for (iter = multimapUnion->CPPmultimap70->begin(); iter != multimapUnion->CPPmultimap70->end(); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		multimapUnion->CPPmultimap70->clear();
		break;
	case 71:
		multimapUnion->CPPmultimap71->clear();
		break;
	case 72:
		multimapUnion->CPPmultimap72->clear();
		break;
	case 73:
		multimapUnion->CPPmultimap73->clear();
		break;
	case 74:
		multimapUnion->CPPmultimap74->clear();
		break;
	case 75:
		multimapUnion->CPPmultimap75->clear();
		break;
	case 76:
		multimapUnion->CPPmultimap76->clear();
		break;
	case 77:
		multimapUnion->CPPmultimap77->clear();
		break;
	case 78:
		multimapUnion->CPPmultimap78->clear();
		break;
	case 79:
		multimapUnion->CPPmultimap79->clear();
		break;
	case 80:
		multimapUnion->CPPmultimap80->clear();
		break;
	case 81:
		multimapUnion->CPPmultimap81->clear();
		break;
	case 82:
		multimapUnion->CPPmultimap82->clear();
		break;
	case 83:
		multimapUnion->CPPmultimap83->clear();
		break;
	case 84:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<unsigned int, __int64> iter;
			for (iter = multimapUnion->CPPmultimap84->begin(); iter != multimapUnion->CPPmultimap84->end(); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		multimapUnion->CPPmultimap84->clear();
		break;
	case 85:
		multimapUnion->CPPmultimap85->clear();
		break;
	case 86:
		multimapUnion->CPPmultimap86->clear();
		break;
	case 87:
		multimapUnion->CPPmultimap87->clear();
		break;
	case 88:
		multimapUnion->CPPmultimap88->clear();
		break;
	case 89:
		multimapUnion->CPPmultimap89->clear();
		break;
	case 90:
		multimapUnion->CPPmultimap90->clear();
		break;
	case 91:
		multimapUnion->CPPmultimap91->clear();
		break;
	case 92:
		multimapUnion->CPPmultimap92->clear();
		break;
	case 93:
		multimapUnion->CPPmultimap93->clear();
		break;
	case 94:
		multimapUnion->CPPmultimap94->clear();
		break;
	case 95:
		multimapUnion->CPPmultimap95->clear();
		break;
	case 96:
		multimapUnion->CPPmultimap96->clear();
		break;
	case 97:
		multimapUnion->CPPmultimap97->clear();
		break;
	case 98:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<long long, __int64> iter;
			for (iter = multimapUnion->CPPmultimap98->begin(); iter != multimapUnion->CPPmultimap98->end(); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		multimapUnion->CPPmultimap98->clear();
		break;
	case 99:
		multimapUnion->CPPmultimap99->clear();
		break;
	case 100:
		multimapUnion->CPPmultimap100->clear();
		break;
	case 101:
		multimapUnion->CPPmultimap101->clear();
		break;
	case 102:
		multimapUnion->CPPmultimap102->clear();
		break;
	case 103:
		multimapUnion->CPPmultimap103->clear();
		break;
	case 104:
		multimapUnion->CPPmultimap104->clear();
		break;
	case 105:
		multimapUnion->CPPmultimap105->clear();
		break;
	case 106:
		multimapUnion->CPPmultimap106->clear();
		break;
	case 107:
		multimapUnion->CPPmultimap107->clear();
		break;
	case 108:
		multimapUnion->CPPmultimap108->clear();
		break;
	case 109:
		multimapUnion->CPPmultimap109->clear();
		break;
	case 110:
		multimapUnion->CPPmultimap110->clear();
		break;
	case 111:
		multimapUnion->CPPmultimap111->clear();
		break;
	case 112:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<unsigned long long, __int64> iter;
			for (iter = multimapUnion->CPPmultimap112->begin(); iter != multimapUnion->CPPmultimap112->end(); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		multimapUnion->CPPmultimap112->clear();
		break;
	case 113:
		multimapUnion->CPPmultimap113->clear();
		break;
	case 114:
		multimapUnion->CPPmultimap114->clear();
		break;
	case 115:
		multimapUnion->CPPmultimap115->clear();
		break;
	case 116:
		multimapUnion->CPPmultimap116->clear();
		break;
	case 117:
		multimapUnion->CPPmultimap117->clear();
		break;
	case 118:
		multimapUnion->CPPmultimap118->clear();
		break;
	case 119:
		multimapUnion->CPPmultimap119->clear();
		break;
	case 120:
		multimapUnion->CPPmultimap120->clear();
		break;
	case 121:
		multimapUnion->CPPmultimap121->clear();
		break;
	case 122:
		multimapUnion->CPPmultimap122->clear();
		break;
	case 123:
		multimapUnion->CPPmultimap123->clear();
		break;
	case 124:
		multimapUnion->CPPmultimap124->clear();
		break;
	case 125:
		multimapUnion->CPPmultimap125->clear();
		break;
	case 126:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<float, __int64> iter;
			for (iter = multimapUnion->CPPmultimap126->begin(); iter != multimapUnion->CPPmultimap126->end(); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		multimapUnion->CPPmultimap126->clear();
		break;
	case 127:
		multimapUnion->CPPmultimap127->clear();
		break;
	case 128:
		multimapUnion->CPPmultimap128->clear();
		break;
	case 129:
		multimapUnion->CPPmultimap129->clear();
		break;
	case 130:
		multimapUnion->CPPmultimap130->clear();
		break;
	case 131:
		multimapUnion->CPPmultimap131->clear();
		break;
	case 132:
		multimapUnion->CPPmultimap132->clear();
		break;
	case 133:
		multimapUnion->CPPmultimap133->clear();
		break;
	case 134:
		multimapUnion->CPPmultimap134->clear();
		break;
	case 135:
		multimapUnion->CPPmultimap135->clear();
		break;
	case 136:
		multimapUnion->CPPmultimap136->clear();
		break;
	case 137:
		multimapUnion->CPPmultimap137->clear();
		break;
	case 138:
		multimapUnion->CPPmultimap138->clear();
		break;
	case 139:
		multimapUnion->CPPmultimap139->clear();
		break;
	case 140:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<double, __int64> iter;
			for (iter = multimapUnion->CPPmultimap140->begin(); iter != multimapUnion->CPPmultimap140->end(); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		multimapUnion->CPPmultimap140->clear();
		break;
	case 141:
		multimapUnion->CPPmultimap141->clear();
		break;
	case 142:
		multimapUnion->CPPmultimap142->clear();
		break;
	case 143:
		multimapUnion->CPPmultimap143->clear();
		break;
	case 144:
		multimapUnion->CPPmultimap144->clear();
		break;
	case 145:
		multimapUnion->CPPmultimap145->clear();
		break;
	case 146:
		multimapUnion->CPPmultimap146->clear();
		break;
	case 147:
		multimapUnion->CPPmultimap147->clear();
		break;
	case 148:
		multimapUnion->CPPmultimap148->clear();
		break;
	case 149:
		multimapUnion->CPPmultimap149->clear();
		break;
	case 150:
		multimapUnion->CPPmultimap150->clear();
		break;
	case 151:
		multimapUnion->CPPmultimap151->clear();
		break;
	case 152:
		multimapUnion->CPPmultimap152->clear();
		break;
	case 153:
		multimapUnion->CPPmultimap153->clear();
		break;
	case 154:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<wchar_t, __int64> iter;
			for (iter = multimapUnion->CPPmultimap154->begin(); iter != multimapUnion->CPPmultimap154->end(); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		multimapUnion->CPPmultimap154->clear();
		break;
	case 155:
		multimapUnion->CPPmultimap155->clear();
		break;
	case 156:
		multimapUnion->CPPmultimap156->clear();
		break;
	case 157:
		multimapUnion->CPPmultimap157->clear();
		break;
	case 158:
		multimapUnion->CPPmultimap158->clear();
		break;
	case 159:
		multimapUnion->CPPmultimap159->clear();
		break;
	case 160:
		multimapUnion->CPPmultimap160->clear();
		break;
	case 161:
		multimapUnion->CPPmultimap161->clear();
		break;
	case 162:
		multimapUnion->CPPmultimap162->clear();
		break;
	case 163:
		multimapUnion->CPPmultimap163->clear();
		break;
	case 164:
		multimapUnion->CPPmultimap164->clear();
		break;
	case 165:
		multimapUnion->CPPmultimap165->clear();
		break;
	case 166:
		multimapUnion->CPPmultimap166->clear();
		break;
	case 167:
		multimapUnion->CPPmultimap167->clear();
		break;
	case 168:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<bool, __int64> iter;
			for (iter = multimapUnion->CPPmultimap168->begin(); iter != multimapUnion->CPPmultimap168->end(); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		multimapUnion->CPPmultimap168->clear();
		break;
	case 169:
		multimapUnion->CPPmultimap169->clear();
		break;
	case 170:
		multimapUnion->CPPmultimap170->clear();
		break;
	case 171:
		multimapUnion->CPPmultimap171->clear();
		break;
	case 172:
		multimapUnion->CPPmultimap172->clear();
		break;
	case 173:
		multimapUnion->CPPmultimap173->clear();
		break;
	case 174:
		multimapUnion->CPPmultimap174->clear();
		break;
	case 175:
		multimapUnion->CPPmultimap175->clear();
		break;
	case 176:
		multimapUnion->CPPmultimap176->clear();
		break;
	case 177:
		multimapUnion->CPPmultimap177->clear();
		break;
	case 178:
		multimapUnion->CPPmultimap178->clear();
		break;
	case 179:
		multimapUnion->CPPmultimap179->clear();
		break;
	case 180:
		multimapUnion->CPPmultimap180->clear();
		break;
	case 181:
		multimapUnion->CPPmultimap181->clear();
		break;
	case 182:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<std::wstring, __int64> iter;
			for (iter = multimapUnion->CPPmultimap182->begin(); iter != multimapUnion->CPPmultimap182->end(); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		multimapUnion->CPPmultimap182->clear();
		break;
	case 183:
		multimapUnion->CPPmultimap183->clear();
		break;
	case 184:
		multimapUnion->CPPmultimap184->clear();
		break;
	case 185:
		multimapUnion->CPPmultimap185->clear();
		break;
	case 186:
		multimapUnion->CPPmultimap186->clear();
		break;
	case 187:
		multimapUnion->CPPmultimap187->clear();
		break;
	case 188:
		multimapUnion->CPPmultimap188->clear();
		break;
	case 189:
		multimapUnion->CPPmultimap189->clear();
		break;
	case 190:
		multimapUnion->CPPmultimap190->clear();
		break;
	case 191:
		multimapUnion->CPPmultimap191->clear();
		break;
	case 192:
		multimapUnion->CPPmultimap192->clear();
		break;
	case 193:
		multimapUnion->CPPmultimap193->clear();
		break;
	case 194:
		multimapUnion->CPPmultimap194->clear();
		break;
	case 195:
		multimapUnion->CPPmultimap195->clear();
		break;
	case 196:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<__int64, __int64> iter;
			for (iter = multimapUnion->CPPmultimap196->begin(); iter != multimapUnion->CPPmultimap196->end(); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		multimapUnion->CPPmultimap196->clear();
		break;
	}
	if (gKeyClassDictionary)
	{
		gKeyClassDictionary->Clear();
	}
	if (gIntKeyClassDictionary)
	{
		gIntKeyClassDictionary->Clear();
	}
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::emplace(Key key, Value value)
{
	if (Object::ReferenceEquals(key, nullptr)) return nullptr;
	if (Object::ReferenceEquals(value, nullptr)) return nullptr;
	Type^ keyType = Key::typeid;
	Type^ valueType = Value::typeid;

	unsigned char KeyUchar = 0;
	char KeyChar = 0;
	short KeyShort = 0;
	unsigned short KeyUshort = 0;
	int KeyInt = 0;
	unsigned int KeyUint = 0;
	long long KeyLonglong = 0;
	unsigned long long KeyUlonglong = 0;
	float KeyFloat = 0.0f;
	double KeyDouble = 0;
	wchar_t KeyWchar = 0;
	bool KeyBool = false;
	std::wstring KeyWstring = L"";
	__int64 Key__Int = 0;

	if (keyType->Equals(System::Byte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUchar = static_cast<unsigned char>(safe_cast<System::Byte>(managedObject));
	}
	else if (keyType->Equals(System::SByte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyChar = static_cast<char>(safe_cast<System::SByte>(managedObject));
	}
	else if (keyType->Equals(System::Int16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyShort = static_cast<short>(safe_cast<System::Int16>(managedObject));
	}
	else if (keyType->Equals(System::UInt16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUshort = static_cast<unsigned short>(safe_cast<System::UInt16>(managedObject));
	}
	else if (keyType->Equals(System::Int32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyInt = static_cast<int>(safe_cast<System::Int32>(managedObject));
	}
	else if (keyType->Equals(System::UInt32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUint = static_cast<unsigned int>(safe_cast<System::UInt32>(managedObject));
	}
	else if (keyType->Equals(System::Int64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyLonglong = static_cast<long long>(safe_cast<System::Int64>(managedObject));
	}
	else if (keyType->Equals(System::UInt64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUlonglong = static_cast<unsigned long long>(safe_cast<System::UInt64>(managedObject));
	}
	else if (keyType->Equals(System::Single::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyFloat = static_cast<float>(safe_cast<System::Single>(managedObject));
	}
	else if (keyType->Equals(System::Double::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyDouble = static_cast<double>(safe_cast<System::Double>(managedObject));
	}
	else if (keyType->Equals(System::Char::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyWchar = static_cast<wchar_t>(safe_cast<System::Char>(managedObject));
	}
	else if (keyType->Equals(System::Boolean::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyBool = static_cast<bool>(safe_cast<System::Boolean>(managedObject));
	}
	else if (keyType->Equals(System::String::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		MarshalString(safe_cast<System::String^>(managedObject), KeyWstring);
	}
	else if (keyType->IsClass)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			gKeyClassDictionary->Add(key, nDictionaryKeyCount);
			gIntKeyClassDictionary->Add(nDictionaryKeyCount, key);
			Key__Int = nDictionaryKeyCount;
			nDictionaryKeyCount++;
		}
	}
	else if (keyType->IsValueType && !keyType->IsPrimitive && !keyType->IsEnum)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			gKeyClassDictionary->Add(key, nDictionaryKeyCount);
			gIntKeyClassDictionary->Add(nDictionaryKeyCount, key);
			Key__Int = nDictionaryKeyCount;
			nDictionaryKeyCount++;
		}
	}
	else if (keyType->IsInterface)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			gKeyClassDictionary->Add(key, nDictionaryKeyCount);
			gIntKeyClassDictionary->Add(nDictionaryKeyCount, key);
			Key__Int = nDictionaryKeyCount;
			nDictionaryKeyCount++;
		}
	}
	else
	{
		return nullptr;
	}

	unsigned char ValueUchar = 0;
	char ValueChar = 0;
	short ValueShort = 0;
	unsigned short ValueUshort = 0;
	int ValueInt = 0;
	unsigned int ValueUint = 0;
	long long ValueLonglong = 0;
	unsigned long long ValueUlonglong = 0;
	float ValueFloat = 0.0f;
	double ValueDouble = 0;
	wchar_t ValueWchar = 0;
	bool ValueBool = false;
	std::wstring ValueWstring = L"";
	__int64 Value__Int = 0;

	if (valueType->Equals(System::Byte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUchar = static_cast<unsigned char>(safe_cast<System::Byte>(managedObject));
	}
	else if (valueType->Equals(System::SByte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueChar = static_cast<char>(safe_cast<System::SByte>(managedObject));
	}
	else if (valueType->Equals(System::Int16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueShort = static_cast<short>(safe_cast<System::Int16>(managedObject));
	}
	else if (valueType->Equals(System::UInt16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUshort = static_cast<unsigned short>(safe_cast<System::UInt16>(managedObject));
	}
	else if (valueType->Equals(System::Int32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueInt = static_cast<int>(safe_cast<System::Int32>(managedObject));
	}
	else if (valueType->Equals(System::UInt32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUint = static_cast<unsigned int>(safe_cast<System::UInt32>(managedObject));
	}
	else if (valueType->Equals(System::Int64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueLonglong = static_cast<long long>(safe_cast<System::Int64>(managedObject));
	}
	else if (valueType->Equals(System::UInt64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUlonglong = static_cast<unsigned long long>(safe_cast<System::UInt64>(managedObject));
	}
	else if (valueType->Equals(System::Single::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueFloat = static_cast<float>(safe_cast<System::Single>(managedObject));
	}
	else if (valueType->Equals(System::Double::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueDouble = static_cast<double>(safe_cast<System::Double>(managedObject));
	}
	else if (valueType->Equals(System::Char::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueWchar = static_cast<wchar_t>(safe_cast<System::Char>(managedObject));
	}
	else if (valueType->Equals(System::Boolean::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueBool = static_cast<bool>(safe_cast<System::Boolean>(managedObject));
	}
	else if (valueType->Equals(System::String::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		MarshalString(safe_cast<System::String^>(managedObject), ValueWstring);
	}
	else if (valueType->IsClass)
	{
		gValueClassDictionary->Add(nDictionaryValueCount, value);
		Value__Int = nDictionaryValueCount;
		nDictionaryValueCount++;
	}
	else if (valueType->IsValueType && !valueType->IsPrimitive && !valueType->IsEnum)
	{
		gValueClassDictionary->Add(nDictionaryValueCount, value);
		Value__Int = nDictionaryValueCount;
		nDictionaryValueCount++;
	}
	else if (valueType->IsInterface)
	{
		gValueClassDictionary->Add(nDictionaryValueCount, value);
		Value__Int = nDictionaryValueCount;
		nDictionaryValueCount++;
	}
	else
	{
		return nullptr;
	}

	switch (nKeyValueType)
	{
	case 0: default:
		return nullptr;
	case 1:
		*(multiNode->GetNode()->CPPmultinode1) = multimapUnion->CPPmultimap1->emplace(KeyUchar, ValueUchar);
		break;
	case 2:
		*(multiNode->GetNode()->CPPmultinode2) = multimapUnion->CPPmultimap2->emplace(KeyUchar, ValueChar);
		break;
	case 3:
		*(multiNode->GetNode()->CPPmultinode3) = multimapUnion->CPPmultimap3->emplace(KeyUchar, ValueShort);
		break;
	case 4:
		*(multiNode->GetNode()->CPPmultinode4) = multimapUnion->CPPmultimap4->emplace(KeyUchar, ValueUshort);
		break;
	case 5:
		*(multiNode->GetNode()->CPPmultinode5) = multimapUnion->CPPmultimap5->emplace(KeyUchar, ValueInt);
		break;
	case 6:
		*(multiNode->GetNode()->CPPmultinode6) = multimapUnion->CPPmultimap6->emplace(KeyUchar, ValueUint);
		break;
	case 7:
		*(multiNode->GetNode()->CPPmultinode7) = multimapUnion->CPPmultimap7->emplace(KeyUchar, ValueLonglong);
		break;
	case 8:
		*(multiNode->GetNode()->CPPmultinode8) = multimapUnion->CPPmultimap8->emplace(KeyUchar, ValueUlonglong);
		break;
	case 9:
		*(multiNode->GetNode()->CPPmultinode9) = multimapUnion->CPPmultimap9->emplace(KeyUchar, ValueFloat);
		break;
	case 10:
		*(multiNode->GetNode()->CPPmultinode10) = multimapUnion->CPPmultimap10->emplace(KeyUchar, ValueDouble);
		break;
	case 11:
		*(multiNode->GetNode()->CPPmultinode11) = multimapUnion->CPPmultimap11->emplace(KeyUchar, ValueWchar);
		break;
	case 12:
		*(multiNode->GetNode()->CPPmultinode12) = multimapUnion->CPPmultimap12->emplace(KeyUchar, ValueBool);
		break;
	case 13:
		*(multiNode->GetNode()->CPPmultinode13) = multimapUnion->CPPmultimap13->emplace(KeyUchar, ValueWstring);
		break;
	case 14:
		*(multiNode->GetNode()->CPPmultinode14) = multimapUnion->CPPmultimap14->emplace(KeyUchar, Value__Int);
		break;
	case 15:
		*(multiNode->GetNode()->CPPmultinode15) = multimapUnion->CPPmultimap15->emplace(KeyChar, ValueUchar);
		break;
	case 16:
		*(multiNode->GetNode()->CPPmultinode16) = multimapUnion->CPPmultimap16->emplace(KeyChar, ValueChar);
		break;
	case 17:
		*(multiNode->GetNode()->CPPmultinode17) = multimapUnion->CPPmultimap17->emplace(KeyChar, ValueShort);
		break;
	case 18:
		*(multiNode->GetNode()->CPPmultinode18) = multimapUnion->CPPmultimap18->emplace(KeyChar, ValueUshort);
		break;
	case 19:
		*(multiNode->GetNode()->CPPmultinode19) = multimapUnion->CPPmultimap19->emplace(KeyChar, ValueInt);
		break;
	case 20:
		*(multiNode->GetNode()->CPPmultinode20) = multimapUnion->CPPmultimap20->emplace(KeyChar, ValueUint);
		break;
	case 21:
		*(multiNode->GetNode()->CPPmultinode21) = multimapUnion->CPPmultimap21->emplace(KeyChar, ValueLonglong);
		break;
	case 22:
		*(multiNode->GetNode()->CPPmultinode22) = multimapUnion->CPPmultimap22->emplace(KeyChar, ValueUlonglong);
		break;
	case 23:
		*(multiNode->GetNode()->CPPmultinode23) = multimapUnion->CPPmultimap23->emplace(KeyChar, ValueFloat);
		break;
	case 24:
		*(multiNode->GetNode()->CPPmultinode24) = multimapUnion->CPPmultimap24->emplace(KeyChar, ValueDouble);
		break;
	case 25:
		*(multiNode->GetNode()->CPPmultinode25) = multimapUnion->CPPmultimap25->emplace(KeyChar, ValueWchar);
		break;
	case 26:
		*(multiNode->GetNode()->CPPmultinode26) = multimapUnion->CPPmultimap26->emplace(KeyChar, ValueBool);
		break;
	case 27:
		*(multiNode->GetNode()->CPPmultinode27) = multimapUnion->CPPmultimap27->emplace(KeyChar, ValueWstring);
		break;
	case 28:
		*(multiNode->GetNode()->CPPmultinode28) = multimapUnion->CPPmultimap28->emplace(KeyChar, Value__Int);
		break;
	case 29:
		*(multiNode->GetNode()->CPPmultinode29) = multimapUnion->CPPmultimap29->emplace(KeyShort, ValueUchar);
		break;
	case 30:
		*(multiNode->GetNode()->CPPmultinode30) = multimapUnion->CPPmultimap30->emplace(KeyShort, ValueChar);
		break;
	case 31:
		*(multiNode->GetNode()->CPPmultinode31) = multimapUnion->CPPmultimap31->emplace(KeyShort, ValueShort);
		break;
	case 32:
		*(multiNode->GetNode()->CPPmultinode32) = multimapUnion->CPPmultimap32->emplace(KeyShort, ValueUshort);
		break;
	case 33:
		*(multiNode->GetNode()->CPPmultinode33) = multimapUnion->CPPmultimap33->emplace(KeyShort, ValueInt);
		break;
	case 34:
		*(multiNode->GetNode()->CPPmultinode34) = multimapUnion->CPPmultimap34->emplace(KeyShort, ValueUint);
		break;
	case 35:
		*(multiNode->GetNode()->CPPmultinode35) = multimapUnion->CPPmultimap35->emplace(KeyShort, ValueLonglong);
		break;
	case 36:
		*(multiNode->GetNode()->CPPmultinode36) = multimapUnion->CPPmultimap36->emplace(KeyShort, ValueUlonglong);
		break;
	case 37:
		*(multiNode->GetNode()->CPPmultinode37) = multimapUnion->CPPmultimap37->emplace(KeyShort, ValueFloat);
		break;
	case 38:
		*(multiNode->GetNode()->CPPmultinode38) = multimapUnion->CPPmultimap38->emplace(KeyShort, ValueDouble);
		break;
	case 39:
		*(multiNode->GetNode()->CPPmultinode39) = multimapUnion->CPPmultimap39->emplace(KeyShort, ValueWchar);
		break;
	case 40:
		*(multiNode->GetNode()->CPPmultinode40) = multimapUnion->CPPmultimap40->emplace(KeyShort, ValueBool);
		break;
	case 41:
		*(multiNode->GetNode()->CPPmultinode41) = multimapUnion->CPPmultimap41->emplace(KeyShort, ValueWstring);
		break;
	case 42:
		*(multiNode->GetNode()->CPPmultinode42) = multimapUnion->CPPmultimap42->emplace(KeyShort, Value__Int);
		break;
	case 43:
		*(multiNode->GetNode()->CPPmultinode43) = multimapUnion->CPPmultimap43->emplace(KeyUshort, ValueUchar);
		break;
	case 44:
		*(multiNode->GetNode()->CPPmultinode44) = multimapUnion->CPPmultimap44->emplace(KeyUshort, ValueChar);
		break;
	case 45:
		*(multiNode->GetNode()->CPPmultinode45) = multimapUnion->CPPmultimap45->emplace(KeyUshort, ValueShort);
		break;
	case 46:
		*(multiNode->GetNode()->CPPmultinode46) = multimapUnion->CPPmultimap46->emplace(KeyUshort, ValueUshort);
		break;
	case 47:
		*(multiNode->GetNode()->CPPmultinode47) = multimapUnion->CPPmultimap47->emplace(KeyUshort, ValueInt);
		break;
	case 48:
		*(multiNode->GetNode()->CPPmultinode48) = multimapUnion->CPPmultimap48->emplace(KeyUshort, ValueUint);
		break;
	case 49:
		*(multiNode->GetNode()->CPPmultinode49) = multimapUnion->CPPmultimap49->emplace(KeyUshort, ValueLonglong);
		break;
	case 50:
		*(multiNode->GetNode()->CPPmultinode50) = multimapUnion->CPPmultimap50->emplace(KeyUshort, ValueUlonglong);
		break;
	case 51:
		*(multiNode->GetNode()->CPPmultinode51) = multimapUnion->CPPmultimap51->emplace(KeyUshort, ValueFloat);
		break;
	case 52:
		*(multiNode->GetNode()->CPPmultinode52) = multimapUnion->CPPmultimap52->emplace(KeyUshort, ValueDouble);
		break;
	case 53:
		*(multiNode->GetNode()->CPPmultinode53) = multimapUnion->CPPmultimap53->emplace(KeyUshort, ValueWchar);
		break;
	case 54:
		*(multiNode->GetNode()->CPPmultinode54) = multimapUnion->CPPmultimap54->emplace(KeyUshort, ValueBool);
		break;
	case 55:
		*(multiNode->GetNode()->CPPmultinode55) = multimapUnion->CPPmultimap55->emplace(KeyUshort, ValueWstring);
		break;
	case 56:
		*(multiNode->GetNode()->CPPmultinode56) = multimapUnion->CPPmultimap56->emplace(KeyUshort, Value__Int);
		break;
	case 57:
		*(multiNode->GetNode()->CPPmultinode57) = multimapUnion->CPPmultimap57->emplace(KeyInt, ValueUchar);
		break;
	case 58:
		*(multiNode->GetNode()->CPPmultinode58) = multimapUnion->CPPmultimap58->emplace(KeyInt, ValueChar);
		break;
	case 59:
		*(multiNode->GetNode()->CPPmultinode59) = multimapUnion->CPPmultimap59->emplace(KeyInt, ValueShort);
		break;
	case 60:
		*(multiNode->GetNode()->CPPmultinode60) = multimapUnion->CPPmultimap60->emplace(KeyInt, ValueUshort);
		break;
	case 61:
		*(multiNode->GetNode()->CPPmultinode61) = multimapUnion->CPPmultimap61->emplace(KeyInt, ValueInt);
		break;
	case 62:
		*(multiNode->GetNode()->CPPmultinode62) = multimapUnion->CPPmultimap62->emplace(KeyInt, ValueUint);
		break;
	case 63:
		*(multiNode->GetNode()->CPPmultinode63) = multimapUnion->CPPmultimap63->emplace(KeyInt, ValueLonglong);
		break;
	case 64:
		*(multiNode->GetNode()->CPPmultinode64) = multimapUnion->CPPmultimap64->emplace(KeyInt, ValueUlonglong);
		break;
	case 65:
		*(multiNode->GetNode()->CPPmultinode65) = multimapUnion->CPPmultimap65->emplace(KeyInt, ValueFloat);
		break;
	case 66:
		*(multiNode->GetNode()->CPPmultinode66) = multimapUnion->CPPmultimap66->emplace(KeyInt, ValueDouble);
		break;
	case 67:
		*(multiNode->GetNode()->CPPmultinode67) = multimapUnion->CPPmultimap67->emplace(KeyInt, ValueWchar);
		break;
	case 68:
		*(multiNode->GetNode()->CPPmultinode68) = multimapUnion->CPPmultimap68->emplace(KeyInt, ValueBool);
		break;
	case 69:
		*(multiNode->GetNode()->CPPmultinode69) = multimapUnion->CPPmultimap69->emplace(KeyInt, ValueWstring);
		break;
	case 70:
		*(multiNode->GetNode()->CPPmultinode70) = multimapUnion->CPPmultimap70->emplace(KeyInt, Value__Int);
		break;
	case 71:
		*(multiNode->GetNode()->CPPmultinode71) = multimapUnion->CPPmultimap71->emplace(KeyUint, ValueUchar);
		break;
	case 72:
		*(multiNode->GetNode()->CPPmultinode72) = multimapUnion->CPPmultimap72->emplace(KeyUint, ValueChar);
		break;
	case 73:
		*(multiNode->GetNode()->CPPmultinode73) = multimapUnion->CPPmultimap73->emplace(KeyUint, ValueShort);
		break;
	case 74:
		*(multiNode->GetNode()->CPPmultinode74) = multimapUnion->CPPmultimap74->emplace(KeyUint, ValueUshort);
		break;
	case 75:
		*(multiNode->GetNode()->CPPmultinode75) = multimapUnion->CPPmultimap75->emplace(KeyUint, ValueInt);
		break;
	case 76:
		*(multiNode->GetNode()->CPPmultinode76) = multimapUnion->CPPmultimap76->emplace(KeyUint, ValueUint);
		break;
	case 77:
		*(multiNode->GetNode()->CPPmultinode77) = multimapUnion->CPPmultimap77->emplace(KeyUint, ValueLonglong);
		break;
	case 78:
		*(multiNode->GetNode()->CPPmultinode78) = multimapUnion->CPPmultimap78->emplace(KeyUint, ValueUlonglong);
		break;
	case 79:
		*(multiNode->GetNode()->CPPmultinode79) = multimapUnion->CPPmultimap79->emplace(KeyUint, ValueFloat);
		break;
	case 80:
		*(multiNode->GetNode()->CPPmultinode80) = multimapUnion->CPPmultimap80->emplace(KeyUint, ValueDouble);
		break;
	case 81:
		*(multiNode->GetNode()->CPPmultinode81) = multimapUnion->CPPmultimap81->emplace(KeyUint, ValueWchar);
		break;
	case 82:
		*(multiNode->GetNode()->CPPmultinode82) = multimapUnion->CPPmultimap82->emplace(KeyUint, ValueBool);
		break;
	case 83:
		*(multiNode->GetNode()->CPPmultinode83) = multimapUnion->CPPmultimap83->emplace(KeyUint, ValueWstring);
		break;
	case 84:
		*(multiNode->GetNode()->CPPmultinode84) = multimapUnion->CPPmultimap84->emplace(KeyUint, Value__Int);
		break;
	case 85:
		*(multiNode->GetNode()->CPPmultinode85) = multimapUnion->CPPmultimap85->emplace(KeyLonglong, ValueUchar);
		break;
	case 86:
		*(multiNode->GetNode()->CPPmultinode86) = multimapUnion->CPPmultimap86->emplace(KeyLonglong, ValueChar);
		break;
	case 87:
		*(multiNode->GetNode()->CPPmultinode87) = multimapUnion->CPPmultimap87->emplace(KeyLonglong, ValueShort);
		break;
	case 88:
		*(multiNode->GetNode()->CPPmultinode88) = multimapUnion->CPPmultimap88->emplace(KeyLonglong, ValueUshort);
		break;
	case 89:
		*(multiNode->GetNode()->CPPmultinode89) = multimapUnion->CPPmultimap89->emplace(KeyLonglong, ValueInt);
		break;
	case 90:
		*(multiNode->GetNode()->CPPmultinode90) = multimapUnion->CPPmultimap90->emplace(KeyLonglong, ValueUint);
		break;
	case 91:
		*(multiNode->GetNode()->CPPmultinode91) = multimapUnion->CPPmultimap91->emplace(KeyLonglong, ValueLonglong);
		break;
	case 92:
		*(multiNode->GetNode()->CPPmultinode92) = multimapUnion->CPPmultimap92->emplace(KeyLonglong, ValueUlonglong);
		break;
	case 93:
		*(multiNode->GetNode()->CPPmultinode93) = multimapUnion->CPPmultimap93->emplace(KeyLonglong, ValueFloat);
		break;
	case 94:
		*(multiNode->GetNode()->CPPmultinode94) = multimapUnion->CPPmultimap94->emplace(KeyLonglong, ValueDouble);
		break;
	case 95:
		*(multiNode->GetNode()->CPPmultinode95) = multimapUnion->CPPmultimap95->emplace(KeyLonglong, ValueWchar);
		break;
	case 96:
		*(multiNode->GetNode()->CPPmultinode96) = multimapUnion->CPPmultimap96->emplace(KeyLonglong, ValueBool);
		break;
	case 97:
		*(multiNode->GetNode()->CPPmultinode97) = multimapUnion->CPPmultimap97->emplace(KeyLonglong, ValueWstring);
		break;
	case 98:
		*(multiNode->GetNode()->CPPmultinode98) = multimapUnion->CPPmultimap98->emplace(KeyLonglong, Value__Int);
		break;
	case 99:
		*(multiNode->GetNode()->CPPmultinode99) = multimapUnion->CPPmultimap99->emplace(KeyUlonglong, ValueUchar);
		break;
	case 100:
		*(multiNode->GetNode()->CPPmultinode100) = multimapUnion->CPPmultimap100->emplace(KeyUlonglong, ValueChar);
		break;
	case 101:
		*(multiNode->GetNode()->CPPmultinode101) = multimapUnion->CPPmultimap101->emplace(KeyUlonglong, ValueShort);
		break;
	case 102:
		*(multiNode->GetNode()->CPPmultinode102) = multimapUnion->CPPmultimap102->emplace(KeyUlonglong, ValueUshort);
		break;
	case 103:
		*(multiNode->GetNode()->CPPmultinode103) = multimapUnion->CPPmultimap103->emplace(KeyUlonglong, ValueInt);
		break;
	case 104:
		*(multiNode->GetNode()->CPPmultinode104) = multimapUnion->CPPmultimap104->emplace(KeyUlonglong, ValueUint);
		break;
	case 105:
		*(multiNode->GetNode()->CPPmultinode105) = multimapUnion->CPPmultimap105->emplace(KeyUlonglong, ValueLonglong);
		break;
	case 106:
		*(multiNode->GetNode()->CPPmultinode106) = multimapUnion->CPPmultimap106->emplace(KeyUlonglong, ValueUlonglong);
		break;
	case 107:
		*(multiNode->GetNode()->CPPmultinode107) = multimapUnion->CPPmultimap107->emplace(KeyUlonglong, ValueFloat);
		break;
	case 108:
		*(multiNode->GetNode()->CPPmultinode108) = multimapUnion->CPPmultimap108->emplace(KeyUlonglong, ValueDouble);
		break;
	case 109:
		*(multiNode->GetNode()->CPPmultinode109) = multimapUnion->CPPmultimap109->emplace(KeyUlonglong, ValueWchar);
		break;
	case 110:
		*(multiNode->GetNode()->CPPmultinode110) = multimapUnion->CPPmultimap110->emplace(KeyUlonglong, ValueBool);
		break;
	case 111:
		*(multiNode->GetNode()->CPPmultinode111) = multimapUnion->CPPmultimap111->emplace(KeyUlonglong, ValueWstring);
		break;
	case 112:
		*(multiNode->GetNode()->CPPmultinode112) = multimapUnion->CPPmultimap112->emplace(KeyUlonglong, Value__Int);
		break;
	case 113:
		*(multiNode->GetNode()->CPPmultinode113) = multimapUnion->CPPmultimap113->emplace(KeyFloat, ValueUchar);
		break;
	case 114:
		*(multiNode->GetNode()->CPPmultinode114) = multimapUnion->CPPmultimap114->emplace(KeyFloat, ValueChar);
		break;
	case 115:
		*(multiNode->GetNode()->CPPmultinode115) = multimapUnion->CPPmultimap115->emplace(KeyFloat, ValueShort);
		break;
	case 116:
		*(multiNode->GetNode()->CPPmultinode116) = multimapUnion->CPPmultimap116->emplace(KeyFloat, ValueUshort);
		break;
	case 117:
		*(multiNode->GetNode()->CPPmultinode117) = multimapUnion->CPPmultimap117->emplace(KeyFloat, ValueInt);
		break;
	case 118:
		*(multiNode->GetNode()->CPPmultinode118) = multimapUnion->CPPmultimap118->emplace(KeyFloat, ValueUint);
		break;
	case 119:
		*(multiNode->GetNode()->CPPmultinode119) = multimapUnion->CPPmultimap119->emplace(KeyFloat, ValueLonglong);
		break;
	case 120:
		*(multiNode->GetNode()->CPPmultinode120) = multimapUnion->CPPmultimap120->emplace(KeyFloat, ValueUlonglong);
		break;
	case 121:
		*(multiNode->GetNode()->CPPmultinode121) = multimapUnion->CPPmultimap121->emplace(KeyFloat, ValueFloat);
		break;
	case 122:
		*(multiNode->GetNode()->CPPmultinode122) = multimapUnion->CPPmultimap122->emplace(KeyFloat, ValueDouble);
		break;
	case 123:
		*(multiNode->GetNode()->CPPmultinode123) = multimapUnion->CPPmultimap123->emplace(KeyFloat, ValueWchar);
		break;
	case 124:
		*(multiNode->GetNode()->CPPmultinode124) = multimapUnion->CPPmultimap124->emplace(KeyFloat, ValueBool);
		break;
	case 125:
		*(multiNode->GetNode()->CPPmultinode125) = multimapUnion->CPPmultimap125->emplace(KeyFloat, ValueWstring);
		break;
	case 126:
		*(multiNode->GetNode()->CPPmultinode126) = multimapUnion->CPPmultimap126->emplace(KeyFloat, Value__Int);
		break;
	case 127:
		*(multiNode->GetNode()->CPPmultinode127) = multimapUnion->CPPmultimap127->emplace(KeyDouble, ValueUchar);
		break;
	case 128:
		*(multiNode->GetNode()->CPPmultinode128) = multimapUnion->CPPmultimap128->emplace(KeyDouble, ValueChar);
		break;
	case 129:
		*(multiNode->GetNode()->CPPmultinode129) = multimapUnion->CPPmultimap129->emplace(KeyDouble, ValueShort);
		break;
	case 130:
		*(multiNode->GetNode()->CPPmultinode130) = multimapUnion->CPPmultimap130->emplace(KeyDouble, ValueUshort);
		break;
	case 131:
		*(multiNode->GetNode()->CPPmultinode131) = multimapUnion->CPPmultimap131->emplace(KeyDouble, ValueInt);
		break;
	case 132:
		*(multiNode->GetNode()->CPPmultinode132) = multimapUnion->CPPmultimap132->emplace(KeyDouble, ValueUint);
		break;
	case 133:
		*(multiNode->GetNode()->CPPmultinode133) = multimapUnion->CPPmultimap133->emplace(KeyDouble, ValueLonglong);
		break;
	case 134:
		*(multiNode->GetNode()->CPPmultinode134) = multimapUnion->CPPmultimap134->emplace(KeyDouble, ValueUlonglong);
		break;
	case 135:
		*(multiNode->GetNode()->CPPmultinode135) = multimapUnion->CPPmultimap135->emplace(KeyDouble, ValueFloat);
		break;
	case 136:
		*(multiNode->GetNode()->CPPmultinode136) = multimapUnion->CPPmultimap136->emplace(KeyDouble, ValueDouble);
		break;
	case 137:
		*(multiNode->GetNode()->CPPmultinode137) = multimapUnion->CPPmultimap137->emplace(KeyDouble, ValueWchar);
		break;
	case 138:
		*(multiNode->GetNode()->CPPmultinode138) = multimapUnion->CPPmultimap138->emplace(KeyDouble, ValueBool);
		break;
	case 139:
		*(multiNode->GetNode()->CPPmultinode139) = multimapUnion->CPPmultimap139->emplace(KeyDouble, ValueWstring);
		break;
	case 140:
		*(multiNode->GetNode()->CPPmultinode140) = multimapUnion->CPPmultimap140->emplace(KeyDouble, Value__Int);
		break;
	case 141:
		*(multiNode->GetNode()->CPPmultinode141) = multimapUnion->CPPmultimap141->emplace(KeyWchar, ValueUchar);
		break;
	case 142:
		*(multiNode->GetNode()->CPPmultinode142) = multimapUnion->CPPmultimap142->emplace(KeyWchar, ValueChar);
		break;
	case 143:
		*(multiNode->GetNode()->CPPmultinode143) = multimapUnion->CPPmultimap143->emplace(KeyWchar, ValueShort);
		break;
	case 144:
		*(multiNode->GetNode()->CPPmultinode144) = multimapUnion->CPPmultimap144->emplace(KeyWchar, ValueUshort);
		break;
	case 145:
		*(multiNode->GetNode()->CPPmultinode145) = multimapUnion->CPPmultimap145->emplace(KeyWchar, ValueInt);
		break;
	case 146:
		*(multiNode->GetNode()->CPPmultinode146) = multimapUnion->CPPmultimap146->emplace(KeyWchar, ValueUint);
		break;
	case 147:
		*(multiNode->GetNode()->CPPmultinode147) = multimapUnion->CPPmultimap147->emplace(KeyWchar, ValueLonglong);
		break;
	case 148:
		*(multiNode->GetNode()->CPPmultinode148) = multimapUnion->CPPmultimap148->emplace(KeyWchar, ValueUlonglong);
		break;
	case 149:
		*(multiNode->GetNode()->CPPmultinode149) = multimapUnion->CPPmultimap149->emplace(KeyWchar, ValueFloat);
		break;
	case 150:
		*(multiNode->GetNode()->CPPmultinode150) = multimapUnion->CPPmultimap150->emplace(KeyWchar, ValueDouble);
		break;
	case 151:
		*(multiNode->GetNode()->CPPmultinode151) = multimapUnion->CPPmultimap151->emplace(KeyWchar, ValueWchar);
		break;
	case 152:
		*(multiNode->GetNode()->CPPmultinode152) = multimapUnion->CPPmultimap152->emplace(KeyWchar, ValueBool);
		break;
	case 153:
		*(multiNode->GetNode()->CPPmultinode153) = multimapUnion->CPPmultimap153->emplace(KeyWchar, ValueWstring);
		break;
	case 154:
		*(multiNode->GetNode()->CPPmultinode154) = multimapUnion->CPPmultimap154->emplace(KeyWchar, Value__Int);
		break;
	case 155:
		*(multiNode->GetNode()->CPPmultinode155) = multimapUnion->CPPmultimap155->emplace(KeyBool, ValueUchar);
		break;
	case 156:
		*(multiNode->GetNode()->CPPmultinode156) = multimapUnion->CPPmultimap156->emplace(KeyBool, ValueChar);
		break;
	case 157:
		*(multiNode->GetNode()->CPPmultinode157) = multimapUnion->CPPmultimap157->emplace(KeyBool, ValueShort);
		break;
	case 158:
		*(multiNode->GetNode()->CPPmultinode158) = multimapUnion->CPPmultimap158->emplace(KeyBool, ValueUshort);
		break;
	case 159:
		*(multiNode->GetNode()->CPPmultinode159) = multimapUnion->CPPmultimap159->emplace(KeyBool, ValueInt);
		break;
	case 160:
		*(multiNode->GetNode()->CPPmultinode160) = multimapUnion->CPPmultimap160->emplace(KeyBool, ValueUint);
		break;
	case 161:
		*(multiNode->GetNode()->CPPmultinode161) = multimapUnion->CPPmultimap161->emplace(KeyBool, ValueLonglong);
		break;
	case 162:
		*(multiNode->GetNode()->CPPmultinode162) = multimapUnion->CPPmultimap162->emplace(KeyBool, ValueUlonglong);
		break;
	case 163:
		*(multiNode->GetNode()->CPPmultinode163) = multimapUnion->CPPmultimap163->emplace(KeyBool, ValueFloat);
		break;
	case 164:
		*(multiNode->GetNode()->CPPmultinode164) = multimapUnion->CPPmultimap164->emplace(KeyBool, ValueDouble);
		break;
	case 165:
		*(multiNode->GetNode()->CPPmultinode165) = multimapUnion->CPPmultimap165->emplace(KeyBool, ValueWchar);
		break;
	case 166:
		*(multiNode->GetNode()->CPPmultinode166) = multimapUnion->CPPmultimap166->emplace(KeyBool, ValueBool);
		break;
	case 167:
		*(multiNode->GetNode()->CPPmultinode167) = multimapUnion->CPPmultimap167->emplace(KeyBool, ValueWstring);
		break;
	case 168:
		*(multiNode->GetNode()->CPPmultinode168) = multimapUnion->CPPmultimap168->emplace(KeyBool, Value__Int);
		break;
	case 169:
		*(multiNode->GetNode()->CPPmultinode169) = multimapUnion->CPPmultimap169->emplace(KeyWstring, ValueUchar);
		break;
	case 170:
		*(multiNode->GetNode()->CPPmultinode170) = multimapUnion->CPPmultimap170->emplace(KeyWstring, ValueChar);
		break;
	case 171:
		*(multiNode->GetNode()->CPPmultinode171) = multimapUnion->CPPmultimap171->emplace(KeyWstring, ValueShort);
		break;
	case 172:
		*(multiNode->GetNode()->CPPmultinode172) = multimapUnion->CPPmultimap172->emplace(KeyWstring, ValueUshort);
		break;
	case 173:
		*(multiNode->GetNode()->CPPmultinode173) = multimapUnion->CPPmultimap173->emplace(KeyWstring, ValueInt);
		break;
	case 174:
		*(multiNode->GetNode()->CPPmultinode174) = multimapUnion->CPPmultimap174->emplace(KeyWstring, ValueUint);
		break;
	case 175:
		*(multiNode->GetNode()->CPPmultinode175) = multimapUnion->CPPmultimap175->emplace(KeyWstring, ValueLonglong);
		break;
	case 176:
		*(multiNode->GetNode()->CPPmultinode176) = multimapUnion->CPPmultimap176->emplace(KeyWstring, ValueUlonglong);
		break;
	case 177:
		*(multiNode->GetNode()->CPPmultinode177) = multimapUnion->CPPmultimap177->emplace(KeyWstring, ValueFloat);
		break;
	case 178:
		*(multiNode->GetNode()->CPPmultinode178) = multimapUnion->CPPmultimap178->emplace(KeyWstring, ValueDouble);
		break;
	case 179:
		*(multiNode->GetNode()->CPPmultinode179) = multimapUnion->CPPmultimap179->emplace(KeyWstring, ValueWchar);
		break;
	case 180:
		*(multiNode->GetNode()->CPPmultinode180) = multimapUnion->CPPmultimap180->emplace(KeyWstring, ValueBool);
		break;
	case 181:
		*(multiNode->GetNode()->CPPmultinode181) = multimapUnion->CPPmultimap181->emplace(KeyWstring, ValueWstring);
		break;
	case 182:
		*(multiNode->GetNode()->CPPmultinode182) = multimapUnion->CPPmultimap182->emplace(KeyWstring, Value__Int);
		break;
	case 183:
		*(multiNode->GetNode()->CPPmultinode183) = multimapUnion->CPPmultimap183->emplace(Key__Int, ValueUchar);
		break;
	case 184:
		*(multiNode->GetNode()->CPPmultinode184) = multimapUnion->CPPmultimap184->emplace(Key__Int, ValueChar);
		break;
	case 185:
		*(multiNode->GetNode()->CPPmultinode185) = multimapUnion->CPPmultimap185->emplace(Key__Int, ValueShort);
		break;
	case 186:
		*(multiNode->GetNode()->CPPmultinode186) = multimapUnion->CPPmultimap186->emplace(Key__Int, ValueUshort);
		break;
	case 187:
		*(multiNode->GetNode()->CPPmultinode187) = multimapUnion->CPPmultimap187->emplace(Key__Int, ValueInt);
		break;
	case 188:
		*(multiNode->GetNode()->CPPmultinode188) = multimapUnion->CPPmultimap188->emplace(Key__Int, ValueUint);
		break;
	case 189:
		*(multiNode->GetNode()->CPPmultinode189) = multimapUnion->CPPmultimap189->emplace(Key__Int, ValueLonglong);
		break;
	case 190:
		*(multiNode->GetNode()->CPPmultinode190) = multimapUnion->CPPmultimap190->emplace(Key__Int, ValueUlonglong);
		break;
	case 191:
		*(multiNode->GetNode()->CPPmultinode191) = multimapUnion->CPPmultimap191->emplace(Key__Int, ValueFloat);
		break;
	case 192:
		*(multiNode->GetNode()->CPPmultinode192) = multimapUnion->CPPmultimap192->emplace(Key__Int, ValueDouble);
		break;
	case 193:
		*(multiNode->GetNode()->CPPmultinode193) = multimapUnion->CPPmultimap193->emplace(Key__Int, ValueWchar);
		break;
	case 194:
		*(multiNode->GetNode()->CPPmultinode194) = multimapUnion->CPPmultimap194->emplace(Key__Int, ValueBool);
		break;
	case 195:
		*(multiNode->GetNode()->CPPmultinode195) = multimapUnion->CPPmultimap195->emplace(Key__Int, ValueWstring);
		break;
	case 196:
		*(multiNode->GetNode()->CPPmultinode196) = multimapUnion->CPPmultimap196->emplace(Key__Int, Value__Int);
		break;
	}
	return multiNode->DeepCopy();
}

generic<typename Key, typename Value>
System::UInt64 UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::size()
{
	switch (nKeyValueType)
	{
	case 0:	default:
		return 0;
	case 1:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap1->size());
	case 2:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap2->size());
	case 3:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap3->size());
	case 4:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap4->size());
	case 5:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap5->size());
	case 6:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap6->size());
	case 7:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap7->size());
	case 8:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap8->size());
	case 9:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap9->size());
	case 10:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap10->size());
	case 11:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap11->size());
	case 12:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap12->size());
	case 13:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap13->size());
	case 14:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap14->size());
	case 15:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap15->size());
	case 16:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap16->size());
	case 17:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap17->size());
	case 18:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap18->size());
	case 19:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap19->size());
	case 20:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap20->size());
	case 21:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap21->size());
	case 22:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap22->size());
	case 23:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap23->size());
	case 24:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap24->size());
	case 25:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap25->size());
	case 26:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap26->size());
	case 27:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap27->size());
	case 28:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap28->size());
	case 29:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap29->size());
	case 30:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap30->size());
	case 31:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap31->size());
	case 32:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap32->size());
	case 33:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap33->size());
	case 34:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap34->size());
	case 35:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap35->size());
	case 36:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap36->size());
	case 37:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap37->size());
	case 38:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap38->size());
	case 39:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap39->size());
	case 40:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap40->size());
	case 41:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap41->size());
	case 42:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap42->size());
	case 43:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap43->size());
	case 44:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap44->size());
	case 45:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap45->size());
	case 46:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap46->size());
	case 47:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap47->size());
	case 48:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap48->size());
	case 49:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap49->size());
	case 50:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap50->size());
	case 51:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap51->size());
	case 52:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap52->size());
	case 53:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap53->size());
	case 54:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap54->size());
	case 55:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap55->size());
	case 56:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap56->size());
	case 57:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap57->size());
	case 58:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap58->size());
	case 59:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap59->size());
	case 60:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap60->size());
	case 61:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap61->size());
	case 62:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap62->size());
	case 63:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap63->size());
	case 64:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap64->size());
	case 65:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap65->size());
	case 66:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap66->size());
	case 67:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap67->size());
	case 68:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap68->size());
	case 69:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap69->size());
	case 70:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap70->size());
	case 71:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap71->size());
	case 72:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap72->size());
	case 73:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap73->size());
	case 74:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap74->size());
	case 75:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap75->size());
	case 76:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap76->size());
	case 77:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap77->size());
	case 78:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap78->size());
	case 79:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap79->size());
	case 80:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap80->size());
	case 81:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap81->size());
	case 82:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap82->size());
	case 83:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap83->size());
	case 84:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap84->size());
	case 85:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap85->size());
	case 86:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap86->size());
	case 87:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap87->size());
	case 88:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap88->size());
	case 89:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap89->size());
	case 90:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap90->size());
	case 91:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap91->size());
	case 92:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap92->size());
	case 93:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap93->size());
	case 94:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap94->size());
	case 95:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap95->size());
	case 96:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap96->size());
	case 97:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap97->size());
	case 98:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap98->size());
	case 99:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap99->size());
	case 100:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap100->size());
	case 101:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap101->size());
	case 102:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap102->size());
	case 103:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap103->size());
	case 104:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap104->size());
	case 105:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap105->size());
	case 106:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap106->size());
	case 107:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap107->size());
	case 108:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap108->size());
	case 109:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap109->size());
	case 110:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap110->size());
	case 111:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap111->size());
	case 112:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap112->size());
	case 113:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap113->size());
	case 114:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap114->size());
	case 115:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap115->size());
	case 116:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap116->size());
	case 117:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap117->size());
	case 118:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap118->size());
	case 119:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap119->size());
	case 120:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap120->size());
	case 121:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap121->size());
	case 122:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap122->size());
	case 123:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap123->size());
	case 124:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap124->size());
	case 125:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap125->size());
	case 126:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap126->size());
	case 127:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap127->size());
	case 128:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap128->size());
	case 129:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap129->size());
	case 130:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap130->size());
	case 131:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap131->size());
	case 132:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap132->size());
	case 133:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap133->size());
	case 134:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap134->size());
	case 135:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap135->size());
	case 136:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap136->size());
	case 137:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap137->size());
	case 138:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap138->size());
	case 139:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap139->size());
	case 140:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap140->size());
	case 141:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap141->size());
	case 142:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap142->size());
	case 143:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap143->size());
	case 144:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap144->size());
	case 145:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap145->size());
	case 146:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap146->size());
	case 147:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap147->size());
	case 148:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap148->size());
	case 149:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap149->size());
	case 150:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap150->size());
	case 151:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap151->size());
	case 152:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap152->size());
	case 153:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap153->size());
	case 154:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap154->size());
	case 155:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap155->size());
	case 156:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap156->size());
	case 157:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap157->size());
	case 158:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap158->size());
	case 159:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap159->size());
	case 160:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap160->size());
	case 161:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap161->size());
	case 162:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap162->size());
	case 163:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap163->size());
	case 164:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap164->size());
	case 165:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap165->size());
	case 166:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap166->size());
	case 167:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap167->size());
	case 168:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap168->size());
	case 169:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap169->size());
	case 170:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap170->size());
	case 171:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap171->size());
	case 172:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap172->size());
	case 173:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap173->size());
	case 174:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap174->size());
	case 175:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap175->size());
	case 176:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap176->size());
	case 177:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap177->size());
	case 178:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap178->size());
	case 179:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap179->size());
	case 180:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap180->size());
	case 181:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap181->size());
	case 182:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap182->size());
	case 183:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap183->size());
	case 184:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap184->size());
	case 185:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap185->size());
	case 186:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap186->size());
	case 187:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap187->size());
	case 188:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap188->size());
	case 189:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap189->size());
	case 190:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap190->size());
	case 191:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap191->size());
	case 192:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap192->size());
	case 193:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap193->size());
	case 194:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap194->size());
	case 195:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap195->size());
	case 196:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap196->size());
	}
	return 0;
}

generic<typename Key, typename Value>
System::UInt64 UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::count(const Key key)
{
	if (Object::ReferenceEquals(key, nullptr)) return 0;
	Type^ keyType = Key::typeid;

	unsigned char KeyUchar = 0;
	char KeyChar = 0;
	short KeyShort = 0;
	unsigned short KeyUshort = 0;
	int KeyInt = 0;
	unsigned int KeyUint = 0;
	long long KeyLonglong = 0;
	unsigned long long KeyUlonglong = 0;
	float KeyFloat = 0.0f;
	double KeyDouble = 0;
	wchar_t KeyWchar = 0;
	bool KeyBool = false;
	std::wstring KeyWstring = L"";
	__int64 Key__Int = 0;

	if (keyType->Equals(System::Byte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUchar = static_cast<unsigned char>(safe_cast<System::Byte>(managedObject));
	}
	else if (keyType->Equals(System::SByte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyChar = static_cast<char>(safe_cast<System::SByte>(managedObject));
	}
	else if (keyType->Equals(System::Int16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyShort = static_cast<short>(safe_cast<System::Int16>(managedObject));
	}
	else if (keyType->Equals(System::UInt16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUshort = static_cast<unsigned short>(safe_cast<System::UInt16>(managedObject));
	}
	else if (keyType->Equals(System::Int32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyInt = static_cast<int>(safe_cast<System::Int32>(managedObject));
	}
	else if (keyType->Equals(System::UInt32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUint = static_cast<unsigned int>(safe_cast<System::UInt32>(managedObject));
	}
	else if (keyType->Equals(System::Int64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyLonglong = static_cast<long long>(safe_cast<System::Int64>(managedObject));
	}
	else if (keyType->Equals(System::UInt64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUlonglong = static_cast<unsigned long long>(safe_cast<System::UInt64>(managedObject));
	}
	else if (keyType->Equals(System::Single::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyFloat = static_cast<float>(safe_cast<System::Single>(managedObject));
	}
	else if (keyType->Equals(System::Double::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyDouble = static_cast<double>(safe_cast<System::Double>(managedObject));
	}
	else if (keyType->Equals(System::Char::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyWchar = static_cast<wchar_t>(safe_cast<System::Char>(managedObject));
	}
	else if (keyType->Equals(System::Boolean::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyBool = static_cast<bool>(safe_cast<System::Boolean>(managedObject));
	}
	else if (keyType->Equals(System::String::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		MarshalString(safe_cast<System::String^>(managedObject), KeyWstring);
	}
	else if (keyType->IsClass)
	{
		if (gKeyClassDictionary->TryGetValue(const_cast<Key>(key), Key__Int));
		else
		{
			return 0;
		}
	}
	else if (keyType->IsValueType && !keyType->IsPrimitive && !keyType->IsEnum)
	{
		if (gKeyClassDictionary->TryGetValue(const_cast<Key>(key), Key__Int));
		else
		{
			return 0;
		}
	}
	else if (keyType->IsInterface)
	{
		if (gKeyClassDictionary->TryGetValue(const_cast<Key>(key), Key__Int));
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}

	switch (nKeyValueType)
	{
	case 0:	default:
		return 0;
	case 1:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap1->count(KeyUchar));
	case 2:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap2->count(KeyUchar));
	case 3:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap3->count(KeyUchar));
	case 4:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap4->count(KeyUchar));
	case 5:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap5->count(KeyUchar));
	case 6:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap6->count(KeyUchar));
	case 7:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap7->count(KeyUchar));
	case 8:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap8->count(KeyUchar));
	case 9:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap9->count(KeyUchar));
	case 10:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap10->count(KeyUchar));
	case 11:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap11->count(KeyUchar));
	case 12:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap12->count(KeyUchar));
	case 13:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap13->count(KeyUchar));
	case 14:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap14->count(KeyUchar));
	case 15:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap15->count(KeyChar));
	case 16:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap16->count(KeyChar));
	case 17:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap17->count(KeyChar));
	case 18:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap18->count(KeyChar));
	case 19:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap19->count(KeyChar));
	case 20:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap20->count(KeyChar));
	case 21:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap21->count(KeyChar));
	case 22:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap22->count(KeyChar));
	case 23:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap23->count(KeyChar));
	case 24:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap24->count(KeyChar));
	case 25:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap25->count(KeyChar));
	case 26:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap26->count(KeyChar));
	case 27:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap27->count(KeyChar));
	case 28:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap28->count(KeyChar));
	case 29:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap29->count(KeyShort));
	case 30:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap30->count(KeyShort));
	case 31:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap31->count(KeyShort));
	case 32:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap32->count(KeyShort));
	case 33:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap33->count(KeyShort));
	case 34:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap34->count(KeyShort));
	case 35:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap35->count(KeyShort));
	case 36:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap36->count(KeyShort));
	case 37:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap37->count(KeyShort));
	case 38:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap38->count(KeyShort));
	case 39:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap39->count(KeyShort));
	case 40:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap40->count(KeyShort));
	case 41:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap41->count(KeyShort));
	case 42:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap42->count(KeyShort));
	case 43:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap43->count(KeyUshort));
	case 44:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap44->count(KeyUshort));
	case 45:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap45->count(KeyUshort));
	case 46:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap46->count(KeyUshort));
	case 47:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap47->count(KeyUshort));
	case 48:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap48->count(KeyUshort));
	case 49:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap49->count(KeyUshort));
	case 50:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap50->count(KeyUshort));
	case 51:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap51->count(KeyUshort));
	case 52:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap52->count(KeyUshort));
	case 53:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap53->count(KeyUshort));
	case 54:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap54->count(KeyUshort));
	case 55:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap55->count(KeyUshort));
	case 56:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap56->count(KeyUshort));
	case 57:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap57->count(KeyInt));
	case 58:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap58->count(KeyInt));
	case 59:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap59->count(KeyInt));
	case 60:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap60->count(KeyInt));
	case 61:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap61->count(KeyInt));
	case 62:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap62->count(KeyInt));
	case 63:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap63->count(KeyInt));
	case 64:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap64->count(KeyInt));
	case 65:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap65->count(KeyInt));
	case 66:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap66->count(KeyInt));
	case 67:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap67->count(KeyInt));
	case 68:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap68->count(KeyInt));
	case 69:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap69->count(KeyInt));
	case 70:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap70->count(KeyInt));
	case 71:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap71->count(KeyUint));
	case 72:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap72->count(KeyUint));
	case 73:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap73->count(KeyUint));
	case 74:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap74->count(KeyUint));
	case 75:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap75->count(KeyUint));
	case 76:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap76->count(KeyUint));
	case 77:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap77->count(KeyUint));
	case 78:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap78->count(KeyUint));
	case 79:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap79->count(KeyUint));
	case 80:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap80->count(KeyUint));
	case 81:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap81->count(KeyUint));
	case 82:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap82->count(KeyUint));
	case 83:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap83->count(KeyUint));
	case 84:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap84->count(KeyUint));
	case 85:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap85->count(KeyLonglong));
	case 86:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap86->count(KeyLonglong));
	case 87:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap87->count(KeyLonglong));
	case 88:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap88->count(KeyLonglong));
	case 89:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap89->count(KeyLonglong));
	case 90:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap90->count(KeyLonglong));
	case 91:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap91->count(KeyLonglong));
	case 92:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap92->count(KeyLonglong));
	case 93:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap93->count(KeyLonglong));
	case 94:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap94->count(KeyLonglong));
	case 95:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap95->count(KeyLonglong));
	case 96:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap96->count(KeyLonglong));
	case 97:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap97->count(KeyLonglong));
	case 98:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap98->count(KeyLonglong));
	case 99:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap99->count(KeyUlonglong));
	case 100:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap100->count(KeyUlonglong));
	case 101:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap101->count(KeyUlonglong));
	case 102:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap102->count(KeyUlonglong));
	case 103:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap103->count(KeyUlonglong));
	case 104:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap104->count(KeyUlonglong));
	case 105:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap105->count(KeyUlonglong));
	case 106:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap106->count(KeyUlonglong));
	case 107:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap107->count(KeyUlonglong));
	case 108:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap108->count(KeyUlonglong));
	case 109:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap109->count(KeyUlonglong));
	case 110:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap110->count(KeyUlonglong));
	case 111:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap111->count(KeyUlonglong));
	case 112:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap112->count(KeyUlonglong));
	case 113:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap113->count(KeyFloat));
	case 114:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap114->count(KeyFloat));
	case 115:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap115->count(KeyFloat));
	case 116:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap116->count(KeyFloat));
	case 117:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap117->count(KeyFloat));
	case 118:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap118->count(KeyFloat));
	case 119:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap119->count(KeyFloat));
	case 120:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap120->count(KeyFloat));
	case 121:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap121->count(KeyFloat));
	case 122:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap122->count(KeyFloat));
	case 123:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap123->count(KeyFloat));
	case 124:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap124->count(KeyFloat));
	case 125:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap125->count(KeyFloat));
	case 126:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap126->count(KeyFloat));
	case 127:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap127->count(KeyDouble));
	case 128:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap128->count(KeyDouble));
	case 129:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap129->count(KeyDouble));
	case 130:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap130->count(KeyDouble));
	case 131:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap131->count(KeyDouble));
	case 132:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap132->count(KeyDouble));
	case 133:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap133->count(KeyDouble));
	case 134:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap134->count(KeyDouble));
	case 135:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap135->count(KeyDouble));
	case 136:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap136->count(KeyDouble));
	case 137:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap137->count(KeyDouble));
	case 138:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap138->count(KeyDouble));
	case 139:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap139->count(KeyDouble));
	case 140:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap140->count(KeyDouble));
	case 141:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap141->count(KeyWchar));
	case 142:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap142->count(KeyWchar));
	case 143:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap143->count(KeyWchar));
	case 144:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap144->count(KeyWchar));
	case 145:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap145->count(KeyWchar));
	case 146:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap146->count(KeyWchar));
	case 147:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap147->count(KeyWchar));
	case 148:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap148->count(KeyWchar));
	case 149:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap149->count(KeyWchar));
	case 150:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap150->count(KeyWchar));
	case 151:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap151->count(KeyWchar));
	case 152:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap152->count(KeyWchar));
	case 153:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap153->count(KeyWchar));
	case 154:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap154->count(KeyWchar));
	case 155:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap155->count(KeyBool));
	case 156:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap156->count(KeyBool));
	case 157:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap157->count(KeyBool));
	case 158:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap158->count(KeyBool));
	case 159:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap159->count(KeyBool));
	case 160:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap160->count(KeyBool));
	case 161:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap161->count(KeyBool));
	case 162:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap162->count(KeyBool));
	case 163:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap163->count(KeyBool));
	case 164:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap164->count(KeyBool));
	case 165:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap165->count(KeyBool));
	case 166:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap166->count(KeyBool));
	case 167:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap167->count(KeyBool));
	case 168:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap168->count(KeyBool));
	case 169:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap169->count(KeyWstring));
	case 170:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap170->count(KeyWstring));
	case 171:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap171->count(KeyWstring));
	case 172:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap172->count(KeyWstring));
	case 173:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap173->count(KeyWstring));
	case 174:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap174->count(KeyWstring));
	case 175:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap175->count(KeyWstring));
	case 176:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap176->count(KeyWstring));
	case 177:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap177->count(KeyWstring));
	case 178:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap178->count(KeyWstring));
	case 179:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap179->count(KeyWstring));
	case 180:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap180->count(KeyWstring));
	case 181:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap181->count(KeyWstring));
	case 182:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap182->count(KeyWstring));
	case 183:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap183->count(Key__Int));
	case 184:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap184->count(Key__Int));
	case 185:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap185->count(Key__Int));
	case 186:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap186->count(Key__Int));
	case 187:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap187->count(Key__Int));
	case 188:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap188->count(Key__Int));
	case 189:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap189->count(Key__Int));
	case 190:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap190->count(Key__Int));
	case 191:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap191->count(Key__Int));
	case 192:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap192->count(Key__Int));
	case 193:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap193->count(Key__Int));
	case 194:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap194->count(Key__Int));
	case 195:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap195->count(Key__Int));
	case 196:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap196->count(Key__Int));
	}

	return 0;
}

generic<typename Key, typename Value>
System::UInt64 UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::erase(const Key key)
{
	if (Object::ReferenceEquals(key, nullptr)) return 0;
	Type^ keyType = Key::typeid;

	unsigned char KeyUchar = 0;
	char KeyChar = 0;
	short KeyShort = 0;
	unsigned short KeyUshort = 0;
	int KeyInt = 0;
	unsigned int KeyUint = 0;
	long long KeyLonglong = 0;
	unsigned long long KeyUlonglong = 0;
	float KeyFloat = 0.0f;
	double KeyDouble = 0;
	wchar_t KeyWchar = 0;
	bool KeyBool = false;
	std::wstring KeyWstring = L"";
	__int64 Key__Int = 0;

	if (keyType->Equals(System::Byte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUchar = static_cast<unsigned char>(safe_cast<System::Byte>(managedObject));
	}
	else if (keyType->Equals(System::SByte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyChar = static_cast<char>(safe_cast<System::SByte>(managedObject));
	}
	else if (keyType->Equals(System::Int16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyShort = static_cast<short>(safe_cast<System::Int16>(managedObject));
	}
	else if (keyType->Equals(System::UInt16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUshort = static_cast<unsigned short>(safe_cast<System::UInt16>(managedObject));
	}
	else if (keyType->Equals(System::Int32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyInt = static_cast<int>(safe_cast<System::Int32>(managedObject));
	}
	else if (keyType->Equals(System::UInt32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUint = static_cast<unsigned int>(safe_cast<System::UInt32>(managedObject));
	}
	else if (keyType->Equals(System::Int64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyLonglong = static_cast<long long>(safe_cast<System::Int64>(managedObject));
	}
	else if (keyType->Equals(System::UInt64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUlonglong = static_cast<unsigned long long>(safe_cast<System::UInt64>(managedObject));
	}
	else if (keyType->Equals(System::Single::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyFloat = static_cast<float>(safe_cast<System::Single>(managedObject));
	}
	else if (keyType->Equals(System::Double::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyDouble = static_cast<double>(safe_cast<System::Double>(managedObject));
	}
	else if (keyType->Equals(System::Char::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyWchar = static_cast<wchar_t>(safe_cast<System::Char>(managedObject));
	}
	else if (keyType->Equals(System::Boolean::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyBool = static_cast<bool>(safe_cast<System::Boolean>(managedObject));
	}
	else if (keyType->Equals(System::String::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		MarshalString(safe_cast<System::String^>(managedObject), KeyWstring);
	}
	else if (keyType->IsClass)
	{
		if (gKeyClassDictionary->TryGetValue(const_cast<Key>(key), Key__Int));
		else
		{
			return 0;
		}
	}
	else if (keyType->IsValueType && !keyType->IsPrimitive && !keyType->IsEnum)
	{
		if (gKeyClassDictionary->TryGetValue(const_cast<Key>(key), Key__Int));
		else
		{
			return 0;
		}
	}
	else if (keyType->IsInterface)
	{
		if (gKeyClassDictionary->TryGetValue(const_cast<Key>(key), Key__Int));
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}

	if (183 <= nKeyValueType && nKeyValueType <= 196)
	{
		if (gKeyClassDictionary && gIntKeyClassDictionary)
		{
			Key temp;
			gIntKeyClassDictionary->TryGetValue(Key__Int, temp);
			gIntKeyClassDictionary->Remove(Key__Int);
			gKeyClassDictionary->Remove(temp);
		}
	}

	switch (nKeyValueType)
	{
	case 0:	default:
		return 0;
	case 1:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap1->erase(KeyUchar));
	case 2:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap2->erase(KeyUchar));
	case 3:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap3->erase(KeyUchar));
	case 4:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap4->erase(KeyUchar));
	case 5:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap5->erase(KeyUchar));
	case 6:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap6->erase(KeyUchar));
	case 7:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap7->erase(KeyUchar));
	case 8:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap8->erase(KeyUchar));
	case 9:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap9->erase(KeyUchar));
	case 10:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap10->erase(KeyUchar));
	case 11:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap11->erase(KeyUchar));
	case 12:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap12->erase(KeyUchar));
	case 13:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap13->erase(KeyUchar));
	case 14:
		if (gValueClassDictionary)
			for (auto iter = multimapUnion->CPPmultimap14->equal_range(KeyUchar); iter != multimapUnion->CPPmultimap14->KeyEnd(); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap14->erase(KeyUchar));
	case 15:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap15->erase(KeyChar));
	case 16:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap16->erase(KeyChar));
	case 17:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap17->erase(KeyChar));
	case 18:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap18->erase(KeyChar));
	case 19:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap19->erase(KeyChar));
	case 20:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap20->erase(KeyChar));
	case 21:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap21->erase(KeyChar));
	case 22:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap22->erase(KeyChar));
	case 23:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap23->erase(KeyChar));
	case 24:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap24->erase(KeyChar));
	case 25:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap25->erase(KeyChar));
	case 26:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap26->erase(KeyChar));
	case 27:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap27->erase(KeyChar));
	case 28:
		if (gValueClassDictionary)
			for (auto iter = multimapUnion->CPPmultimap28->equal_range(KeyChar); iter != multimapUnion->CPPmultimap28->KeyEnd(); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap28->erase(KeyChar));
	case 29:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap29->erase(KeyShort));
	case 30:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap30->erase(KeyShort));
	case 31:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap31->erase(KeyShort));
	case 32:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap32->erase(KeyShort));
	case 33:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap33->erase(KeyShort));
	case 34:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap34->erase(KeyShort));
	case 35:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap35->erase(KeyShort));
	case 36:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap36->erase(KeyShort));
	case 37:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap37->erase(KeyShort));
	case 38:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap38->erase(KeyShort));
	case 39:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap39->erase(KeyShort));
	case 40:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap40->erase(KeyShort));
	case 41:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap41->erase(KeyShort));
	case 42:
		if (gValueClassDictionary)
			for (auto iter = multimapUnion->CPPmultimap42->equal_range(KeyShort); iter != multimapUnion->CPPmultimap42->KeyEnd(); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap42->erase(KeyShort));
	case 43:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap43->erase(KeyUshort));
	case 44:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap44->erase(KeyUshort));
	case 45:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap45->erase(KeyUshort));
	case 46:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap46->erase(KeyUshort));
	case 47:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap47->erase(KeyUshort));
	case 48:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap48->erase(KeyUshort));
	case 49:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap49->erase(KeyUshort));
	case 50:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap50->erase(KeyUshort));
	case 51:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap51->erase(KeyUshort));
	case 52:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap52->erase(KeyUshort));
	case 53:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap53->erase(KeyUshort));
	case 54:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap54->erase(KeyUshort));
	case 55:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap55->erase(KeyUshort));
	case 56:
		if (gValueClassDictionary)
			for (auto iter = multimapUnion->CPPmultimap56->equal_range(KeyUshort); iter != multimapUnion->CPPmultimap56->KeyEnd(); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap56->erase(KeyUshort));
	case 57:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap57->erase(KeyInt));
	case 58:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap58->erase(KeyInt));
	case 59:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap59->erase(KeyInt));
	case 60:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap60->erase(KeyInt));
	case 61:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap61->erase(KeyInt));
	case 62:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap62->erase(KeyInt));
	case 63:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap63->erase(KeyInt));
	case 64:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap64->erase(KeyInt));
	case 65:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap65->erase(KeyInt));
	case 66:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap66->erase(KeyInt));
	case 67:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap67->erase(KeyInt));
	case 68:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap68->erase(KeyInt));
	case 69:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap69->erase(KeyInt));
	case 70:
		if (gValueClassDictionary)
			for (auto iter = multimapUnion->CPPmultimap70->equal_range(KeyInt); iter != multimapUnion->CPPmultimap70->KeyEnd(); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap70->erase(KeyInt));
	case 71:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap71->erase(KeyUint));
	case 72:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap72->erase(KeyUint));
	case 73:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap73->erase(KeyUint));
	case 74:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap74->erase(KeyUint));
	case 75:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap75->erase(KeyUint));
	case 76:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap76->erase(KeyUint));
	case 77:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap77->erase(KeyUint));
	case 78:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap78->erase(KeyUint));
	case 79:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap79->erase(KeyUint));
	case 80:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap80->erase(KeyUint));
	case 81:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap81->erase(KeyUint));
	case 82:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap82->erase(KeyUint));
	case 83:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap83->erase(KeyUint));
	case 84:
		if (gValueClassDictionary)
			for (auto iter = multimapUnion->CPPmultimap84->equal_range(KeyUint); iter != multimapUnion->CPPmultimap84->KeyEnd(); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap84->erase(KeyUint));
	case 85:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap85->erase(KeyLonglong));
	case 86:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap86->erase(KeyLonglong));
	case 87:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap87->erase(KeyLonglong));
	case 88:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap88->erase(KeyLonglong));
	case 89:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap89->erase(KeyLonglong));
	case 90:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap90->erase(KeyLonglong));
	case 91:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap91->erase(KeyLonglong));
	case 92:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap92->erase(KeyLonglong));
	case 93:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap93->erase(KeyLonglong));
	case 94:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap94->erase(KeyLonglong));
	case 95:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap95->erase(KeyLonglong));
	case 96:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap96->erase(KeyLonglong));
	case 97:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap97->erase(KeyLonglong));
	case 98:
		if (gValueClassDictionary)
			for (auto iter = multimapUnion->CPPmultimap98->equal_range(KeyLonglong); iter != multimapUnion->CPPmultimap98->KeyEnd(); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap98->erase(KeyLonglong));
	case 99:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap99->erase(KeyUlonglong));
	case 100:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap100->erase(KeyUlonglong));
	case 101:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap101->erase(KeyUlonglong));
	case 102:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap102->erase(KeyUlonglong));
	case 103:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap103->erase(KeyUlonglong));
	case 104:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap104->erase(KeyUlonglong));
	case 105:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap105->erase(KeyUlonglong));
	case 106:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap106->erase(KeyUlonglong));
	case 107:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap107->erase(KeyUlonglong));
	case 108:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap108->erase(KeyUlonglong));
	case 109:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap109->erase(KeyUlonglong));
	case 110:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap110->erase(KeyUlonglong));
	case 111:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap111->erase(KeyUlonglong));
	case 112:
		if (gValueClassDictionary)
			for (auto iter = multimapUnion->CPPmultimap112->equal_range(KeyUlonglong); iter != multimapUnion->CPPmultimap112->KeyEnd(); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap112->erase(KeyUlonglong));
	case 113:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap113->erase(KeyFloat));
	case 114:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap114->erase(KeyFloat));
	case 115:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap115->erase(KeyFloat));
	case 116:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap116->erase(KeyFloat));
	case 117:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap117->erase(KeyFloat));
	case 118:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap118->erase(KeyFloat));
	case 119:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap119->erase(KeyFloat));
	case 120:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap120->erase(KeyFloat));
	case 121:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap121->erase(KeyFloat));
	case 122:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap122->erase(KeyFloat));
	case 123:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap123->erase(KeyFloat));
	case 124:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap124->erase(KeyFloat));
	case 125:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap125->erase(KeyFloat));
	case 126:
		if (gValueClassDictionary)
			for (auto iter = multimapUnion->CPPmultimap126->equal_range(KeyFloat); iter != multimapUnion->CPPmultimap126->KeyEnd(); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap126->erase(KeyFloat));
	case 127:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap127->erase(KeyDouble));
	case 128:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap128->erase(KeyDouble));
	case 129:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap129->erase(KeyDouble));
	case 130:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap130->erase(KeyDouble));
	case 131:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap131->erase(KeyDouble));
	case 132:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap132->erase(KeyDouble));
	case 133:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap133->erase(KeyDouble));
	case 134:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap134->erase(KeyDouble));
	case 135:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap135->erase(KeyDouble));
	case 136:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap136->erase(KeyDouble));
	case 137:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap137->erase(KeyDouble));
	case 138:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap138->erase(KeyDouble));
	case 139:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap139->erase(KeyDouble));
	case 140:
		if (gValueClassDictionary)
			for (auto iter = multimapUnion->CPPmultimap140->equal_range(KeyDouble); iter != multimapUnion->CPPmultimap140->KeyEnd(); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap140->erase(KeyDouble));
	case 141:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap141->erase(KeyWchar));
	case 142:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap142->erase(KeyWchar));
	case 143:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap143->erase(KeyWchar));
	case 144:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap144->erase(KeyWchar));
	case 145:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap145->erase(KeyWchar));
	case 146:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap146->erase(KeyWchar));
	case 147:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap147->erase(KeyWchar));
	case 148:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap148->erase(KeyWchar));
	case 149:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap149->erase(KeyWchar));
	case 150:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap150->erase(KeyWchar));
	case 151:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap151->erase(KeyWchar));
	case 152:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap152->erase(KeyWchar));
	case 153:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap153->erase(KeyWchar));
	case 154:
		if (gValueClassDictionary)
			for (auto iter = multimapUnion->CPPmultimap154->equal_range(KeyWchar); iter != multimapUnion->CPPmultimap154->KeyEnd(); iter++)
			gValueClassDictionary->Remove(iter.GetValue());
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap154->erase(KeyWchar));
	case 155:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap155->erase(KeyBool));
	case 156:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap156->erase(KeyBool));
	case 157:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap157->erase(KeyBool));
	case 158:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap158->erase(KeyBool));
	case 159:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap159->erase(KeyBool));
	case 160:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap160->erase(KeyBool));
	case 161:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap161->erase(KeyBool));
	case 162:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap162->erase(KeyBool));
	case 163:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap163->erase(KeyBool));
	case 164:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap164->erase(KeyBool));
	case 165:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap165->erase(KeyBool));
	case 166:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap166->erase(KeyBool));
	case 167:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap167->erase(KeyBool));
	case 168:
		if (gValueClassDictionary)
			for (auto iter = multimapUnion->CPPmultimap168->equal_range(KeyBool); iter != multimapUnion->CPPmultimap168->KeyEnd(); iter++)
			gValueClassDictionary->Remove(iter.GetValue());
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap168->erase(KeyBool));
	case 169:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap169->erase(KeyWstring));
	case 170:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap170->erase(KeyWstring));
	case 171:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap171->erase(KeyWstring));
	case 172:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap172->erase(KeyWstring));
	case 173:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap173->erase(KeyWstring));
	case 174:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap174->erase(KeyWstring));
	case 175:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap175->erase(KeyWstring));
	case 176:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap176->erase(KeyWstring));
	case 177:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap177->erase(KeyWstring));
	case 178:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap178->erase(KeyWstring));
	case 179:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap179->erase(KeyWstring));
	case 180:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap180->erase(KeyWstring));
	case 181:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap181->erase(KeyWstring));
	case 182:
		if (gValueClassDictionary)
			for (auto iter = multimapUnion->CPPmultimap182->equal_range(KeyWstring); iter != multimapUnion->CPPmultimap182->KeyEnd(); iter++)
			gValueClassDictionary->Remove(iter.GetValue());
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap182->erase(KeyWstring));
	case 183:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap183->erase(Key__Int));
	case 184:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap184->erase(Key__Int));
	case 185:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap185->erase(Key__Int));
	case 186:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap186->erase(Key__Int));
	case 187:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap187->erase(Key__Int));
	case 188:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap188->erase(Key__Int));
	case 189:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap189->erase(Key__Int));
	case 190:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap190->erase(Key__Int));
	case 191:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap191->erase(Key__Int));
	case 192:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap192->erase(Key__Int));
	case 193:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap193->erase(Key__Int));
	case 194:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap194->erase(Key__Int));
	case 195:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap195->erase(Key__Int));
	case 196:
		if (gValueClassDictionary)
			for (auto iter = multimapUnion->CPPmultimap196->equal_range(Key__Int); iter != multimapUnion->CPPmultimap196->KeyEnd(); iter++)
			gValueClassDictionary->Remove(iter.GetValue());
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap196->erase(Key__Int));
	}

	return 0;
}

generic<typename Key, typename Value>
System::Boolean UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::empty()
{
	switch (nKeyValueType)
	{
	case 0:	default:
		return false;
	case 1:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap1->empty());
	case 2:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap2->empty());
	case 3:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap3->empty());
	case 4:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap4->empty());
	case 5:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap5->empty());
	case 6:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap6->empty());
	case 7:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap7->empty());
	case 8:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap8->empty());
	case 9:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap9->empty());
	case 10:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap10->empty());
	case 11:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap11->empty());
	case 12:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap12->empty());
	case 13:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap13->empty());
	case 14:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap14->empty());
	case 15:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap15->empty());
	case 16:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap16->empty());
	case 17:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap17->empty());
	case 18:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap18->empty());
	case 19:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap19->empty());
	case 20:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap20->empty());
	case 21:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap21->empty());
	case 22:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap22->empty());
	case 23:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap23->empty());
	case 24:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap24->empty());
	case 25:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap25->empty());
	case 26:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap26->empty());
	case 27:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap27->empty());
	case 28:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap28->empty());
	case 29:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap29->empty());
	case 30:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap30->empty());
	case 31:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap31->empty());
	case 32:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap32->empty());
	case 33:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap33->empty());
	case 34:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap34->empty());
	case 35:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap35->empty());
	case 36:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap36->empty());
	case 37:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap37->empty());
	case 38:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap38->empty());
	case 39:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap39->empty());
	case 40:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap40->empty());
	case 41:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap41->empty());
	case 42:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap42->empty());
	case 43:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap43->empty());
	case 44:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap44->empty());
	case 45:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap45->empty());
	case 46:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap46->empty());
	case 47:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap47->empty());
	case 48:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap48->empty());
	case 49:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap49->empty());
	case 50:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap50->empty());
	case 51:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap51->empty());
	case 52:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap52->empty());
	case 53:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap53->empty());
	case 54:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap54->empty());
	case 55:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap55->empty());
	case 56:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap56->empty());
	case 57:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap57->empty());
	case 58:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap58->empty());
	case 59:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap59->empty());
	case 60:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap60->empty());
	case 61:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap61->empty());
	case 62:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap62->empty());
	case 63:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap63->empty());
	case 64:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap64->empty());
	case 65:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap65->empty());
	case 66:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap66->empty());
	case 67:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap67->empty());
	case 68:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap68->empty());
	case 69:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap69->empty());
	case 70:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap70->empty());
	case 71:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap71->empty());
	case 72:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap72->empty());
	case 73:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap73->empty());
	case 74:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap74->empty());
	case 75:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap75->empty());
	case 76:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap76->empty());
	case 77:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap77->empty());
	case 78:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap78->empty());
	case 79:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap79->empty());
	case 80:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap80->empty());
	case 81:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap81->empty());
	case 82:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap82->empty());
	case 83:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap83->empty());
	case 84:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap84->empty());
	case 85:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap85->empty());
	case 86:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap86->empty());
	case 87:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap87->empty());
	case 88:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap88->empty());
	case 89:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap89->empty());
	case 90:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap90->empty());
	case 91:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap91->empty());
	case 92:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap92->empty());
	case 93:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap93->empty());
	case 94:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap94->empty());
	case 95:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap95->empty());
	case 96:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap96->empty());
	case 97:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap97->empty());
	case 98:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap98->empty());
	case 99:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap99->empty());
	case 100:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap100->empty());
	case 101:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap101->empty());
	case 102:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap102->empty());
	case 103:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap103->empty());
	case 104:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap104->empty());
	case 105:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap105->empty());
	case 106:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap106->empty());
	case 107:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap107->empty());
	case 108:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap108->empty());
	case 109:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap109->empty());
	case 110:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap110->empty());
	case 111:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap111->empty());
	case 112:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap112->empty());
	case 113:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap113->empty());
	case 114:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap114->empty());
	case 115:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap115->empty());
	case 116:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap116->empty());
	case 117:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap117->empty());
	case 118:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap118->empty());
	case 119:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap119->empty());
	case 120:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap120->empty());
	case 121:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap121->empty());
	case 122:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap122->empty());
	case 123:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap123->empty());
	case 124:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap124->empty());
	case 125:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap125->empty());
	case 126:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap126->empty());
	case 127:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap127->empty());
	case 128:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap128->empty());
	case 129:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap129->empty());
	case 130:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap130->empty());
	case 131:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap131->empty());
	case 132:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap132->empty());
	case 133:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap133->empty());
	case 134:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap134->empty());
	case 135:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap135->empty());
	case 136:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap136->empty());
	case 137:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap137->empty());
	case 138:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap138->empty());
	case 139:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap139->empty());
	case 140:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap140->empty());
	case 141:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap141->empty());
	case 142:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap142->empty());
	case 143:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap143->empty());
	case 144:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap144->empty());
	case 145:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap145->empty());
	case 146:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap146->empty());
	case 147:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap147->empty());
	case 148:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap148->empty());
	case 149:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap149->empty());
	case 150:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap150->empty());
	case 151:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap151->empty());
	case 152:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap152->empty());
	case 153:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap153->empty());
	case 154:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap154->empty());
	case 155:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap155->empty());
	case 156:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap156->empty());
	case 157:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap157->empty());
	case 158:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap158->empty());
	case 159:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap159->empty());
	case 160:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap160->empty());
	case 161:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap161->empty());
	case 162:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap162->empty());
	case 163:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap163->empty());
	case 164:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap164->empty());
	case 165:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap165->empty());
	case 166:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap166->empty());
	case 167:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap167->empty());
	case 168:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap168->empty());
	case 169:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap169->empty());
	case 170:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap170->empty());
	case 171:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap171->empty());
	case 172:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap172->empty());
	case 173:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap173->empty());
	case 174:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap174->empty());
	case 175:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap175->empty());
	case 176:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap176->empty());
	case 177:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap177->empty());
	case 178:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap178->empty());
	case 179:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap179->empty());
	case 180:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap180->empty());
	case 181:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap181->empty());
	case 182:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap182->empty());
	case 183:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap183->empty());
	case 184:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap184->empty());
	case 185:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap185->empty());
	case 186:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap186->empty());
	case 187:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap187->empty());
	case 188:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap188->empty());
	case 189:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap189->empty());
	case 190:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap190->empty());
	case 191:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap191->empty());
	case 192:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap192->empty());
	case 193:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap193->empty());
	case 194:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap194->empty());
	case 195:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap195->empty());
	case 196:
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap196->empty());
	}
	return false;
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::find(const Key key)
{
	if (Object::ReferenceEquals(key, nullptr)) return nullptr;
	Type^ keyType = Key::typeid;

	unsigned char KeyUchar = 0;
	char KeyChar = 0;
	short KeyShort = 0;
	unsigned short KeyUshort = 0;
	int KeyInt = 0;
	unsigned int KeyUint = 0;
	long long KeyLonglong = 0;
	unsigned long long KeyUlonglong = 0;
	float KeyFloat = 0.0f;
	double KeyDouble = 0;
	wchar_t KeyWchar = 0;
	bool KeyBool = false;
	std::wstring KeyWstring = L"";
	__int64 Key__Int = 0;

	if (keyType->Equals(System::Byte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUchar = static_cast<unsigned char>(safe_cast<System::Byte>(managedObject));
	}
	else if (keyType->Equals(System::SByte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyChar = static_cast<char>(safe_cast<System::SByte>(managedObject));
	}
	else if (keyType->Equals(System::Int16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyShort = static_cast<short>(safe_cast<System::Int16>(managedObject));
	}
	else if (keyType->Equals(System::UInt16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUshort = static_cast<unsigned short>(safe_cast<System::UInt16>(managedObject));
	}
	else if (keyType->Equals(System::Int32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyInt = static_cast<int>(safe_cast<System::Int32>(managedObject));
	}
	else if (keyType->Equals(System::UInt32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUint = static_cast<unsigned int>(safe_cast<System::UInt32>(managedObject));
	}
	else if (keyType->Equals(System::Int64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyLonglong = static_cast<long long>(safe_cast<System::Int64>(managedObject));
	}
	else if (keyType->Equals(System::UInt64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUlonglong = static_cast<unsigned long long>(safe_cast<System::UInt64>(managedObject));
	}
	else if (keyType->Equals(System::Single::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyFloat = static_cast<float>(safe_cast<System::Single>(managedObject));
	}
	else if (keyType->Equals(System::Double::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyDouble = static_cast<double>(safe_cast<System::Double>(managedObject));
	}
	else if (keyType->Equals(System::Char::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyWchar = static_cast<wchar_t>(safe_cast<System::Char>(managedObject));
	}
	else if (keyType->Equals(System::Boolean::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyBool = static_cast<bool>(safe_cast<System::Boolean>(managedObject));
	}
	else if (keyType->Equals(System::String::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		MarshalString(safe_cast<System::String^>(managedObject), KeyWstring);
	}
	else if (keyType->IsClass)
	{
		if (gKeyClassDictionary->TryGetValue(const_cast<Key>(key), Key__Int));
		else
		{
			return nullptr;
		}
	}
	else if (keyType->IsValueType && !keyType->IsPrimitive && !keyType->IsEnum)
	{
		if (gKeyClassDictionary->TryGetValue(const_cast<Key>(key), Key__Int));
		else
		{
			return nullptr;
		}
	}
	else if (keyType->IsInterface)
	{
		if (gKeyClassDictionary->TryGetValue(const_cast<Key>(key), Key__Int));
		else
		{
			return nullptr;
		}
	}
	else
	{
		return nullptr;
	}

	switch (nKeyValueType)
	{
	case 0:	default:
		return nullptr;
	case 1:
		*(multiNode->GetNode()->CPPmultinode1) = multimapUnion->CPPmultimap1->find(KeyUchar);
		break;
	case 2:
		*(multiNode->GetNode()->CPPmultinode2) = multimapUnion->CPPmultimap2->find(KeyUchar);
		break;
	case 3:
		*(multiNode->GetNode()->CPPmultinode3) = multimapUnion->CPPmultimap3->find(KeyUchar);
		break;
	case 4:
		*(multiNode->GetNode()->CPPmultinode4) = multimapUnion->CPPmultimap4->find(KeyUchar);
		break;
	case 5:
		*(multiNode->GetNode()->CPPmultinode5) = multimapUnion->CPPmultimap5->find(KeyUchar);
		break;
	case 6:
		*(multiNode->GetNode()->CPPmultinode6) = multimapUnion->CPPmultimap6->find(KeyUchar);
		break;
	case 7:
		*(multiNode->GetNode()->CPPmultinode7) = multimapUnion->CPPmultimap7->find(KeyUchar);
		break;
	case 8:
		*(multiNode->GetNode()->CPPmultinode8) = multimapUnion->CPPmultimap8->find(KeyUchar);
		break;
	case 9:
		*(multiNode->GetNode()->CPPmultinode9) = multimapUnion->CPPmultimap9->find(KeyUchar);
		break;
	case 10:
		*(multiNode->GetNode()->CPPmultinode10) = multimapUnion->CPPmultimap10->find(KeyUchar);
		break;
	case 11:
		*(multiNode->GetNode()->CPPmultinode11) = multimapUnion->CPPmultimap11->find(KeyUchar);
		break;
	case 12:
		*(multiNode->GetNode()->CPPmultinode12) = multimapUnion->CPPmultimap12->find(KeyUchar);
		break;
	case 13:
		*(multiNode->GetNode()->CPPmultinode13) = multimapUnion->CPPmultimap13->find(KeyUchar);
		break;
	case 14:
		*(multiNode->GetNode()->CPPmultinode14) = multimapUnion->CPPmultimap14->find(KeyUchar);
		break;
	case 15:
		*(multiNode->GetNode()->CPPmultinode15) = multimapUnion->CPPmultimap15->find(KeyChar);
		break;
	case 16:
		*(multiNode->GetNode()->CPPmultinode16) = multimapUnion->CPPmultimap16->find(KeyChar);
		break;
	case 17:
		*(multiNode->GetNode()->CPPmultinode17) = multimapUnion->CPPmultimap17->find(KeyChar);
		break;
	case 18:
		*(multiNode->GetNode()->CPPmultinode18) = multimapUnion->CPPmultimap18->find(KeyChar);
		break;
	case 19:
		*(multiNode->GetNode()->CPPmultinode19) = multimapUnion->CPPmultimap19->find(KeyChar);
		break;
	case 20:
		*(multiNode->GetNode()->CPPmultinode20) = multimapUnion->CPPmultimap20->find(KeyChar);
		break;
	case 21:
		*(multiNode->GetNode()->CPPmultinode21) = multimapUnion->CPPmultimap21->find(KeyChar);
		break;
	case 22:
		*(multiNode->GetNode()->CPPmultinode22) = multimapUnion->CPPmultimap22->find(KeyChar);
		break;
	case 23:
		*(multiNode->GetNode()->CPPmultinode23) = multimapUnion->CPPmultimap23->find(KeyChar);
		break;
	case 24:
		*(multiNode->GetNode()->CPPmultinode24) = multimapUnion->CPPmultimap24->find(KeyChar);
		break;
	case 25:
		*(multiNode->GetNode()->CPPmultinode25) = multimapUnion->CPPmultimap25->find(KeyChar);
		break;
	case 26:
		*(multiNode->GetNode()->CPPmultinode26) = multimapUnion->CPPmultimap26->find(KeyChar);
		break;
	case 27:
		*(multiNode->GetNode()->CPPmultinode27) = multimapUnion->CPPmultimap27->find(KeyChar);
		break;
	case 28:
		*(multiNode->GetNode()->CPPmultinode28) = multimapUnion->CPPmultimap28->find(KeyChar);
		break;
	case 29:
		*(multiNode->GetNode()->CPPmultinode29) = multimapUnion->CPPmultimap29->find(KeyShort);
		break;
	case 30:
		*(multiNode->GetNode()->CPPmultinode30) = multimapUnion->CPPmultimap30->find(KeyShort);
		break;
	case 31:
		*(multiNode->GetNode()->CPPmultinode31) = multimapUnion->CPPmultimap31->find(KeyShort);
		break;
	case 32:
		*(multiNode->GetNode()->CPPmultinode32) = multimapUnion->CPPmultimap32->find(KeyShort);
		break;
	case 33:
		*(multiNode->GetNode()->CPPmultinode33) = multimapUnion->CPPmultimap33->find(KeyShort);
		break;
	case 34:
		*(multiNode->GetNode()->CPPmultinode34) = multimapUnion->CPPmultimap34->find(KeyShort);
		break;
	case 35:
		*(multiNode->GetNode()->CPPmultinode35) = multimapUnion->CPPmultimap35->find(KeyShort);
		break;
	case 36:
		*(multiNode->GetNode()->CPPmultinode36) = multimapUnion->CPPmultimap36->find(KeyShort);
		break;
	case 37:
		*(multiNode->GetNode()->CPPmultinode37) = multimapUnion->CPPmultimap37->find(KeyShort);
		break;
	case 38:
		*(multiNode->GetNode()->CPPmultinode38) = multimapUnion->CPPmultimap38->find(KeyShort);
		break;
	case 39:
		*(multiNode->GetNode()->CPPmultinode39) = multimapUnion->CPPmultimap39->find(KeyShort);
		break;
	case 40:
		*(multiNode->GetNode()->CPPmultinode40) = multimapUnion->CPPmultimap40->find(KeyShort);
		break;
	case 41:
		*(multiNode->GetNode()->CPPmultinode41) = multimapUnion->CPPmultimap41->find(KeyShort);
		break;
	case 42:
		*(multiNode->GetNode()->CPPmultinode42) = multimapUnion->CPPmultimap42->find(KeyShort);
		break;
	case 43:
		*(multiNode->GetNode()->CPPmultinode43) = multimapUnion->CPPmultimap43->find(KeyUshort);
		break;
	case 44:
		*(multiNode->GetNode()->CPPmultinode44) = multimapUnion->CPPmultimap44->find(KeyUshort);
		break;
	case 45:
		*(multiNode->GetNode()->CPPmultinode45) = multimapUnion->CPPmultimap45->find(KeyUshort);
		break;
	case 46:
		*(multiNode->GetNode()->CPPmultinode46) = multimapUnion->CPPmultimap46->find(KeyUshort);
		break;
	case 47:
		*(multiNode->GetNode()->CPPmultinode47) = multimapUnion->CPPmultimap47->find(KeyUshort);
		break;
	case 48:
		*(multiNode->GetNode()->CPPmultinode48) = multimapUnion->CPPmultimap48->find(KeyUshort);
		break;
	case 49:
		*(multiNode->GetNode()->CPPmultinode49) = multimapUnion->CPPmultimap49->find(KeyUshort);
		break;
	case 50:
		*(multiNode->GetNode()->CPPmultinode50) = multimapUnion->CPPmultimap50->find(KeyUshort);
		break;
	case 51:
		*(multiNode->GetNode()->CPPmultinode51) = multimapUnion->CPPmultimap51->find(KeyUshort);
		break;
	case 52:
		*(multiNode->GetNode()->CPPmultinode52) = multimapUnion->CPPmultimap52->find(KeyUshort);
		break;
	case 53:
		*(multiNode->GetNode()->CPPmultinode53) = multimapUnion->CPPmultimap53->find(KeyUshort);
		break;
	case 54:
		*(multiNode->GetNode()->CPPmultinode54) = multimapUnion->CPPmultimap54->find(KeyUshort);
		break;
	case 55:
		*(multiNode->GetNode()->CPPmultinode55) = multimapUnion->CPPmultimap55->find(KeyUshort);
		break;
	case 56:
		*(multiNode->GetNode()->CPPmultinode56) = multimapUnion->CPPmultimap56->find(KeyUshort);
		break;
	case 57:
		*(multiNode->GetNode()->CPPmultinode57) = multimapUnion->CPPmultimap57->find(KeyInt);
		break;
	case 58:
		*(multiNode->GetNode()->CPPmultinode58) = multimapUnion->CPPmultimap58->find(KeyInt);
		break;
	case 59:
		*(multiNode->GetNode()->CPPmultinode59) = multimapUnion->CPPmultimap59->find(KeyInt);
		break;
	case 60:
		*(multiNode->GetNode()->CPPmultinode60) = multimapUnion->CPPmultimap60->find(KeyInt);
		break;
	case 61:
		*(multiNode->GetNode()->CPPmultinode61) = multimapUnion->CPPmultimap61->find(KeyInt);
		break;
	case 62:
		*(multiNode->GetNode()->CPPmultinode62) = multimapUnion->CPPmultimap62->find(KeyInt);
		break;
	case 63:
		*(multiNode->GetNode()->CPPmultinode63) = multimapUnion->CPPmultimap63->find(KeyInt);
		break;
	case 64:
		*(multiNode->GetNode()->CPPmultinode64) = multimapUnion->CPPmultimap64->find(KeyInt);
		break;
	case 65:
		*(multiNode->GetNode()->CPPmultinode65) = multimapUnion->CPPmultimap65->find(KeyInt);
		break;
	case 66:
		*(multiNode->GetNode()->CPPmultinode66) = multimapUnion->CPPmultimap66->find(KeyInt);
		break;
	case 67:
		*(multiNode->GetNode()->CPPmultinode67) = multimapUnion->CPPmultimap67->find(KeyInt);
		break;
	case 68:
		*(multiNode->GetNode()->CPPmultinode68) = multimapUnion->CPPmultimap68->find(KeyInt);
		break;
	case 69:
		*(multiNode->GetNode()->CPPmultinode69) = multimapUnion->CPPmultimap69->find(KeyInt);
		break;
	case 70:
		*(multiNode->GetNode()->CPPmultinode70) = multimapUnion->CPPmultimap70->find(KeyInt);
		break;
	case 71:
		*(multiNode->GetNode()->CPPmultinode71) = multimapUnion->CPPmultimap71->find(KeyUint);
		break;
	case 72:
		*(multiNode->GetNode()->CPPmultinode72) = multimapUnion->CPPmultimap72->find(KeyUint);
		break;
	case 73:
		*(multiNode->GetNode()->CPPmultinode73) = multimapUnion->CPPmultimap73->find(KeyUint);
		break;
	case 74:
		*(multiNode->GetNode()->CPPmultinode74) = multimapUnion->CPPmultimap74->find(KeyUint);
		break;
	case 75:
		*(multiNode->GetNode()->CPPmultinode75) = multimapUnion->CPPmultimap75->find(KeyUint);
		break;
	case 76:
		*(multiNode->GetNode()->CPPmultinode76) = multimapUnion->CPPmultimap76->find(KeyUint);
		break;
	case 77:
		*(multiNode->GetNode()->CPPmultinode77) = multimapUnion->CPPmultimap77->find(KeyUint);
		break;
	case 78:
		*(multiNode->GetNode()->CPPmultinode78) = multimapUnion->CPPmultimap78->find(KeyUint);
		break;
	case 79:
		*(multiNode->GetNode()->CPPmultinode79) = multimapUnion->CPPmultimap79->find(KeyUint);
		break;
	case 80:
		*(multiNode->GetNode()->CPPmultinode80) = multimapUnion->CPPmultimap80->find(KeyUint);
		break;
	case 81:
		*(multiNode->GetNode()->CPPmultinode81) = multimapUnion->CPPmultimap81->find(KeyUint);
		break;
	case 82:
		*(multiNode->GetNode()->CPPmultinode82) = multimapUnion->CPPmultimap82->find(KeyUint);
		break;
	case 83:
		*(multiNode->GetNode()->CPPmultinode83) = multimapUnion->CPPmultimap83->find(KeyUint);
		break;
	case 84:
		*(multiNode->GetNode()->CPPmultinode84) = multimapUnion->CPPmultimap84->find(KeyUint);
		break;
	case 85:
		*(multiNode->GetNode()->CPPmultinode85) = multimapUnion->CPPmultimap85->find(KeyLonglong);
		break;
	case 86:
		*(multiNode->GetNode()->CPPmultinode86) = multimapUnion->CPPmultimap86->find(KeyLonglong);
		break;
	case 87:
		*(multiNode->GetNode()->CPPmultinode87) = multimapUnion->CPPmultimap87->find(KeyLonglong);
		break;
	case 88:
		*(multiNode->GetNode()->CPPmultinode88) = multimapUnion->CPPmultimap88->find(KeyLonglong);
		break;
	case 89:
		*(multiNode->GetNode()->CPPmultinode89) = multimapUnion->CPPmultimap89->find(KeyLonglong);
		break;
	case 90:
		*(multiNode->GetNode()->CPPmultinode90) = multimapUnion->CPPmultimap90->find(KeyLonglong);
		break;
	case 91:
		*(multiNode->GetNode()->CPPmultinode91) = multimapUnion->CPPmultimap91->find(KeyLonglong);
		break;
	case 92:
		*(multiNode->GetNode()->CPPmultinode92) = multimapUnion->CPPmultimap92->find(KeyLonglong);
		break;
	case 93:
		*(multiNode->GetNode()->CPPmultinode93) = multimapUnion->CPPmultimap93->find(KeyLonglong);
		break;
	case 94:
		*(multiNode->GetNode()->CPPmultinode94) = multimapUnion->CPPmultimap94->find(KeyLonglong);
		break;
	case 95:
		*(multiNode->GetNode()->CPPmultinode95) = multimapUnion->CPPmultimap95->find(KeyLonglong);
		break;
	case 96:
		*(multiNode->GetNode()->CPPmultinode96) = multimapUnion->CPPmultimap96->find(KeyLonglong);
		break;
	case 97:
		*(multiNode->GetNode()->CPPmultinode97) = multimapUnion->CPPmultimap97->find(KeyLonglong);
		break;
	case 98:
		*(multiNode->GetNode()->CPPmultinode98) = multimapUnion->CPPmultimap98->find(KeyLonglong);
		break;
	case 99:
		*(multiNode->GetNode()->CPPmultinode99) = multimapUnion->CPPmultimap99->find(KeyUlonglong);
		break;
	case 100:
		*(multiNode->GetNode()->CPPmultinode100) = multimapUnion->CPPmultimap100->find(KeyUlonglong);
		break;
	case 101:
		*(multiNode->GetNode()->CPPmultinode101) = multimapUnion->CPPmultimap101->find(KeyUlonglong);
		break;
	case 102:
		*(multiNode->GetNode()->CPPmultinode102) = multimapUnion->CPPmultimap102->find(KeyUlonglong);
		break;
	case 103:
		*(multiNode->GetNode()->CPPmultinode103) = multimapUnion->CPPmultimap103->find(KeyUlonglong);
		break;
	case 104:
		*(multiNode->GetNode()->CPPmultinode104) = multimapUnion->CPPmultimap104->find(KeyUlonglong);
		break;
	case 105:
		*(multiNode->GetNode()->CPPmultinode105) = multimapUnion->CPPmultimap105->find(KeyUlonglong);
		break;
	case 106:
		*(multiNode->GetNode()->CPPmultinode106) = multimapUnion->CPPmultimap106->find(KeyUlonglong);
		break;
	case 107:
		*(multiNode->GetNode()->CPPmultinode107) = multimapUnion->CPPmultimap107->find(KeyUlonglong);
		break;
	case 108:
		*(multiNode->GetNode()->CPPmultinode108) = multimapUnion->CPPmultimap108->find(KeyUlonglong);
		break;
	case 109:
		*(multiNode->GetNode()->CPPmultinode109) = multimapUnion->CPPmultimap109->find(KeyUlonglong);
		break;
	case 110:
		*(multiNode->GetNode()->CPPmultinode110) = multimapUnion->CPPmultimap110->find(KeyUlonglong);
		break;
	case 111:
		*(multiNode->GetNode()->CPPmultinode111) = multimapUnion->CPPmultimap111->find(KeyUlonglong);
		break;
	case 112:
		*(multiNode->GetNode()->CPPmultinode112) = multimapUnion->CPPmultimap112->find(KeyUlonglong);
		break;
	case 113:
		*(multiNode->GetNode()->CPPmultinode113) = multimapUnion->CPPmultimap113->find(KeyFloat);
		break;
	case 114:
		*(multiNode->GetNode()->CPPmultinode114) = multimapUnion->CPPmultimap114->find(KeyFloat);
		break;
	case 115:
		*(multiNode->GetNode()->CPPmultinode115) = multimapUnion->CPPmultimap115->find(KeyFloat);
		break;
	case 116:
		*(multiNode->GetNode()->CPPmultinode116) = multimapUnion->CPPmultimap116->find(KeyFloat);
		break;
	case 117:
		*(multiNode->GetNode()->CPPmultinode117) = multimapUnion->CPPmultimap117->find(KeyFloat);
		break;
	case 118:
		*(multiNode->GetNode()->CPPmultinode118) = multimapUnion->CPPmultimap118->find(KeyFloat);
		break;
	case 119:
		*(multiNode->GetNode()->CPPmultinode119) = multimapUnion->CPPmultimap119->find(KeyFloat);
		break;
	case 120:
		*(multiNode->GetNode()->CPPmultinode120) = multimapUnion->CPPmultimap120->find(KeyFloat);
		break;
	case 121:
		*(multiNode->GetNode()->CPPmultinode121) = multimapUnion->CPPmultimap121->find(KeyFloat);
		break;
	case 122:
		*(multiNode->GetNode()->CPPmultinode122) = multimapUnion->CPPmultimap122->find(KeyFloat);
		break;
	case 123:
		*(multiNode->GetNode()->CPPmultinode123) = multimapUnion->CPPmultimap123->find(KeyFloat);
		break;
	case 124:
		*(multiNode->GetNode()->CPPmultinode124) = multimapUnion->CPPmultimap124->find(KeyFloat);
		break;
	case 125:
		*(multiNode->GetNode()->CPPmultinode125) = multimapUnion->CPPmultimap125->find(KeyFloat);
		break;
	case 126:
		*(multiNode->GetNode()->CPPmultinode126) = multimapUnion->CPPmultimap126->find(KeyFloat);
		break;
	case 127:
		*(multiNode->GetNode()->CPPmultinode127) = multimapUnion->CPPmultimap127->find(KeyDouble);
		break;
	case 128:
		*(multiNode->GetNode()->CPPmultinode128) = multimapUnion->CPPmultimap128->find(KeyDouble);
		break;
	case 129:
		*(multiNode->GetNode()->CPPmultinode129) = multimapUnion->CPPmultimap129->find(KeyDouble);
		break;
	case 130:
		*(multiNode->GetNode()->CPPmultinode130) = multimapUnion->CPPmultimap130->find(KeyDouble);
		break;
	case 131:
		*(multiNode->GetNode()->CPPmultinode131) = multimapUnion->CPPmultimap131->find(KeyDouble);
		break;
	case 132:
		*(multiNode->GetNode()->CPPmultinode132) = multimapUnion->CPPmultimap132->find(KeyDouble);
		break;
	case 133:
		*(multiNode->GetNode()->CPPmultinode133) = multimapUnion->CPPmultimap133->find(KeyDouble);
		break;
	case 134:
		*(multiNode->GetNode()->CPPmultinode134) = multimapUnion->CPPmultimap134->find(KeyDouble);
		break;
	case 135:
		*(multiNode->GetNode()->CPPmultinode135) = multimapUnion->CPPmultimap135->find(KeyDouble);
		break;
	case 136:
		*(multiNode->GetNode()->CPPmultinode136) = multimapUnion->CPPmultimap136->find(KeyDouble);
		break;
	case 137:
		*(multiNode->GetNode()->CPPmultinode137) = multimapUnion->CPPmultimap137->find(KeyDouble);
		break;
	case 138:
		*(multiNode->GetNode()->CPPmultinode138) = multimapUnion->CPPmultimap138->find(KeyDouble);
		break;
	case 139:
		*(multiNode->GetNode()->CPPmultinode139) = multimapUnion->CPPmultimap139->find(KeyDouble);
		break;
	case 140:
		*(multiNode->GetNode()->CPPmultinode140) = multimapUnion->CPPmultimap140->find(KeyDouble);
		break;
	case 141:
		*(multiNode->GetNode()->CPPmultinode141) = multimapUnion->CPPmultimap141->find(KeyWchar);
		break;
	case 142:
		*(multiNode->GetNode()->CPPmultinode142) = multimapUnion->CPPmultimap142->find(KeyWchar);
		break;
	case 143:
		*(multiNode->GetNode()->CPPmultinode143) = multimapUnion->CPPmultimap143->find(KeyWchar);
		break;
	case 144:
		*(multiNode->GetNode()->CPPmultinode144) = multimapUnion->CPPmultimap144->find(KeyWchar);
		break;
	case 145:
		*(multiNode->GetNode()->CPPmultinode145) = multimapUnion->CPPmultimap145->find(KeyWchar);
		break;
	case 146:
		*(multiNode->GetNode()->CPPmultinode146) = multimapUnion->CPPmultimap146->find(KeyWchar);
		break;
	case 147:
		*(multiNode->GetNode()->CPPmultinode147) = multimapUnion->CPPmultimap147->find(KeyWchar);
		break;
	case 148:
		*(multiNode->GetNode()->CPPmultinode148) = multimapUnion->CPPmultimap148->find(KeyWchar);
		break;
	case 149:
		*(multiNode->GetNode()->CPPmultinode149) = multimapUnion->CPPmultimap149->find(KeyWchar);
		break;
	case 150:
		*(multiNode->GetNode()->CPPmultinode150) = multimapUnion->CPPmultimap150->find(KeyWchar);
		break;
	case 151:
		*(multiNode->GetNode()->CPPmultinode151) = multimapUnion->CPPmultimap151->find(KeyWchar);
		break;
	case 152:
		*(multiNode->GetNode()->CPPmultinode152) = multimapUnion->CPPmultimap152->find(KeyWchar);
		break;
	case 153:
		*(multiNode->GetNode()->CPPmultinode153) = multimapUnion->CPPmultimap153->find(KeyWchar);
		break;
	case 154:
		*(multiNode->GetNode()->CPPmultinode154) = multimapUnion->CPPmultimap154->find(KeyWchar);
		break;
	case 155:
		*(multiNode->GetNode()->CPPmultinode155) = multimapUnion->CPPmultimap155->find(KeyBool);
		break;
	case 156:
		*(multiNode->GetNode()->CPPmultinode156) = multimapUnion->CPPmultimap156->find(KeyBool);
		break;
	case 157:
		*(multiNode->GetNode()->CPPmultinode157) = multimapUnion->CPPmultimap157->find(KeyBool);
		break;
	case 158:
		*(multiNode->GetNode()->CPPmultinode158) = multimapUnion->CPPmultimap158->find(KeyBool);
		break;
	case 159:
		*(multiNode->GetNode()->CPPmultinode159) = multimapUnion->CPPmultimap159->find(KeyBool);
		break;
	case 160:
		*(multiNode->GetNode()->CPPmultinode160) = multimapUnion->CPPmultimap160->find(KeyBool);
		break;
	case 161:
		*(multiNode->GetNode()->CPPmultinode161) = multimapUnion->CPPmultimap161->find(KeyBool);
		break;
	case 162:
		*(multiNode->GetNode()->CPPmultinode162) = multimapUnion->CPPmultimap162->find(KeyBool);
		break;
	case 163:
		*(multiNode->GetNode()->CPPmultinode163) = multimapUnion->CPPmultimap163->find(KeyBool);
		break;
	case 164:
		*(multiNode->GetNode()->CPPmultinode164) = multimapUnion->CPPmultimap164->find(KeyBool);
		break;
	case 165:
		*(multiNode->GetNode()->CPPmultinode165) = multimapUnion->CPPmultimap165->find(KeyBool);
		break;
	case 166:
		*(multiNode->GetNode()->CPPmultinode166) = multimapUnion->CPPmultimap166->find(KeyBool);
		break;
	case 167:
		*(multiNode->GetNode()->CPPmultinode167) = multimapUnion->CPPmultimap167->find(KeyBool);
		break;
	case 168:
		*(multiNode->GetNode()->CPPmultinode168) = multimapUnion->CPPmultimap168->find(KeyBool);
		break;
	case 169:
		*(multiNode->GetNode()->CPPmultinode169) = multimapUnion->CPPmultimap169->find(KeyWstring);
		break;
	case 170:
		*(multiNode->GetNode()->CPPmultinode170) = multimapUnion->CPPmultimap170->find(KeyWstring);
		break;
	case 171:
		*(multiNode->GetNode()->CPPmultinode171) = multimapUnion->CPPmultimap171->find(KeyWstring);
		break;
	case 172:
		*(multiNode->GetNode()->CPPmultinode172) = multimapUnion->CPPmultimap172->find(KeyWstring);
		break;
	case 173:
		*(multiNode->GetNode()->CPPmultinode173) = multimapUnion->CPPmultimap173->find(KeyWstring);
		break;
	case 174:
		*(multiNode->GetNode()->CPPmultinode174) = multimapUnion->CPPmultimap174->find(KeyWstring);
		break;
	case 175:
		*(multiNode->GetNode()->CPPmultinode175) = multimapUnion->CPPmultimap175->find(KeyWstring);
		break;
	case 176:
		*(multiNode->GetNode()->CPPmultinode176) = multimapUnion->CPPmultimap176->find(KeyWstring);
		break;
	case 177:
		*(multiNode->GetNode()->CPPmultinode177) = multimapUnion->CPPmultimap177->find(KeyWstring);
		break;
	case 178:
		*(multiNode->GetNode()->CPPmultinode178) = multimapUnion->CPPmultimap178->find(KeyWstring);
		break;
	case 179:
		*(multiNode->GetNode()->CPPmultinode179) = multimapUnion->CPPmultimap179->find(KeyWstring);
		break;
	case 180:
		*(multiNode->GetNode()->CPPmultinode180) = multimapUnion->CPPmultimap180->find(KeyWstring);
		break;
	case 181:
		*(multiNode->GetNode()->CPPmultinode181) = multimapUnion->CPPmultimap181->find(KeyWstring);
		break;
	case 182:
		*(multiNode->GetNode()->CPPmultinode182) = multimapUnion->CPPmultimap182->find(KeyWstring);
		break;
	case 183:
		*(multiNode->GetNode()->CPPmultinode183) = multimapUnion->CPPmultimap183->find(Key__Int);
		break;
	case 184:
		*(multiNode->GetNode()->CPPmultinode184) = multimapUnion->CPPmultimap184->find(Key__Int);
		break;
	case 185:
		*(multiNode->GetNode()->CPPmultinode185) = multimapUnion->CPPmultimap185->find(Key__Int);
		break;
	case 186:
		*(multiNode->GetNode()->CPPmultinode186) = multimapUnion->CPPmultimap186->find(Key__Int);
		break;
	case 187:
		*(multiNode->GetNode()->CPPmultinode187) = multimapUnion->CPPmultimap187->find(Key__Int);
		break;
	case 188:
		*(multiNode->GetNode()->CPPmultinode188) = multimapUnion->CPPmultimap188->find(Key__Int);
		break;
	case 189:
		*(multiNode->GetNode()->CPPmultinode189) = multimapUnion->CPPmultimap189->find(Key__Int);
		break;
	case 190:
		*(multiNode->GetNode()->CPPmultinode190) = multimapUnion->CPPmultimap190->find(Key__Int);
		break;
	case 191:
		*(multiNode->GetNode()->CPPmultinode191) = multimapUnion->CPPmultimap191->find(Key__Int);
		break;
	case 192:
		*(multiNode->GetNode()->CPPmultinode192) = multimapUnion->CPPmultimap192->find(Key__Int);
		break;
	case 193:
		*(multiNode->GetNode()->CPPmultinode193) = multimapUnion->CPPmultimap193->find(Key__Int);
		break;
	case 194:
		*(multiNode->GetNode()->CPPmultinode194) = multimapUnion->CPPmultimap194->find(Key__Int);
		break;
	case 195:
		*(multiNode->GetNode()->CPPmultinode195) = multimapUnion->CPPmultimap195->find(Key__Int);
		break;
	case 196:
		*(multiNode->GetNode()->CPPmultinode196) = multimapUnion->CPPmultimap196->find(Key__Int);
		break;
	}

	return multiNode->DeepCopy();
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::begin()
{
	switch (nKeyValueType)
	{
	case 0: default:
		return nullptr;
	case 1:
		*(multiNode->GetNode()->CPPmultinode1) = multimapUnion->CPPmultimap1->begin();
		break;
	case 2:
		*(multiNode->GetNode()->CPPmultinode2) = multimapUnion->CPPmultimap2->begin();
		break;
	case 3:
		*(multiNode->GetNode()->CPPmultinode3) = multimapUnion->CPPmultimap3->begin();
		break;
	case 4:
		*(multiNode->GetNode()->CPPmultinode4) = multimapUnion->CPPmultimap4->begin();
		break;
	case 5:
		*(multiNode->GetNode()->CPPmultinode5) = multimapUnion->CPPmultimap5->begin();
		break;
	case 6:
		*(multiNode->GetNode()->CPPmultinode6) = multimapUnion->CPPmultimap6->begin();
		break;
	case 7:
		*(multiNode->GetNode()->CPPmultinode7) = multimapUnion->CPPmultimap7->begin();
		break;
	case 8:
		*(multiNode->GetNode()->CPPmultinode8) = multimapUnion->CPPmultimap8->begin();
		break;
	case 9:
		*(multiNode->GetNode()->CPPmultinode9) = multimapUnion->CPPmultimap9->begin();
		break;
	case 10:
		*(multiNode->GetNode()->CPPmultinode10) = multimapUnion->CPPmultimap10->begin();
		break;
	case 11:
		*(multiNode->GetNode()->CPPmultinode11) = multimapUnion->CPPmultimap11->begin();
		break;
	case 12:
		*(multiNode->GetNode()->CPPmultinode12) = multimapUnion->CPPmultimap12->begin();
		break;
	case 13:
		*(multiNode->GetNode()->CPPmultinode13) = multimapUnion->CPPmultimap13->begin();
		break;
	case 14:
		*(multiNode->GetNode()->CPPmultinode14) = multimapUnion->CPPmultimap14->begin();
		break;
	case 15:
		*(multiNode->GetNode()->CPPmultinode15) = multimapUnion->CPPmultimap15->begin();
		break;
	case 16:
		*(multiNode->GetNode()->CPPmultinode16) = multimapUnion->CPPmultimap16->begin();
		break;
	case 17:
		*(multiNode->GetNode()->CPPmultinode17) = multimapUnion->CPPmultimap17->begin();
		break;
	case 18:
		*(multiNode->GetNode()->CPPmultinode18) = multimapUnion->CPPmultimap18->begin();
		break;
	case 19:
		*(multiNode->GetNode()->CPPmultinode19) = multimapUnion->CPPmultimap19->begin();
		break;
	case 20:
		*(multiNode->GetNode()->CPPmultinode20) = multimapUnion->CPPmultimap20->begin();
		break;
	case 21:
		*(multiNode->GetNode()->CPPmultinode21) = multimapUnion->CPPmultimap21->begin();
		break;
	case 22:
		*(multiNode->GetNode()->CPPmultinode22) = multimapUnion->CPPmultimap22->begin();
		break;
	case 23:
		*(multiNode->GetNode()->CPPmultinode23) = multimapUnion->CPPmultimap23->begin();
		break;
	case 24:
		*(multiNode->GetNode()->CPPmultinode24) = multimapUnion->CPPmultimap24->begin();
		break;
	case 25:
		*(multiNode->GetNode()->CPPmultinode25) = multimapUnion->CPPmultimap25->begin();
		break;
	case 26:
		*(multiNode->GetNode()->CPPmultinode26) = multimapUnion->CPPmultimap26->begin();
		break;
	case 27:
		*(multiNode->GetNode()->CPPmultinode27) = multimapUnion->CPPmultimap27->begin();
		break;
	case 28:
		*(multiNode->GetNode()->CPPmultinode28) = multimapUnion->CPPmultimap28->begin();
		break;
	case 29:
		*(multiNode->GetNode()->CPPmultinode29) = multimapUnion->CPPmultimap29->begin();
		break;
	case 30:
		*(multiNode->GetNode()->CPPmultinode30) = multimapUnion->CPPmultimap30->begin();
		break;
	case 31:
		*(multiNode->GetNode()->CPPmultinode31) = multimapUnion->CPPmultimap31->begin();
		break;
	case 32:
		*(multiNode->GetNode()->CPPmultinode32) = multimapUnion->CPPmultimap32->begin();
		break;
	case 33:
		*(multiNode->GetNode()->CPPmultinode33) = multimapUnion->CPPmultimap33->begin();
		break;
	case 34:
		*(multiNode->GetNode()->CPPmultinode34) = multimapUnion->CPPmultimap34->begin();
		break;
	case 35:
		*(multiNode->GetNode()->CPPmultinode35) = multimapUnion->CPPmultimap35->begin();
		break;
	case 36:
		*(multiNode->GetNode()->CPPmultinode36) = multimapUnion->CPPmultimap36->begin();
		break;
	case 37:
		*(multiNode->GetNode()->CPPmultinode37) = multimapUnion->CPPmultimap37->begin();
		break;
	case 38:
		*(multiNode->GetNode()->CPPmultinode38) = multimapUnion->CPPmultimap38->begin();
		break;
	case 39:
		*(multiNode->GetNode()->CPPmultinode39) = multimapUnion->CPPmultimap39->begin();
		break;
	case 40:
		*(multiNode->GetNode()->CPPmultinode40) = multimapUnion->CPPmultimap40->begin();
		break;
	case 41:
		*(multiNode->GetNode()->CPPmultinode41) = multimapUnion->CPPmultimap41->begin();
		break;
	case 42:
		*(multiNode->GetNode()->CPPmultinode42) = multimapUnion->CPPmultimap42->begin();
		break;
	case 43:
		*(multiNode->GetNode()->CPPmultinode43) = multimapUnion->CPPmultimap43->begin();
		break;
	case 44:
		*(multiNode->GetNode()->CPPmultinode44) = multimapUnion->CPPmultimap44->begin();
		break;
	case 45:
		*(multiNode->GetNode()->CPPmultinode45) = multimapUnion->CPPmultimap45->begin();
		break;
	case 46:
		*(multiNode->GetNode()->CPPmultinode46) = multimapUnion->CPPmultimap46->begin();
		break;
	case 47:
		*(multiNode->GetNode()->CPPmultinode47) = multimapUnion->CPPmultimap47->begin();
		break;
	case 48:
		*(multiNode->GetNode()->CPPmultinode48) = multimapUnion->CPPmultimap48->begin();
		break;
	case 49:
		*(multiNode->GetNode()->CPPmultinode49) = multimapUnion->CPPmultimap49->begin();
		break;
	case 50:
		*(multiNode->GetNode()->CPPmultinode50) = multimapUnion->CPPmultimap50->begin();
		break;
	case 51:
		*(multiNode->GetNode()->CPPmultinode51) = multimapUnion->CPPmultimap51->begin();
		break;
	case 52:
		*(multiNode->GetNode()->CPPmultinode52) = multimapUnion->CPPmultimap52->begin();
		break;
	case 53:
		*(multiNode->GetNode()->CPPmultinode53) = multimapUnion->CPPmultimap53->begin();
		break;
	case 54:
		*(multiNode->GetNode()->CPPmultinode54) = multimapUnion->CPPmultimap54->begin();
		break;
	case 55:
		*(multiNode->GetNode()->CPPmultinode55) = multimapUnion->CPPmultimap55->begin();
		break;
	case 56:
		*(multiNode->GetNode()->CPPmultinode56) = multimapUnion->CPPmultimap56->begin();
		break;
	case 57:
		*(multiNode->GetNode()->CPPmultinode57) = multimapUnion->CPPmultimap57->begin();
		break;
	case 58:
		*(multiNode->GetNode()->CPPmultinode58) = multimapUnion->CPPmultimap58->begin();
		break;
	case 59:
		*(multiNode->GetNode()->CPPmultinode59) = multimapUnion->CPPmultimap59->begin();
		break;
	case 60:
		*(multiNode->GetNode()->CPPmultinode60) = multimapUnion->CPPmultimap60->begin();
		break;
	case 61:
		*(multiNode->GetNode()->CPPmultinode61) = multimapUnion->CPPmultimap61->begin();
		break;
	case 62:
		*(multiNode->GetNode()->CPPmultinode62) = multimapUnion->CPPmultimap62->begin();
		break;
	case 63:
		*(multiNode->GetNode()->CPPmultinode63) = multimapUnion->CPPmultimap63->begin();
		break;
	case 64:
		*(multiNode->GetNode()->CPPmultinode64) = multimapUnion->CPPmultimap64->begin();
		break;
	case 65:
		*(multiNode->GetNode()->CPPmultinode65) = multimapUnion->CPPmultimap65->begin();
		break;
	case 66:
		*(multiNode->GetNode()->CPPmultinode66) = multimapUnion->CPPmultimap66->begin();
		break;
	case 67:
		*(multiNode->GetNode()->CPPmultinode67) = multimapUnion->CPPmultimap67->begin();
		break;
	case 68:
		*(multiNode->GetNode()->CPPmultinode68) = multimapUnion->CPPmultimap68->begin();
		break;
	case 69:
		*(multiNode->GetNode()->CPPmultinode69) = multimapUnion->CPPmultimap69->begin();
		break;
	case 70:
		*(multiNode->GetNode()->CPPmultinode70) = multimapUnion->CPPmultimap70->begin();
		break;
	case 71:
		*(multiNode->GetNode()->CPPmultinode71) = multimapUnion->CPPmultimap71->begin();
		break;
	case 72:
		*(multiNode->GetNode()->CPPmultinode72) = multimapUnion->CPPmultimap72->begin();
		break;
	case 73:
		*(multiNode->GetNode()->CPPmultinode73) = multimapUnion->CPPmultimap73->begin();
		break;
	case 74:
		*(multiNode->GetNode()->CPPmultinode74) = multimapUnion->CPPmultimap74->begin();
		break;
	case 75:
		*(multiNode->GetNode()->CPPmultinode75) = multimapUnion->CPPmultimap75->begin();
		break;
	case 76:
		*(multiNode->GetNode()->CPPmultinode76) = multimapUnion->CPPmultimap76->begin();
		break;
	case 77:
		*(multiNode->GetNode()->CPPmultinode77) = multimapUnion->CPPmultimap77->begin();
		break;
	case 78:
		*(multiNode->GetNode()->CPPmultinode78) = multimapUnion->CPPmultimap78->begin();
		break;
	case 79:
		*(multiNode->GetNode()->CPPmultinode79) = multimapUnion->CPPmultimap79->begin();
		break;
	case 80:
		*(multiNode->GetNode()->CPPmultinode80) = multimapUnion->CPPmultimap80->begin();
		break;
	case 81:
		*(multiNode->GetNode()->CPPmultinode81) = multimapUnion->CPPmultimap81->begin();
		break;
	case 82:
		*(multiNode->GetNode()->CPPmultinode82) = multimapUnion->CPPmultimap82->begin();
		break;
	case 83:
		*(multiNode->GetNode()->CPPmultinode83) = multimapUnion->CPPmultimap83->begin();
		break;
	case 84:
		*(multiNode->GetNode()->CPPmultinode84) = multimapUnion->CPPmultimap84->begin();
		break;
	case 85:
		*(multiNode->GetNode()->CPPmultinode85) = multimapUnion->CPPmultimap85->begin();
		break;
	case 86:
		*(multiNode->GetNode()->CPPmultinode86) = multimapUnion->CPPmultimap86->begin();
		break;
	case 87:
		*(multiNode->GetNode()->CPPmultinode87) = multimapUnion->CPPmultimap87->begin();
		break;
	case 88:
		*(multiNode->GetNode()->CPPmultinode88) = multimapUnion->CPPmultimap88->begin();
		break;
	case 89:
		*(multiNode->GetNode()->CPPmultinode89) = multimapUnion->CPPmultimap89->begin();
		break;
	case 90:
		*(multiNode->GetNode()->CPPmultinode90) = multimapUnion->CPPmultimap90->begin();
		break;
	case 91:
		*(multiNode->GetNode()->CPPmultinode91) = multimapUnion->CPPmultimap91->begin();
		break;
	case 92:
		*(multiNode->GetNode()->CPPmultinode92) = multimapUnion->CPPmultimap92->begin();
		break;
	case 93:
		*(multiNode->GetNode()->CPPmultinode93) = multimapUnion->CPPmultimap93->begin();
		break;
	case 94:
		*(multiNode->GetNode()->CPPmultinode94) = multimapUnion->CPPmultimap94->begin();
		break;
	case 95:
		*(multiNode->GetNode()->CPPmultinode95) = multimapUnion->CPPmultimap95->begin();
		break;
	case 96:
		*(multiNode->GetNode()->CPPmultinode96) = multimapUnion->CPPmultimap96->begin();
		break;
	case 97:
		*(multiNode->GetNode()->CPPmultinode97) = multimapUnion->CPPmultimap97->begin();
		break;
	case 98:
		*(multiNode->GetNode()->CPPmultinode98) = multimapUnion->CPPmultimap98->begin();
		break;
	case 99:
		*(multiNode->GetNode()->CPPmultinode99) = multimapUnion->CPPmultimap99->begin();
		break;
	case 100:
		*(multiNode->GetNode()->CPPmultinode100) = multimapUnion->CPPmultimap100->begin();
		break;
	case 101:
		*(multiNode->GetNode()->CPPmultinode101) = multimapUnion->CPPmultimap101->begin();
		break;
	case 102:
		*(multiNode->GetNode()->CPPmultinode102) = multimapUnion->CPPmultimap102->begin();
		break;
	case 103:
		*(multiNode->GetNode()->CPPmultinode103) = multimapUnion->CPPmultimap103->begin();
		break;
	case 104:
		*(multiNode->GetNode()->CPPmultinode104) = multimapUnion->CPPmultimap104->begin();
		break;
	case 105:
		*(multiNode->GetNode()->CPPmultinode105) = multimapUnion->CPPmultimap105->begin();
		break;
	case 106:
		*(multiNode->GetNode()->CPPmultinode106) = multimapUnion->CPPmultimap106->begin();
		break;
	case 107:
		*(multiNode->GetNode()->CPPmultinode107) = multimapUnion->CPPmultimap107->begin();
		break;
	case 108:
		*(multiNode->GetNode()->CPPmultinode108) = multimapUnion->CPPmultimap108->begin();
		break;
	case 109:
		*(multiNode->GetNode()->CPPmultinode109) = multimapUnion->CPPmultimap109->begin();
		break;
	case 110:
		*(multiNode->GetNode()->CPPmultinode110) = multimapUnion->CPPmultimap110->begin();
		break;
	case 111:
		*(multiNode->GetNode()->CPPmultinode111) = multimapUnion->CPPmultimap111->begin();
		break;
	case 112:
		*(multiNode->GetNode()->CPPmultinode112) = multimapUnion->CPPmultimap112->begin();
		break;
	case 113:
		*(multiNode->GetNode()->CPPmultinode113) = multimapUnion->CPPmultimap113->begin();
		break;
	case 114:
		*(multiNode->GetNode()->CPPmultinode114) = multimapUnion->CPPmultimap114->begin();
		break;
	case 115:
		*(multiNode->GetNode()->CPPmultinode115) = multimapUnion->CPPmultimap115->begin();
		break;
	case 116:
		*(multiNode->GetNode()->CPPmultinode116) = multimapUnion->CPPmultimap116->begin();
		break;
	case 117:
		*(multiNode->GetNode()->CPPmultinode117) = multimapUnion->CPPmultimap117->begin();
		break;
	case 118:
		*(multiNode->GetNode()->CPPmultinode118) = multimapUnion->CPPmultimap118->begin();
		break;
	case 119:
		*(multiNode->GetNode()->CPPmultinode119) = multimapUnion->CPPmultimap119->begin();
		break;
	case 120:
		*(multiNode->GetNode()->CPPmultinode120) = multimapUnion->CPPmultimap120->begin();
		break;
	case 121:
		*(multiNode->GetNode()->CPPmultinode121) = multimapUnion->CPPmultimap121->begin();
		break;
	case 122:
		*(multiNode->GetNode()->CPPmultinode122) = multimapUnion->CPPmultimap122->begin();
		break;
	case 123:
		*(multiNode->GetNode()->CPPmultinode123) = multimapUnion->CPPmultimap123->begin();
		break;
	case 124:
		*(multiNode->GetNode()->CPPmultinode124) = multimapUnion->CPPmultimap124->begin();
		break;
	case 125:
		*(multiNode->GetNode()->CPPmultinode125) = multimapUnion->CPPmultimap125->begin();
		break;
	case 126:
		*(multiNode->GetNode()->CPPmultinode126) = multimapUnion->CPPmultimap126->begin();
		break;
	case 127:
		*(multiNode->GetNode()->CPPmultinode127) = multimapUnion->CPPmultimap127->begin();
		break;
	case 128:
		*(multiNode->GetNode()->CPPmultinode128) = multimapUnion->CPPmultimap128->begin();
		break;
	case 129:
		*(multiNode->GetNode()->CPPmultinode129) = multimapUnion->CPPmultimap129->begin();
		break;
	case 130:
		*(multiNode->GetNode()->CPPmultinode130) = multimapUnion->CPPmultimap130->begin();
		break;
	case 131:
		*(multiNode->GetNode()->CPPmultinode131) = multimapUnion->CPPmultimap131->begin();
		break;
	case 132:
		*(multiNode->GetNode()->CPPmultinode132) = multimapUnion->CPPmultimap132->begin();
		break;
	case 133:
		*(multiNode->GetNode()->CPPmultinode133) = multimapUnion->CPPmultimap133->begin();
		break;
	case 134:
		*(multiNode->GetNode()->CPPmultinode134) = multimapUnion->CPPmultimap134->begin();
		break;
	case 135:
		*(multiNode->GetNode()->CPPmultinode135) = multimapUnion->CPPmultimap135->begin();
		break;
	case 136:
		*(multiNode->GetNode()->CPPmultinode136) = multimapUnion->CPPmultimap136->begin();
		break;
	case 137:
		*(multiNode->GetNode()->CPPmultinode137) = multimapUnion->CPPmultimap137->begin();
		break;
	case 138:
		*(multiNode->GetNode()->CPPmultinode138) = multimapUnion->CPPmultimap138->begin();
		break;
	case 139:
		*(multiNode->GetNode()->CPPmultinode139) = multimapUnion->CPPmultimap139->begin();
		break;
	case 140:
		*(multiNode->GetNode()->CPPmultinode140) = multimapUnion->CPPmultimap140->begin();
		break;
	case 141:
		*(multiNode->GetNode()->CPPmultinode141) = multimapUnion->CPPmultimap141->begin();
		break;
	case 142:
		*(multiNode->GetNode()->CPPmultinode142) = multimapUnion->CPPmultimap142->begin();
		break;
	case 143:
		*(multiNode->GetNode()->CPPmultinode143) = multimapUnion->CPPmultimap143->begin();
		break;
	case 144:
		*(multiNode->GetNode()->CPPmultinode144) = multimapUnion->CPPmultimap144->begin();
		break;
	case 145:
		*(multiNode->GetNode()->CPPmultinode145) = multimapUnion->CPPmultimap145->begin();
		break;
	case 146:
		*(multiNode->GetNode()->CPPmultinode146) = multimapUnion->CPPmultimap146->begin();
		break;
	case 147:
		*(multiNode->GetNode()->CPPmultinode147) = multimapUnion->CPPmultimap147->begin();
		break;
	case 148:
		*(multiNode->GetNode()->CPPmultinode148) = multimapUnion->CPPmultimap148->begin();
		break;
	case 149:
		*(multiNode->GetNode()->CPPmultinode149) = multimapUnion->CPPmultimap149->begin();
		break;
	case 150:
		*(multiNode->GetNode()->CPPmultinode150) = multimapUnion->CPPmultimap150->begin();
		break;
	case 151:
		*(multiNode->GetNode()->CPPmultinode151) = multimapUnion->CPPmultimap151->begin();
		break;
	case 152:
		*(multiNode->GetNode()->CPPmultinode152) = multimapUnion->CPPmultimap152->begin();
		break;
	case 153:
		*(multiNode->GetNode()->CPPmultinode153) = multimapUnion->CPPmultimap153->begin();
		break;
	case 154:
		*(multiNode->GetNode()->CPPmultinode154) = multimapUnion->CPPmultimap154->begin();
		break;
	case 155:
		*(multiNode->GetNode()->CPPmultinode155) = multimapUnion->CPPmultimap155->begin();
		break;
	case 156:
		*(multiNode->GetNode()->CPPmultinode156) = multimapUnion->CPPmultimap156->begin();
		break;
	case 157:
		*(multiNode->GetNode()->CPPmultinode157) = multimapUnion->CPPmultimap157->begin();
		break;
	case 158:
		*(multiNode->GetNode()->CPPmultinode158) = multimapUnion->CPPmultimap158->begin();
		break;
	case 159:
		*(multiNode->GetNode()->CPPmultinode159) = multimapUnion->CPPmultimap159->begin();
		break;
	case 160:
		*(multiNode->GetNode()->CPPmultinode160) = multimapUnion->CPPmultimap160->begin();
		break;
	case 161:
		*(multiNode->GetNode()->CPPmultinode161) = multimapUnion->CPPmultimap161->begin();
		break;
	case 162:
		*(multiNode->GetNode()->CPPmultinode162) = multimapUnion->CPPmultimap162->begin();
		break;
	case 163:
		*(multiNode->GetNode()->CPPmultinode163) = multimapUnion->CPPmultimap163->begin();
		break;
	case 164:
		*(multiNode->GetNode()->CPPmultinode164) = multimapUnion->CPPmultimap164->begin();
		break;
	case 165:
		*(multiNode->GetNode()->CPPmultinode165) = multimapUnion->CPPmultimap165->begin();
		break;
	case 166:
		*(multiNode->GetNode()->CPPmultinode166) = multimapUnion->CPPmultimap166->begin();
		break;
	case 167:
		*(multiNode->GetNode()->CPPmultinode167) = multimapUnion->CPPmultimap167->begin();
		break;
	case 168:
		*(multiNode->GetNode()->CPPmultinode168) = multimapUnion->CPPmultimap168->begin();
		break;
	case 169:
		*(multiNode->GetNode()->CPPmultinode169) = multimapUnion->CPPmultimap169->begin();
		break;
	case 170:
		*(multiNode->GetNode()->CPPmultinode170) = multimapUnion->CPPmultimap170->begin();
		break;
	case 171:
		*(multiNode->GetNode()->CPPmultinode171) = multimapUnion->CPPmultimap171->begin();
		break;
	case 172:
		*(multiNode->GetNode()->CPPmultinode172) = multimapUnion->CPPmultimap172->begin();
		break;
	case 173:
		*(multiNode->GetNode()->CPPmultinode173) = multimapUnion->CPPmultimap173->begin();
		break;
	case 174:
		*(multiNode->GetNode()->CPPmultinode174) = multimapUnion->CPPmultimap174->begin();
		break;
	case 175:
		*(multiNode->GetNode()->CPPmultinode175) = multimapUnion->CPPmultimap175->begin();
		break;
	case 176:
		*(multiNode->GetNode()->CPPmultinode176) = multimapUnion->CPPmultimap176->begin();
		break;
	case 177:
		*(multiNode->GetNode()->CPPmultinode177) = multimapUnion->CPPmultimap177->begin();
		break;
	case 178:
		*(multiNode->GetNode()->CPPmultinode178) = multimapUnion->CPPmultimap178->begin();
		break;
	case 179:
		*(multiNode->GetNode()->CPPmultinode179) = multimapUnion->CPPmultimap179->begin();
		break;
	case 180:
		*(multiNode->GetNode()->CPPmultinode180) = multimapUnion->CPPmultimap180->begin();
		break;
	case 181:
		*(multiNode->GetNode()->CPPmultinode181) = multimapUnion->CPPmultimap181->begin();
		break;
	case 182:
		*(multiNode->GetNode()->CPPmultinode182) = multimapUnion->CPPmultimap182->begin();
		break;
	case 183:
		*(multiNode->GetNode()->CPPmultinode183) = multimapUnion->CPPmultimap183->begin();
		break;
	case 184:
		*(multiNode->GetNode()->CPPmultinode184) = multimapUnion->CPPmultimap184->begin();
		break;
	case 185:
		*(multiNode->GetNode()->CPPmultinode185) = multimapUnion->CPPmultimap185->begin();
		break;
	case 186:
		*(multiNode->GetNode()->CPPmultinode186) = multimapUnion->CPPmultimap186->begin();
		break;
	case 187:
		*(multiNode->GetNode()->CPPmultinode187) = multimapUnion->CPPmultimap187->begin();
		break;
	case 188:
		*(multiNode->GetNode()->CPPmultinode188) = multimapUnion->CPPmultimap188->begin();
		break;
	case 189:
		*(multiNode->GetNode()->CPPmultinode189) = multimapUnion->CPPmultimap189->begin();
		break;
	case 190:
		*(multiNode->GetNode()->CPPmultinode190) = multimapUnion->CPPmultimap190->begin();
		break;
	case 191:
		*(multiNode->GetNode()->CPPmultinode191) = multimapUnion->CPPmultimap191->begin();
		break;
	case 192:
		*(multiNode->GetNode()->CPPmultinode192) = multimapUnion->CPPmultimap192->begin();
		break;
	case 193:
		*(multiNode->GetNode()->CPPmultinode193) = multimapUnion->CPPmultimap193->begin();
		break;
	case 194:
		*(multiNode->GetNode()->CPPmultinode194) = multimapUnion->CPPmultimap194->begin();
		break;
	case 195:
		*(multiNode->GetNode()->CPPmultinode195) = multimapUnion->CPPmultimap195->begin();
		break;
	case 196:
		*(multiNode->GetNode()->CPPmultinode196) = multimapUnion->CPPmultimap196->begin();
		break;
	}
	return multiNode->DeepCopy();
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::end()
{
	switch (nKeyValueType)
	{
	case 0: default:
		return nullptr;
	case 1:
		*(multiNode->GetNode()->CPPmultinode1) = multimapUnion->CPPmultimap1->end();
		break;
	case 2:
		*(multiNode->GetNode()->CPPmultinode2) = multimapUnion->CPPmultimap2->end();
		break;
	case 3:
		*(multiNode->GetNode()->CPPmultinode3) = multimapUnion->CPPmultimap3->end();
		break;
	case 4:
		*(multiNode->GetNode()->CPPmultinode4) = multimapUnion->CPPmultimap4->end();
		break;
	case 5:
		*(multiNode->GetNode()->CPPmultinode5) = multimapUnion->CPPmultimap5->end();
		break;
	case 6:
		*(multiNode->GetNode()->CPPmultinode6) = multimapUnion->CPPmultimap6->end();
		break;
	case 7:
		*(multiNode->GetNode()->CPPmultinode7) = multimapUnion->CPPmultimap7->end();
		break;
	case 8:
		*(multiNode->GetNode()->CPPmultinode8) = multimapUnion->CPPmultimap8->end();
		break;
	case 9:
		*(multiNode->GetNode()->CPPmultinode9) = multimapUnion->CPPmultimap9->end();
		break;
	case 10:
		*(multiNode->GetNode()->CPPmultinode10) = multimapUnion->CPPmultimap10->end();
		break;
	case 11:
		*(multiNode->GetNode()->CPPmultinode11) = multimapUnion->CPPmultimap11->end();
		break;
	case 12:
		*(multiNode->GetNode()->CPPmultinode12) = multimapUnion->CPPmultimap12->end();
		break;
	case 13:
		*(multiNode->GetNode()->CPPmultinode13) = multimapUnion->CPPmultimap13->end();
		break;
	case 14:
		*(multiNode->GetNode()->CPPmultinode14) = multimapUnion->CPPmultimap14->end();
		break;
	case 15:
		*(multiNode->GetNode()->CPPmultinode15) = multimapUnion->CPPmultimap15->end();
		break;
	case 16:
		*(multiNode->GetNode()->CPPmultinode16) = multimapUnion->CPPmultimap16->end();
		break;
	case 17:
		*(multiNode->GetNode()->CPPmultinode17) = multimapUnion->CPPmultimap17->end();
		break;
	case 18:
		*(multiNode->GetNode()->CPPmultinode18) = multimapUnion->CPPmultimap18->end();
		break;
	case 19:
		*(multiNode->GetNode()->CPPmultinode19) = multimapUnion->CPPmultimap19->end();
		break;
	case 20:
		*(multiNode->GetNode()->CPPmultinode20) = multimapUnion->CPPmultimap20->end();
		break;
	case 21:
		*(multiNode->GetNode()->CPPmultinode21) = multimapUnion->CPPmultimap21->end();
		break;
	case 22:
		*(multiNode->GetNode()->CPPmultinode22) = multimapUnion->CPPmultimap22->end();
		break;
	case 23:
		*(multiNode->GetNode()->CPPmultinode23) = multimapUnion->CPPmultimap23->end();
		break;
	case 24:
		*(multiNode->GetNode()->CPPmultinode24) = multimapUnion->CPPmultimap24->end();
		break;
	case 25:
		*(multiNode->GetNode()->CPPmultinode25) = multimapUnion->CPPmultimap25->end();
		break;
	case 26:
		*(multiNode->GetNode()->CPPmultinode26) = multimapUnion->CPPmultimap26->end();
		break;
	case 27:
		*(multiNode->GetNode()->CPPmultinode27) = multimapUnion->CPPmultimap27->end();
		break;
	case 28:
		*(multiNode->GetNode()->CPPmultinode28) = multimapUnion->CPPmultimap28->end();
		break;
	case 29:
		*(multiNode->GetNode()->CPPmultinode29) = multimapUnion->CPPmultimap29->end();
		break;
	case 30:
		*(multiNode->GetNode()->CPPmultinode30) = multimapUnion->CPPmultimap30->end();
		break;
	case 31:
		*(multiNode->GetNode()->CPPmultinode31) = multimapUnion->CPPmultimap31->end();
		break;
	case 32:
		*(multiNode->GetNode()->CPPmultinode32) = multimapUnion->CPPmultimap32->end();
		break;
	case 33:
		*(multiNode->GetNode()->CPPmultinode33) = multimapUnion->CPPmultimap33->end();
		break;
	case 34:
		*(multiNode->GetNode()->CPPmultinode34) = multimapUnion->CPPmultimap34->end();
		break;
	case 35:
		*(multiNode->GetNode()->CPPmultinode35) = multimapUnion->CPPmultimap35->end();
		break;
	case 36:
		*(multiNode->GetNode()->CPPmultinode36) = multimapUnion->CPPmultimap36->end();
		break;
	case 37:
		*(multiNode->GetNode()->CPPmultinode37) = multimapUnion->CPPmultimap37->end();
		break;
	case 38:
		*(multiNode->GetNode()->CPPmultinode38) = multimapUnion->CPPmultimap38->end();
		break;
	case 39:
		*(multiNode->GetNode()->CPPmultinode39) = multimapUnion->CPPmultimap39->end();
		break;
	case 40:
		*(multiNode->GetNode()->CPPmultinode40) = multimapUnion->CPPmultimap40->end();
		break;
	case 41:
		*(multiNode->GetNode()->CPPmultinode41) = multimapUnion->CPPmultimap41->end();
		break;
	case 42:
		*(multiNode->GetNode()->CPPmultinode42) = multimapUnion->CPPmultimap42->end();
		break;
	case 43:
		*(multiNode->GetNode()->CPPmultinode43) = multimapUnion->CPPmultimap43->end();
		break;
	case 44:
		*(multiNode->GetNode()->CPPmultinode44) = multimapUnion->CPPmultimap44->end();
		break;
	case 45:
		*(multiNode->GetNode()->CPPmultinode45) = multimapUnion->CPPmultimap45->end();
		break;
	case 46:
		*(multiNode->GetNode()->CPPmultinode46) = multimapUnion->CPPmultimap46->end();
		break;
	case 47:
		*(multiNode->GetNode()->CPPmultinode47) = multimapUnion->CPPmultimap47->end();
		break;
	case 48:
		*(multiNode->GetNode()->CPPmultinode48) = multimapUnion->CPPmultimap48->end();
		break;
	case 49:
		*(multiNode->GetNode()->CPPmultinode49) = multimapUnion->CPPmultimap49->end();
		break;
	case 50:
		*(multiNode->GetNode()->CPPmultinode50) = multimapUnion->CPPmultimap50->end();
		break;
	case 51:
		*(multiNode->GetNode()->CPPmultinode51) = multimapUnion->CPPmultimap51->end();
		break;
	case 52:
		*(multiNode->GetNode()->CPPmultinode52) = multimapUnion->CPPmultimap52->end();
		break;
	case 53:
		*(multiNode->GetNode()->CPPmultinode53) = multimapUnion->CPPmultimap53->end();
		break;
	case 54:
		*(multiNode->GetNode()->CPPmultinode54) = multimapUnion->CPPmultimap54->end();
		break;
	case 55:
		*(multiNode->GetNode()->CPPmultinode55) = multimapUnion->CPPmultimap55->end();
		break;
	case 56:
		*(multiNode->GetNode()->CPPmultinode56) = multimapUnion->CPPmultimap56->end();
		break;
	case 57:
		*(multiNode->GetNode()->CPPmultinode57) = multimapUnion->CPPmultimap57->end();
		break;
	case 58:
		*(multiNode->GetNode()->CPPmultinode58) = multimapUnion->CPPmultimap58->end();
		break;
	case 59:
		*(multiNode->GetNode()->CPPmultinode59) = multimapUnion->CPPmultimap59->end();
		break;
	case 60:
		*(multiNode->GetNode()->CPPmultinode60) = multimapUnion->CPPmultimap60->end();
		break;
	case 61:
		*(multiNode->GetNode()->CPPmultinode61) = multimapUnion->CPPmultimap61->end();
		break;
	case 62:
		*(multiNode->GetNode()->CPPmultinode62) = multimapUnion->CPPmultimap62->end();
		break;
	case 63:
		*(multiNode->GetNode()->CPPmultinode63) = multimapUnion->CPPmultimap63->end();
		break;
	case 64:
		*(multiNode->GetNode()->CPPmultinode64) = multimapUnion->CPPmultimap64->end();
		break;
	case 65:
		*(multiNode->GetNode()->CPPmultinode65) = multimapUnion->CPPmultimap65->end();
		break;
	case 66:
		*(multiNode->GetNode()->CPPmultinode66) = multimapUnion->CPPmultimap66->end();
		break;
	case 67:
		*(multiNode->GetNode()->CPPmultinode67) = multimapUnion->CPPmultimap67->end();
		break;
	case 68:
		*(multiNode->GetNode()->CPPmultinode68) = multimapUnion->CPPmultimap68->end();
		break;
	case 69:
		*(multiNode->GetNode()->CPPmultinode69) = multimapUnion->CPPmultimap69->end();
		break;
	case 70:
		*(multiNode->GetNode()->CPPmultinode70) = multimapUnion->CPPmultimap70->end();
		break;
	case 71:
		*(multiNode->GetNode()->CPPmultinode71) = multimapUnion->CPPmultimap71->end();
		break;
	case 72:
		*(multiNode->GetNode()->CPPmultinode72) = multimapUnion->CPPmultimap72->end();
		break;
	case 73:
		*(multiNode->GetNode()->CPPmultinode73) = multimapUnion->CPPmultimap73->end();
		break;
	case 74:
		*(multiNode->GetNode()->CPPmultinode74) = multimapUnion->CPPmultimap74->end();
		break;
	case 75:
		*(multiNode->GetNode()->CPPmultinode75) = multimapUnion->CPPmultimap75->end();
		break;
	case 76:
		*(multiNode->GetNode()->CPPmultinode76) = multimapUnion->CPPmultimap76->end();
		break;
	case 77:
		*(multiNode->GetNode()->CPPmultinode77) = multimapUnion->CPPmultimap77->end();
		break;
	case 78:
		*(multiNode->GetNode()->CPPmultinode78) = multimapUnion->CPPmultimap78->end();
		break;
	case 79:
		*(multiNode->GetNode()->CPPmultinode79) = multimapUnion->CPPmultimap79->end();
		break;
	case 80:
		*(multiNode->GetNode()->CPPmultinode80) = multimapUnion->CPPmultimap80->end();
		break;
	case 81:
		*(multiNode->GetNode()->CPPmultinode81) = multimapUnion->CPPmultimap81->end();
		break;
	case 82:
		*(multiNode->GetNode()->CPPmultinode82) = multimapUnion->CPPmultimap82->end();
		break;
	case 83:
		*(multiNode->GetNode()->CPPmultinode83) = multimapUnion->CPPmultimap83->end();
		break;
	case 84:
		*(multiNode->GetNode()->CPPmultinode84) = multimapUnion->CPPmultimap84->end();
		break;
	case 85:
		*(multiNode->GetNode()->CPPmultinode85) = multimapUnion->CPPmultimap85->end();
		break;
	case 86:
		*(multiNode->GetNode()->CPPmultinode86) = multimapUnion->CPPmultimap86->end();
		break;
	case 87:
		*(multiNode->GetNode()->CPPmultinode87) = multimapUnion->CPPmultimap87->end();
		break;
	case 88:
		*(multiNode->GetNode()->CPPmultinode88) = multimapUnion->CPPmultimap88->end();
		break;
	case 89:
		*(multiNode->GetNode()->CPPmultinode89) = multimapUnion->CPPmultimap89->end();
		break;
	case 90:
		*(multiNode->GetNode()->CPPmultinode90) = multimapUnion->CPPmultimap90->end();
		break;
	case 91:
		*(multiNode->GetNode()->CPPmultinode91) = multimapUnion->CPPmultimap91->end();
		break;
	case 92:
		*(multiNode->GetNode()->CPPmultinode92) = multimapUnion->CPPmultimap92->end();
		break;
	case 93:
		*(multiNode->GetNode()->CPPmultinode93) = multimapUnion->CPPmultimap93->end();
		break;
	case 94:
		*(multiNode->GetNode()->CPPmultinode94) = multimapUnion->CPPmultimap94->end();
		break;
	case 95:
		*(multiNode->GetNode()->CPPmultinode95) = multimapUnion->CPPmultimap95->end();
		break;
	case 96:
		*(multiNode->GetNode()->CPPmultinode96) = multimapUnion->CPPmultimap96->end();
		break;
	case 97:
		*(multiNode->GetNode()->CPPmultinode97) = multimapUnion->CPPmultimap97->end();
		break;
	case 98:
		*(multiNode->GetNode()->CPPmultinode98) = multimapUnion->CPPmultimap98->end();
		break;
	case 99:
		*(multiNode->GetNode()->CPPmultinode99) = multimapUnion->CPPmultimap99->end();
		break;
	case 100:
		*(multiNode->GetNode()->CPPmultinode100) = multimapUnion->CPPmultimap100->end();
		break;
	case 101:
		*(multiNode->GetNode()->CPPmultinode101) = multimapUnion->CPPmultimap101->end();
		break;
	case 102:
		*(multiNode->GetNode()->CPPmultinode102) = multimapUnion->CPPmultimap102->end();
		break;
	case 103:
		*(multiNode->GetNode()->CPPmultinode103) = multimapUnion->CPPmultimap103->end();
		break;
	case 104:
		*(multiNode->GetNode()->CPPmultinode104) = multimapUnion->CPPmultimap104->end();
		break;
	case 105:
		*(multiNode->GetNode()->CPPmultinode105) = multimapUnion->CPPmultimap105->end();
		break;
	case 106:
		*(multiNode->GetNode()->CPPmultinode106) = multimapUnion->CPPmultimap106->end();
		break;
	case 107:
		*(multiNode->GetNode()->CPPmultinode107) = multimapUnion->CPPmultimap107->end();
		break;
	case 108:
		*(multiNode->GetNode()->CPPmultinode108) = multimapUnion->CPPmultimap108->end();
		break;
	case 109:
		*(multiNode->GetNode()->CPPmultinode109) = multimapUnion->CPPmultimap109->end();
		break;
	case 110:
		*(multiNode->GetNode()->CPPmultinode110) = multimapUnion->CPPmultimap110->end();
		break;
	case 111:
		*(multiNode->GetNode()->CPPmultinode111) = multimapUnion->CPPmultimap111->end();
		break;
	case 112:
		*(multiNode->GetNode()->CPPmultinode112) = multimapUnion->CPPmultimap112->end();
		break;
	case 113:
		*(multiNode->GetNode()->CPPmultinode113) = multimapUnion->CPPmultimap113->end();
		break;
	case 114:
		*(multiNode->GetNode()->CPPmultinode114) = multimapUnion->CPPmultimap114->end();
		break;
	case 115:
		*(multiNode->GetNode()->CPPmultinode115) = multimapUnion->CPPmultimap115->end();
		break;
	case 116:
		*(multiNode->GetNode()->CPPmultinode116) = multimapUnion->CPPmultimap116->end();
		break;
	case 117:
		*(multiNode->GetNode()->CPPmultinode117) = multimapUnion->CPPmultimap117->end();
		break;
	case 118:
		*(multiNode->GetNode()->CPPmultinode118) = multimapUnion->CPPmultimap118->end();
		break;
	case 119:
		*(multiNode->GetNode()->CPPmultinode119) = multimapUnion->CPPmultimap119->end();
		break;
	case 120:
		*(multiNode->GetNode()->CPPmultinode120) = multimapUnion->CPPmultimap120->end();
		break;
	case 121:
		*(multiNode->GetNode()->CPPmultinode121) = multimapUnion->CPPmultimap121->end();
		break;
	case 122:
		*(multiNode->GetNode()->CPPmultinode122) = multimapUnion->CPPmultimap122->end();
		break;
	case 123:
		*(multiNode->GetNode()->CPPmultinode123) = multimapUnion->CPPmultimap123->end();
		break;
	case 124:
		*(multiNode->GetNode()->CPPmultinode124) = multimapUnion->CPPmultimap124->end();
		break;
	case 125:
		*(multiNode->GetNode()->CPPmultinode125) = multimapUnion->CPPmultimap125->end();
		break;
	case 126:
		*(multiNode->GetNode()->CPPmultinode126) = multimapUnion->CPPmultimap126->end();
		break;
	case 127:
		*(multiNode->GetNode()->CPPmultinode127) = multimapUnion->CPPmultimap127->end();
		break;
	case 128:
		*(multiNode->GetNode()->CPPmultinode128) = multimapUnion->CPPmultimap128->end();
		break;
	case 129:
		*(multiNode->GetNode()->CPPmultinode129) = multimapUnion->CPPmultimap129->end();
		break;
	case 130:
		*(multiNode->GetNode()->CPPmultinode130) = multimapUnion->CPPmultimap130->end();
		break;
	case 131:
		*(multiNode->GetNode()->CPPmultinode131) = multimapUnion->CPPmultimap131->end();
		break;
	case 132:
		*(multiNode->GetNode()->CPPmultinode132) = multimapUnion->CPPmultimap132->end();
		break;
	case 133:
		*(multiNode->GetNode()->CPPmultinode133) = multimapUnion->CPPmultimap133->end();
		break;
	case 134:
		*(multiNode->GetNode()->CPPmultinode134) = multimapUnion->CPPmultimap134->end();
		break;
	case 135:
		*(multiNode->GetNode()->CPPmultinode135) = multimapUnion->CPPmultimap135->end();
		break;
	case 136:
		*(multiNode->GetNode()->CPPmultinode136) = multimapUnion->CPPmultimap136->end();
		break;
	case 137:
		*(multiNode->GetNode()->CPPmultinode137) = multimapUnion->CPPmultimap137->end();
		break;
	case 138:
		*(multiNode->GetNode()->CPPmultinode138) = multimapUnion->CPPmultimap138->end();
		break;
	case 139:
		*(multiNode->GetNode()->CPPmultinode139) = multimapUnion->CPPmultimap139->end();
		break;
	case 140:
		*(multiNode->GetNode()->CPPmultinode140) = multimapUnion->CPPmultimap140->end();
		break;
	case 141:
		*(multiNode->GetNode()->CPPmultinode141) = multimapUnion->CPPmultimap141->end();
		break;
	case 142:
		*(multiNode->GetNode()->CPPmultinode142) = multimapUnion->CPPmultimap142->end();
		break;
	case 143:
		*(multiNode->GetNode()->CPPmultinode143) = multimapUnion->CPPmultimap143->end();
		break;
	case 144:
		*(multiNode->GetNode()->CPPmultinode144) = multimapUnion->CPPmultimap144->end();
		break;
	case 145:
		*(multiNode->GetNode()->CPPmultinode145) = multimapUnion->CPPmultimap145->end();
		break;
	case 146:
		*(multiNode->GetNode()->CPPmultinode146) = multimapUnion->CPPmultimap146->end();
		break;
	case 147:
		*(multiNode->GetNode()->CPPmultinode147) = multimapUnion->CPPmultimap147->end();
		break;
	case 148:
		*(multiNode->GetNode()->CPPmultinode148) = multimapUnion->CPPmultimap148->end();
		break;
	case 149:
		*(multiNode->GetNode()->CPPmultinode149) = multimapUnion->CPPmultimap149->end();
		break;
	case 150:
		*(multiNode->GetNode()->CPPmultinode150) = multimapUnion->CPPmultimap150->end();
		break;
	case 151:
		*(multiNode->GetNode()->CPPmultinode151) = multimapUnion->CPPmultimap151->end();
		break;
	case 152:
		*(multiNode->GetNode()->CPPmultinode152) = multimapUnion->CPPmultimap152->end();
		break;
	case 153:
		*(multiNode->GetNode()->CPPmultinode153) = multimapUnion->CPPmultimap153->end();
		break;
	case 154:
		*(multiNode->GetNode()->CPPmultinode154) = multimapUnion->CPPmultimap154->end();
		break;
	case 155:
		*(multiNode->GetNode()->CPPmultinode155) = multimapUnion->CPPmultimap155->end();
		break;
	case 156:
		*(multiNode->GetNode()->CPPmultinode156) = multimapUnion->CPPmultimap156->end();
		break;
	case 157:
		*(multiNode->GetNode()->CPPmultinode157) = multimapUnion->CPPmultimap157->end();
		break;
	case 158:
		*(multiNode->GetNode()->CPPmultinode158) = multimapUnion->CPPmultimap158->end();
		break;
	case 159:
		*(multiNode->GetNode()->CPPmultinode159) = multimapUnion->CPPmultimap159->end();
		break;
	case 160:
		*(multiNode->GetNode()->CPPmultinode160) = multimapUnion->CPPmultimap160->end();
		break;
	case 161:
		*(multiNode->GetNode()->CPPmultinode161) = multimapUnion->CPPmultimap161->end();
		break;
	case 162:
		*(multiNode->GetNode()->CPPmultinode162) = multimapUnion->CPPmultimap162->end();
		break;
	case 163:
		*(multiNode->GetNode()->CPPmultinode163) = multimapUnion->CPPmultimap163->end();
		break;
	case 164:
		*(multiNode->GetNode()->CPPmultinode164) = multimapUnion->CPPmultimap164->end();
		break;
	case 165:
		*(multiNode->GetNode()->CPPmultinode165) = multimapUnion->CPPmultimap165->end();
		break;
	case 166:
		*(multiNode->GetNode()->CPPmultinode166) = multimapUnion->CPPmultimap166->end();
		break;
	case 167:
		*(multiNode->GetNode()->CPPmultinode167) = multimapUnion->CPPmultimap167->end();
		break;
	case 168:
		*(multiNode->GetNode()->CPPmultinode168) = multimapUnion->CPPmultimap168->end();
		break;
	case 169:
		*(multiNode->GetNode()->CPPmultinode169) = multimapUnion->CPPmultimap169->end();
		break;
	case 170:
		*(multiNode->GetNode()->CPPmultinode170) = multimapUnion->CPPmultimap170->end();
		break;
	case 171:
		*(multiNode->GetNode()->CPPmultinode171) = multimapUnion->CPPmultimap171->end();
		break;
	case 172:
		*(multiNode->GetNode()->CPPmultinode172) = multimapUnion->CPPmultimap172->end();
		break;
	case 173:
		*(multiNode->GetNode()->CPPmultinode173) = multimapUnion->CPPmultimap173->end();
		break;
	case 174:
		*(multiNode->GetNode()->CPPmultinode174) = multimapUnion->CPPmultimap174->end();
		break;
	case 175:
		*(multiNode->GetNode()->CPPmultinode175) = multimapUnion->CPPmultimap175->end();
		break;
	case 176:
		*(multiNode->GetNode()->CPPmultinode176) = multimapUnion->CPPmultimap176->end();
		break;
	case 177:
		*(multiNode->GetNode()->CPPmultinode177) = multimapUnion->CPPmultimap177->end();
		break;
	case 178:
		*(multiNode->GetNode()->CPPmultinode178) = multimapUnion->CPPmultimap178->end();
		break;
	case 179:
		*(multiNode->GetNode()->CPPmultinode179) = multimapUnion->CPPmultimap179->end();
		break;
	case 180:
		*(multiNode->GetNode()->CPPmultinode180) = multimapUnion->CPPmultimap180->end();
		break;
	case 181:
		*(multiNode->GetNode()->CPPmultinode181) = multimapUnion->CPPmultimap181->end();
		break;
	case 182:
		*(multiNode->GetNode()->CPPmultinode182) = multimapUnion->CPPmultimap182->end();
		break;
	case 183:
		*(multiNode->GetNode()->CPPmultinode183) = multimapUnion->CPPmultimap183->end();
		break;
	case 184:
		*(multiNode->GetNode()->CPPmultinode184) = multimapUnion->CPPmultimap184->end();
		break;
	case 185:
		*(multiNode->GetNode()->CPPmultinode185) = multimapUnion->CPPmultimap185->end();
		break;
	case 186:
		*(multiNode->GetNode()->CPPmultinode186) = multimapUnion->CPPmultimap186->end();
		break;
	case 187:
		*(multiNode->GetNode()->CPPmultinode187) = multimapUnion->CPPmultimap187->end();
		break;
	case 188:
		*(multiNode->GetNode()->CPPmultinode188) = multimapUnion->CPPmultimap188->end();
		break;
	case 189:
		*(multiNode->GetNode()->CPPmultinode189) = multimapUnion->CPPmultimap189->end();
		break;
	case 190:
		*(multiNode->GetNode()->CPPmultinode190) = multimapUnion->CPPmultimap190->end();
		break;
	case 191:
		*(multiNode->GetNode()->CPPmultinode191) = multimapUnion->CPPmultimap191->end();
		break;
	case 192:
		*(multiNode->GetNode()->CPPmultinode192) = multimapUnion->CPPmultimap192->end();
		break;
	case 193:
		*(multiNode->GetNode()->CPPmultinode193) = multimapUnion->CPPmultimap193->end();
		break;
	case 194:
		*(multiNode->GetNode()->CPPmultinode194) = multimapUnion->CPPmultimap194->end();
		break;
	case 195:
		*(multiNode->GetNode()->CPPmultinode195) = multimapUnion->CPPmultimap195->end();
		break;
	case 196:
		*(multiNode->GetNode()->CPPmultinode196) = multimapUnion->CPPmultimap196->end();
		break;
	}
	return multiNode;
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::erase(CShorpUnOrderedMultiNode<Key, Value>^ _Where)
{
	if (Object::ReferenceEquals(_Where, nullptr)) return nullptr;
	if (nKeyValueType != _Where->GetKVType()) return nullptr;
	if (_Where->GetInit() == 0) return nullptr;
	switch (nKeyValueType)
	{
	case 0: default:
		return nullptr;
	case 1:
		*(multiNode->GetNode()->CPPmultinode1) = multimapUnion->CPPmultimap1->erase(*(_Where->GetNode()->CPPmultinode1));
		break;
	case 2:
		*(multiNode->GetNode()->CPPmultinode2) = multimapUnion->CPPmultimap2->erase(*(_Where->GetNode()->CPPmultinode2));
		break;
	case 3:
		*(multiNode->GetNode()->CPPmultinode3) = multimapUnion->CPPmultimap3->erase(*(_Where->GetNode()->CPPmultinode3));
		break;
	case 4:
		*(multiNode->GetNode()->CPPmultinode4) = multimapUnion->CPPmultimap4->erase(*(_Where->GetNode()->CPPmultinode4));
		break;
	case 5:
		*(multiNode->GetNode()->CPPmultinode5) = multimapUnion->CPPmultimap5->erase(*(_Where->GetNode()->CPPmultinode5));
		break;
	case 6:
		*(multiNode->GetNode()->CPPmultinode6) = multimapUnion->CPPmultimap6->erase(*(_Where->GetNode()->CPPmultinode6));
		break;
	case 7:
		*(multiNode->GetNode()->CPPmultinode7) = multimapUnion->CPPmultimap7->erase(*(_Where->GetNode()->CPPmultinode7));
		break;
	case 8:
		*(multiNode->GetNode()->CPPmultinode8) = multimapUnion->CPPmultimap8->erase(*(_Where->GetNode()->CPPmultinode8));
		break;
	case 9:
		*(multiNode->GetNode()->CPPmultinode9) = multimapUnion->CPPmultimap9->erase(*(_Where->GetNode()->CPPmultinode9));
		break;
	case 10:
		*(multiNode->GetNode()->CPPmultinode10) = multimapUnion->CPPmultimap10->erase(*(_Where->GetNode()->CPPmultinode10));
		break;
	case 11:
		*(multiNode->GetNode()->CPPmultinode11) = multimapUnion->CPPmultimap11->erase(*(_Where->GetNode()->CPPmultinode11));
		break;
	case 12:
		*(multiNode->GetNode()->CPPmultinode12) = multimapUnion->CPPmultimap12->erase(*(_Where->GetNode()->CPPmultinode12));
		break;
	case 13:
		*(multiNode->GetNode()->CPPmultinode13) = multimapUnion->CPPmultimap13->erase(*(_Where->GetNode()->CPPmultinode13));
		break;
	case 14:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmultinode14->GetValue());
		*(multiNode->GetNode()->CPPmultinode14) = multimapUnion->CPPmultimap14->erase(*(_Where->GetNode()->CPPmultinode14));
		break;
	case 15:
		*(multiNode->GetNode()->CPPmultinode15) = multimapUnion->CPPmultimap15->erase(*(_Where->GetNode()->CPPmultinode15));
		break;
	case 16:
		*(multiNode->GetNode()->CPPmultinode16) = multimapUnion->CPPmultimap16->erase(*(_Where->GetNode()->CPPmultinode16));
		break;
	case 17:
		*(multiNode->GetNode()->CPPmultinode17) = multimapUnion->CPPmultimap17->erase(*(_Where->GetNode()->CPPmultinode17));
		break;
	case 18:
		*(multiNode->GetNode()->CPPmultinode18) = multimapUnion->CPPmultimap18->erase(*(_Where->GetNode()->CPPmultinode18));
		break;
	case 19:
		*(multiNode->GetNode()->CPPmultinode19) = multimapUnion->CPPmultimap19->erase(*(_Where->GetNode()->CPPmultinode19));
		break;
	case 20:
		*(multiNode->GetNode()->CPPmultinode20) = multimapUnion->CPPmultimap20->erase(*(_Where->GetNode()->CPPmultinode20));
		break;
	case 21:
		*(multiNode->GetNode()->CPPmultinode21) = multimapUnion->CPPmultimap21->erase(*(_Where->GetNode()->CPPmultinode21));
		break;
	case 22:
		*(multiNode->GetNode()->CPPmultinode22) = multimapUnion->CPPmultimap22->erase(*(_Where->GetNode()->CPPmultinode22));
		break;
	case 23:
		*(multiNode->GetNode()->CPPmultinode23) = multimapUnion->CPPmultimap23->erase(*(_Where->GetNode()->CPPmultinode23));
		break;
	case 24:
		*(multiNode->GetNode()->CPPmultinode24) = multimapUnion->CPPmultimap24->erase(*(_Where->GetNode()->CPPmultinode24));
		break;
	case 25:
		*(multiNode->GetNode()->CPPmultinode25) = multimapUnion->CPPmultimap25->erase(*(_Where->GetNode()->CPPmultinode25));
		break;
	case 26:
		*(multiNode->GetNode()->CPPmultinode26) = multimapUnion->CPPmultimap26->erase(*(_Where->GetNode()->CPPmultinode26));
		break;
	case 27:
		*(multiNode->GetNode()->CPPmultinode27) = multimapUnion->CPPmultimap27->erase(*(_Where->GetNode()->CPPmultinode27));
		break;
	case 28:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmultinode28->GetValue());
		*(multiNode->GetNode()->CPPmultinode28) = multimapUnion->CPPmultimap28->erase(*(_Where->GetNode()->CPPmultinode28));
		break;
	case 29:
		*(multiNode->GetNode()->CPPmultinode29) = multimapUnion->CPPmultimap29->erase(*(_Where->GetNode()->CPPmultinode29));
		break;
	case 30:
		*(multiNode->GetNode()->CPPmultinode30) = multimapUnion->CPPmultimap30->erase(*(_Where->GetNode()->CPPmultinode30));
		break;
	case 31:
		*(multiNode->GetNode()->CPPmultinode31) = multimapUnion->CPPmultimap31->erase(*(_Where->GetNode()->CPPmultinode31));
		break;
	case 32:
		*(multiNode->GetNode()->CPPmultinode32) = multimapUnion->CPPmultimap32->erase(*(_Where->GetNode()->CPPmultinode32));
		break;
	case 33:
		*(multiNode->GetNode()->CPPmultinode33) = multimapUnion->CPPmultimap33->erase(*(_Where->GetNode()->CPPmultinode33));
		break;
	case 34:
		*(multiNode->GetNode()->CPPmultinode34) = multimapUnion->CPPmultimap34->erase(*(_Where->GetNode()->CPPmultinode34));
		break;
	case 35:
		*(multiNode->GetNode()->CPPmultinode35) = multimapUnion->CPPmultimap35->erase(*(_Where->GetNode()->CPPmultinode35));
		break;
	case 36:
		*(multiNode->GetNode()->CPPmultinode36) = multimapUnion->CPPmultimap36->erase(*(_Where->GetNode()->CPPmultinode36));
		break;
	case 37:
		*(multiNode->GetNode()->CPPmultinode37) = multimapUnion->CPPmultimap37->erase(*(_Where->GetNode()->CPPmultinode37));
		break;
	case 38:
		*(multiNode->GetNode()->CPPmultinode38) = multimapUnion->CPPmultimap38->erase(*(_Where->GetNode()->CPPmultinode38));
		break;
	case 39:
		*(multiNode->GetNode()->CPPmultinode39) = multimapUnion->CPPmultimap39->erase(*(_Where->GetNode()->CPPmultinode39));
		break;
	case 40:
		*(multiNode->GetNode()->CPPmultinode40) = multimapUnion->CPPmultimap40->erase(*(_Where->GetNode()->CPPmultinode40));
		break;
	case 41:
		*(multiNode->GetNode()->CPPmultinode41) = multimapUnion->CPPmultimap41->erase(*(_Where->GetNode()->CPPmultinode41));
		break;
	case 42:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmultinode42->GetValue());
		*(multiNode->GetNode()->CPPmultinode42) = multimapUnion->CPPmultimap42->erase(*(_Where->GetNode()->CPPmultinode42));
		break;
	case 43:
		*(multiNode->GetNode()->CPPmultinode43) = multimapUnion->CPPmultimap43->erase(*(_Where->GetNode()->CPPmultinode43));
		break;
	case 44:
		*(multiNode->GetNode()->CPPmultinode44) = multimapUnion->CPPmultimap44->erase(*(_Where->GetNode()->CPPmultinode44));
		break;
	case 45:
		*(multiNode->GetNode()->CPPmultinode45) = multimapUnion->CPPmultimap45->erase(*(_Where->GetNode()->CPPmultinode45));
		break;
	case 46:
		*(multiNode->GetNode()->CPPmultinode46) = multimapUnion->CPPmultimap46->erase(*(_Where->GetNode()->CPPmultinode46));
		break;
	case 47:
		*(multiNode->GetNode()->CPPmultinode47) = multimapUnion->CPPmultimap47->erase(*(_Where->GetNode()->CPPmultinode47));
		break;
	case 48:
		*(multiNode->GetNode()->CPPmultinode48) = multimapUnion->CPPmultimap48->erase(*(_Where->GetNode()->CPPmultinode48));
		break;
	case 49:
		*(multiNode->GetNode()->CPPmultinode49) = multimapUnion->CPPmultimap49->erase(*(_Where->GetNode()->CPPmultinode49));
		break;
	case 50:
		*(multiNode->GetNode()->CPPmultinode50) = multimapUnion->CPPmultimap50->erase(*(_Where->GetNode()->CPPmultinode50));
		break;
	case 51:
		*(multiNode->GetNode()->CPPmultinode51) = multimapUnion->CPPmultimap51->erase(*(_Where->GetNode()->CPPmultinode51));
		break;
	case 52:
		*(multiNode->GetNode()->CPPmultinode52) = multimapUnion->CPPmultimap52->erase(*(_Where->GetNode()->CPPmultinode52));
		break;
	case 53:
		*(multiNode->GetNode()->CPPmultinode53) = multimapUnion->CPPmultimap53->erase(*(_Where->GetNode()->CPPmultinode53));
		break;
	case 54:
		*(multiNode->GetNode()->CPPmultinode54) = multimapUnion->CPPmultimap54->erase(*(_Where->GetNode()->CPPmultinode54));
		break;
	case 55:
		*(multiNode->GetNode()->CPPmultinode55) = multimapUnion->CPPmultimap55->erase(*(_Where->GetNode()->CPPmultinode55));
		break;
	case 56:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmultinode56->GetValue());
		*(multiNode->GetNode()->CPPmultinode56) = multimapUnion->CPPmultimap56->erase(*(_Where->GetNode()->CPPmultinode56));
		break;
	case 57:
		*(multiNode->GetNode()->CPPmultinode57) = multimapUnion->CPPmultimap57->erase(*(_Where->GetNode()->CPPmultinode57));
		break;
	case 58:
		*(multiNode->GetNode()->CPPmultinode58) = multimapUnion->CPPmultimap58->erase(*(_Where->GetNode()->CPPmultinode58));
		break;
	case 59:
		*(multiNode->GetNode()->CPPmultinode59) = multimapUnion->CPPmultimap59->erase(*(_Where->GetNode()->CPPmultinode59));
		break;
	case 60:
		*(multiNode->GetNode()->CPPmultinode60) = multimapUnion->CPPmultimap60->erase(*(_Where->GetNode()->CPPmultinode60));
		break;
	case 61:
		*(multiNode->GetNode()->CPPmultinode61) = multimapUnion->CPPmultimap61->erase(*(_Where->GetNode()->CPPmultinode61));
		break;
	case 62:
		*(multiNode->GetNode()->CPPmultinode62) = multimapUnion->CPPmultimap62->erase(*(_Where->GetNode()->CPPmultinode62));
		break;
	case 63:
		*(multiNode->GetNode()->CPPmultinode63) = multimapUnion->CPPmultimap63->erase(*(_Where->GetNode()->CPPmultinode63));
		break;
	case 64:
		*(multiNode->GetNode()->CPPmultinode64) = multimapUnion->CPPmultimap64->erase(*(_Where->GetNode()->CPPmultinode64));
		break;
	case 65:
		*(multiNode->GetNode()->CPPmultinode65) = multimapUnion->CPPmultimap65->erase(*(_Where->GetNode()->CPPmultinode65));
		break;
	case 66:
		*(multiNode->GetNode()->CPPmultinode66) = multimapUnion->CPPmultimap66->erase(*(_Where->GetNode()->CPPmultinode66));
		break;
	case 67:
		*(multiNode->GetNode()->CPPmultinode67) = multimapUnion->CPPmultimap67->erase(*(_Where->GetNode()->CPPmultinode67));
		break;
	case 68:
		*(multiNode->GetNode()->CPPmultinode68) = multimapUnion->CPPmultimap68->erase(*(_Where->GetNode()->CPPmultinode68));
		break;
	case 69:
		*(multiNode->GetNode()->CPPmultinode69) = multimapUnion->CPPmultimap69->erase(*(_Where->GetNode()->CPPmultinode69));
		break;
	case 70:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmultinode70->GetValue());
		*(multiNode->GetNode()->CPPmultinode70) = multimapUnion->CPPmultimap70->erase(*(_Where->GetNode()->CPPmultinode70));
		break;
	case 71:
		*(multiNode->GetNode()->CPPmultinode71) = multimapUnion->CPPmultimap71->erase(*(_Where->GetNode()->CPPmultinode71));
		break;
	case 72:
		*(multiNode->GetNode()->CPPmultinode72) = multimapUnion->CPPmultimap72->erase(*(_Where->GetNode()->CPPmultinode72));
		break;
	case 73:
		*(multiNode->GetNode()->CPPmultinode73) = multimapUnion->CPPmultimap73->erase(*(_Where->GetNode()->CPPmultinode73));
		break;
	case 74:
		*(multiNode->GetNode()->CPPmultinode74) = multimapUnion->CPPmultimap74->erase(*(_Where->GetNode()->CPPmultinode74));
		break;
	case 75:
		*(multiNode->GetNode()->CPPmultinode75) = multimapUnion->CPPmultimap75->erase(*(_Where->GetNode()->CPPmultinode75));
		break;
	case 76:
		*(multiNode->GetNode()->CPPmultinode76) = multimapUnion->CPPmultimap76->erase(*(_Where->GetNode()->CPPmultinode76));
		break;
	case 77:
		*(multiNode->GetNode()->CPPmultinode77) = multimapUnion->CPPmultimap77->erase(*(_Where->GetNode()->CPPmultinode77));
		break;
	case 78:
		*(multiNode->GetNode()->CPPmultinode78) = multimapUnion->CPPmultimap78->erase(*(_Where->GetNode()->CPPmultinode78));
		break;
	case 79:
		*(multiNode->GetNode()->CPPmultinode79) = multimapUnion->CPPmultimap79->erase(*(_Where->GetNode()->CPPmultinode79));
		break;
	case 80:
		*(multiNode->GetNode()->CPPmultinode80) = multimapUnion->CPPmultimap80->erase(*(_Where->GetNode()->CPPmultinode80));
		break;
	case 81:
		*(multiNode->GetNode()->CPPmultinode81) = multimapUnion->CPPmultimap81->erase(*(_Where->GetNode()->CPPmultinode81));
		break;
	case 82:
		*(multiNode->GetNode()->CPPmultinode82) = multimapUnion->CPPmultimap82->erase(*(_Where->GetNode()->CPPmultinode82));
		break;
	case 83:
		*(multiNode->GetNode()->CPPmultinode83) = multimapUnion->CPPmultimap83->erase(*(_Where->GetNode()->CPPmultinode83));
		break;
	case 84:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmultinode84->GetValue());
		*(multiNode->GetNode()->CPPmultinode84) = multimapUnion->CPPmultimap84->erase(*(_Where->GetNode()->CPPmultinode84));
		break;
	case 85:
		*(multiNode->GetNode()->CPPmultinode85) = multimapUnion->CPPmultimap85->erase(*(_Where->GetNode()->CPPmultinode85));
		break;
	case 86:
		*(multiNode->GetNode()->CPPmultinode86) = multimapUnion->CPPmultimap86->erase(*(_Where->GetNode()->CPPmultinode86));
		break;
	case 87:
		*(multiNode->GetNode()->CPPmultinode87) = multimapUnion->CPPmultimap87->erase(*(_Where->GetNode()->CPPmultinode87));
		break;
	case 88:
		*(multiNode->GetNode()->CPPmultinode88) = multimapUnion->CPPmultimap88->erase(*(_Where->GetNode()->CPPmultinode88));
		break;
	case 89:
		*(multiNode->GetNode()->CPPmultinode89) = multimapUnion->CPPmultimap89->erase(*(_Where->GetNode()->CPPmultinode89));
		break;
	case 90:
		*(multiNode->GetNode()->CPPmultinode90) = multimapUnion->CPPmultimap90->erase(*(_Where->GetNode()->CPPmultinode90));
		break;
	case 91:
		*(multiNode->GetNode()->CPPmultinode91) = multimapUnion->CPPmultimap91->erase(*(_Where->GetNode()->CPPmultinode91));
		break;
	case 92:
		*(multiNode->GetNode()->CPPmultinode92) = multimapUnion->CPPmultimap92->erase(*(_Where->GetNode()->CPPmultinode92));
		break;
	case 93:
		*(multiNode->GetNode()->CPPmultinode93) = multimapUnion->CPPmultimap93->erase(*(_Where->GetNode()->CPPmultinode93));
		break;
	case 94:
		*(multiNode->GetNode()->CPPmultinode94) = multimapUnion->CPPmultimap94->erase(*(_Where->GetNode()->CPPmultinode94));
		break;
	case 95:
		*(multiNode->GetNode()->CPPmultinode95) = multimapUnion->CPPmultimap95->erase(*(_Where->GetNode()->CPPmultinode95));
		break;
	case 96:
		*(multiNode->GetNode()->CPPmultinode96) = multimapUnion->CPPmultimap96->erase(*(_Where->GetNode()->CPPmultinode96));
		break;
	case 97:
		*(multiNode->GetNode()->CPPmultinode97) = multimapUnion->CPPmultimap97->erase(*(_Where->GetNode()->CPPmultinode97));
		break;
	case 98:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmultinode98->GetValue());
		*(multiNode->GetNode()->CPPmultinode98) = multimapUnion->CPPmultimap98->erase(*(_Where->GetNode()->CPPmultinode98));
		break;
	case 99:
		*(multiNode->GetNode()->CPPmultinode99) = multimapUnion->CPPmultimap99->erase(*(_Where->GetNode()->CPPmultinode99));
		break;
	case 100:
		*(multiNode->GetNode()->CPPmultinode100) = multimapUnion->CPPmultimap100->erase(*(_Where->GetNode()->CPPmultinode100));
		break;
	case 101:
		*(multiNode->GetNode()->CPPmultinode101) = multimapUnion->CPPmultimap101->erase(*(_Where->GetNode()->CPPmultinode101));
		break;
	case 102:
		*(multiNode->GetNode()->CPPmultinode102) = multimapUnion->CPPmultimap102->erase(*(_Where->GetNode()->CPPmultinode102));
		break;
	case 103:
		*(multiNode->GetNode()->CPPmultinode103) = multimapUnion->CPPmultimap103->erase(*(_Where->GetNode()->CPPmultinode103));
		break;
	case 104:
		*(multiNode->GetNode()->CPPmultinode104) = multimapUnion->CPPmultimap104->erase(*(_Where->GetNode()->CPPmultinode104));
		break;
	case 105:
		*(multiNode->GetNode()->CPPmultinode105) = multimapUnion->CPPmultimap105->erase(*(_Where->GetNode()->CPPmultinode105));
		break;
	case 106:
		*(multiNode->GetNode()->CPPmultinode106) = multimapUnion->CPPmultimap106->erase(*(_Where->GetNode()->CPPmultinode106));
		break;
	case 107:
		*(multiNode->GetNode()->CPPmultinode107) = multimapUnion->CPPmultimap107->erase(*(_Where->GetNode()->CPPmultinode107));
		break;
	case 108:
		*(multiNode->GetNode()->CPPmultinode108) = multimapUnion->CPPmultimap108->erase(*(_Where->GetNode()->CPPmultinode108));
		break;
	case 109:
		*(multiNode->GetNode()->CPPmultinode109) = multimapUnion->CPPmultimap109->erase(*(_Where->GetNode()->CPPmultinode109));
		break;
	case 110:
		*(multiNode->GetNode()->CPPmultinode110) = multimapUnion->CPPmultimap110->erase(*(_Where->GetNode()->CPPmultinode110));
		break;
	case 111:
		*(multiNode->GetNode()->CPPmultinode111) = multimapUnion->CPPmultimap111->erase(*(_Where->GetNode()->CPPmultinode111));
		break;
	case 112:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmultinode112->GetValue());
		*(multiNode->GetNode()->CPPmultinode112) = multimapUnion->CPPmultimap112->erase(*(_Where->GetNode()->CPPmultinode112));
		break;
	case 113:
		*(multiNode->GetNode()->CPPmultinode113) = multimapUnion->CPPmultimap113->erase(*(_Where->GetNode()->CPPmultinode113));
		break;
	case 114:
		*(multiNode->GetNode()->CPPmultinode114) = multimapUnion->CPPmultimap114->erase(*(_Where->GetNode()->CPPmultinode114));
		break;
	case 115:
		*(multiNode->GetNode()->CPPmultinode115) = multimapUnion->CPPmultimap115->erase(*(_Where->GetNode()->CPPmultinode115));
		break;
	case 116:
		*(multiNode->GetNode()->CPPmultinode116) = multimapUnion->CPPmultimap116->erase(*(_Where->GetNode()->CPPmultinode116));
		break;
	case 117:
		*(multiNode->GetNode()->CPPmultinode117) = multimapUnion->CPPmultimap117->erase(*(_Where->GetNode()->CPPmultinode117));
		break;
	case 118:
		*(multiNode->GetNode()->CPPmultinode118) = multimapUnion->CPPmultimap118->erase(*(_Where->GetNode()->CPPmultinode118));
		break;
	case 119:
		*(multiNode->GetNode()->CPPmultinode119) = multimapUnion->CPPmultimap119->erase(*(_Where->GetNode()->CPPmultinode119));
		break;
	case 120:
		*(multiNode->GetNode()->CPPmultinode120) = multimapUnion->CPPmultimap120->erase(*(_Where->GetNode()->CPPmultinode120));
		break;
	case 121:
		*(multiNode->GetNode()->CPPmultinode121) = multimapUnion->CPPmultimap121->erase(*(_Where->GetNode()->CPPmultinode121));
		break;
	case 122:
		*(multiNode->GetNode()->CPPmultinode122) = multimapUnion->CPPmultimap122->erase(*(_Where->GetNode()->CPPmultinode122));
		break;
	case 123:
		*(multiNode->GetNode()->CPPmultinode123) = multimapUnion->CPPmultimap123->erase(*(_Where->GetNode()->CPPmultinode123));
		break;
	case 124:
		*(multiNode->GetNode()->CPPmultinode124) = multimapUnion->CPPmultimap124->erase(*(_Where->GetNode()->CPPmultinode124));
		break;
	case 125:
		*(multiNode->GetNode()->CPPmultinode125) = multimapUnion->CPPmultimap125->erase(*(_Where->GetNode()->CPPmultinode125));
		break;
	case 126:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmultinode126->GetValue());
		*(multiNode->GetNode()->CPPmultinode126) = multimapUnion->CPPmultimap126->erase(*(_Where->GetNode()->CPPmultinode126));
		break;
	case 127:
		*(multiNode->GetNode()->CPPmultinode127) = multimapUnion->CPPmultimap127->erase(*(_Where->GetNode()->CPPmultinode127));
		break;
	case 128:
		*(multiNode->GetNode()->CPPmultinode128) = multimapUnion->CPPmultimap128->erase(*(_Where->GetNode()->CPPmultinode128));
		break;
	case 129:
		*(multiNode->GetNode()->CPPmultinode129) = multimapUnion->CPPmultimap129->erase(*(_Where->GetNode()->CPPmultinode129));
		break;
	case 130:
		*(multiNode->GetNode()->CPPmultinode130) = multimapUnion->CPPmultimap130->erase(*(_Where->GetNode()->CPPmultinode130));
		break;
	case 131:
		*(multiNode->GetNode()->CPPmultinode131) = multimapUnion->CPPmultimap131->erase(*(_Where->GetNode()->CPPmultinode131));
		break;
	case 132:
		*(multiNode->GetNode()->CPPmultinode132) = multimapUnion->CPPmultimap132->erase(*(_Where->GetNode()->CPPmultinode132));
		break;
	case 133:
		*(multiNode->GetNode()->CPPmultinode133) = multimapUnion->CPPmultimap133->erase(*(_Where->GetNode()->CPPmultinode133));
		break;
	case 134:
		*(multiNode->GetNode()->CPPmultinode134) = multimapUnion->CPPmultimap134->erase(*(_Where->GetNode()->CPPmultinode134));
		break;
	case 135:
		*(multiNode->GetNode()->CPPmultinode135) = multimapUnion->CPPmultimap135->erase(*(_Where->GetNode()->CPPmultinode135));
		break;
	case 136:
		*(multiNode->GetNode()->CPPmultinode136) = multimapUnion->CPPmultimap136->erase(*(_Where->GetNode()->CPPmultinode136));
		break;
	case 137:
		*(multiNode->GetNode()->CPPmultinode137) = multimapUnion->CPPmultimap137->erase(*(_Where->GetNode()->CPPmultinode137));
		break;
	case 138:
		*(multiNode->GetNode()->CPPmultinode138) = multimapUnion->CPPmultimap138->erase(*(_Where->GetNode()->CPPmultinode138));
		break;
	case 139:
		*(multiNode->GetNode()->CPPmultinode139) = multimapUnion->CPPmultimap139->erase(*(_Where->GetNode()->CPPmultinode139));
		break;
	case 140:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmultinode140->GetValue());
		*(multiNode->GetNode()->CPPmultinode140) = multimapUnion->CPPmultimap140->erase(*(_Where->GetNode()->CPPmultinode140));
		break;
	case 141:
		*(multiNode->GetNode()->CPPmultinode141) = multimapUnion->CPPmultimap141->erase(*(_Where->GetNode()->CPPmultinode141));
		break;
	case 142:
		*(multiNode->GetNode()->CPPmultinode142) = multimapUnion->CPPmultimap142->erase(*(_Where->GetNode()->CPPmultinode142));
		break;
	case 143:
		*(multiNode->GetNode()->CPPmultinode143) = multimapUnion->CPPmultimap143->erase(*(_Where->GetNode()->CPPmultinode143));
		break;
	case 144:
		*(multiNode->GetNode()->CPPmultinode144) = multimapUnion->CPPmultimap144->erase(*(_Where->GetNode()->CPPmultinode144));
		break;
	case 145:
		*(multiNode->GetNode()->CPPmultinode145) = multimapUnion->CPPmultimap145->erase(*(_Where->GetNode()->CPPmultinode145));
		break;
	case 146:
		*(multiNode->GetNode()->CPPmultinode146) = multimapUnion->CPPmultimap146->erase(*(_Where->GetNode()->CPPmultinode146));
		break;
	case 147:
		*(multiNode->GetNode()->CPPmultinode147) = multimapUnion->CPPmultimap147->erase(*(_Where->GetNode()->CPPmultinode147));
		break;
	case 148:
		*(multiNode->GetNode()->CPPmultinode148) = multimapUnion->CPPmultimap148->erase(*(_Where->GetNode()->CPPmultinode148));
		break;
	case 149:
		*(multiNode->GetNode()->CPPmultinode149) = multimapUnion->CPPmultimap149->erase(*(_Where->GetNode()->CPPmultinode149));
		break;
	case 150:
		*(multiNode->GetNode()->CPPmultinode150) = multimapUnion->CPPmultimap150->erase(*(_Where->GetNode()->CPPmultinode150));
		break;
	case 151:
		*(multiNode->GetNode()->CPPmultinode151) = multimapUnion->CPPmultimap151->erase(*(_Where->GetNode()->CPPmultinode151));
		break;
	case 152:
		*(multiNode->GetNode()->CPPmultinode152) = multimapUnion->CPPmultimap152->erase(*(_Where->GetNode()->CPPmultinode152));
		break;
	case 153:
		*(multiNode->GetNode()->CPPmultinode153) = multimapUnion->CPPmultimap153->erase(*(_Where->GetNode()->CPPmultinode153));
		break;
	case 154:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmultinode154->GetValue());
		*(multiNode->GetNode()->CPPmultinode154) = multimapUnion->CPPmultimap154->erase(*(_Where->GetNode()->CPPmultinode154));
		break;
	case 155:
		*(multiNode->GetNode()->CPPmultinode155) = multimapUnion->CPPmultimap155->erase(*(_Where->GetNode()->CPPmultinode155));
		break;
	case 156:
		*(multiNode->GetNode()->CPPmultinode156) = multimapUnion->CPPmultimap156->erase(*(_Where->GetNode()->CPPmultinode156));
		break;
	case 157:
		*(multiNode->GetNode()->CPPmultinode157) = multimapUnion->CPPmultimap157->erase(*(_Where->GetNode()->CPPmultinode157));
		break;
	case 158:
		*(multiNode->GetNode()->CPPmultinode158) = multimapUnion->CPPmultimap158->erase(*(_Where->GetNode()->CPPmultinode158));
		break;
	case 159:
		*(multiNode->GetNode()->CPPmultinode159) = multimapUnion->CPPmultimap159->erase(*(_Where->GetNode()->CPPmultinode159));
		break;
	case 160:
		*(multiNode->GetNode()->CPPmultinode160) = multimapUnion->CPPmultimap160->erase(*(_Where->GetNode()->CPPmultinode160));
		break;
	case 161:
		*(multiNode->GetNode()->CPPmultinode161) = multimapUnion->CPPmultimap161->erase(*(_Where->GetNode()->CPPmultinode161));
		break;
	case 162:
		*(multiNode->GetNode()->CPPmultinode162) = multimapUnion->CPPmultimap162->erase(*(_Where->GetNode()->CPPmultinode162));
		break;
	case 163:
		*(multiNode->GetNode()->CPPmultinode163) = multimapUnion->CPPmultimap163->erase(*(_Where->GetNode()->CPPmultinode163));
		break;
	case 164:
		*(multiNode->GetNode()->CPPmultinode164) = multimapUnion->CPPmultimap164->erase(*(_Where->GetNode()->CPPmultinode164));
		break;
	case 165:
		*(multiNode->GetNode()->CPPmultinode165) = multimapUnion->CPPmultimap165->erase(*(_Where->GetNode()->CPPmultinode165));
		break;
	case 166:
		*(multiNode->GetNode()->CPPmultinode166) = multimapUnion->CPPmultimap166->erase(*(_Where->GetNode()->CPPmultinode166));
		break;
	case 167:
		*(multiNode->GetNode()->CPPmultinode167) = multimapUnion->CPPmultimap167->erase(*(_Where->GetNode()->CPPmultinode167));
		break;
	case 168:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmultinode168->GetValue());
		*(multiNode->GetNode()->CPPmultinode168) = multimapUnion->CPPmultimap168->erase(*(_Where->GetNode()->CPPmultinode168));
		break;
	case 169:
		*(multiNode->GetNode()->CPPmultinode169) = multimapUnion->CPPmultimap169->erase(*(_Where->GetNode()->CPPmultinode169));
		break;
	case 170:
		*(multiNode->GetNode()->CPPmultinode170) = multimapUnion->CPPmultimap170->erase(*(_Where->GetNode()->CPPmultinode170));
		break;
	case 171:
		*(multiNode->GetNode()->CPPmultinode171) = multimapUnion->CPPmultimap171->erase(*(_Where->GetNode()->CPPmultinode171));
		break;
	case 172:
		*(multiNode->GetNode()->CPPmultinode172) = multimapUnion->CPPmultimap172->erase(*(_Where->GetNode()->CPPmultinode172));
		break;
	case 173:
		*(multiNode->GetNode()->CPPmultinode173) = multimapUnion->CPPmultimap173->erase(*(_Where->GetNode()->CPPmultinode173));
		break;
	case 174:
		*(multiNode->GetNode()->CPPmultinode174) = multimapUnion->CPPmultimap174->erase(*(_Where->GetNode()->CPPmultinode174));
		break;
	case 175:
		*(multiNode->GetNode()->CPPmultinode175) = multimapUnion->CPPmultimap175->erase(*(_Where->GetNode()->CPPmultinode175));
		break;
	case 176:
		*(multiNode->GetNode()->CPPmultinode176) = multimapUnion->CPPmultimap176->erase(*(_Where->GetNode()->CPPmultinode176));
		break;
	case 177:
		*(multiNode->GetNode()->CPPmultinode177) = multimapUnion->CPPmultimap177->erase(*(_Where->GetNode()->CPPmultinode177));
		break;
	case 178:
		*(multiNode->GetNode()->CPPmultinode178) = multimapUnion->CPPmultimap178->erase(*(_Where->GetNode()->CPPmultinode178));
		break;
	case 179:
		*(multiNode->GetNode()->CPPmultinode179) = multimapUnion->CPPmultimap179->erase(*(_Where->GetNode()->CPPmultinode179));
		break;
	case 180:
		*(multiNode->GetNode()->CPPmultinode180) = multimapUnion->CPPmultimap180->erase(*(_Where->GetNode()->CPPmultinode180));
		break;
	case 181:
		*(multiNode->GetNode()->CPPmultinode181) = multimapUnion->CPPmultimap181->erase(*(_Where->GetNode()->CPPmultinode181));
		break;
	case 182:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmultinode182->GetValue());
		*(multiNode->GetNode()->CPPmultinode182) = multimapUnion->CPPmultimap182->erase(*(_Where->GetNode()->CPPmultinode182));
		break;
	case 183:
		*(multiNode->GetNode()->CPPmultinode183) = multimapUnion->CPPmultimap183->erase(*(_Where->GetNode()->CPPmultinode183));
		break;
	case 184:
		*(multiNode->GetNode()->CPPmultinode184) = multimapUnion->CPPmultimap184->erase(*(_Where->GetNode()->CPPmultinode184));
		break;
	case 185:
		*(multiNode->GetNode()->CPPmultinode185) = multimapUnion->CPPmultimap185->erase(*(_Where->GetNode()->CPPmultinode185));
		break;
	case 186:
		*(multiNode->GetNode()->CPPmultinode186) = multimapUnion->CPPmultimap186->erase(*(_Where->GetNode()->CPPmultinode186));
		break;
	case 187:
		*(multiNode->GetNode()->CPPmultinode187) = multimapUnion->CPPmultimap187->erase(*(_Where->GetNode()->CPPmultinode187));
		break;
	case 188:
		*(multiNode->GetNode()->CPPmultinode188) = multimapUnion->CPPmultimap188->erase(*(_Where->GetNode()->CPPmultinode188));
		break;
	case 189:
		*(multiNode->GetNode()->CPPmultinode189) = multimapUnion->CPPmultimap189->erase(*(_Where->GetNode()->CPPmultinode189));
		break;
	case 190:
		*(multiNode->GetNode()->CPPmultinode190) = multimapUnion->CPPmultimap190->erase(*(_Where->GetNode()->CPPmultinode190));
		break;
	case 191:
		*(multiNode->GetNode()->CPPmultinode191) = multimapUnion->CPPmultimap191->erase(*(_Where->GetNode()->CPPmultinode191));
		break;
	case 192:
		*(multiNode->GetNode()->CPPmultinode192) = multimapUnion->CPPmultimap192->erase(*(_Where->GetNode()->CPPmultinode192));
		break;
	case 193:
		*(multiNode->GetNode()->CPPmultinode193) = multimapUnion->CPPmultimap193->erase(*(_Where->GetNode()->CPPmultinode193));
		break;
	case 194:
		*(multiNode->GetNode()->CPPmultinode194) = multimapUnion->CPPmultimap194->erase(*(_Where->GetNode()->CPPmultinode194));
		break;
	case 195:
		*(multiNode->GetNode()->CPPmultinode195) = multimapUnion->CPPmultimap195->erase(*(_Where->GetNode()->CPPmultinode195));
		break;
	case 196:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmultinode196->GetValue());
		*(multiNode->GetNode()->CPPmultinode196) = multimapUnion->CPPmultimap196->erase(*(_Where->GetNode()->CPPmultinode196));
		break;
	}
	return multiNode->DeepCopy();
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::erase(CShorpUnOrderedMultiNode<Key, Value>^ First, CShorpUnOrderedMultiNode<Key, Value>^ Last)
{
	if (Object::ReferenceEquals(First, nullptr)) return nullptr;
	if (Object::ReferenceEquals(Last, nullptr)) return nullptr;
	if (First->GetKVType() != Last->GetKVType()) return nullptr;
	if (nKeyValueType != First->GetKVType()) return nullptr;
	if (First->GetInit() == 0) return nullptr;
	if (Last->GetInit() == 0) return nullptr;

	switch (nKeyValueType)
	{
	case 0: default:
		return nullptr;
	case 1:
		*(multiNode->GetNode()->CPPmultinode1) = multimapUnion->CPPmultimap1->erase(*(First->GetNode()->CPPmultinode1), *(Last->GetNode()->CPPmultinode1));
		break;
	case 2:
		*(multiNode->GetNode()->CPPmultinode2) = multimapUnion->CPPmultimap2->erase(*(First->GetNode()->CPPmultinode2), *(Last->GetNode()->CPPmultinode2));
		break;
	case 3:
		*(multiNode->GetNode()->CPPmultinode3) = multimapUnion->CPPmultimap3->erase(*(First->GetNode()->CPPmultinode3), *(Last->GetNode()->CPPmultinode3));
		break;
	case 4:
		*(multiNode->GetNode()->CPPmultinode4) = multimapUnion->CPPmultimap4->erase(*(First->GetNode()->CPPmultinode4), *(Last->GetNode()->CPPmultinode4));
		break;
	case 5:
		*(multiNode->GetNode()->CPPmultinode5) = multimapUnion->CPPmultimap5->erase(*(First->GetNode()->CPPmultinode5), *(Last->GetNode()->CPPmultinode5));
		break;
	case 6:
		*(multiNode->GetNode()->CPPmultinode6) = multimapUnion->CPPmultimap6->erase(*(First->GetNode()->CPPmultinode6), *(Last->GetNode()->CPPmultinode6));
		break;
	case 7:
		*(multiNode->GetNode()->CPPmultinode7) = multimapUnion->CPPmultimap7->erase(*(First->GetNode()->CPPmultinode7), *(Last->GetNode()->CPPmultinode7));
		break;
	case 8:
		*(multiNode->GetNode()->CPPmultinode8) = multimapUnion->CPPmultimap8->erase(*(First->GetNode()->CPPmultinode8), *(Last->GetNode()->CPPmultinode8));
		break;
	case 9:
		*(multiNode->GetNode()->CPPmultinode9) = multimapUnion->CPPmultimap9->erase(*(First->GetNode()->CPPmultinode9), *(Last->GetNode()->CPPmultinode9));
		break;
	case 10:
		*(multiNode->GetNode()->CPPmultinode10) = multimapUnion->CPPmultimap10->erase(*(First->GetNode()->CPPmultinode10), *(Last->GetNode()->CPPmultinode10));
		break;
	case 11:
		*(multiNode->GetNode()->CPPmultinode11) = multimapUnion->CPPmultimap11->erase(*(First->GetNode()->CPPmultinode11), *(Last->GetNode()->CPPmultinode11));
		break;
	case 12:
		*(multiNode->GetNode()->CPPmultinode12) = multimapUnion->CPPmultimap12->erase(*(First->GetNode()->CPPmultinode12), *(Last->GetNode()->CPPmultinode12));
		break;
	case 13:
		*(multiNode->GetNode()->CPPmultinode13) = multimapUnion->CPPmultimap13->erase(*(First->GetNode()->CPPmultinode13), *(Last->GetNode()->CPPmultinode13));
		break;
	case 14:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<unsigned char, __int64> iter;
			for (iter = *(First->GetNode()->CPPmultinode14); iter != *(Last->GetNode()->CPPmultinode14); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode14) = multimapUnion->CPPmultimap14->erase(*(First->GetNode()->CPPmultinode14), *(Last->GetNode()->CPPmultinode14));
		break;
	case 15:
		*(multiNode->GetNode()->CPPmultinode15) = multimapUnion->CPPmultimap15->erase(*(First->GetNode()->CPPmultinode15), *(Last->GetNode()->CPPmultinode15));
		break;
	case 16:
		*(multiNode->GetNode()->CPPmultinode16) = multimapUnion->CPPmultimap16->erase(*(First->GetNode()->CPPmultinode16), *(Last->GetNode()->CPPmultinode16));
		break;
	case 17:
		*(multiNode->GetNode()->CPPmultinode17) = multimapUnion->CPPmultimap17->erase(*(First->GetNode()->CPPmultinode17), *(Last->GetNode()->CPPmultinode17));
		break;
	case 18:
		*(multiNode->GetNode()->CPPmultinode18) = multimapUnion->CPPmultimap18->erase(*(First->GetNode()->CPPmultinode18), *(Last->GetNode()->CPPmultinode18));
		break;
	case 19:
		*(multiNode->GetNode()->CPPmultinode19) = multimapUnion->CPPmultimap19->erase(*(First->GetNode()->CPPmultinode19), *(Last->GetNode()->CPPmultinode19));
		break;
	case 20:
		*(multiNode->GetNode()->CPPmultinode20) = multimapUnion->CPPmultimap20->erase(*(First->GetNode()->CPPmultinode20), *(Last->GetNode()->CPPmultinode20));
		break;
	case 21:
		*(multiNode->GetNode()->CPPmultinode21) = multimapUnion->CPPmultimap21->erase(*(First->GetNode()->CPPmultinode21), *(Last->GetNode()->CPPmultinode21));
		break;
	case 22:
		*(multiNode->GetNode()->CPPmultinode22) = multimapUnion->CPPmultimap22->erase(*(First->GetNode()->CPPmultinode22), *(Last->GetNode()->CPPmultinode22));
		break;
	case 23:
		*(multiNode->GetNode()->CPPmultinode23) = multimapUnion->CPPmultimap23->erase(*(First->GetNode()->CPPmultinode23), *(Last->GetNode()->CPPmultinode23));
		break;
	case 24:
		*(multiNode->GetNode()->CPPmultinode24) = multimapUnion->CPPmultimap24->erase(*(First->GetNode()->CPPmultinode24), *(Last->GetNode()->CPPmultinode24));
		break;
	case 25:
		*(multiNode->GetNode()->CPPmultinode25) = multimapUnion->CPPmultimap25->erase(*(First->GetNode()->CPPmultinode25), *(Last->GetNode()->CPPmultinode25));
		break;
	case 26:
		*(multiNode->GetNode()->CPPmultinode26) = multimapUnion->CPPmultimap26->erase(*(First->GetNode()->CPPmultinode26), *(Last->GetNode()->CPPmultinode26));
		break;
	case 27:
		*(multiNode->GetNode()->CPPmultinode27) = multimapUnion->CPPmultimap27->erase(*(First->GetNode()->CPPmultinode27), *(Last->GetNode()->CPPmultinode27));
		break;
	case 28:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<char, __int64> iter;
			for (iter = *(First->GetNode()->CPPmultinode28); iter != *(Last->GetNode()->CPPmultinode28); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode28) = multimapUnion->CPPmultimap28->erase(*(First->GetNode()->CPPmultinode28), *(Last->GetNode()->CPPmultinode28));
		break;
	case 29:
		*(multiNode->GetNode()->CPPmultinode29) = multimapUnion->CPPmultimap29->erase(*(First->GetNode()->CPPmultinode29), *(Last->GetNode()->CPPmultinode29));
		break;
	case 30:
		*(multiNode->GetNode()->CPPmultinode30) = multimapUnion->CPPmultimap30->erase(*(First->GetNode()->CPPmultinode30), *(Last->GetNode()->CPPmultinode30));
		break;
	case 31:
		*(multiNode->GetNode()->CPPmultinode31) = multimapUnion->CPPmultimap31->erase(*(First->GetNode()->CPPmultinode31), *(Last->GetNode()->CPPmultinode31));
		break;
	case 32:
		*(multiNode->GetNode()->CPPmultinode32) = multimapUnion->CPPmultimap32->erase(*(First->GetNode()->CPPmultinode32), *(Last->GetNode()->CPPmultinode32));
		break;
	case 33:
		*(multiNode->GetNode()->CPPmultinode33) = multimapUnion->CPPmultimap33->erase(*(First->GetNode()->CPPmultinode33), *(Last->GetNode()->CPPmultinode33));
		break;
	case 34:
		*(multiNode->GetNode()->CPPmultinode34) = multimapUnion->CPPmultimap34->erase(*(First->GetNode()->CPPmultinode34), *(Last->GetNode()->CPPmultinode34));
		break;
	case 35:
		*(multiNode->GetNode()->CPPmultinode35) = multimapUnion->CPPmultimap35->erase(*(First->GetNode()->CPPmultinode35), *(Last->GetNode()->CPPmultinode35));
		break;
	case 36:
		*(multiNode->GetNode()->CPPmultinode36) = multimapUnion->CPPmultimap36->erase(*(First->GetNode()->CPPmultinode36), *(Last->GetNode()->CPPmultinode36));
		break;
	case 37:
		*(multiNode->GetNode()->CPPmultinode37) = multimapUnion->CPPmultimap37->erase(*(First->GetNode()->CPPmultinode37), *(Last->GetNode()->CPPmultinode37));
		break;
	case 38:
		*(multiNode->GetNode()->CPPmultinode38) = multimapUnion->CPPmultimap38->erase(*(First->GetNode()->CPPmultinode38), *(Last->GetNode()->CPPmultinode38));
		break;
	case 39:
		*(multiNode->GetNode()->CPPmultinode39) = multimapUnion->CPPmultimap39->erase(*(First->GetNode()->CPPmultinode39), *(Last->GetNode()->CPPmultinode39));
		break;
	case 40:
		*(multiNode->GetNode()->CPPmultinode40) = multimapUnion->CPPmultimap40->erase(*(First->GetNode()->CPPmultinode40), *(Last->GetNode()->CPPmultinode40));
		break;
	case 41:
		*(multiNode->GetNode()->CPPmultinode41) = multimapUnion->CPPmultimap41->erase(*(First->GetNode()->CPPmultinode41), *(Last->GetNode()->CPPmultinode41));
		break;
	case 42:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<short, __int64> iter;
			for (iter = *(First->GetNode()->CPPmultinode42); iter != *(Last->GetNode()->CPPmultinode42); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode42) = multimapUnion->CPPmultimap42->erase(*(First->GetNode()->CPPmultinode42), *(Last->GetNode()->CPPmultinode42));
		break;
	case 43:
		*(multiNode->GetNode()->CPPmultinode43) = multimapUnion->CPPmultimap43->erase(*(First->GetNode()->CPPmultinode43), *(Last->GetNode()->CPPmultinode43));
		break;
	case 44:
		*(multiNode->GetNode()->CPPmultinode44) = multimapUnion->CPPmultimap44->erase(*(First->GetNode()->CPPmultinode44), *(Last->GetNode()->CPPmultinode44));
		break;
	case 45:
		*(multiNode->GetNode()->CPPmultinode45) = multimapUnion->CPPmultimap45->erase(*(First->GetNode()->CPPmultinode45), *(Last->GetNode()->CPPmultinode45));
		break;
	case 46:
		*(multiNode->GetNode()->CPPmultinode46) = multimapUnion->CPPmultimap46->erase(*(First->GetNode()->CPPmultinode46), *(Last->GetNode()->CPPmultinode46));
		break;
	case 47:
		*(multiNode->GetNode()->CPPmultinode47) = multimapUnion->CPPmultimap47->erase(*(First->GetNode()->CPPmultinode47), *(Last->GetNode()->CPPmultinode47));
		break;
	case 48:
		*(multiNode->GetNode()->CPPmultinode48) = multimapUnion->CPPmultimap48->erase(*(First->GetNode()->CPPmultinode48), *(Last->GetNode()->CPPmultinode48));
		break;
	case 49:
		*(multiNode->GetNode()->CPPmultinode49) = multimapUnion->CPPmultimap49->erase(*(First->GetNode()->CPPmultinode49), *(Last->GetNode()->CPPmultinode49));
		break;
	case 50:
		*(multiNode->GetNode()->CPPmultinode50) = multimapUnion->CPPmultimap50->erase(*(First->GetNode()->CPPmultinode50), *(Last->GetNode()->CPPmultinode50));
		break;
	case 51:
		*(multiNode->GetNode()->CPPmultinode51) = multimapUnion->CPPmultimap51->erase(*(First->GetNode()->CPPmultinode51), *(Last->GetNode()->CPPmultinode51));
		break;
	case 52:
		*(multiNode->GetNode()->CPPmultinode52) = multimapUnion->CPPmultimap52->erase(*(First->GetNode()->CPPmultinode52), *(Last->GetNode()->CPPmultinode52));
		break;
	case 53:
		*(multiNode->GetNode()->CPPmultinode53) = multimapUnion->CPPmultimap53->erase(*(First->GetNode()->CPPmultinode53), *(Last->GetNode()->CPPmultinode53));
		break;
	case 54:
		*(multiNode->GetNode()->CPPmultinode54) = multimapUnion->CPPmultimap54->erase(*(First->GetNode()->CPPmultinode54), *(Last->GetNode()->CPPmultinode54));
		break;
	case 55:
		*(multiNode->GetNode()->CPPmultinode55) = multimapUnion->CPPmultimap55->erase(*(First->GetNode()->CPPmultinode55), *(Last->GetNode()->CPPmultinode55));
		break;
	case 56:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<unsigned short, __int64> iter;
			for (iter = *(First->GetNode()->CPPmultinode56); iter != *(Last->GetNode()->CPPmultinode56); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode56) = multimapUnion->CPPmultimap56->erase(*(First->GetNode()->CPPmultinode56), *(Last->GetNode()->CPPmultinode56));
		break;
	case 57:
		*(multiNode->GetNode()->CPPmultinode57) = multimapUnion->CPPmultimap57->erase(*(First->GetNode()->CPPmultinode57), *(Last->GetNode()->CPPmultinode57));
		break;
	case 58:
		*(multiNode->GetNode()->CPPmultinode58) = multimapUnion->CPPmultimap58->erase(*(First->GetNode()->CPPmultinode58), *(Last->GetNode()->CPPmultinode58));
		break;
	case 59:
		*(multiNode->GetNode()->CPPmultinode59) = multimapUnion->CPPmultimap59->erase(*(First->GetNode()->CPPmultinode59), *(Last->GetNode()->CPPmultinode59));
		break;
	case 60:
		*(multiNode->GetNode()->CPPmultinode60) = multimapUnion->CPPmultimap60->erase(*(First->GetNode()->CPPmultinode60), *(Last->GetNode()->CPPmultinode60));
		break;
	case 61:
		*(multiNode->GetNode()->CPPmultinode61) = multimapUnion->CPPmultimap61->erase(*(First->GetNode()->CPPmultinode61), *(Last->GetNode()->CPPmultinode61));
		break;
	case 62:
		*(multiNode->GetNode()->CPPmultinode62) = multimapUnion->CPPmultimap62->erase(*(First->GetNode()->CPPmultinode62), *(Last->GetNode()->CPPmultinode62));
		break;
	case 63:
		*(multiNode->GetNode()->CPPmultinode63) = multimapUnion->CPPmultimap63->erase(*(First->GetNode()->CPPmultinode63), *(Last->GetNode()->CPPmultinode63));
		break;
	case 64:
		*(multiNode->GetNode()->CPPmultinode64) = multimapUnion->CPPmultimap64->erase(*(First->GetNode()->CPPmultinode64), *(Last->GetNode()->CPPmultinode64));
		break;
	case 65:
		*(multiNode->GetNode()->CPPmultinode65) = multimapUnion->CPPmultimap65->erase(*(First->GetNode()->CPPmultinode65), *(Last->GetNode()->CPPmultinode65));
		break;
	case 66:
		*(multiNode->GetNode()->CPPmultinode66) = multimapUnion->CPPmultimap66->erase(*(First->GetNode()->CPPmultinode66), *(Last->GetNode()->CPPmultinode66));
		break;
	case 67:
		*(multiNode->GetNode()->CPPmultinode67) = multimapUnion->CPPmultimap67->erase(*(First->GetNode()->CPPmultinode67), *(Last->GetNode()->CPPmultinode67));
		break;
	case 68:
		*(multiNode->GetNode()->CPPmultinode68) = multimapUnion->CPPmultimap68->erase(*(First->GetNode()->CPPmultinode68), *(Last->GetNode()->CPPmultinode68));
		break;
	case 69:
		*(multiNode->GetNode()->CPPmultinode69) = multimapUnion->CPPmultimap69->erase(*(First->GetNode()->CPPmultinode69), *(Last->GetNode()->CPPmultinode69));
		break;
	case 70:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<int, __int64> iter;
			for (iter = *(First->GetNode()->CPPmultinode70); iter != *(Last->GetNode()->CPPmultinode70); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode70) = multimapUnion->CPPmultimap70->erase(*(First->GetNode()->CPPmultinode70), *(Last->GetNode()->CPPmultinode70));
		break;
	case 71:
		*(multiNode->GetNode()->CPPmultinode71) = multimapUnion->CPPmultimap71->erase(*(First->GetNode()->CPPmultinode71), *(Last->GetNode()->CPPmultinode71));
		break;
	case 72:
		*(multiNode->GetNode()->CPPmultinode72) = multimapUnion->CPPmultimap72->erase(*(First->GetNode()->CPPmultinode72), *(Last->GetNode()->CPPmultinode72));
		break;
	case 73:
		*(multiNode->GetNode()->CPPmultinode73) = multimapUnion->CPPmultimap73->erase(*(First->GetNode()->CPPmultinode73), *(Last->GetNode()->CPPmultinode73));
		break;
	case 74:
		*(multiNode->GetNode()->CPPmultinode74) = multimapUnion->CPPmultimap74->erase(*(First->GetNode()->CPPmultinode74), *(Last->GetNode()->CPPmultinode74));
		break;
	case 75:
		*(multiNode->GetNode()->CPPmultinode75) = multimapUnion->CPPmultimap75->erase(*(First->GetNode()->CPPmultinode75), *(Last->GetNode()->CPPmultinode75));
		break;
	case 76:
		*(multiNode->GetNode()->CPPmultinode76) = multimapUnion->CPPmultimap76->erase(*(First->GetNode()->CPPmultinode76), *(Last->GetNode()->CPPmultinode76));
		break;
	case 77:
		*(multiNode->GetNode()->CPPmultinode77) = multimapUnion->CPPmultimap77->erase(*(First->GetNode()->CPPmultinode77), *(Last->GetNode()->CPPmultinode77));
		break;
	case 78:
		*(multiNode->GetNode()->CPPmultinode78) = multimapUnion->CPPmultimap78->erase(*(First->GetNode()->CPPmultinode78), *(Last->GetNode()->CPPmultinode78));
		break;
	case 79:
		*(multiNode->GetNode()->CPPmultinode79) = multimapUnion->CPPmultimap79->erase(*(First->GetNode()->CPPmultinode79), *(Last->GetNode()->CPPmultinode79));
		break;
	case 80:
		*(multiNode->GetNode()->CPPmultinode80) = multimapUnion->CPPmultimap80->erase(*(First->GetNode()->CPPmultinode80), *(Last->GetNode()->CPPmultinode80));
		break;
	case 81:
		*(multiNode->GetNode()->CPPmultinode81) = multimapUnion->CPPmultimap81->erase(*(First->GetNode()->CPPmultinode81), *(Last->GetNode()->CPPmultinode81));
		break;
	case 82:
		*(multiNode->GetNode()->CPPmultinode82) = multimapUnion->CPPmultimap82->erase(*(First->GetNode()->CPPmultinode82), *(Last->GetNode()->CPPmultinode82));
		break;
	case 83:
		*(multiNode->GetNode()->CPPmultinode83) = multimapUnion->CPPmultimap83->erase(*(First->GetNode()->CPPmultinode83), *(Last->GetNode()->CPPmultinode83));
		break;
	case 84:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<unsigned int, __int64> iter;
			for (iter = *(First->GetNode()->CPPmultinode84); iter != *(Last->GetNode()->CPPmultinode84); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode84) = multimapUnion->CPPmultimap84->erase(*(First->GetNode()->CPPmultinode84), *(Last->GetNode()->CPPmultinode84));
		break;
	case 85:
		*(multiNode->GetNode()->CPPmultinode85) = multimapUnion->CPPmultimap85->erase(*(First->GetNode()->CPPmultinode85), *(Last->GetNode()->CPPmultinode85));
		break;
	case 86:
		*(multiNode->GetNode()->CPPmultinode86) = multimapUnion->CPPmultimap86->erase(*(First->GetNode()->CPPmultinode86), *(Last->GetNode()->CPPmultinode86));
		break;
	case 87:
		*(multiNode->GetNode()->CPPmultinode87) = multimapUnion->CPPmultimap87->erase(*(First->GetNode()->CPPmultinode87), *(Last->GetNode()->CPPmultinode87));
		break;
	case 88:
		*(multiNode->GetNode()->CPPmultinode88) = multimapUnion->CPPmultimap88->erase(*(First->GetNode()->CPPmultinode88), *(Last->GetNode()->CPPmultinode88));
		break;
	case 89:
		*(multiNode->GetNode()->CPPmultinode89) = multimapUnion->CPPmultimap89->erase(*(First->GetNode()->CPPmultinode89), *(Last->GetNode()->CPPmultinode89));
		break;
	case 90:
		*(multiNode->GetNode()->CPPmultinode90) = multimapUnion->CPPmultimap90->erase(*(First->GetNode()->CPPmultinode90), *(Last->GetNode()->CPPmultinode90));
		break;
	case 91:
		*(multiNode->GetNode()->CPPmultinode91) = multimapUnion->CPPmultimap91->erase(*(First->GetNode()->CPPmultinode91), *(Last->GetNode()->CPPmultinode91));
		break;
	case 92:
		*(multiNode->GetNode()->CPPmultinode92) = multimapUnion->CPPmultimap92->erase(*(First->GetNode()->CPPmultinode92), *(Last->GetNode()->CPPmultinode92));
		break;
	case 93:
		*(multiNode->GetNode()->CPPmultinode93) = multimapUnion->CPPmultimap93->erase(*(First->GetNode()->CPPmultinode93), *(Last->GetNode()->CPPmultinode93));
		break;
	case 94:
		*(multiNode->GetNode()->CPPmultinode94) = multimapUnion->CPPmultimap94->erase(*(First->GetNode()->CPPmultinode94), *(Last->GetNode()->CPPmultinode94));
		break;
	case 95:
		*(multiNode->GetNode()->CPPmultinode95) = multimapUnion->CPPmultimap95->erase(*(First->GetNode()->CPPmultinode95), *(Last->GetNode()->CPPmultinode95));
		break;
	case 96:
		*(multiNode->GetNode()->CPPmultinode96) = multimapUnion->CPPmultimap96->erase(*(First->GetNode()->CPPmultinode96), *(Last->GetNode()->CPPmultinode96));
		break;
	case 97:
		*(multiNode->GetNode()->CPPmultinode97) = multimapUnion->CPPmultimap97->erase(*(First->GetNode()->CPPmultinode97), *(Last->GetNode()->CPPmultinode97));
		break;
	case 98:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<long long, __int64> iter;
			for (iter = *(First->GetNode()->CPPmultinode98); iter != *(Last->GetNode()->CPPmultinode98); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode98) = multimapUnion->CPPmultimap98->erase(*(First->GetNode()->CPPmultinode98), *(Last->GetNode()->CPPmultinode98));
		break;
	case 99:
		*(multiNode->GetNode()->CPPmultinode99) = multimapUnion->CPPmultimap99->erase(*(First->GetNode()->CPPmultinode99), *(Last->GetNode()->CPPmultinode99));
		break;
	case 100:
		*(multiNode->GetNode()->CPPmultinode100) = multimapUnion->CPPmultimap100->erase(*(First->GetNode()->CPPmultinode100), *(Last->GetNode()->CPPmultinode100));
		break;
	case 101:
		*(multiNode->GetNode()->CPPmultinode101) = multimapUnion->CPPmultimap101->erase(*(First->GetNode()->CPPmultinode101), *(Last->GetNode()->CPPmultinode101));
		break;
	case 102:
		*(multiNode->GetNode()->CPPmultinode102) = multimapUnion->CPPmultimap102->erase(*(First->GetNode()->CPPmultinode102), *(Last->GetNode()->CPPmultinode102));
		break;
	case 103:
		*(multiNode->GetNode()->CPPmultinode103) = multimapUnion->CPPmultimap103->erase(*(First->GetNode()->CPPmultinode103), *(Last->GetNode()->CPPmultinode103));
		break;
	case 104:
		*(multiNode->GetNode()->CPPmultinode104) = multimapUnion->CPPmultimap104->erase(*(First->GetNode()->CPPmultinode104), *(Last->GetNode()->CPPmultinode104));
		break;
	case 105:
		*(multiNode->GetNode()->CPPmultinode105) = multimapUnion->CPPmultimap105->erase(*(First->GetNode()->CPPmultinode105), *(Last->GetNode()->CPPmultinode105));
		break;
	case 106:
		*(multiNode->GetNode()->CPPmultinode106) = multimapUnion->CPPmultimap106->erase(*(First->GetNode()->CPPmultinode106), *(Last->GetNode()->CPPmultinode106));
		break;
	case 107:
		*(multiNode->GetNode()->CPPmultinode107) = multimapUnion->CPPmultimap107->erase(*(First->GetNode()->CPPmultinode107), *(Last->GetNode()->CPPmultinode107));
		break;
	case 108:
		*(multiNode->GetNode()->CPPmultinode108) = multimapUnion->CPPmultimap108->erase(*(First->GetNode()->CPPmultinode108), *(Last->GetNode()->CPPmultinode108));
		break;
	case 109:
		*(multiNode->GetNode()->CPPmultinode109) = multimapUnion->CPPmultimap109->erase(*(First->GetNode()->CPPmultinode109), *(Last->GetNode()->CPPmultinode109));
		break;
	case 110:
		*(multiNode->GetNode()->CPPmultinode110) = multimapUnion->CPPmultimap110->erase(*(First->GetNode()->CPPmultinode110), *(Last->GetNode()->CPPmultinode110));
		break;
	case 111:
		*(multiNode->GetNode()->CPPmultinode111) = multimapUnion->CPPmultimap111->erase(*(First->GetNode()->CPPmultinode111), *(Last->GetNode()->CPPmultinode111));
		break;
	case 112:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<unsigned long long, __int64> iter;
			for (iter = *(First->GetNode()->CPPmultinode112); iter != *(Last->GetNode()->CPPmultinode112); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode112) = multimapUnion->CPPmultimap112->erase(*(First->GetNode()->CPPmultinode112), *(Last->GetNode()->CPPmultinode112));
		break;
	case 113:
		*(multiNode->GetNode()->CPPmultinode113) = multimapUnion->CPPmultimap113->erase(*(First->GetNode()->CPPmultinode113), *(Last->GetNode()->CPPmultinode113));
		break;
	case 114:
		*(multiNode->GetNode()->CPPmultinode114) = multimapUnion->CPPmultimap114->erase(*(First->GetNode()->CPPmultinode114), *(Last->GetNode()->CPPmultinode114));
		break;
	case 115:
		*(multiNode->GetNode()->CPPmultinode115) = multimapUnion->CPPmultimap115->erase(*(First->GetNode()->CPPmultinode115), *(Last->GetNode()->CPPmultinode115));
		break;
	case 116:
		*(multiNode->GetNode()->CPPmultinode116) = multimapUnion->CPPmultimap116->erase(*(First->GetNode()->CPPmultinode116), *(Last->GetNode()->CPPmultinode116));
		break;
	case 117:
		*(multiNode->GetNode()->CPPmultinode117) = multimapUnion->CPPmultimap117->erase(*(First->GetNode()->CPPmultinode117), *(Last->GetNode()->CPPmultinode117));
		break;
	case 118:
		*(multiNode->GetNode()->CPPmultinode118) = multimapUnion->CPPmultimap118->erase(*(First->GetNode()->CPPmultinode118), *(Last->GetNode()->CPPmultinode118));
		break;
	case 119:
		*(multiNode->GetNode()->CPPmultinode119) = multimapUnion->CPPmultimap119->erase(*(First->GetNode()->CPPmultinode119), *(Last->GetNode()->CPPmultinode119));
		break;
	case 120:
		*(multiNode->GetNode()->CPPmultinode120) = multimapUnion->CPPmultimap120->erase(*(First->GetNode()->CPPmultinode120), *(Last->GetNode()->CPPmultinode120));
		break;
	case 121:
		*(multiNode->GetNode()->CPPmultinode121) = multimapUnion->CPPmultimap121->erase(*(First->GetNode()->CPPmultinode121), *(Last->GetNode()->CPPmultinode121));
		break;
	case 122:
		*(multiNode->GetNode()->CPPmultinode122) = multimapUnion->CPPmultimap122->erase(*(First->GetNode()->CPPmultinode122), *(Last->GetNode()->CPPmultinode122));
		break;
	case 123:
		*(multiNode->GetNode()->CPPmultinode123) = multimapUnion->CPPmultimap123->erase(*(First->GetNode()->CPPmultinode123), *(Last->GetNode()->CPPmultinode123));
		break;
	case 124:
		*(multiNode->GetNode()->CPPmultinode124) = multimapUnion->CPPmultimap124->erase(*(First->GetNode()->CPPmultinode124), *(Last->GetNode()->CPPmultinode124));
		break;
	case 125:
		*(multiNode->GetNode()->CPPmultinode125) = multimapUnion->CPPmultimap125->erase(*(First->GetNode()->CPPmultinode125), *(Last->GetNode()->CPPmultinode125));
		break;
	case 126:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<float, __int64> iter;
			for (iter = *(First->GetNode()->CPPmultinode126); iter != *(Last->GetNode()->CPPmultinode126); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode126) = multimapUnion->CPPmultimap126->erase(*(First->GetNode()->CPPmultinode126), *(Last->GetNode()->CPPmultinode126));
		break;
	case 127:
		*(multiNode->GetNode()->CPPmultinode127) = multimapUnion->CPPmultimap127->erase(*(First->GetNode()->CPPmultinode127), *(Last->GetNode()->CPPmultinode127));
		break;
	case 128:
		*(multiNode->GetNode()->CPPmultinode128) = multimapUnion->CPPmultimap128->erase(*(First->GetNode()->CPPmultinode128), *(Last->GetNode()->CPPmultinode128));
		break;
	case 129:
		*(multiNode->GetNode()->CPPmultinode129) = multimapUnion->CPPmultimap129->erase(*(First->GetNode()->CPPmultinode129), *(Last->GetNode()->CPPmultinode129));
		break;
	case 130:
		*(multiNode->GetNode()->CPPmultinode130) = multimapUnion->CPPmultimap130->erase(*(First->GetNode()->CPPmultinode130), *(Last->GetNode()->CPPmultinode130));
		break;
	case 131:
		*(multiNode->GetNode()->CPPmultinode131) = multimapUnion->CPPmultimap131->erase(*(First->GetNode()->CPPmultinode131), *(Last->GetNode()->CPPmultinode131));
		break;
	case 132:
		*(multiNode->GetNode()->CPPmultinode132) = multimapUnion->CPPmultimap132->erase(*(First->GetNode()->CPPmultinode132), *(Last->GetNode()->CPPmultinode132));
		break;
	case 133:
		*(multiNode->GetNode()->CPPmultinode133) = multimapUnion->CPPmultimap133->erase(*(First->GetNode()->CPPmultinode133), *(Last->GetNode()->CPPmultinode133));
		break;
	case 134:
		*(multiNode->GetNode()->CPPmultinode134) = multimapUnion->CPPmultimap134->erase(*(First->GetNode()->CPPmultinode134), *(Last->GetNode()->CPPmultinode134));
		break;
	case 135:
		*(multiNode->GetNode()->CPPmultinode135) = multimapUnion->CPPmultimap135->erase(*(First->GetNode()->CPPmultinode135), *(Last->GetNode()->CPPmultinode135));
		break;
	case 136:
		*(multiNode->GetNode()->CPPmultinode136) = multimapUnion->CPPmultimap136->erase(*(First->GetNode()->CPPmultinode136), *(Last->GetNode()->CPPmultinode136));
		break;
	case 137:
		*(multiNode->GetNode()->CPPmultinode137) = multimapUnion->CPPmultimap137->erase(*(First->GetNode()->CPPmultinode137), *(Last->GetNode()->CPPmultinode137));
		break;
	case 138:
		*(multiNode->GetNode()->CPPmultinode138) = multimapUnion->CPPmultimap138->erase(*(First->GetNode()->CPPmultinode138), *(Last->GetNode()->CPPmultinode138));
		break;
	case 139:
		*(multiNode->GetNode()->CPPmultinode139) = multimapUnion->CPPmultimap139->erase(*(First->GetNode()->CPPmultinode139), *(Last->GetNode()->CPPmultinode139));
		break;
	case 140:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<double, __int64> iter;
			for (iter = *(First->GetNode()->CPPmultinode140); iter != *(Last->GetNode()->CPPmultinode140); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode140) = multimapUnion->CPPmultimap140->erase(*(First->GetNode()->CPPmultinode140), *(Last->GetNode()->CPPmultinode140));
		break;
	case 141:
		*(multiNode->GetNode()->CPPmultinode141) = multimapUnion->CPPmultimap141->erase(*(First->GetNode()->CPPmultinode141), *(Last->GetNode()->CPPmultinode141));
		break;
	case 142:
		*(multiNode->GetNode()->CPPmultinode142) = multimapUnion->CPPmultimap142->erase(*(First->GetNode()->CPPmultinode142), *(Last->GetNode()->CPPmultinode142));
		break;
	case 143:
		*(multiNode->GetNode()->CPPmultinode143) = multimapUnion->CPPmultimap143->erase(*(First->GetNode()->CPPmultinode143), *(Last->GetNode()->CPPmultinode143));
		break;
	case 144:
		*(multiNode->GetNode()->CPPmultinode144) = multimapUnion->CPPmultimap144->erase(*(First->GetNode()->CPPmultinode144), *(Last->GetNode()->CPPmultinode144));
		break;
	case 145:
		*(multiNode->GetNode()->CPPmultinode145) = multimapUnion->CPPmultimap145->erase(*(First->GetNode()->CPPmultinode145), *(Last->GetNode()->CPPmultinode145));
		break;
	case 146:
		*(multiNode->GetNode()->CPPmultinode146) = multimapUnion->CPPmultimap146->erase(*(First->GetNode()->CPPmultinode146), *(Last->GetNode()->CPPmultinode146));
		break;
	case 147:
		*(multiNode->GetNode()->CPPmultinode147) = multimapUnion->CPPmultimap147->erase(*(First->GetNode()->CPPmultinode147), *(Last->GetNode()->CPPmultinode147));
		break;
	case 148:
		*(multiNode->GetNode()->CPPmultinode148) = multimapUnion->CPPmultimap148->erase(*(First->GetNode()->CPPmultinode148), *(Last->GetNode()->CPPmultinode148));
		break;
	case 149:
		*(multiNode->GetNode()->CPPmultinode149) = multimapUnion->CPPmultimap149->erase(*(First->GetNode()->CPPmultinode149), *(Last->GetNode()->CPPmultinode149));
		break;
	case 150:
		*(multiNode->GetNode()->CPPmultinode150) = multimapUnion->CPPmultimap150->erase(*(First->GetNode()->CPPmultinode150), *(Last->GetNode()->CPPmultinode150));
		break;
	case 151:
		*(multiNode->GetNode()->CPPmultinode151) = multimapUnion->CPPmultimap151->erase(*(First->GetNode()->CPPmultinode151), *(Last->GetNode()->CPPmultinode151));
		break;
	case 152:
		*(multiNode->GetNode()->CPPmultinode152) = multimapUnion->CPPmultimap152->erase(*(First->GetNode()->CPPmultinode152), *(Last->GetNode()->CPPmultinode152));
		break;
	case 153:
		*(multiNode->GetNode()->CPPmultinode153) = multimapUnion->CPPmultimap153->erase(*(First->GetNode()->CPPmultinode153), *(Last->GetNode()->CPPmultinode153));
		break;
	case 154:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<wchar_t, __int64> iter;
			for (iter = *(First->GetNode()->CPPmultinode154); iter != *(Last->GetNode()->CPPmultinode154); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode154) = multimapUnion->CPPmultimap154->erase(*(First->GetNode()->CPPmultinode154), *(Last->GetNode()->CPPmultinode154));
		break;
	case 155:
		*(multiNode->GetNode()->CPPmultinode155) = multimapUnion->CPPmultimap155->erase(*(First->GetNode()->CPPmultinode155), *(Last->GetNode()->CPPmultinode155));
		break;
	case 156:
		*(multiNode->GetNode()->CPPmultinode156) = multimapUnion->CPPmultimap156->erase(*(First->GetNode()->CPPmultinode156), *(Last->GetNode()->CPPmultinode156));
		break;
	case 157:
		*(multiNode->GetNode()->CPPmultinode157) = multimapUnion->CPPmultimap157->erase(*(First->GetNode()->CPPmultinode157), *(Last->GetNode()->CPPmultinode157));
		break;
	case 158:
		*(multiNode->GetNode()->CPPmultinode158) = multimapUnion->CPPmultimap158->erase(*(First->GetNode()->CPPmultinode158), *(Last->GetNode()->CPPmultinode158));
		break;
	case 159:
		*(multiNode->GetNode()->CPPmultinode159) = multimapUnion->CPPmultimap159->erase(*(First->GetNode()->CPPmultinode159), *(Last->GetNode()->CPPmultinode159));
		break;
	case 160:
		*(multiNode->GetNode()->CPPmultinode160) = multimapUnion->CPPmultimap160->erase(*(First->GetNode()->CPPmultinode160), *(Last->GetNode()->CPPmultinode160));
		break;
	case 161:
		*(multiNode->GetNode()->CPPmultinode161) = multimapUnion->CPPmultimap161->erase(*(First->GetNode()->CPPmultinode161), *(Last->GetNode()->CPPmultinode161));
		break;
	case 162:
		*(multiNode->GetNode()->CPPmultinode162) = multimapUnion->CPPmultimap162->erase(*(First->GetNode()->CPPmultinode162), *(Last->GetNode()->CPPmultinode162));
		break;
	case 163:
		*(multiNode->GetNode()->CPPmultinode163) = multimapUnion->CPPmultimap163->erase(*(First->GetNode()->CPPmultinode163), *(Last->GetNode()->CPPmultinode163));
		break;
	case 164:
		*(multiNode->GetNode()->CPPmultinode164) = multimapUnion->CPPmultimap164->erase(*(First->GetNode()->CPPmultinode164), *(Last->GetNode()->CPPmultinode164));
		break;
	case 165:
		*(multiNode->GetNode()->CPPmultinode165) = multimapUnion->CPPmultimap165->erase(*(First->GetNode()->CPPmultinode165), *(Last->GetNode()->CPPmultinode165));
		break;
	case 166:
		*(multiNode->GetNode()->CPPmultinode166) = multimapUnion->CPPmultimap166->erase(*(First->GetNode()->CPPmultinode166), *(Last->GetNode()->CPPmultinode166));
		break;
	case 167:
		*(multiNode->GetNode()->CPPmultinode167) = multimapUnion->CPPmultimap167->erase(*(First->GetNode()->CPPmultinode167), *(Last->GetNode()->CPPmultinode167));
		break;
	case 168:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<bool, __int64> iter;
			for (iter = *(First->GetNode()->CPPmultinode168); iter != *(Last->GetNode()->CPPmultinode168); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode168) = multimapUnion->CPPmultimap168->erase(*(First->GetNode()->CPPmultinode168), *(Last->GetNode()->CPPmultinode168));
		break;
	case 169:
		*(multiNode->GetNode()->CPPmultinode169) = multimapUnion->CPPmultimap169->erase(*(First->GetNode()->CPPmultinode169), *(Last->GetNode()->CPPmultinode169));
		break;
	case 170:
		*(multiNode->GetNode()->CPPmultinode170) = multimapUnion->CPPmultimap170->erase(*(First->GetNode()->CPPmultinode170), *(Last->GetNode()->CPPmultinode170));
		break;
	case 171:
		*(multiNode->GetNode()->CPPmultinode171) = multimapUnion->CPPmultimap171->erase(*(First->GetNode()->CPPmultinode171), *(Last->GetNode()->CPPmultinode171));
		break;
	case 172:
		*(multiNode->GetNode()->CPPmultinode172) = multimapUnion->CPPmultimap172->erase(*(First->GetNode()->CPPmultinode172), *(Last->GetNode()->CPPmultinode172));
		break;
	case 173:
		*(multiNode->GetNode()->CPPmultinode173) = multimapUnion->CPPmultimap173->erase(*(First->GetNode()->CPPmultinode173), *(Last->GetNode()->CPPmultinode173));
		break;
	case 174:
		*(multiNode->GetNode()->CPPmultinode174) = multimapUnion->CPPmultimap174->erase(*(First->GetNode()->CPPmultinode174), *(Last->GetNode()->CPPmultinode174));
		break;
	case 175:
		*(multiNode->GetNode()->CPPmultinode175) = multimapUnion->CPPmultimap175->erase(*(First->GetNode()->CPPmultinode175), *(Last->GetNode()->CPPmultinode175));
		break;
	case 176:
		*(multiNode->GetNode()->CPPmultinode176) = multimapUnion->CPPmultimap176->erase(*(First->GetNode()->CPPmultinode176), *(Last->GetNode()->CPPmultinode176));
		break;
	case 177:
		*(multiNode->GetNode()->CPPmultinode177) = multimapUnion->CPPmultimap177->erase(*(First->GetNode()->CPPmultinode177), *(Last->GetNode()->CPPmultinode177));
		break;
	case 178:
		*(multiNode->GetNode()->CPPmultinode178) = multimapUnion->CPPmultimap178->erase(*(First->GetNode()->CPPmultinode178), *(Last->GetNode()->CPPmultinode178));
		break;
	case 179:
		*(multiNode->GetNode()->CPPmultinode179) = multimapUnion->CPPmultimap179->erase(*(First->GetNode()->CPPmultinode179), *(Last->GetNode()->CPPmultinode179));
		break;
	case 180:
		*(multiNode->GetNode()->CPPmultinode180) = multimapUnion->CPPmultimap180->erase(*(First->GetNode()->CPPmultinode180), *(Last->GetNode()->CPPmultinode180));
		break;
	case 181:
		*(multiNode->GetNode()->CPPmultinode181) = multimapUnion->CPPmultimap181->erase(*(First->GetNode()->CPPmultinode181), *(Last->GetNode()->CPPmultinode181));
		break;
	case 182:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<std::wstring, __int64> iter;
			for (iter = *(First->GetNode()->CPPmultinode182); iter != *(Last->GetNode()->CPPmultinode182); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode182) = multimapUnion->CPPmultimap182->erase(*(First->GetNode()->CPPmultinode182), *(Last->GetNode()->CPPmultinode182));
		break;
	case 183:
		*(multiNode->GetNode()->CPPmultinode183) = multimapUnion->CPPmultimap183->erase(*(First->GetNode()->CPPmultinode183), *(Last->GetNode()->CPPmultinode183));
		break;
	case 184:
		*(multiNode->GetNode()->CPPmultinode184) = multimapUnion->CPPmultimap184->erase(*(First->GetNode()->CPPmultinode184), *(Last->GetNode()->CPPmultinode184));
		break;
	case 185:
		*(multiNode->GetNode()->CPPmultinode185) = multimapUnion->CPPmultimap185->erase(*(First->GetNode()->CPPmultinode185), *(Last->GetNode()->CPPmultinode185));
		break;
	case 186:
		*(multiNode->GetNode()->CPPmultinode186) = multimapUnion->CPPmultimap186->erase(*(First->GetNode()->CPPmultinode186), *(Last->GetNode()->CPPmultinode186));
		break;
	case 187:
		*(multiNode->GetNode()->CPPmultinode187) = multimapUnion->CPPmultimap187->erase(*(First->GetNode()->CPPmultinode187), *(Last->GetNode()->CPPmultinode187));
		break;
	case 188:
		*(multiNode->GetNode()->CPPmultinode188) = multimapUnion->CPPmultimap188->erase(*(First->GetNode()->CPPmultinode188), *(Last->GetNode()->CPPmultinode188));
		break;
	case 189:
		*(multiNode->GetNode()->CPPmultinode189) = multimapUnion->CPPmultimap189->erase(*(First->GetNode()->CPPmultinode189), *(Last->GetNode()->CPPmultinode189));
		break;
	case 190:
		*(multiNode->GetNode()->CPPmultinode190) = multimapUnion->CPPmultimap190->erase(*(First->GetNode()->CPPmultinode190), *(Last->GetNode()->CPPmultinode190));
		break;
	case 191:
		*(multiNode->GetNode()->CPPmultinode191) = multimapUnion->CPPmultimap191->erase(*(First->GetNode()->CPPmultinode191), *(Last->GetNode()->CPPmultinode191));
		break;
	case 192:
		*(multiNode->GetNode()->CPPmultinode192) = multimapUnion->CPPmultimap192->erase(*(First->GetNode()->CPPmultinode192), *(Last->GetNode()->CPPmultinode192));
		break;
	case 193:
		*(multiNode->GetNode()->CPPmultinode193) = multimapUnion->CPPmultimap193->erase(*(First->GetNode()->CPPmultinode193), *(Last->GetNode()->CPPmultinode193));
		break;
	case 194:
		*(multiNode->GetNode()->CPPmultinode194) = multimapUnion->CPPmultimap194->erase(*(First->GetNode()->CPPmultinode194), *(Last->GetNode()->CPPmultinode194));
		break;
	case 195:
		*(multiNode->GetNode()->CPPmultinode195) = multimapUnion->CPPmultimap195->erase(*(First->GetNode()->CPPmultinode195), *(Last->GetNode()->CPPmultinode195));
		break;
	case 196:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<__int64, __int64> iter;
			for (iter = *(First->GetNode()->CPPmultinode196); iter != *(Last->GetNode()->CPPmultinode196); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode196) = multimapUnion->CPPmultimap196->erase(*(First->GetNode()->CPPmultinode196), *(Last->GetNode()->CPPmultinode196));
		break;
	}
	return multiNode->DeepCopy();
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::erase(CShorpUnOrderedMultiConstNode<Key, Value>^ _Where)
{
	if (Object::ReferenceEquals(_Where, nullptr)) return nullptr;
	if (nKeyValueType != _Where->GetKVType()) return nullptr;
	if (_Where->GetInit() == 0) return nullptr;
	switch (nKeyValueType)
	{
	case 0: default:
		return nullptr;
	case 1:
		*(multiNode->GetNode()->CPPmultinode1) = multimapUnion->CPPmultimap1->erase(*(_Where->GetNode()->CPPmulticonstnode1));
		break;
	case 2:
		*(multiNode->GetNode()->CPPmultinode2) = multimapUnion->CPPmultimap2->erase(*(_Where->GetNode()->CPPmulticonstnode2));
		break;
	case 3:
		*(multiNode->GetNode()->CPPmultinode3) = multimapUnion->CPPmultimap3->erase(*(_Where->GetNode()->CPPmulticonstnode3));
		break;
	case 4:
		*(multiNode->GetNode()->CPPmultinode4) = multimapUnion->CPPmultimap4->erase(*(_Where->GetNode()->CPPmulticonstnode4));
		break;
	case 5:
		*(multiNode->GetNode()->CPPmultinode5) = multimapUnion->CPPmultimap5->erase(*(_Where->GetNode()->CPPmulticonstnode5));
		break;
	case 6:
		*(multiNode->GetNode()->CPPmultinode6) = multimapUnion->CPPmultimap6->erase(*(_Where->GetNode()->CPPmulticonstnode6));
		break;
	case 7:
		*(multiNode->GetNode()->CPPmultinode7) = multimapUnion->CPPmultimap7->erase(*(_Where->GetNode()->CPPmulticonstnode7));
		break;
	case 8:
		*(multiNode->GetNode()->CPPmultinode8) = multimapUnion->CPPmultimap8->erase(*(_Where->GetNode()->CPPmulticonstnode8));
		break;
	case 9:
		*(multiNode->GetNode()->CPPmultinode9) = multimapUnion->CPPmultimap9->erase(*(_Where->GetNode()->CPPmulticonstnode9));
		break;
	case 10:
		*(multiNode->GetNode()->CPPmultinode10) = multimapUnion->CPPmultimap10->erase(*(_Where->GetNode()->CPPmulticonstnode10));
		break;
	case 11:
		*(multiNode->GetNode()->CPPmultinode11) = multimapUnion->CPPmultimap11->erase(*(_Where->GetNode()->CPPmulticonstnode11));
		break;
	case 12:
		*(multiNode->GetNode()->CPPmultinode12) = multimapUnion->CPPmultimap12->erase(*(_Where->GetNode()->CPPmulticonstnode12));
		break;
	case 13:
		*(multiNode->GetNode()->CPPmultinode13) = multimapUnion->CPPmultimap13->erase(*(_Where->GetNode()->CPPmulticonstnode13));
		break;
	case 14:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmulticonstnode14->GetValue());
		*(multiNode->GetNode()->CPPmultinode14) = multimapUnion->CPPmultimap14->erase(*(_Where->GetNode()->CPPmulticonstnode14));
		break;
	case 15:
		*(multiNode->GetNode()->CPPmultinode15) = multimapUnion->CPPmultimap15->erase(*(_Where->GetNode()->CPPmulticonstnode15));
		break;
	case 16:
		*(multiNode->GetNode()->CPPmultinode16) = multimapUnion->CPPmultimap16->erase(*(_Where->GetNode()->CPPmulticonstnode16));
		break;
	case 17:
		*(multiNode->GetNode()->CPPmultinode17) = multimapUnion->CPPmultimap17->erase(*(_Where->GetNode()->CPPmulticonstnode17));
		break;
	case 18:
		*(multiNode->GetNode()->CPPmultinode18) = multimapUnion->CPPmultimap18->erase(*(_Where->GetNode()->CPPmulticonstnode18));
		break;
	case 19:
		*(multiNode->GetNode()->CPPmultinode19) = multimapUnion->CPPmultimap19->erase(*(_Where->GetNode()->CPPmulticonstnode19));
		break;
	case 20:
		*(multiNode->GetNode()->CPPmultinode20) = multimapUnion->CPPmultimap20->erase(*(_Where->GetNode()->CPPmulticonstnode20));
		break;
	case 21:
		*(multiNode->GetNode()->CPPmultinode21) = multimapUnion->CPPmultimap21->erase(*(_Where->GetNode()->CPPmulticonstnode21));
		break;
	case 22:
		*(multiNode->GetNode()->CPPmultinode22) = multimapUnion->CPPmultimap22->erase(*(_Where->GetNode()->CPPmulticonstnode22));
		break;
	case 23:
		*(multiNode->GetNode()->CPPmultinode23) = multimapUnion->CPPmultimap23->erase(*(_Where->GetNode()->CPPmulticonstnode23));
		break;
	case 24:
		*(multiNode->GetNode()->CPPmultinode24) = multimapUnion->CPPmultimap24->erase(*(_Where->GetNode()->CPPmulticonstnode24));
		break;
	case 25:
		*(multiNode->GetNode()->CPPmultinode25) = multimapUnion->CPPmultimap25->erase(*(_Where->GetNode()->CPPmulticonstnode25));
		break;
	case 26:
		*(multiNode->GetNode()->CPPmultinode26) = multimapUnion->CPPmultimap26->erase(*(_Where->GetNode()->CPPmulticonstnode26));
		break;
	case 27:
		*(multiNode->GetNode()->CPPmultinode27) = multimapUnion->CPPmultimap27->erase(*(_Where->GetNode()->CPPmulticonstnode27));
		break;
	case 28:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmulticonstnode28->GetValue());
		*(multiNode->GetNode()->CPPmultinode28) = multimapUnion->CPPmultimap28->erase(*(_Where->GetNode()->CPPmulticonstnode28));
		break;
	case 29:
		*(multiNode->GetNode()->CPPmultinode29) = multimapUnion->CPPmultimap29->erase(*(_Where->GetNode()->CPPmulticonstnode29));
		break;
	case 30:
		*(multiNode->GetNode()->CPPmultinode30) = multimapUnion->CPPmultimap30->erase(*(_Where->GetNode()->CPPmulticonstnode30));
		break;
	case 31:
		*(multiNode->GetNode()->CPPmultinode31) = multimapUnion->CPPmultimap31->erase(*(_Where->GetNode()->CPPmulticonstnode31));
		break;
	case 32:
		*(multiNode->GetNode()->CPPmultinode32) = multimapUnion->CPPmultimap32->erase(*(_Where->GetNode()->CPPmulticonstnode32));
		break;
	case 33:
		*(multiNode->GetNode()->CPPmultinode33) = multimapUnion->CPPmultimap33->erase(*(_Where->GetNode()->CPPmulticonstnode33));
		break;
	case 34:
		*(multiNode->GetNode()->CPPmultinode34) = multimapUnion->CPPmultimap34->erase(*(_Where->GetNode()->CPPmulticonstnode34));
		break;
	case 35:
		*(multiNode->GetNode()->CPPmultinode35) = multimapUnion->CPPmultimap35->erase(*(_Where->GetNode()->CPPmulticonstnode35));
		break;
	case 36:
		*(multiNode->GetNode()->CPPmultinode36) = multimapUnion->CPPmultimap36->erase(*(_Where->GetNode()->CPPmulticonstnode36));
		break;
	case 37:
		*(multiNode->GetNode()->CPPmultinode37) = multimapUnion->CPPmultimap37->erase(*(_Where->GetNode()->CPPmulticonstnode37));
		break;
	case 38:
		*(multiNode->GetNode()->CPPmultinode38) = multimapUnion->CPPmultimap38->erase(*(_Where->GetNode()->CPPmulticonstnode38));
		break;
	case 39:
		*(multiNode->GetNode()->CPPmultinode39) = multimapUnion->CPPmultimap39->erase(*(_Where->GetNode()->CPPmulticonstnode39));
		break;
	case 40:
		*(multiNode->GetNode()->CPPmultinode40) = multimapUnion->CPPmultimap40->erase(*(_Where->GetNode()->CPPmulticonstnode40));
		break;
	case 41:
		*(multiNode->GetNode()->CPPmultinode41) = multimapUnion->CPPmultimap41->erase(*(_Where->GetNode()->CPPmulticonstnode41));
		break;
	case 42:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmulticonstnode42->GetValue());
		*(multiNode->GetNode()->CPPmultinode42) = multimapUnion->CPPmultimap42->erase(*(_Where->GetNode()->CPPmulticonstnode42));
		break;
	case 43:
		*(multiNode->GetNode()->CPPmultinode43) = multimapUnion->CPPmultimap43->erase(*(_Where->GetNode()->CPPmulticonstnode43));
		break;
	case 44:
		*(multiNode->GetNode()->CPPmultinode44) = multimapUnion->CPPmultimap44->erase(*(_Where->GetNode()->CPPmulticonstnode44));
		break;
	case 45:
		*(multiNode->GetNode()->CPPmultinode45) = multimapUnion->CPPmultimap45->erase(*(_Where->GetNode()->CPPmulticonstnode45));
		break;
	case 46:
		*(multiNode->GetNode()->CPPmultinode46) = multimapUnion->CPPmultimap46->erase(*(_Where->GetNode()->CPPmulticonstnode46));
		break;
	case 47:
		*(multiNode->GetNode()->CPPmultinode47) = multimapUnion->CPPmultimap47->erase(*(_Where->GetNode()->CPPmulticonstnode47));
		break;
	case 48:
		*(multiNode->GetNode()->CPPmultinode48) = multimapUnion->CPPmultimap48->erase(*(_Where->GetNode()->CPPmulticonstnode48));
		break;
	case 49:
		*(multiNode->GetNode()->CPPmultinode49) = multimapUnion->CPPmultimap49->erase(*(_Where->GetNode()->CPPmulticonstnode49));
		break;
	case 50:
		*(multiNode->GetNode()->CPPmultinode50) = multimapUnion->CPPmultimap50->erase(*(_Where->GetNode()->CPPmulticonstnode50));
		break;
	case 51:
		*(multiNode->GetNode()->CPPmultinode51) = multimapUnion->CPPmultimap51->erase(*(_Where->GetNode()->CPPmulticonstnode51));
		break;
	case 52:
		*(multiNode->GetNode()->CPPmultinode52) = multimapUnion->CPPmultimap52->erase(*(_Where->GetNode()->CPPmulticonstnode52));
		break;
	case 53:
		*(multiNode->GetNode()->CPPmultinode53) = multimapUnion->CPPmultimap53->erase(*(_Where->GetNode()->CPPmulticonstnode53));
		break;
	case 54:
		*(multiNode->GetNode()->CPPmultinode54) = multimapUnion->CPPmultimap54->erase(*(_Where->GetNode()->CPPmulticonstnode54));
		break;
	case 55:
		*(multiNode->GetNode()->CPPmultinode55) = multimapUnion->CPPmultimap55->erase(*(_Where->GetNode()->CPPmulticonstnode55));
		break;
	case 56:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmulticonstnode56->GetValue());
		*(multiNode->GetNode()->CPPmultinode56) = multimapUnion->CPPmultimap56->erase(*(_Where->GetNode()->CPPmulticonstnode56));
		break;
	case 57:
		*(multiNode->GetNode()->CPPmultinode57) = multimapUnion->CPPmultimap57->erase(*(_Where->GetNode()->CPPmulticonstnode57));
		break;
	case 58:
		*(multiNode->GetNode()->CPPmultinode58) = multimapUnion->CPPmultimap58->erase(*(_Where->GetNode()->CPPmulticonstnode58));
		break;
	case 59:
		*(multiNode->GetNode()->CPPmultinode59) = multimapUnion->CPPmultimap59->erase(*(_Where->GetNode()->CPPmulticonstnode59));
		break;
	case 60:
		*(multiNode->GetNode()->CPPmultinode60) = multimapUnion->CPPmultimap60->erase(*(_Where->GetNode()->CPPmulticonstnode60));
		break;
	case 61:
		*(multiNode->GetNode()->CPPmultinode61) = multimapUnion->CPPmultimap61->erase(*(_Where->GetNode()->CPPmulticonstnode61));
		break;
	case 62:
		*(multiNode->GetNode()->CPPmultinode62) = multimapUnion->CPPmultimap62->erase(*(_Where->GetNode()->CPPmulticonstnode62));
		break;
	case 63:
		*(multiNode->GetNode()->CPPmultinode63) = multimapUnion->CPPmultimap63->erase(*(_Where->GetNode()->CPPmulticonstnode63));
		break;
	case 64:
		*(multiNode->GetNode()->CPPmultinode64) = multimapUnion->CPPmultimap64->erase(*(_Where->GetNode()->CPPmulticonstnode64));
		break;
	case 65:
		*(multiNode->GetNode()->CPPmultinode65) = multimapUnion->CPPmultimap65->erase(*(_Where->GetNode()->CPPmulticonstnode65));
		break;
	case 66:
		*(multiNode->GetNode()->CPPmultinode66) = multimapUnion->CPPmultimap66->erase(*(_Where->GetNode()->CPPmulticonstnode66));
		break;
	case 67:
		*(multiNode->GetNode()->CPPmultinode67) = multimapUnion->CPPmultimap67->erase(*(_Where->GetNode()->CPPmulticonstnode67));
		break;
	case 68:
		*(multiNode->GetNode()->CPPmultinode68) = multimapUnion->CPPmultimap68->erase(*(_Where->GetNode()->CPPmulticonstnode68));
		break;
	case 69:
		*(multiNode->GetNode()->CPPmultinode69) = multimapUnion->CPPmultimap69->erase(*(_Where->GetNode()->CPPmulticonstnode69));
		break;
	case 70:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmulticonstnode70->GetValue());
		*(multiNode->GetNode()->CPPmultinode70) = multimapUnion->CPPmultimap70->erase(*(_Where->GetNode()->CPPmulticonstnode70));
		break;
	case 71:
		*(multiNode->GetNode()->CPPmultinode71) = multimapUnion->CPPmultimap71->erase(*(_Where->GetNode()->CPPmulticonstnode71));
		break;
	case 72:
		*(multiNode->GetNode()->CPPmultinode72) = multimapUnion->CPPmultimap72->erase(*(_Where->GetNode()->CPPmulticonstnode72));
		break;
	case 73:
		*(multiNode->GetNode()->CPPmultinode73) = multimapUnion->CPPmultimap73->erase(*(_Where->GetNode()->CPPmulticonstnode73));
		break;
	case 74:
		*(multiNode->GetNode()->CPPmultinode74) = multimapUnion->CPPmultimap74->erase(*(_Where->GetNode()->CPPmulticonstnode74));
		break;
	case 75:
		*(multiNode->GetNode()->CPPmultinode75) = multimapUnion->CPPmultimap75->erase(*(_Where->GetNode()->CPPmulticonstnode75));
		break;
	case 76:
		*(multiNode->GetNode()->CPPmultinode76) = multimapUnion->CPPmultimap76->erase(*(_Where->GetNode()->CPPmulticonstnode76));
		break;
	case 77:
		*(multiNode->GetNode()->CPPmultinode77) = multimapUnion->CPPmultimap77->erase(*(_Where->GetNode()->CPPmulticonstnode77));
		break;
	case 78:
		*(multiNode->GetNode()->CPPmultinode78) = multimapUnion->CPPmultimap78->erase(*(_Where->GetNode()->CPPmulticonstnode78));
		break;
	case 79:
		*(multiNode->GetNode()->CPPmultinode79) = multimapUnion->CPPmultimap79->erase(*(_Where->GetNode()->CPPmulticonstnode79));
		break;
	case 80:
		*(multiNode->GetNode()->CPPmultinode80) = multimapUnion->CPPmultimap80->erase(*(_Where->GetNode()->CPPmulticonstnode80));
		break;
	case 81:
		*(multiNode->GetNode()->CPPmultinode81) = multimapUnion->CPPmultimap81->erase(*(_Where->GetNode()->CPPmulticonstnode81));
		break;
	case 82:
		*(multiNode->GetNode()->CPPmultinode82) = multimapUnion->CPPmultimap82->erase(*(_Where->GetNode()->CPPmulticonstnode82));
		break;
	case 83:
		*(multiNode->GetNode()->CPPmultinode83) = multimapUnion->CPPmultimap83->erase(*(_Where->GetNode()->CPPmulticonstnode83));
		break;
	case 84:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmulticonstnode84->GetValue());
		*(multiNode->GetNode()->CPPmultinode84) = multimapUnion->CPPmultimap84->erase(*(_Where->GetNode()->CPPmulticonstnode84));
		break;
	case 85:
		*(multiNode->GetNode()->CPPmultinode85) = multimapUnion->CPPmultimap85->erase(*(_Where->GetNode()->CPPmulticonstnode85));
		break;
	case 86:
		*(multiNode->GetNode()->CPPmultinode86) = multimapUnion->CPPmultimap86->erase(*(_Where->GetNode()->CPPmulticonstnode86));
		break;
	case 87:
		*(multiNode->GetNode()->CPPmultinode87) = multimapUnion->CPPmultimap87->erase(*(_Where->GetNode()->CPPmulticonstnode87));
		break;
	case 88:
		*(multiNode->GetNode()->CPPmultinode88) = multimapUnion->CPPmultimap88->erase(*(_Where->GetNode()->CPPmulticonstnode88));
		break;
	case 89:
		*(multiNode->GetNode()->CPPmultinode89) = multimapUnion->CPPmultimap89->erase(*(_Where->GetNode()->CPPmulticonstnode89));
		break;
	case 90:
		*(multiNode->GetNode()->CPPmultinode90) = multimapUnion->CPPmultimap90->erase(*(_Where->GetNode()->CPPmulticonstnode90));
		break;
	case 91:
		*(multiNode->GetNode()->CPPmultinode91) = multimapUnion->CPPmultimap91->erase(*(_Where->GetNode()->CPPmulticonstnode91));
		break;
	case 92:
		*(multiNode->GetNode()->CPPmultinode92) = multimapUnion->CPPmultimap92->erase(*(_Where->GetNode()->CPPmulticonstnode92));
		break;
	case 93:
		*(multiNode->GetNode()->CPPmultinode93) = multimapUnion->CPPmultimap93->erase(*(_Where->GetNode()->CPPmulticonstnode93));
		break;
	case 94:
		*(multiNode->GetNode()->CPPmultinode94) = multimapUnion->CPPmultimap94->erase(*(_Where->GetNode()->CPPmulticonstnode94));
		break;
	case 95:
		*(multiNode->GetNode()->CPPmultinode95) = multimapUnion->CPPmultimap95->erase(*(_Where->GetNode()->CPPmulticonstnode95));
		break;
	case 96:
		*(multiNode->GetNode()->CPPmultinode96) = multimapUnion->CPPmultimap96->erase(*(_Where->GetNode()->CPPmulticonstnode96));
		break;
	case 97:
		*(multiNode->GetNode()->CPPmultinode97) = multimapUnion->CPPmultimap97->erase(*(_Where->GetNode()->CPPmulticonstnode97));
		break;
	case 98:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmulticonstnode98->GetValue());
		*(multiNode->GetNode()->CPPmultinode98) = multimapUnion->CPPmultimap98->erase(*(_Where->GetNode()->CPPmulticonstnode98));
		break;
	case 99:
		*(multiNode->GetNode()->CPPmultinode99) = multimapUnion->CPPmultimap99->erase(*(_Where->GetNode()->CPPmulticonstnode99));
		break;
	case 100:
		*(multiNode->GetNode()->CPPmultinode100) = multimapUnion->CPPmultimap100->erase(*(_Where->GetNode()->CPPmulticonstnode100));
		break;
	case 101:
		*(multiNode->GetNode()->CPPmultinode101) = multimapUnion->CPPmultimap101->erase(*(_Where->GetNode()->CPPmulticonstnode101));
		break;
	case 102:
		*(multiNode->GetNode()->CPPmultinode102) = multimapUnion->CPPmultimap102->erase(*(_Where->GetNode()->CPPmulticonstnode102));
		break;
	case 103:
		*(multiNode->GetNode()->CPPmultinode103) = multimapUnion->CPPmultimap103->erase(*(_Where->GetNode()->CPPmulticonstnode103));
		break;
	case 104:
		*(multiNode->GetNode()->CPPmultinode104) = multimapUnion->CPPmultimap104->erase(*(_Where->GetNode()->CPPmulticonstnode104));
		break;
	case 105:
		*(multiNode->GetNode()->CPPmultinode105) = multimapUnion->CPPmultimap105->erase(*(_Where->GetNode()->CPPmulticonstnode105));
		break;
	case 106:
		*(multiNode->GetNode()->CPPmultinode106) = multimapUnion->CPPmultimap106->erase(*(_Where->GetNode()->CPPmulticonstnode106));
		break;
	case 107:
		*(multiNode->GetNode()->CPPmultinode107) = multimapUnion->CPPmultimap107->erase(*(_Where->GetNode()->CPPmulticonstnode107));
		break;
	case 108:
		*(multiNode->GetNode()->CPPmultinode108) = multimapUnion->CPPmultimap108->erase(*(_Where->GetNode()->CPPmulticonstnode108));
		break;
	case 109:
		*(multiNode->GetNode()->CPPmultinode109) = multimapUnion->CPPmultimap109->erase(*(_Where->GetNode()->CPPmulticonstnode109));
		break;
	case 110:
		*(multiNode->GetNode()->CPPmultinode110) = multimapUnion->CPPmultimap110->erase(*(_Where->GetNode()->CPPmulticonstnode110));
		break;
	case 111:
		*(multiNode->GetNode()->CPPmultinode111) = multimapUnion->CPPmultimap111->erase(*(_Where->GetNode()->CPPmulticonstnode111));
		break;
	case 112:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmulticonstnode112->GetValue());
		*(multiNode->GetNode()->CPPmultinode112) = multimapUnion->CPPmultimap112->erase(*(_Where->GetNode()->CPPmulticonstnode112));
		break;
	case 113:
		*(multiNode->GetNode()->CPPmultinode113) = multimapUnion->CPPmultimap113->erase(*(_Where->GetNode()->CPPmulticonstnode113));
		break;
	case 114:
		*(multiNode->GetNode()->CPPmultinode114) = multimapUnion->CPPmultimap114->erase(*(_Where->GetNode()->CPPmulticonstnode114));
		break;
	case 115:
		*(multiNode->GetNode()->CPPmultinode115) = multimapUnion->CPPmultimap115->erase(*(_Where->GetNode()->CPPmulticonstnode115));
		break;
	case 116:
		*(multiNode->GetNode()->CPPmultinode116) = multimapUnion->CPPmultimap116->erase(*(_Where->GetNode()->CPPmulticonstnode116));
		break;
	case 117:
		*(multiNode->GetNode()->CPPmultinode117) = multimapUnion->CPPmultimap117->erase(*(_Where->GetNode()->CPPmulticonstnode117));
		break;
	case 118:
		*(multiNode->GetNode()->CPPmultinode118) = multimapUnion->CPPmultimap118->erase(*(_Where->GetNode()->CPPmulticonstnode118));
		break;
	case 119:
		*(multiNode->GetNode()->CPPmultinode119) = multimapUnion->CPPmultimap119->erase(*(_Where->GetNode()->CPPmulticonstnode119));
		break;
	case 120:
		*(multiNode->GetNode()->CPPmultinode120) = multimapUnion->CPPmultimap120->erase(*(_Where->GetNode()->CPPmulticonstnode120));
		break;
	case 121:
		*(multiNode->GetNode()->CPPmultinode121) = multimapUnion->CPPmultimap121->erase(*(_Where->GetNode()->CPPmulticonstnode121));
		break;
	case 122:
		*(multiNode->GetNode()->CPPmultinode122) = multimapUnion->CPPmultimap122->erase(*(_Where->GetNode()->CPPmulticonstnode122));
		break;
	case 123:
		*(multiNode->GetNode()->CPPmultinode123) = multimapUnion->CPPmultimap123->erase(*(_Where->GetNode()->CPPmulticonstnode123));
		break;
	case 124:
		*(multiNode->GetNode()->CPPmultinode124) = multimapUnion->CPPmultimap124->erase(*(_Where->GetNode()->CPPmulticonstnode124));
		break;
	case 125:
		*(multiNode->GetNode()->CPPmultinode125) = multimapUnion->CPPmultimap125->erase(*(_Where->GetNode()->CPPmulticonstnode125));
		break;
	case 126:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmulticonstnode126->GetValue());
		*(multiNode->GetNode()->CPPmultinode126) = multimapUnion->CPPmultimap126->erase(*(_Where->GetNode()->CPPmulticonstnode126));
		break;
	case 127:
		*(multiNode->GetNode()->CPPmultinode127) = multimapUnion->CPPmultimap127->erase(*(_Where->GetNode()->CPPmulticonstnode127));
		break;
	case 128:
		*(multiNode->GetNode()->CPPmultinode128) = multimapUnion->CPPmultimap128->erase(*(_Where->GetNode()->CPPmulticonstnode128));
		break;
	case 129:
		*(multiNode->GetNode()->CPPmultinode129) = multimapUnion->CPPmultimap129->erase(*(_Where->GetNode()->CPPmulticonstnode129));
		break;
	case 130:
		*(multiNode->GetNode()->CPPmultinode130) = multimapUnion->CPPmultimap130->erase(*(_Where->GetNode()->CPPmulticonstnode130));
		break;
	case 131:
		*(multiNode->GetNode()->CPPmultinode131) = multimapUnion->CPPmultimap131->erase(*(_Where->GetNode()->CPPmulticonstnode131));
		break;
	case 132:
		*(multiNode->GetNode()->CPPmultinode132) = multimapUnion->CPPmultimap132->erase(*(_Where->GetNode()->CPPmulticonstnode132));
		break;
	case 133:
		*(multiNode->GetNode()->CPPmultinode133) = multimapUnion->CPPmultimap133->erase(*(_Where->GetNode()->CPPmulticonstnode133));
		break;
	case 134:
		*(multiNode->GetNode()->CPPmultinode134) = multimapUnion->CPPmultimap134->erase(*(_Where->GetNode()->CPPmulticonstnode134));
		break;
	case 135:
		*(multiNode->GetNode()->CPPmultinode135) = multimapUnion->CPPmultimap135->erase(*(_Where->GetNode()->CPPmulticonstnode135));
		break;
	case 136:
		*(multiNode->GetNode()->CPPmultinode136) = multimapUnion->CPPmultimap136->erase(*(_Where->GetNode()->CPPmulticonstnode136));
		break;
	case 137:
		*(multiNode->GetNode()->CPPmultinode137) = multimapUnion->CPPmultimap137->erase(*(_Where->GetNode()->CPPmulticonstnode137));
		break;
	case 138:
		*(multiNode->GetNode()->CPPmultinode138) = multimapUnion->CPPmultimap138->erase(*(_Where->GetNode()->CPPmulticonstnode138));
		break;
	case 139:
		*(multiNode->GetNode()->CPPmultinode139) = multimapUnion->CPPmultimap139->erase(*(_Where->GetNode()->CPPmulticonstnode139));
		break;
	case 140:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmulticonstnode140->GetValue());
		*(multiNode->GetNode()->CPPmultinode140) = multimapUnion->CPPmultimap140->erase(*(_Where->GetNode()->CPPmulticonstnode140));
		break;
	case 141:
		*(multiNode->GetNode()->CPPmultinode141) = multimapUnion->CPPmultimap141->erase(*(_Where->GetNode()->CPPmulticonstnode141));
		break;
	case 142:
		*(multiNode->GetNode()->CPPmultinode142) = multimapUnion->CPPmultimap142->erase(*(_Where->GetNode()->CPPmulticonstnode142));
		break;
	case 143:
		*(multiNode->GetNode()->CPPmultinode143) = multimapUnion->CPPmultimap143->erase(*(_Where->GetNode()->CPPmulticonstnode143));
		break;
	case 144:
		*(multiNode->GetNode()->CPPmultinode144) = multimapUnion->CPPmultimap144->erase(*(_Where->GetNode()->CPPmulticonstnode144));
		break;
	case 145:
		*(multiNode->GetNode()->CPPmultinode145) = multimapUnion->CPPmultimap145->erase(*(_Where->GetNode()->CPPmulticonstnode145));
		break;
	case 146:
		*(multiNode->GetNode()->CPPmultinode146) = multimapUnion->CPPmultimap146->erase(*(_Where->GetNode()->CPPmulticonstnode146));
		break;
	case 147:
		*(multiNode->GetNode()->CPPmultinode147) = multimapUnion->CPPmultimap147->erase(*(_Where->GetNode()->CPPmulticonstnode147));
		break;
	case 148:
		*(multiNode->GetNode()->CPPmultinode148) = multimapUnion->CPPmultimap148->erase(*(_Where->GetNode()->CPPmulticonstnode148));
		break;
	case 149:
		*(multiNode->GetNode()->CPPmultinode149) = multimapUnion->CPPmultimap149->erase(*(_Where->GetNode()->CPPmulticonstnode149));
		break;
	case 150:
		*(multiNode->GetNode()->CPPmultinode150) = multimapUnion->CPPmultimap150->erase(*(_Where->GetNode()->CPPmulticonstnode150));
		break;
	case 151:
		*(multiNode->GetNode()->CPPmultinode151) = multimapUnion->CPPmultimap151->erase(*(_Where->GetNode()->CPPmulticonstnode151));
		break;
	case 152:
		*(multiNode->GetNode()->CPPmultinode152) = multimapUnion->CPPmultimap152->erase(*(_Where->GetNode()->CPPmulticonstnode152));
		break;
	case 153:
		*(multiNode->GetNode()->CPPmultinode153) = multimapUnion->CPPmultimap153->erase(*(_Where->GetNode()->CPPmulticonstnode153));
		break;
	case 154:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmulticonstnode154->GetValue());
		*(multiNode->GetNode()->CPPmultinode154) = multimapUnion->CPPmultimap154->erase(*(_Where->GetNode()->CPPmulticonstnode154));
		break;
	case 155:
		*(multiNode->GetNode()->CPPmultinode155) = multimapUnion->CPPmultimap155->erase(*(_Where->GetNode()->CPPmulticonstnode155));
		break;
	case 156:
		*(multiNode->GetNode()->CPPmultinode156) = multimapUnion->CPPmultimap156->erase(*(_Where->GetNode()->CPPmulticonstnode156));
		break;
	case 157:
		*(multiNode->GetNode()->CPPmultinode157) = multimapUnion->CPPmultimap157->erase(*(_Where->GetNode()->CPPmulticonstnode157));
		break;
	case 158:
		*(multiNode->GetNode()->CPPmultinode158) = multimapUnion->CPPmultimap158->erase(*(_Where->GetNode()->CPPmulticonstnode158));
		break;
	case 159:
		*(multiNode->GetNode()->CPPmultinode159) = multimapUnion->CPPmultimap159->erase(*(_Where->GetNode()->CPPmulticonstnode159));
		break;
	case 160:
		*(multiNode->GetNode()->CPPmultinode160) = multimapUnion->CPPmultimap160->erase(*(_Where->GetNode()->CPPmulticonstnode160));
		break;
	case 161:
		*(multiNode->GetNode()->CPPmultinode161) = multimapUnion->CPPmultimap161->erase(*(_Where->GetNode()->CPPmulticonstnode161));
		break;
	case 162:
		*(multiNode->GetNode()->CPPmultinode162) = multimapUnion->CPPmultimap162->erase(*(_Where->GetNode()->CPPmulticonstnode162));
		break;
	case 163:
		*(multiNode->GetNode()->CPPmultinode163) = multimapUnion->CPPmultimap163->erase(*(_Where->GetNode()->CPPmulticonstnode163));
		break;
	case 164:
		*(multiNode->GetNode()->CPPmultinode164) = multimapUnion->CPPmultimap164->erase(*(_Where->GetNode()->CPPmulticonstnode164));
		break;
	case 165:
		*(multiNode->GetNode()->CPPmultinode165) = multimapUnion->CPPmultimap165->erase(*(_Where->GetNode()->CPPmulticonstnode165));
		break;
	case 166:
		*(multiNode->GetNode()->CPPmultinode166) = multimapUnion->CPPmultimap166->erase(*(_Where->GetNode()->CPPmulticonstnode166));
		break;
	case 167:
		*(multiNode->GetNode()->CPPmultinode167) = multimapUnion->CPPmultimap167->erase(*(_Where->GetNode()->CPPmulticonstnode167));
		break;
	case 168:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmulticonstnode168->GetValue());
		*(multiNode->GetNode()->CPPmultinode168) = multimapUnion->CPPmultimap168->erase(*(_Where->GetNode()->CPPmulticonstnode168));
		break;
	case 169:
		*(multiNode->GetNode()->CPPmultinode169) = multimapUnion->CPPmultimap169->erase(*(_Where->GetNode()->CPPmulticonstnode169));
		break;
	case 170:
		*(multiNode->GetNode()->CPPmultinode170) = multimapUnion->CPPmultimap170->erase(*(_Where->GetNode()->CPPmulticonstnode170));
		break;
	case 171:
		*(multiNode->GetNode()->CPPmultinode171) = multimapUnion->CPPmultimap171->erase(*(_Where->GetNode()->CPPmulticonstnode171));
		break;
	case 172:
		*(multiNode->GetNode()->CPPmultinode172) = multimapUnion->CPPmultimap172->erase(*(_Where->GetNode()->CPPmulticonstnode172));
		break;
	case 173:
		*(multiNode->GetNode()->CPPmultinode173) = multimapUnion->CPPmultimap173->erase(*(_Where->GetNode()->CPPmulticonstnode173));
		break;
	case 174:
		*(multiNode->GetNode()->CPPmultinode174) = multimapUnion->CPPmultimap174->erase(*(_Where->GetNode()->CPPmulticonstnode174));
		break;
	case 175:
		*(multiNode->GetNode()->CPPmultinode175) = multimapUnion->CPPmultimap175->erase(*(_Where->GetNode()->CPPmulticonstnode175));
		break;
	case 176:
		*(multiNode->GetNode()->CPPmultinode176) = multimapUnion->CPPmultimap176->erase(*(_Where->GetNode()->CPPmulticonstnode176));
		break;
	case 177:
		*(multiNode->GetNode()->CPPmultinode177) = multimapUnion->CPPmultimap177->erase(*(_Where->GetNode()->CPPmulticonstnode177));
		break;
	case 178:
		*(multiNode->GetNode()->CPPmultinode178) = multimapUnion->CPPmultimap178->erase(*(_Where->GetNode()->CPPmulticonstnode178));
		break;
	case 179:
		*(multiNode->GetNode()->CPPmultinode179) = multimapUnion->CPPmultimap179->erase(*(_Where->GetNode()->CPPmulticonstnode179));
		break;
	case 180:
		*(multiNode->GetNode()->CPPmultinode180) = multimapUnion->CPPmultimap180->erase(*(_Where->GetNode()->CPPmulticonstnode180));
		break;
	case 181:
		*(multiNode->GetNode()->CPPmultinode181) = multimapUnion->CPPmultimap181->erase(*(_Where->GetNode()->CPPmulticonstnode181));
		break;
	case 182:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmulticonstnode182->GetValue());
		*(multiNode->GetNode()->CPPmultinode182) = multimapUnion->CPPmultimap182->erase(*(_Where->GetNode()->CPPmulticonstnode182));
		break;
	case 183:
		*(multiNode->GetNode()->CPPmultinode183) = multimapUnion->CPPmultimap183->erase(*(_Where->GetNode()->CPPmulticonstnode183));
		break;
	case 184:
		*(multiNode->GetNode()->CPPmultinode184) = multimapUnion->CPPmultimap184->erase(*(_Where->GetNode()->CPPmulticonstnode184));
		break;
	case 185:
		*(multiNode->GetNode()->CPPmultinode185) = multimapUnion->CPPmultimap185->erase(*(_Where->GetNode()->CPPmulticonstnode185));
		break;
	case 186:
		*(multiNode->GetNode()->CPPmultinode186) = multimapUnion->CPPmultimap186->erase(*(_Where->GetNode()->CPPmulticonstnode186));
		break;
	case 187:
		*(multiNode->GetNode()->CPPmultinode187) = multimapUnion->CPPmultimap187->erase(*(_Where->GetNode()->CPPmulticonstnode187));
		break;
	case 188:
		*(multiNode->GetNode()->CPPmultinode188) = multimapUnion->CPPmultimap188->erase(*(_Where->GetNode()->CPPmulticonstnode188));
		break;
	case 189:
		*(multiNode->GetNode()->CPPmultinode189) = multimapUnion->CPPmultimap189->erase(*(_Where->GetNode()->CPPmulticonstnode189));
		break;
	case 190:
		*(multiNode->GetNode()->CPPmultinode190) = multimapUnion->CPPmultimap190->erase(*(_Where->GetNode()->CPPmulticonstnode190));
		break;
	case 191:
		*(multiNode->GetNode()->CPPmultinode191) = multimapUnion->CPPmultimap191->erase(*(_Where->GetNode()->CPPmulticonstnode191));
		break;
	case 192:
		*(multiNode->GetNode()->CPPmultinode192) = multimapUnion->CPPmultimap192->erase(*(_Where->GetNode()->CPPmulticonstnode192));
		break;
	case 193:
		*(multiNode->GetNode()->CPPmultinode193) = multimapUnion->CPPmultimap193->erase(*(_Where->GetNode()->CPPmulticonstnode193));
		break;
	case 194:
		*(multiNode->GetNode()->CPPmultinode194) = multimapUnion->CPPmultimap194->erase(*(_Where->GetNode()->CPPmulticonstnode194));
		break;
	case 195:
		*(multiNode->GetNode()->CPPmultinode195) = multimapUnion->CPPmultimap195->erase(*(_Where->GetNode()->CPPmulticonstnode195));
		break;
	case 196:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmulticonstnode196->GetValue());
		*(multiNode->GetNode()->CPPmultinode196) = multimapUnion->CPPmultimap196->erase(*(_Where->GetNode()->CPPmulticonstnode196));
		break;
	}
	return multiNode->DeepCopy();
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::erase(CShorpUnOrderedMultiConstNode<Key, Value>^ First, CShorpUnOrderedMultiConstNode<Key, Value>^ Last)
{
	if (Object::ReferenceEquals(First, nullptr)) return nullptr;
	if (Object::ReferenceEquals(Last, nullptr)) return nullptr;
	if (First->GetKVType() != Last->GetKVType()) return nullptr;
	if (nKeyValueType != First->GetKVType()) return nullptr;
	if (First->GetInit() == 0) return nullptr;
	if (Last->GetInit() == 0) return nullptr;
	switch (nKeyValueType)
	{
	case 0: default:
		return nullptr;
	case 1:
		*(multiNode->GetNode()->CPPmultinode1) = multimapUnion->CPPmultimap1->erase(*(First->GetNode()->CPPmulticonstnode1), *(Last->GetNode()->CPPmulticonstnode1));
		break;
	case 2:
		*(multiNode->GetNode()->CPPmultinode2) = multimapUnion->CPPmultimap2->erase(*(First->GetNode()->CPPmulticonstnode2), *(Last->GetNode()->CPPmulticonstnode2));
		break;
	case 3:
		*(multiNode->GetNode()->CPPmultinode3) = multimapUnion->CPPmultimap3->erase(*(First->GetNode()->CPPmulticonstnode3), *(Last->GetNode()->CPPmulticonstnode3));
		break;
	case 4:
		*(multiNode->GetNode()->CPPmultinode4) = multimapUnion->CPPmultimap4->erase(*(First->GetNode()->CPPmulticonstnode4), *(Last->GetNode()->CPPmulticonstnode4));
		break;
	case 5:
		*(multiNode->GetNode()->CPPmultinode5) = multimapUnion->CPPmultimap5->erase(*(First->GetNode()->CPPmulticonstnode5), *(Last->GetNode()->CPPmulticonstnode5));
		break;
	case 6:
		*(multiNode->GetNode()->CPPmultinode6) = multimapUnion->CPPmultimap6->erase(*(First->GetNode()->CPPmulticonstnode6), *(Last->GetNode()->CPPmulticonstnode6));
		break;
	case 7:
		*(multiNode->GetNode()->CPPmultinode7) = multimapUnion->CPPmultimap7->erase(*(First->GetNode()->CPPmulticonstnode7), *(Last->GetNode()->CPPmulticonstnode7));
		break;
	case 8:
		*(multiNode->GetNode()->CPPmultinode8) = multimapUnion->CPPmultimap8->erase(*(First->GetNode()->CPPmulticonstnode8), *(Last->GetNode()->CPPmulticonstnode8));
		break;
	case 9:
		*(multiNode->GetNode()->CPPmultinode9) = multimapUnion->CPPmultimap9->erase(*(First->GetNode()->CPPmulticonstnode9), *(Last->GetNode()->CPPmulticonstnode9));
		break;
	case 10:
		*(multiNode->GetNode()->CPPmultinode10) = multimapUnion->CPPmultimap10->erase(*(First->GetNode()->CPPmulticonstnode10), *(Last->GetNode()->CPPmulticonstnode10));
		break;
	case 11:
		*(multiNode->GetNode()->CPPmultinode11) = multimapUnion->CPPmultimap11->erase(*(First->GetNode()->CPPmulticonstnode11), *(Last->GetNode()->CPPmulticonstnode11));
		break;
	case 12:
		*(multiNode->GetNode()->CPPmultinode12) = multimapUnion->CPPmultimap12->erase(*(First->GetNode()->CPPmulticonstnode12), *(Last->GetNode()->CPPmulticonstnode12));
		break;
	case 13:
		*(multiNode->GetNode()->CPPmultinode13) = multimapUnion->CPPmultimap13->erase(*(First->GetNode()->CPPmulticonstnode13), *(Last->GetNode()->CPPmulticonstnode13));
		break;
	case 14:
		if (gValueClassDictionary)
		{
			UnOrderedMultiConstNode<unsigned char, __int64> iter;
			for (iter = *(First->GetNode()->CPPmulticonstnode14); iter != *(Last->GetNode()->CPPmulticonstnode14); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode14) = multimapUnion->CPPmultimap14->erase(*(First->GetNode()->CPPmulticonstnode14), *(Last->GetNode()->CPPmulticonstnode14));
		break;
	case 15:
		*(multiNode->GetNode()->CPPmultinode15) = multimapUnion->CPPmultimap15->erase(*(First->GetNode()->CPPmulticonstnode15), *(Last->GetNode()->CPPmulticonstnode15));
		break;
	case 16:
		*(multiNode->GetNode()->CPPmultinode16) = multimapUnion->CPPmultimap16->erase(*(First->GetNode()->CPPmulticonstnode16), *(Last->GetNode()->CPPmulticonstnode16));
		break;
	case 17:
		*(multiNode->GetNode()->CPPmultinode17) = multimapUnion->CPPmultimap17->erase(*(First->GetNode()->CPPmulticonstnode17), *(Last->GetNode()->CPPmulticonstnode17));
		break;
	case 18:
		*(multiNode->GetNode()->CPPmultinode18) = multimapUnion->CPPmultimap18->erase(*(First->GetNode()->CPPmulticonstnode18), *(Last->GetNode()->CPPmulticonstnode18));
		break;
	case 19:
		*(multiNode->GetNode()->CPPmultinode19) = multimapUnion->CPPmultimap19->erase(*(First->GetNode()->CPPmulticonstnode19), *(Last->GetNode()->CPPmulticonstnode19));
		break;
	case 20:
		*(multiNode->GetNode()->CPPmultinode20) = multimapUnion->CPPmultimap20->erase(*(First->GetNode()->CPPmulticonstnode20), *(Last->GetNode()->CPPmulticonstnode20));
		break;
	case 21:
		*(multiNode->GetNode()->CPPmultinode21) = multimapUnion->CPPmultimap21->erase(*(First->GetNode()->CPPmulticonstnode21), *(Last->GetNode()->CPPmulticonstnode21));
		break;
	case 22:
		*(multiNode->GetNode()->CPPmultinode22) = multimapUnion->CPPmultimap22->erase(*(First->GetNode()->CPPmulticonstnode22), *(Last->GetNode()->CPPmulticonstnode22));
		break;
	case 23:
		*(multiNode->GetNode()->CPPmultinode23) = multimapUnion->CPPmultimap23->erase(*(First->GetNode()->CPPmulticonstnode23), *(Last->GetNode()->CPPmulticonstnode23));
		break;
	case 24:
		*(multiNode->GetNode()->CPPmultinode24) = multimapUnion->CPPmultimap24->erase(*(First->GetNode()->CPPmulticonstnode24), *(Last->GetNode()->CPPmulticonstnode24));
		break;
	case 25:
		*(multiNode->GetNode()->CPPmultinode25) = multimapUnion->CPPmultimap25->erase(*(First->GetNode()->CPPmulticonstnode25), *(Last->GetNode()->CPPmulticonstnode25));
		break;
	case 26:
		*(multiNode->GetNode()->CPPmultinode26) = multimapUnion->CPPmultimap26->erase(*(First->GetNode()->CPPmulticonstnode26), *(Last->GetNode()->CPPmulticonstnode26));
		break;
	case 27:
		*(multiNode->GetNode()->CPPmultinode27) = multimapUnion->CPPmultimap27->erase(*(First->GetNode()->CPPmulticonstnode27), *(Last->GetNode()->CPPmulticonstnode27));
		break;
	case 28:
		if (gValueClassDictionary)
		{
			UnOrderedMultiConstNode<char, __int64> iter;
			for (iter = *(First->GetNode()->CPPmulticonstnode28); iter != *(Last->GetNode()->CPPmulticonstnode28); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode28) = multimapUnion->CPPmultimap28->erase(*(First->GetNode()->CPPmulticonstnode28), *(Last->GetNode()->CPPmulticonstnode28));
		break;
	case 29:
		*(multiNode->GetNode()->CPPmultinode29) = multimapUnion->CPPmultimap29->erase(*(First->GetNode()->CPPmulticonstnode29), *(Last->GetNode()->CPPmulticonstnode29));
		break;
	case 30:
		*(multiNode->GetNode()->CPPmultinode30) = multimapUnion->CPPmultimap30->erase(*(First->GetNode()->CPPmulticonstnode30), *(Last->GetNode()->CPPmulticonstnode30));
		break;
	case 31:
		*(multiNode->GetNode()->CPPmultinode31) = multimapUnion->CPPmultimap31->erase(*(First->GetNode()->CPPmulticonstnode31), *(Last->GetNode()->CPPmulticonstnode31));
		break;
	case 32:
		*(multiNode->GetNode()->CPPmultinode32) = multimapUnion->CPPmultimap32->erase(*(First->GetNode()->CPPmulticonstnode32), *(Last->GetNode()->CPPmulticonstnode32));
		break;
	case 33:
		*(multiNode->GetNode()->CPPmultinode33) = multimapUnion->CPPmultimap33->erase(*(First->GetNode()->CPPmulticonstnode33), *(Last->GetNode()->CPPmulticonstnode33));
		break;
	case 34:
		*(multiNode->GetNode()->CPPmultinode34) = multimapUnion->CPPmultimap34->erase(*(First->GetNode()->CPPmulticonstnode34), *(Last->GetNode()->CPPmulticonstnode34));
		break;
	case 35:
		*(multiNode->GetNode()->CPPmultinode35) = multimapUnion->CPPmultimap35->erase(*(First->GetNode()->CPPmulticonstnode35), *(Last->GetNode()->CPPmulticonstnode35));
		break;
	case 36:
		*(multiNode->GetNode()->CPPmultinode36) = multimapUnion->CPPmultimap36->erase(*(First->GetNode()->CPPmulticonstnode36), *(Last->GetNode()->CPPmulticonstnode36));
		break;
	case 37:
		*(multiNode->GetNode()->CPPmultinode37) = multimapUnion->CPPmultimap37->erase(*(First->GetNode()->CPPmulticonstnode37), *(Last->GetNode()->CPPmulticonstnode37));
		break;
	case 38:
		*(multiNode->GetNode()->CPPmultinode38) = multimapUnion->CPPmultimap38->erase(*(First->GetNode()->CPPmulticonstnode38), *(Last->GetNode()->CPPmulticonstnode38));
		break;
	case 39:
		*(multiNode->GetNode()->CPPmultinode39) = multimapUnion->CPPmultimap39->erase(*(First->GetNode()->CPPmulticonstnode39), *(Last->GetNode()->CPPmulticonstnode39));
		break;
	case 40:
		*(multiNode->GetNode()->CPPmultinode40) = multimapUnion->CPPmultimap40->erase(*(First->GetNode()->CPPmulticonstnode40), *(Last->GetNode()->CPPmulticonstnode40));
		break;
	case 41:
		*(multiNode->GetNode()->CPPmultinode41) = multimapUnion->CPPmultimap41->erase(*(First->GetNode()->CPPmulticonstnode41), *(Last->GetNode()->CPPmulticonstnode41));
		break;
	case 42:
		if (gValueClassDictionary)
		{
			UnOrderedMultiConstNode<short, __int64> iter;
			for (iter = *(First->GetNode()->CPPmulticonstnode42); iter != *(Last->GetNode()->CPPmulticonstnode42); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode42) = multimapUnion->CPPmultimap42->erase(*(First->GetNode()->CPPmulticonstnode42), *(Last->GetNode()->CPPmulticonstnode42));
		break;
	case 43:
		*(multiNode->GetNode()->CPPmultinode43) = multimapUnion->CPPmultimap43->erase(*(First->GetNode()->CPPmulticonstnode43), *(Last->GetNode()->CPPmulticonstnode43));
		break;
	case 44:
		*(multiNode->GetNode()->CPPmultinode44) = multimapUnion->CPPmultimap44->erase(*(First->GetNode()->CPPmulticonstnode44), *(Last->GetNode()->CPPmulticonstnode44));
		break;
	case 45:
		*(multiNode->GetNode()->CPPmultinode45) = multimapUnion->CPPmultimap45->erase(*(First->GetNode()->CPPmulticonstnode45), *(Last->GetNode()->CPPmulticonstnode45));
		break;
	case 46:
		*(multiNode->GetNode()->CPPmultinode46) = multimapUnion->CPPmultimap46->erase(*(First->GetNode()->CPPmulticonstnode46), *(Last->GetNode()->CPPmulticonstnode46));
		break;
	case 47:
		*(multiNode->GetNode()->CPPmultinode47) = multimapUnion->CPPmultimap47->erase(*(First->GetNode()->CPPmulticonstnode47), *(Last->GetNode()->CPPmulticonstnode47));
		break;
	case 48:
		*(multiNode->GetNode()->CPPmultinode48) = multimapUnion->CPPmultimap48->erase(*(First->GetNode()->CPPmulticonstnode48), *(Last->GetNode()->CPPmulticonstnode48));
		break;
	case 49:
		*(multiNode->GetNode()->CPPmultinode49) = multimapUnion->CPPmultimap49->erase(*(First->GetNode()->CPPmulticonstnode49), *(Last->GetNode()->CPPmulticonstnode49));
		break;
	case 50:
		*(multiNode->GetNode()->CPPmultinode50) = multimapUnion->CPPmultimap50->erase(*(First->GetNode()->CPPmulticonstnode50), *(Last->GetNode()->CPPmulticonstnode50));
		break;
	case 51:
		*(multiNode->GetNode()->CPPmultinode51) = multimapUnion->CPPmultimap51->erase(*(First->GetNode()->CPPmulticonstnode51), *(Last->GetNode()->CPPmulticonstnode51));
		break;
	case 52:
		*(multiNode->GetNode()->CPPmultinode52) = multimapUnion->CPPmultimap52->erase(*(First->GetNode()->CPPmulticonstnode52), *(Last->GetNode()->CPPmulticonstnode52));
		break;
	case 53:
		*(multiNode->GetNode()->CPPmultinode53) = multimapUnion->CPPmultimap53->erase(*(First->GetNode()->CPPmulticonstnode53), *(Last->GetNode()->CPPmulticonstnode53));
		break;
	case 54:
		*(multiNode->GetNode()->CPPmultinode54) = multimapUnion->CPPmultimap54->erase(*(First->GetNode()->CPPmulticonstnode54), *(Last->GetNode()->CPPmulticonstnode54));
		break;
	case 55:
		*(multiNode->GetNode()->CPPmultinode55) = multimapUnion->CPPmultimap55->erase(*(First->GetNode()->CPPmulticonstnode55), *(Last->GetNode()->CPPmulticonstnode55));
		break;
	case 56:
		if (gValueClassDictionary)
		{
			UnOrderedMultiConstNode<unsigned short, __int64> iter;
			for (iter = *(First->GetNode()->CPPmulticonstnode56); iter != *(Last->GetNode()->CPPmulticonstnode56); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode56) = multimapUnion->CPPmultimap56->erase(*(First->GetNode()->CPPmulticonstnode56), *(Last->GetNode()->CPPmulticonstnode56));
		break;
	case 57:
		*(multiNode->GetNode()->CPPmultinode57) = multimapUnion->CPPmultimap57->erase(*(First->GetNode()->CPPmulticonstnode57), *(Last->GetNode()->CPPmulticonstnode57));
		break;
	case 58:
		*(multiNode->GetNode()->CPPmultinode58) = multimapUnion->CPPmultimap58->erase(*(First->GetNode()->CPPmulticonstnode58), *(Last->GetNode()->CPPmulticonstnode58));
		break;
	case 59:
		*(multiNode->GetNode()->CPPmultinode59) = multimapUnion->CPPmultimap59->erase(*(First->GetNode()->CPPmulticonstnode59), *(Last->GetNode()->CPPmulticonstnode59));
		break;
	case 60:
		*(multiNode->GetNode()->CPPmultinode60) = multimapUnion->CPPmultimap60->erase(*(First->GetNode()->CPPmulticonstnode60), *(Last->GetNode()->CPPmulticonstnode60));
		break;
	case 61:
		*(multiNode->GetNode()->CPPmultinode61) = multimapUnion->CPPmultimap61->erase(*(First->GetNode()->CPPmulticonstnode61), *(Last->GetNode()->CPPmulticonstnode61));
		break;
	case 62:
		*(multiNode->GetNode()->CPPmultinode62) = multimapUnion->CPPmultimap62->erase(*(First->GetNode()->CPPmulticonstnode62), *(Last->GetNode()->CPPmulticonstnode62));
		break;
	case 63:
		*(multiNode->GetNode()->CPPmultinode63) = multimapUnion->CPPmultimap63->erase(*(First->GetNode()->CPPmulticonstnode63), *(Last->GetNode()->CPPmulticonstnode63));
		break;
	case 64:
		*(multiNode->GetNode()->CPPmultinode64) = multimapUnion->CPPmultimap64->erase(*(First->GetNode()->CPPmulticonstnode64), *(Last->GetNode()->CPPmulticonstnode64));
		break;
	case 65:
		*(multiNode->GetNode()->CPPmultinode65) = multimapUnion->CPPmultimap65->erase(*(First->GetNode()->CPPmulticonstnode65), *(Last->GetNode()->CPPmulticonstnode65));
		break;
	case 66:
		*(multiNode->GetNode()->CPPmultinode66) = multimapUnion->CPPmultimap66->erase(*(First->GetNode()->CPPmulticonstnode66), *(Last->GetNode()->CPPmulticonstnode66));
		break;
	case 67:
		*(multiNode->GetNode()->CPPmultinode67) = multimapUnion->CPPmultimap67->erase(*(First->GetNode()->CPPmulticonstnode67), *(Last->GetNode()->CPPmulticonstnode67));
		break;
	case 68:
		*(multiNode->GetNode()->CPPmultinode68) = multimapUnion->CPPmultimap68->erase(*(First->GetNode()->CPPmulticonstnode68), *(Last->GetNode()->CPPmulticonstnode68));
		break;
	case 69:
		*(multiNode->GetNode()->CPPmultinode69) = multimapUnion->CPPmultimap69->erase(*(First->GetNode()->CPPmulticonstnode69), *(Last->GetNode()->CPPmulticonstnode69));
		break;
	case 70:
		if (gValueClassDictionary)
		{
			UnOrderedMultiConstNode<int, __int64> iter;
			for (iter = *(First->GetNode()->CPPmulticonstnode70); iter != *(Last->GetNode()->CPPmulticonstnode70); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode70) = multimapUnion->CPPmultimap70->erase(*(First->GetNode()->CPPmulticonstnode70), *(Last->GetNode()->CPPmulticonstnode70));
		break;
	case 71:
		*(multiNode->GetNode()->CPPmultinode71) = multimapUnion->CPPmultimap71->erase(*(First->GetNode()->CPPmulticonstnode71), *(Last->GetNode()->CPPmulticonstnode71));
		break;
	case 72:
		*(multiNode->GetNode()->CPPmultinode72) = multimapUnion->CPPmultimap72->erase(*(First->GetNode()->CPPmulticonstnode72), *(Last->GetNode()->CPPmulticonstnode72));
		break;
	case 73:
		*(multiNode->GetNode()->CPPmultinode73) = multimapUnion->CPPmultimap73->erase(*(First->GetNode()->CPPmulticonstnode73), *(Last->GetNode()->CPPmulticonstnode73));
		break;
	case 74:
		*(multiNode->GetNode()->CPPmultinode74) = multimapUnion->CPPmultimap74->erase(*(First->GetNode()->CPPmulticonstnode74), *(Last->GetNode()->CPPmulticonstnode74));
		break;
	case 75:
		*(multiNode->GetNode()->CPPmultinode75) = multimapUnion->CPPmultimap75->erase(*(First->GetNode()->CPPmulticonstnode75), *(Last->GetNode()->CPPmulticonstnode75));
		break;
	case 76:
		*(multiNode->GetNode()->CPPmultinode76) = multimapUnion->CPPmultimap76->erase(*(First->GetNode()->CPPmulticonstnode76), *(Last->GetNode()->CPPmulticonstnode76));
		break;
	case 77:
		*(multiNode->GetNode()->CPPmultinode77) = multimapUnion->CPPmultimap77->erase(*(First->GetNode()->CPPmulticonstnode77), *(Last->GetNode()->CPPmulticonstnode77));
		break;
	case 78:
		*(multiNode->GetNode()->CPPmultinode78) = multimapUnion->CPPmultimap78->erase(*(First->GetNode()->CPPmulticonstnode78), *(Last->GetNode()->CPPmulticonstnode78));
		break;
	case 79:
		*(multiNode->GetNode()->CPPmultinode79) = multimapUnion->CPPmultimap79->erase(*(First->GetNode()->CPPmulticonstnode79), *(Last->GetNode()->CPPmulticonstnode79));
		break;
	case 80:
		*(multiNode->GetNode()->CPPmultinode80) = multimapUnion->CPPmultimap80->erase(*(First->GetNode()->CPPmulticonstnode80), *(Last->GetNode()->CPPmulticonstnode80));
		break;
	case 81:
		*(multiNode->GetNode()->CPPmultinode81) = multimapUnion->CPPmultimap81->erase(*(First->GetNode()->CPPmulticonstnode81), *(Last->GetNode()->CPPmulticonstnode81));
		break;
	case 82:
		*(multiNode->GetNode()->CPPmultinode82) = multimapUnion->CPPmultimap82->erase(*(First->GetNode()->CPPmulticonstnode82), *(Last->GetNode()->CPPmulticonstnode82));
		break;
	case 83:
		*(multiNode->GetNode()->CPPmultinode83) = multimapUnion->CPPmultimap83->erase(*(First->GetNode()->CPPmulticonstnode83), *(Last->GetNode()->CPPmulticonstnode83));
		break;
	case 84:
		if (gValueClassDictionary)
		{
			UnOrderedMultiConstNode<unsigned int, __int64> iter;
			for (iter = *(First->GetNode()->CPPmulticonstnode84); iter != *(Last->GetNode()->CPPmulticonstnode84); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode84) = multimapUnion->CPPmultimap84->erase(*(First->GetNode()->CPPmulticonstnode84), *(Last->GetNode()->CPPmulticonstnode84));
		break;
	case 85:
		*(multiNode->GetNode()->CPPmultinode85) = multimapUnion->CPPmultimap85->erase(*(First->GetNode()->CPPmulticonstnode85), *(Last->GetNode()->CPPmulticonstnode85));
		break;
	case 86:
		*(multiNode->GetNode()->CPPmultinode86) = multimapUnion->CPPmultimap86->erase(*(First->GetNode()->CPPmulticonstnode86), *(Last->GetNode()->CPPmulticonstnode86));
		break;
	case 87:
		*(multiNode->GetNode()->CPPmultinode87) = multimapUnion->CPPmultimap87->erase(*(First->GetNode()->CPPmulticonstnode87), *(Last->GetNode()->CPPmulticonstnode87));
		break;
	case 88:
		*(multiNode->GetNode()->CPPmultinode88) = multimapUnion->CPPmultimap88->erase(*(First->GetNode()->CPPmulticonstnode88), *(Last->GetNode()->CPPmulticonstnode88));
		break;
	case 89:
		*(multiNode->GetNode()->CPPmultinode89) = multimapUnion->CPPmultimap89->erase(*(First->GetNode()->CPPmulticonstnode89), *(Last->GetNode()->CPPmulticonstnode89));
		break;
	case 90:
		*(multiNode->GetNode()->CPPmultinode90) = multimapUnion->CPPmultimap90->erase(*(First->GetNode()->CPPmulticonstnode90), *(Last->GetNode()->CPPmulticonstnode90));
		break;
	case 91:
		*(multiNode->GetNode()->CPPmultinode91) = multimapUnion->CPPmultimap91->erase(*(First->GetNode()->CPPmulticonstnode91), *(Last->GetNode()->CPPmulticonstnode91));
		break;
	case 92:
		*(multiNode->GetNode()->CPPmultinode92) = multimapUnion->CPPmultimap92->erase(*(First->GetNode()->CPPmulticonstnode92), *(Last->GetNode()->CPPmulticonstnode92));
		break;
	case 93:
		*(multiNode->GetNode()->CPPmultinode93) = multimapUnion->CPPmultimap93->erase(*(First->GetNode()->CPPmulticonstnode93), *(Last->GetNode()->CPPmulticonstnode93));
		break;
	case 94:
		*(multiNode->GetNode()->CPPmultinode94) = multimapUnion->CPPmultimap94->erase(*(First->GetNode()->CPPmulticonstnode94), *(Last->GetNode()->CPPmulticonstnode94));
		break;
	case 95:
		*(multiNode->GetNode()->CPPmultinode95) = multimapUnion->CPPmultimap95->erase(*(First->GetNode()->CPPmulticonstnode95), *(Last->GetNode()->CPPmulticonstnode95));
		break;
	case 96:
		*(multiNode->GetNode()->CPPmultinode96) = multimapUnion->CPPmultimap96->erase(*(First->GetNode()->CPPmulticonstnode96), *(Last->GetNode()->CPPmulticonstnode96));
		break;
	case 97:
		*(multiNode->GetNode()->CPPmultinode97) = multimapUnion->CPPmultimap97->erase(*(First->GetNode()->CPPmulticonstnode97), *(Last->GetNode()->CPPmulticonstnode97));
		break;
	case 98:
		if (gValueClassDictionary)
		{
			UnOrderedMultiConstNode<long long, __int64> iter;
			for (iter = *(First->GetNode()->CPPmulticonstnode98); iter != *(Last->GetNode()->CPPmulticonstnode98); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode98) = multimapUnion->CPPmultimap98->erase(*(First->GetNode()->CPPmulticonstnode98), *(Last->GetNode()->CPPmulticonstnode98));
		break;
	case 99:
		*(multiNode->GetNode()->CPPmultinode99) = multimapUnion->CPPmultimap99->erase(*(First->GetNode()->CPPmulticonstnode99), *(Last->GetNode()->CPPmulticonstnode99));
		break;
	case 100:
		*(multiNode->GetNode()->CPPmultinode100) = multimapUnion->CPPmultimap100->erase(*(First->GetNode()->CPPmulticonstnode100), *(Last->GetNode()->CPPmulticonstnode100));
		break;
	case 101:
		*(multiNode->GetNode()->CPPmultinode101) = multimapUnion->CPPmultimap101->erase(*(First->GetNode()->CPPmulticonstnode101), *(Last->GetNode()->CPPmulticonstnode101));
		break;
	case 102:
		*(multiNode->GetNode()->CPPmultinode102) = multimapUnion->CPPmultimap102->erase(*(First->GetNode()->CPPmulticonstnode102), *(Last->GetNode()->CPPmulticonstnode102));
		break;
	case 103:
		*(multiNode->GetNode()->CPPmultinode103) = multimapUnion->CPPmultimap103->erase(*(First->GetNode()->CPPmulticonstnode103), *(Last->GetNode()->CPPmulticonstnode103));
		break;
	case 104:
		*(multiNode->GetNode()->CPPmultinode104) = multimapUnion->CPPmultimap104->erase(*(First->GetNode()->CPPmulticonstnode104), *(Last->GetNode()->CPPmulticonstnode104));
		break;
	case 105:
		*(multiNode->GetNode()->CPPmultinode105) = multimapUnion->CPPmultimap105->erase(*(First->GetNode()->CPPmulticonstnode105), *(Last->GetNode()->CPPmulticonstnode105));
		break;
	case 106:
		*(multiNode->GetNode()->CPPmultinode106) = multimapUnion->CPPmultimap106->erase(*(First->GetNode()->CPPmulticonstnode106), *(Last->GetNode()->CPPmulticonstnode106));
		break;
	case 107:
		*(multiNode->GetNode()->CPPmultinode107) = multimapUnion->CPPmultimap107->erase(*(First->GetNode()->CPPmulticonstnode107), *(Last->GetNode()->CPPmulticonstnode107));
		break;
	case 108:
		*(multiNode->GetNode()->CPPmultinode108) = multimapUnion->CPPmultimap108->erase(*(First->GetNode()->CPPmulticonstnode108), *(Last->GetNode()->CPPmulticonstnode108));
		break;
	case 109:
		*(multiNode->GetNode()->CPPmultinode109) = multimapUnion->CPPmultimap109->erase(*(First->GetNode()->CPPmulticonstnode109), *(Last->GetNode()->CPPmulticonstnode109));
		break;
	case 110:
		*(multiNode->GetNode()->CPPmultinode110) = multimapUnion->CPPmultimap110->erase(*(First->GetNode()->CPPmulticonstnode110), *(Last->GetNode()->CPPmulticonstnode110));
		break;
	case 111:
		*(multiNode->GetNode()->CPPmultinode111) = multimapUnion->CPPmultimap111->erase(*(First->GetNode()->CPPmulticonstnode111), *(Last->GetNode()->CPPmulticonstnode111));
		break;
	case 112:
		if (gValueClassDictionary)
		{
			UnOrderedMultiConstNode<unsigned long long, __int64> iter;
			for (iter = *(First->GetNode()->CPPmulticonstnode112); iter != *(Last->GetNode()->CPPmulticonstnode112); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode112) = multimapUnion->CPPmultimap112->erase(*(First->GetNode()->CPPmulticonstnode112), *(Last->GetNode()->CPPmulticonstnode112));
		break;
	case 113:
		*(multiNode->GetNode()->CPPmultinode113) = multimapUnion->CPPmultimap113->erase(*(First->GetNode()->CPPmulticonstnode113), *(Last->GetNode()->CPPmulticonstnode113));
		break;
	case 114:
		*(multiNode->GetNode()->CPPmultinode114) = multimapUnion->CPPmultimap114->erase(*(First->GetNode()->CPPmulticonstnode114), *(Last->GetNode()->CPPmulticonstnode114));
		break;
	case 115:
		*(multiNode->GetNode()->CPPmultinode115) = multimapUnion->CPPmultimap115->erase(*(First->GetNode()->CPPmulticonstnode115), *(Last->GetNode()->CPPmulticonstnode115));
		break;
	case 116:
		*(multiNode->GetNode()->CPPmultinode116) = multimapUnion->CPPmultimap116->erase(*(First->GetNode()->CPPmulticonstnode116), *(Last->GetNode()->CPPmulticonstnode116));
		break;
	case 117:
		*(multiNode->GetNode()->CPPmultinode117) = multimapUnion->CPPmultimap117->erase(*(First->GetNode()->CPPmulticonstnode117), *(Last->GetNode()->CPPmulticonstnode117));
		break;
	case 118:
		*(multiNode->GetNode()->CPPmultinode118) = multimapUnion->CPPmultimap118->erase(*(First->GetNode()->CPPmulticonstnode118), *(Last->GetNode()->CPPmulticonstnode118));
		break;
	case 119:
		*(multiNode->GetNode()->CPPmultinode119) = multimapUnion->CPPmultimap119->erase(*(First->GetNode()->CPPmulticonstnode119), *(Last->GetNode()->CPPmulticonstnode119));
		break;
	case 120:
		*(multiNode->GetNode()->CPPmultinode120) = multimapUnion->CPPmultimap120->erase(*(First->GetNode()->CPPmulticonstnode120), *(Last->GetNode()->CPPmulticonstnode120));
		break;
	case 121:
		*(multiNode->GetNode()->CPPmultinode121) = multimapUnion->CPPmultimap121->erase(*(First->GetNode()->CPPmulticonstnode121), *(Last->GetNode()->CPPmulticonstnode121));
		break;
	case 122:
		*(multiNode->GetNode()->CPPmultinode122) = multimapUnion->CPPmultimap122->erase(*(First->GetNode()->CPPmulticonstnode122), *(Last->GetNode()->CPPmulticonstnode122));
		break;
	case 123:
		*(multiNode->GetNode()->CPPmultinode123) = multimapUnion->CPPmultimap123->erase(*(First->GetNode()->CPPmulticonstnode123), *(Last->GetNode()->CPPmulticonstnode123));
		break;
	case 124:
		*(multiNode->GetNode()->CPPmultinode124) = multimapUnion->CPPmultimap124->erase(*(First->GetNode()->CPPmulticonstnode124), *(Last->GetNode()->CPPmulticonstnode124));
		break;
	case 125:
		*(multiNode->GetNode()->CPPmultinode125) = multimapUnion->CPPmultimap125->erase(*(First->GetNode()->CPPmulticonstnode125), *(Last->GetNode()->CPPmulticonstnode125));
		break;
	case 126:
		if (gValueClassDictionary)
		{
			UnOrderedMultiConstNode<float, __int64> iter;
			for (iter = *(First->GetNode()->CPPmulticonstnode126); iter != *(Last->GetNode()->CPPmulticonstnode126); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode126) = multimapUnion->CPPmultimap126->erase(*(First->GetNode()->CPPmulticonstnode126), *(Last->GetNode()->CPPmulticonstnode126));
		break;
	case 127:
		*(multiNode->GetNode()->CPPmultinode127) = multimapUnion->CPPmultimap127->erase(*(First->GetNode()->CPPmulticonstnode127), *(Last->GetNode()->CPPmulticonstnode127));
		break;
	case 128:
		*(multiNode->GetNode()->CPPmultinode128) = multimapUnion->CPPmultimap128->erase(*(First->GetNode()->CPPmulticonstnode128), *(Last->GetNode()->CPPmulticonstnode128));
		break;
	case 129:
		*(multiNode->GetNode()->CPPmultinode129) = multimapUnion->CPPmultimap129->erase(*(First->GetNode()->CPPmulticonstnode129), *(Last->GetNode()->CPPmulticonstnode129));
		break;
	case 130:
		*(multiNode->GetNode()->CPPmultinode130) = multimapUnion->CPPmultimap130->erase(*(First->GetNode()->CPPmulticonstnode130), *(Last->GetNode()->CPPmulticonstnode130));
		break;
	case 131:
		*(multiNode->GetNode()->CPPmultinode131) = multimapUnion->CPPmultimap131->erase(*(First->GetNode()->CPPmulticonstnode131), *(Last->GetNode()->CPPmulticonstnode131));
		break;
	case 132:
		*(multiNode->GetNode()->CPPmultinode132) = multimapUnion->CPPmultimap132->erase(*(First->GetNode()->CPPmulticonstnode132), *(Last->GetNode()->CPPmulticonstnode132));
		break;
	case 133:
		*(multiNode->GetNode()->CPPmultinode133) = multimapUnion->CPPmultimap133->erase(*(First->GetNode()->CPPmulticonstnode133), *(Last->GetNode()->CPPmulticonstnode133));
		break;
	case 134:
		*(multiNode->GetNode()->CPPmultinode134) = multimapUnion->CPPmultimap134->erase(*(First->GetNode()->CPPmulticonstnode134), *(Last->GetNode()->CPPmulticonstnode134));
		break;
	case 135:
		*(multiNode->GetNode()->CPPmultinode135) = multimapUnion->CPPmultimap135->erase(*(First->GetNode()->CPPmulticonstnode135), *(Last->GetNode()->CPPmulticonstnode135));
		break;
	case 136:
		*(multiNode->GetNode()->CPPmultinode136) = multimapUnion->CPPmultimap136->erase(*(First->GetNode()->CPPmulticonstnode136), *(Last->GetNode()->CPPmulticonstnode136));
		break;
	case 137:
		*(multiNode->GetNode()->CPPmultinode137) = multimapUnion->CPPmultimap137->erase(*(First->GetNode()->CPPmulticonstnode137), *(Last->GetNode()->CPPmulticonstnode137));
		break;
	case 138:
		*(multiNode->GetNode()->CPPmultinode138) = multimapUnion->CPPmultimap138->erase(*(First->GetNode()->CPPmulticonstnode138), *(Last->GetNode()->CPPmulticonstnode138));
		break;
	case 139:
		*(multiNode->GetNode()->CPPmultinode139) = multimapUnion->CPPmultimap139->erase(*(First->GetNode()->CPPmulticonstnode139), *(Last->GetNode()->CPPmulticonstnode139));
		break;
	case 140:
		if (gValueClassDictionary)
		{
			UnOrderedMultiConstNode<double, __int64> iter;
			for (iter = *(First->GetNode()->CPPmulticonstnode140); iter != *(Last->GetNode()->CPPmulticonstnode140); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode140) = multimapUnion->CPPmultimap140->erase(*(First->GetNode()->CPPmulticonstnode140), *(Last->GetNode()->CPPmulticonstnode140));
		break;
	case 141:
		*(multiNode->GetNode()->CPPmultinode141) = multimapUnion->CPPmultimap141->erase(*(First->GetNode()->CPPmulticonstnode141), *(Last->GetNode()->CPPmulticonstnode141));
		break;
	case 142:
		*(multiNode->GetNode()->CPPmultinode142) = multimapUnion->CPPmultimap142->erase(*(First->GetNode()->CPPmulticonstnode142), *(Last->GetNode()->CPPmulticonstnode142));
		break;
	case 143:
		*(multiNode->GetNode()->CPPmultinode143) = multimapUnion->CPPmultimap143->erase(*(First->GetNode()->CPPmulticonstnode143), *(Last->GetNode()->CPPmulticonstnode143));
		break;
	case 144:
		*(multiNode->GetNode()->CPPmultinode144) = multimapUnion->CPPmultimap144->erase(*(First->GetNode()->CPPmulticonstnode144), *(Last->GetNode()->CPPmulticonstnode144));
		break;
	case 145:
		*(multiNode->GetNode()->CPPmultinode145) = multimapUnion->CPPmultimap145->erase(*(First->GetNode()->CPPmulticonstnode145), *(Last->GetNode()->CPPmulticonstnode145));
		break;
	case 146:
		*(multiNode->GetNode()->CPPmultinode146) = multimapUnion->CPPmultimap146->erase(*(First->GetNode()->CPPmulticonstnode146), *(Last->GetNode()->CPPmulticonstnode146));
		break;
	case 147:
		*(multiNode->GetNode()->CPPmultinode147) = multimapUnion->CPPmultimap147->erase(*(First->GetNode()->CPPmulticonstnode147), *(Last->GetNode()->CPPmulticonstnode147));
		break;
	case 148:
		*(multiNode->GetNode()->CPPmultinode148) = multimapUnion->CPPmultimap148->erase(*(First->GetNode()->CPPmulticonstnode148), *(Last->GetNode()->CPPmulticonstnode148));
		break;
	case 149:
		*(multiNode->GetNode()->CPPmultinode149) = multimapUnion->CPPmultimap149->erase(*(First->GetNode()->CPPmulticonstnode149), *(Last->GetNode()->CPPmulticonstnode149));
		break;
	case 150:
		*(multiNode->GetNode()->CPPmultinode150) = multimapUnion->CPPmultimap150->erase(*(First->GetNode()->CPPmulticonstnode150), *(Last->GetNode()->CPPmulticonstnode150));
		break;
	case 151:
		*(multiNode->GetNode()->CPPmultinode151) = multimapUnion->CPPmultimap151->erase(*(First->GetNode()->CPPmulticonstnode151), *(Last->GetNode()->CPPmulticonstnode151));
		break;
	case 152:
		*(multiNode->GetNode()->CPPmultinode152) = multimapUnion->CPPmultimap152->erase(*(First->GetNode()->CPPmulticonstnode152), *(Last->GetNode()->CPPmulticonstnode152));
		break;
	case 153:
		*(multiNode->GetNode()->CPPmultinode153) = multimapUnion->CPPmultimap153->erase(*(First->GetNode()->CPPmulticonstnode153), *(Last->GetNode()->CPPmulticonstnode153));
		break;
	case 154:
		if (gValueClassDictionary)
		{
			UnOrderedMultiConstNode<wchar_t, __int64> iter;
			for (iter = *(First->GetNode()->CPPmulticonstnode154); iter != *(Last->GetNode()->CPPmulticonstnode154); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode154) = multimapUnion->CPPmultimap154->erase(*(First->GetNode()->CPPmulticonstnode154), *(Last->GetNode()->CPPmulticonstnode154));
		break;
	case 155:
		*(multiNode->GetNode()->CPPmultinode155) = multimapUnion->CPPmultimap155->erase(*(First->GetNode()->CPPmulticonstnode155), *(Last->GetNode()->CPPmulticonstnode155));
		break;
	case 156:
		*(multiNode->GetNode()->CPPmultinode156) = multimapUnion->CPPmultimap156->erase(*(First->GetNode()->CPPmulticonstnode156), *(Last->GetNode()->CPPmulticonstnode156));
		break;
	case 157:
		*(multiNode->GetNode()->CPPmultinode157) = multimapUnion->CPPmultimap157->erase(*(First->GetNode()->CPPmulticonstnode157), *(Last->GetNode()->CPPmulticonstnode157));
		break;
	case 158:
		*(multiNode->GetNode()->CPPmultinode158) = multimapUnion->CPPmultimap158->erase(*(First->GetNode()->CPPmulticonstnode158), *(Last->GetNode()->CPPmulticonstnode158));
		break;
	case 159:
		*(multiNode->GetNode()->CPPmultinode159) = multimapUnion->CPPmultimap159->erase(*(First->GetNode()->CPPmulticonstnode159), *(Last->GetNode()->CPPmulticonstnode159));
		break;
	case 160:
		*(multiNode->GetNode()->CPPmultinode160) = multimapUnion->CPPmultimap160->erase(*(First->GetNode()->CPPmulticonstnode160), *(Last->GetNode()->CPPmulticonstnode160));
		break;
	case 161:
		*(multiNode->GetNode()->CPPmultinode161) = multimapUnion->CPPmultimap161->erase(*(First->GetNode()->CPPmulticonstnode161), *(Last->GetNode()->CPPmulticonstnode161));
		break;
	case 162:
		*(multiNode->GetNode()->CPPmultinode162) = multimapUnion->CPPmultimap162->erase(*(First->GetNode()->CPPmulticonstnode162), *(Last->GetNode()->CPPmulticonstnode162));
		break;
	case 163:
		*(multiNode->GetNode()->CPPmultinode163) = multimapUnion->CPPmultimap163->erase(*(First->GetNode()->CPPmulticonstnode163), *(Last->GetNode()->CPPmulticonstnode163));
		break;
	case 164:
		*(multiNode->GetNode()->CPPmultinode164) = multimapUnion->CPPmultimap164->erase(*(First->GetNode()->CPPmulticonstnode164), *(Last->GetNode()->CPPmulticonstnode164));
		break;
	case 165:
		*(multiNode->GetNode()->CPPmultinode165) = multimapUnion->CPPmultimap165->erase(*(First->GetNode()->CPPmulticonstnode165), *(Last->GetNode()->CPPmulticonstnode165));
		break;
	case 166:
		*(multiNode->GetNode()->CPPmultinode166) = multimapUnion->CPPmultimap166->erase(*(First->GetNode()->CPPmulticonstnode166), *(Last->GetNode()->CPPmulticonstnode166));
		break;
	case 167:
		*(multiNode->GetNode()->CPPmultinode167) = multimapUnion->CPPmultimap167->erase(*(First->GetNode()->CPPmulticonstnode167), *(Last->GetNode()->CPPmulticonstnode167));
		break;
	case 168:
		if (gValueClassDictionary)
		{
			UnOrderedMultiConstNode<bool, __int64> iter;
			for (iter = *(First->GetNode()->CPPmulticonstnode168); iter != *(Last->GetNode()->CPPmulticonstnode168); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode168) = multimapUnion->CPPmultimap168->erase(*(First->GetNode()->CPPmulticonstnode168), *(Last->GetNode()->CPPmulticonstnode168));
		break;
	case 169:
		*(multiNode->GetNode()->CPPmultinode169) = multimapUnion->CPPmultimap169->erase(*(First->GetNode()->CPPmulticonstnode169), *(Last->GetNode()->CPPmulticonstnode169));
		break;
	case 170:
		*(multiNode->GetNode()->CPPmultinode170) = multimapUnion->CPPmultimap170->erase(*(First->GetNode()->CPPmulticonstnode170), *(Last->GetNode()->CPPmulticonstnode170));
		break;
	case 171:
		*(multiNode->GetNode()->CPPmultinode171) = multimapUnion->CPPmultimap171->erase(*(First->GetNode()->CPPmulticonstnode171), *(Last->GetNode()->CPPmulticonstnode171));
		break;
	case 172:
		*(multiNode->GetNode()->CPPmultinode172) = multimapUnion->CPPmultimap172->erase(*(First->GetNode()->CPPmulticonstnode172), *(Last->GetNode()->CPPmulticonstnode172));
		break;
	case 173:
		*(multiNode->GetNode()->CPPmultinode173) = multimapUnion->CPPmultimap173->erase(*(First->GetNode()->CPPmulticonstnode173), *(Last->GetNode()->CPPmulticonstnode173));
		break;
	case 174:
		*(multiNode->GetNode()->CPPmultinode174) = multimapUnion->CPPmultimap174->erase(*(First->GetNode()->CPPmulticonstnode174), *(Last->GetNode()->CPPmulticonstnode174));
		break;
	case 175:
		*(multiNode->GetNode()->CPPmultinode175) = multimapUnion->CPPmultimap175->erase(*(First->GetNode()->CPPmulticonstnode175), *(Last->GetNode()->CPPmulticonstnode175));
		break;
	case 176:
		*(multiNode->GetNode()->CPPmultinode176) = multimapUnion->CPPmultimap176->erase(*(First->GetNode()->CPPmulticonstnode176), *(Last->GetNode()->CPPmulticonstnode176));
		break;
	case 177:
		*(multiNode->GetNode()->CPPmultinode177) = multimapUnion->CPPmultimap177->erase(*(First->GetNode()->CPPmulticonstnode177), *(Last->GetNode()->CPPmulticonstnode177));
		break;
	case 178:
		*(multiNode->GetNode()->CPPmultinode178) = multimapUnion->CPPmultimap178->erase(*(First->GetNode()->CPPmulticonstnode178), *(Last->GetNode()->CPPmulticonstnode178));
		break;
	case 179:
		*(multiNode->GetNode()->CPPmultinode179) = multimapUnion->CPPmultimap179->erase(*(First->GetNode()->CPPmulticonstnode179), *(Last->GetNode()->CPPmulticonstnode179));
		break;
	case 180:
		*(multiNode->GetNode()->CPPmultinode180) = multimapUnion->CPPmultimap180->erase(*(First->GetNode()->CPPmulticonstnode180), *(Last->GetNode()->CPPmulticonstnode180));
		break;
	case 181:
		*(multiNode->GetNode()->CPPmultinode181) = multimapUnion->CPPmultimap181->erase(*(First->GetNode()->CPPmulticonstnode181), *(Last->GetNode()->CPPmulticonstnode181));
		break;
	case 182:
		if (gValueClassDictionary)
		{
			UnOrderedMultiConstNode<std::wstring, __int64> iter;
			for (iter = *(First->GetNode()->CPPmulticonstnode182); iter != *(Last->GetNode()->CPPmulticonstnode182); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode182) = multimapUnion->CPPmultimap182->erase(*(First->GetNode()->CPPmulticonstnode182), *(Last->GetNode()->CPPmulticonstnode182));
		break;
	case 183:
		*(multiNode->GetNode()->CPPmultinode183) = multimapUnion->CPPmultimap183->erase(*(First->GetNode()->CPPmulticonstnode183), *(Last->GetNode()->CPPmulticonstnode183));
		break;
	case 184:
		*(multiNode->GetNode()->CPPmultinode184) = multimapUnion->CPPmultimap184->erase(*(First->GetNode()->CPPmulticonstnode184), *(Last->GetNode()->CPPmulticonstnode184));
		break;
	case 185:
		*(multiNode->GetNode()->CPPmultinode185) = multimapUnion->CPPmultimap185->erase(*(First->GetNode()->CPPmulticonstnode185), *(Last->GetNode()->CPPmulticonstnode185));
		break;
	case 186:
		*(multiNode->GetNode()->CPPmultinode186) = multimapUnion->CPPmultimap186->erase(*(First->GetNode()->CPPmulticonstnode186), *(Last->GetNode()->CPPmulticonstnode186));
		break;
	case 187:
		*(multiNode->GetNode()->CPPmultinode187) = multimapUnion->CPPmultimap187->erase(*(First->GetNode()->CPPmulticonstnode187), *(Last->GetNode()->CPPmulticonstnode187));
		break;
	case 188:
		*(multiNode->GetNode()->CPPmultinode188) = multimapUnion->CPPmultimap188->erase(*(First->GetNode()->CPPmulticonstnode188), *(Last->GetNode()->CPPmulticonstnode188));
		break;
	case 189:
		*(multiNode->GetNode()->CPPmultinode189) = multimapUnion->CPPmultimap189->erase(*(First->GetNode()->CPPmulticonstnode189), *(Last->GetNode()->CPPmulticonstnode189));
		break;
	case 190:
		*(multiNode->GetNode()->CPPmultinode190) = multimapUnion->CPPmultimap190->erase(*(First->GetNode()->CPPmulticonstnode190), *(Last->GetNode()->CPPmulticonstnode190));
		break;
	case 191:
		*(multiNode->GetNode()->CPPmultinode191) = multimapUnion->CPPmultimap191->erase(*(First->GetNode()->CPPmulticonstnode191), *(Last->GetNode()->CPPmulticonstnode191));
		break;
	case 192:
		*(multiNode->GetNode()->CPPmultinode192) = multimapUnion->CPPmultimap192->erase(*(First->GetNode()->CPPmulticonstnode192), *(Last->GetNode()->CPPmulticonstnode192));
		break;
	case 193:
		*(multiNode->GetNode()->CPPmultinode193) = multimapUnion->CPPmultimap193->erase(*(First->GetNode()->CPPmulticonstnode193), *(Last->GetNode()->CPPmulticonstnode193));
		break;
	case 194:
		*(multiNode->GetNode()->CPPmultinode194) = multimapUnion->CPPmultimap194->erase(*(First->GetNode()->CPPmulticonstnode194), *(Last->GetNode()->CPPmulticonstnode194));
		break;
	case 195:
		*(multiNode->GetNode()->CPPmultinode195) = multimapUnion->CPPmultimap195->erase(*(First->GetNode()->CPPmulticonstnode195), *(Last->GetNode()->CPPmulticonstnode195));
		break;
	case 196:
		if (gValueClassDictionary)
		{
			UnOrderedMultiConstNode<__int64, __int64> iter;
			for (iter = *(First->GetNode()->CPPmulticonstnode196); iter != *(Last->GetNode()->CPPmulticonstnode196); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode196) = multimapUnion->CPPmultimap196->erase(*(First->GetNode()->CPPmulticonstnode196), *(Last->GetNode()->CPPmulticonstnode196));
		break;
	}
	return multiNode->DeepCopy();
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::equal_range(const Key key)
{
	if (Object::ReferenceEquals(key, nullptr)) return nullptr;
	Type^ keyType = Key::typeid;

	unsigned char KeyUchar = 0;
	char KeyChar = 0;
	short KeyShort = 0;
	unsigned short KeyUshort = 0;
	int KeyInt = 0;
	unsigned int KeyUint = 0;
	long long KeyLonglong = 0;
	unsigned long long KeyUlonglong = 0;
	float KeyFloat = 0.0f;
	double KeyDouble = 0;
	wchar_t KeyWchar = 0;
	bool KeyBool = false;
	std::wstring KeyWstring = L"";
	__int64 Key__Int = 0;

	if (keyType->Equals(System::Byte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUchar = static_cast<unsigned char>(safe_cast<System::Byte>(managedObject));
	}
	else if (keyType->Equals(System::SByte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyChar = static_cast<char>(safe_cast<System::SByte>(managedObject));
	}
	else if (keyType->Equals(System::Int16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyShort = static_cast<short>(safe_cast<System::Int16>(managedObject));
	}
	else if (keyType->Equals(System::UInt16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUshort = static_cast<unsigned short>(safe_cast<System::UInt16>(managedObject));
	}
	else if (keyType->Equals(System::Int32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyInt = static_cast<int>(safe_cast<System::Int32>(managedObject));
	}
	else if (keyType->Equals(System::UInt32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUint = static_cast<unsigned int>(safe_cast<System::UInt32>(managedObject));
	}
	else if (keyType->Equals(System::Int64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyLonglong = static_cast<long long>(safe_cast<System::Int64>(managedObject));
	}
	else if (keyType->Equals(System::UInt64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUlonglong = static_cast<unsigned long long>(safe_cast<System::UInt64>(managedObject));
	}
	else if (keyType->Equals(System::Single::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyFloat = static_cast<float>(safe_cast<System::Single>(managedObject));
	}
	else if (keyType->Equals(System::Double::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyDouble = static_cast<double>(safe_cast<System::Double>(managedObject));
	}
	else if (keyType->Equals(System::Char::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyWchar = static_cast<wchar_t>(safe_cast<System::Char>(managedObject));
	}
	else if (keyType->Equals(System::Boolean::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyBool = static_cast<bool>(safe_cast<System::Boolean>(managedObject));
	}
	else if (keyType->Equals(System::String::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		MarshalString(safe_cast<System::String^>(managedObject), KeyWstring);
	}
	else if (keyType->IsClass)
	{
		if (gKeyClassDictionary->TryGetValue(const_cast<Key>(key), Key__Int));
		else
		{
			return nullptr;
		}
	}
	else if (keyType->IsValueType && !keyType->IsPrimitive && !keyType->IsEnum)
	{
		if (gKeyClassDictionary->TryGetValue(const_cast<Key>(key), Key__Int));
		else
		{
			return nullptr;
		}
	}
	else if (keyType->IsInterface)
	{
		if (gKeyClassDictionary->TryGetValue(const_cast<Key>(key), Key__Int));
		else
		{
			return nullptr;
		}
	}
	else
	{
		return nullptr;
	}

	switch (nKeyValueType)
	{
	case 0: default:
		return nullptr;
	case 1:
		*(multiNode->GetNode()->CPPmultinode1) = multimapUnion->CPPmultimap1->equal_range(KeyUchar);
		*(KeyEndNode->GetNode()->CPPmultinode1) = multimapUnion->CPPmultimap1->KeyEnd();
		break;
	case 2:
		*(multiNode->GetNode()->CPPmultinode2) = multimapUnion->CPPmultimap2->equal_range(KeyUchar);
		*(KeyEndNode->GetNode()->CPPmultinode2) = multimapUnion->CPPmultimap2->KeyEnd();
		break;
	case 3:
		*(multiNode->GetNode()->CPPmultinode3) = multimapUnion->CPPmultimap3->equal_range(KeyUchar);
		*(KeyEndNode->GetNode()->CPPmultinode3) = multimapUnion->CPPmultimap3->KeyEnd();
		break;
	case 4:
		*(multiNode->GetNode()->CPPmultinode4) = multimapUnion->CPPmultimap4->equal_range(KeyUchar);
		*(KeyEndNode->GetNode()->CPPmultinode4) = multimapUnion->CPPmultimap4->KeyEnd();
		break;
	case 5:
		*(multiNode->GetNode()->CPPmultinode5) = multimapUnion->CPPmultimap5->equal_range(KeyUchar);
		*(KeyEndNode->GetNode()->CPPmultinode5) = multimapUnion->CPPmultimap5->KeyEnd();
		break;
	case 6:
		*(multiNode->GetNode()->CPPmultinode6) = multimapUnion->CPPmultimap6->equal_range(KeyUchar);
		*(KeyEndNode->GetNode()->CPPmultinode6) = multimapUnion->CPPmultimap6->KeyEnd();
		break;
	case 7:
		*(multiNode->GetNode()->CPPmultinode7) = multimapUnion->CPPmultimap7->equal_range(KeyUchar);
		*(KeyEndNode->GetNode()->CPPmultinode7) = multimapUnion->CPPmultimap7->KeyEnd();
		break;
	case 8:
		*(multiNode->GetNode()->CPPmultinode8) = multimapUnion->CPPmultimap8->equal_range(KeyUchar);
		*(KeyEndNode->GetNode()->CPPmultinode8) = multimapUnion->CPPmultimap8->KeyEnd();
		break;
	case 9:
		*(multiNode->GetNode()->CPPmultinode9) = multimapUnion->CPPmultimap9->equal_range(KeyUchar);
		*(KeyEndNode->GetNode()->CPPmultinode9) = multimapUnion->CPPmultimap9->KeyEnd();
		break;
	case 10:
		*(multiNode->GetNode()->CPPmultinode10) = multimapUnion->CPPmultimap10->equal_range(KeyUchar);
		*(KeyEndNode->GetNode()->CPPmultinode10) = multimapUnion->CPPmultimap10->KeyEnd();
		break;
	case 11:
		*(multiNode->GetNode()->CPPmultinode11) = multimapUnion->CPPmultimap11->equal_range(KeyUchar);
		*(KeyEndNode->GetNode()->CPPmultinode11) = multimapUnion->CPPmultimap11->KeyEnd();
		break;
	case 12:
		*(multiNode->GetNode()->CPPmultinode12) = multimapUnion->CPPmultimap12->equal_range(KeyUchar);
		*(KeyEndNode->GetNode()->CPPmultinode12) = multimapUnion->CPPmultimap12->KeyEnd();
		break;
	case 13:
		*(multiNode->GetNode()->CPPmultinode13) = multimapUnion->CPPmultimap13->equal_range(KeyUchar);
		*(KeyEndNode->GetNode()->CPPmultinode13) = multimapUnion->CPPmultimap13->KeyEnd();
		break;
	case 14:
		*(multiNode->GetNode()->CPPmultinode14) = multimapUnion->CPPmultimap14->equal_range(KeyUchar);
		*(KeyEndNode->GetNode()->CPPmultinode14) = multimapUnion->CPPmultimap14->KeyEnd();
		break;
	case 15:
		*(multiNode->GetNode()->CPPmultinode15) = multimapUnion->CPPmultimap15->equal_range(KeyChar);
		*(KeyEndNode->GetNode()->CPPmultinode15) = multimapUnion->CPPmultimap15->KeyEnd();
		break;
	case 16:
		*(multiNode->GetNode()->CPPmultinode16) = multimapUnion->CPPmultimap16->equal_range(KeyChar);
		*(KeyEndNode->GetNode()->CPPmultinode16) = multimapUnion->CPPmultimap16->KeyEnd();
		break;
	case 17:
		*(multiNode->GetNode()->CPPmultinode17) = multimapUnion->CPPmultimap17->equal_range(KeyChar);
		*(KeyEndNode->GetNode()->CPPmultinode17) = multimapUnion->CPPmultimap17->KeyEnd();
		break;
	case 18:
		*(multiNode->GetNode()->CPPmultinode18) = multimapUnion->CPPmultimap18->equal_range(KeyChar);
		*(KeyEndNode->GetNode()->CPPmultinode18) = multimapUnion->CPPmultimap18->KeyEnd();
		break;
	case 19:
		*(multiNode->GetNode()->CPPmultinode19) = multimapUnion->CPPmultimap19->equal_range(KeyChar);
		*(KeyEndNode->GetNode()->CPPmultinode19) = multimapUnion->CPPmultimap19->KeyEnd();
		break;
	case 20:
		*(multiNode->GetNode()->CPPmultinode20) = multimapUnion->CPPmultimap20->equal_range(KeyChar);
		*(KeyEndNode->GetNode()->CPPmultinode20) = multimapUnion->CPPmultimap20->KeyEnd();
		break;
	case 21:
		*(multiNode->GetNode()->CPPmultinode21) = multimapUnion->CPPmultimap21->equal_range(KeyChar);
		*(KeyEndNode->GetNode()->CPPmultinode21) = multimapUnion->CPPmultimap21->KeyEnd();
		break;
	case 22:
		*(multiNode->GetNode()->CPPmultinode22) = multimapUnion->CPPmultimap22->equal_range(KeyChar);
		*(KeyEndNode->GetNode()->CPPmultinode22) = multimapUnion->CPPmultimap22->KeyEnd();
		break;
	case 23:
		*(multiNode->GetNode()->CPPmultinode23) = multimapUnion->CPPmultimap23->equal_range(KeyChar);
		*(KeyEndNode->GetNode()->CPPmultinode23) = multimapUnion->CPPmultimap23->KeyEnd();
		break;
	case 24:
		*(multiNode->GetNode()->CPPmultinode24) = multimapUnion->CPPmultimap24->equal_range(KeyChar);
		*(KeyEndNode->GetNode()->CPPmultinode24) = multimapUnion->CPPmultimap24->KeyEnd();
		break;
	case 25:
		*(multiNode->GetNode()->CPPmultinode25) = multimapUnion->CPPmultimap25->equal_range(KeyChar);
		*(KeyEndNode->GetNode()->CPPmultinode25) = multimapUnion->CPPmultimap25->KeyEnd();
		break;
	case 26:
		*(multiNode->GetNode()->CPPmultinode26) = multimapUnion->CPPmultimap26->equal_range(KeyChar);
		*(KeyEndNode->GetNode()->CPPmultinode26) = multimapUnion->CPPmultimap26->KeyEnd();
		break;
	case 27:
		*(multiNode->GetNode()->CPPmultinode27) = multimapUnion->CPPmultimap27->equal_range(KeyChar);
		*(KeyEndNode->GetNode()->CPPmultinode27) = multimapUnion->CPPmultimap27->KeyEnd();
		break;
	case 28:
		*(multiNode->GetNode()->CPPmultinode28) = multimapUnion->CPPmultimap28->equal_range(KeyChar);
		*(KeyEndNode->GetNode()->CPPmultinode28) = multimapUnion->CPPmultimap28->KeyEnd();
		break;
	case 29:
		*(multiNode->GetNode()->CPPmultinode29) = multimapUnion->CPPmultimap29->equal_range(KeyShort);
		*(KeyEndNode->GetNode()->CPPmultinode29) = multimapUnion->CPPmultimap29->KeyEnd();
		break;
	case 30:
		*(multiNode->GetNode()->CPPmultinode30) = multimapUnion->CPPmultimap30->equal_range(KeyShort);
		*(KeyEndNode->GetNode()->CPPmultinode30) = multimapUnion->CPPmultimap30->KeyEnd();
		break;
	case 31:
		*(multiNode->GetNode()->CPPmultinode31) = multimapUnion->CPPmultimap31->equal_range(KeyShort);
		*(KeyEndNode->GetNode()->CPPmultinode31) = multimapUnion->CPPmultimap31->KeyEnd();
		break;
	case 32:
		*(multiNode->GetNode()->CPPmultinode32) = multimapUnion->CPPmultimap32->equal_range(KeyShort);
		*(KeyEndNode->GetNode()->CPPmultinode32) = multimapUnion->CPPmultimap32->KeyEnd();
		break;
	case 33:
		*(multiNode->GetNode()->CPPmultinode33) = multimapUnion->CPPmultimap33->equal_range(KeyShort);
		*(KeyEndNode->GetNode()->CPPmultinode33) = multimapUnion->CPPmultimap33->KeyEnd();
		break;
	case 34:
		*(multiNode->GetNode()->CPPmultinode34) = multimapUnion->CPPmultimap34->equal_range(KeyShort);
		*(KeyEndNode->GetNode()->CPPmultinode34) = multimapUnion->CPPmultimap34->KeyEnd();
		break;
	case 35:
		*(multiNode->GetNode()->CPPmultinode35) = multimapUnion->CPPmultimap35->equal_range(KeyShort);
		*(KeyEndNode->GetNode()->CPPmultinode35) = multimapUnion->CPPmultimap35->KeyEnd();
		break;
	case 36:
		*(multiNode->GetNode()->CPPmultinode36) = multimapUnion->CPPmultimap36->equal_range(KeyShort);
		*(KeyEndNode->GetNode()->CPPmultinode36) = multimapUnion->CPPmultimap36->KeyEnd();
		break;
	case 37:
		*(multiNode->GetNode()->CPPmultinode37) = multimapUnion->CPPmultimap37->equal_range(KeyShort);
		*(KeyEndNode->GetNode()->CPPmultinode37) = multimapUnion->CPPmultimap37->KeyEnd();
		break;
	case 38:
		*(multiNode->GetNode()->CPPmultinode38) = multimapUnion->CPPmultimap38->equal_range(KeyShort);
		*(KeyEndNode->GetNode()->CPPmultinode38) = multimapUnion->CPPmultimap38->KeyEnd();
		break;
	case 39:
		*(multiNode->GetNode()->CPPmultinode39) = multimapUnion->CPPmultimap39->equal_range(KeyShort);
		*(KeyEndNode->GetNode()->CPPmultinode39) = multimapUnion->CPPmultimap39->KeyEnd();
		break;
	case 40:
		*(multiNode->GetNode()->CPPmultinode40) = multimapUnion->CPPmultimap40->equal_range(KeyShort);
		*(KeyEndNode->GetNode()->CPPmultinode40) = multimapUnion->CPPmultimap40->KeyEnd();
		break;
	case 41:
		*(multiNode->GetNode()->CPPmultinode41) = multimapUnion->CPPmultimap41->equal_range(KeyShort);
		*(KeyEndNode->GetNode()->CPPmultinode41) = multimapUnion->CPPmultimap41->KeyEnd();
		break;
	case 42:
		*(multiNode->GetNode()->CPPmultinode42) = multimapUnion->CPPmultimap42->equal_range(KeyShort);
		*(KeyEndNode->GetNode()->CPPmultinode42) = multimapUnion->CPPmultimap42->KeyEnd();
		break;
	case 43:
		*(multiNode->GetNode()->CPPmultinode43) = multimapUnion->CPPmultimap43->equal_range(KeyUshort);
		*(KeyEndNode->GetNode()->CPPmultinode43) = multimapUnion->CPPmultimap43->KeyEnd();
		break;
	case 44:
		*(multiNode->GetNode()->CPPmultinode44) = multimapUnion->CPPmultimap44->equal_range(KeyUshort);
		*(KeyEndNode->GetNode()->CPPmultinode44) = multimapUnion->CPPmultimap44->KeyEnd();
		break;
	case 45:
		*(multiNode->GetNode()->CPPmultinode45) = multimapUnion->CPPmultimap45->equal_range(KeyUshort);
		*(KeyEndNode->GetNode()->CPPmultinode45) = multimapUnion->CPPmultimap45->KeyEnd();
		break;
	case 46:
		*(multiNode->GetNode()->CPPmultinode46) = multimapUnion->CPPmultimap46->equal_range(KeyUshort);
		*(KeyEndNode->GetNode()->CPPmultinode46) = multimapUnion->CPPmultimap46->KeyEnd();
		break;
	case 47:
		*(multiNode->GetNode()->CPPmultinode47) = multimapUnion->CPPmultimap47->equal_range(KeyUshort);
		*(KeyEndNode->GetNode()->CPPmultinode47) = multimapUnion->CPPmultimap47->KeyEnd();
		break;
	case 48:
		*(multiNode->GetNode()->CPPmultinode48) = multimapUnion->CPPmultimap48->equal_range(KeyUshort);
		*(KeyEndNode->GetNode()->CPPmultinode48) = multimapUnion->CPPmultimap48->KeyEnd();
		break;
	case 49:
		*(multiNode->GetNode()->CPPmultinode49) = multimapUnion->CPPmultimap49->equal_range(KeyUshort);
		*(KeyEndNode->GetNode()->CPPmultinode49) = multimapUnion->CPPmultimap49->KeyEnd();
		break;
	case 50:
		*(multiNode->GetNode()->CPPmultinode50) = multimapUnion->CPPmultimap50->equal_range(KeyUshort);
		*(KeyEndNode->GetNode()->CPPmultinode50) = multimapUnion->CPPmultimap50->KeyEnd();
		break;
	case 51:
		*(multiNode->GetNode()->CPPmultinode51) = multimapUnion->CPPmultimap51->equal_range(KeyUshort);
		*(KeyEndNode->GetNode()->CPPmultinode51) = multimapUnion->CPPmultimap51->KeyEnd();
		break;
	case 52:
		*(multiNode->GetNode()->CPPmultinode52) = multimapUnion->CPPmultimap52->equal_range(KeyUshort);
		*(KeyEndNode->GetNode()->CPPmultinode52) = multimapUnion->CPPmultimap52->KeyEnd();
		break;
	case 53:
		*(multiNode->GetNode()->CPPmultinode53) = multimapUnion->CPPmultimap53->equal_range(KeyUshort);
		*(KeyEndNode->GetNode()->CPPmultinode53) = multimapUnion->CPPmultimap53->KeyEnd();
		break;
	case 54:
		*(multiNode->GetNode()->CPPmultinode54) = multimapUnion->CPPmultimap54->equal_range(KeyUshort);
		*(KeyEndNode->GetNode()->CPPmultinode54) = multimapUnion->CPPmultimap54->KeyEnd();
		break;
	case 55:
		*(multiNode->GetNode()->CPPmultinode55) = multimapUnion->CPPmultimap55->equal_range(KeyUshort);
		*(KeyEndNode->GetNode()->CPPmultinode55) = multimapUnion->CPPmultimap55->KeyEnd();
		break;
	case 56:
		*(multiNode->GetNode()->CPPmultinode56) = multimapUnion->CPPmultimap56->equal_range(KeyUshort);
		*(KeyEndNode->GetNode()->CPPmultinode56) = multimapUnion->CPPmultimap56->KeyEnd();
		break;
	case 57:
		*(multiNode->GetNode()->CPPmultinode57) = multimapUnion->CPPmultimap57->equal_range(KeyInt);
		*(KeyEndNode->GetNode()->CPPmultinode57) = multimapUnion->CPPmultimap57->KeyEnd();
		break;
	case 58:
		*(multiNode->GetNode()->CPPmultinode58) = multimapUnion->CPPmultimap58->equal_range(KeyInt);
		*(KeyEndNode->GetNode()->CPPmultinode58) = multimapUnion->CPPmultimap58->KeyEnd();
		break;
	case 59:
		*(multiNode->GetNode()->CPPmultinode59) = multimapUnion->CPPmultimap59->equal_range(KeyInt);
		*(KeyEndNode->GetNode()->CPPmultinode59) = multimapUnion->CPPmultimap59->KeyEnd();
		break;
	case 60:
		*(multiNode->GetNode()->CPPmultinode60) = multimapUnion->CPPmultimap60->equal_range(KeyInt);
		*(KeyEndNode->GetNode()->CPPmultinode60) = multimapUnion->CPPmultimap60->KeyEnd();
		break;
	case 61:
		*(multiNode->GetNode()->CPPmultinode61) = multimapUnion->CPPmultimap61->equal_range(KeyInt);
		*(KeyEndNode->GetNode()->CPPmultinode61) = multimapUnion->CPPmultimap61->KeyEnd();
		break;
	case 62:
		*(multiNode->GetNode()->CPPmultinode62) = multimapUnion->CPPmultimap62->equal_range(KeyInt);
		*(KeyEndNode->GetNode()->CPPmultinode62) = multimapUnion->CPPmultimap62->KeyEnd();
		break;
	case 63:
		*(multiNode->GetNode()->CPPmultinode63) = multimapUnion->CPPmultimap63->equal_range(KeyInt);
		*(KeyEndNode->GetNode()->CPPmultinode63) = multimapUnion->CPPmultimap63->KeyEnd();
		break;
	case 64:
		*(multiNode->GetNode()->CPPmultinode64) = multimapUnion->CPPmultimap64->equal_range(KeyInt);
		*(KeyEndNode->GetNode()->CPPmultinode64) = multimapUnion->CPPmultimap64->KeyEnd();
		break;
	case 65:
		*(multiNode->GetNode()->CPPmultinode65) = multimapUnion->CPPmultimap65->equal_range(KeyInt);
		*(KeyEndNode->GetNode()->CPPmultinode65) = multimapUnion->CPPmultimap65->KeyEnd();
		break;
	case 66:
		*(multiNode->GetNode()->CPPmultinode66) = multimapUnion->CPPmultimap66->equal_range(KeyInt);
		*(KeyEndNode->GetNode()->CPPmultinode66) = multimapUnion->CPPmultimap66->KeyEnd();
		break;
	case 67:
		*(multiNode->GetNode()->CPPmultinode67) = multimapUnion->CPPmultimap67->equal_range(KeyInt);
		*(KeyEndNode->GetNode()->CPPmultinode67) = multimapUnion->CPPmultimap67->KeyEnd();
		break;
	case 68:
		*(multiNode->GetNode()->CPPmultinode68) = multimapUnion->CPPmultimap68->equal_range(KeyInt);
		*(KeyEndNode->GetNode()->CPPmultinode68) = multimapUnion->CPPmultimap68->KeyEnd();
		break;
	case 69:
		*(multiNode->GetNode()->CPPmultinode69) = multimapUnion->CPPmultimap69->equal_range(KeyInt);
		*(KeyEndNode->GetNode()->CPPmultinode69) = multimapUnion->CPPmultimap69->KeyEnd();
		break;
	case 70:
		*(multiNode->GetNode()->CPPmultinode70) = multimapUnion->CPPmultimap70->equal_range(KeyInt);
		*(KeyEndNode->GetNode()->CPPmultinode70) = multimapUnion->CPPmultimap70->KeyEnd();
		break;
	case 71:
		*(multiNode->GetNode()->CPPmultinode71) = multimapUnion->CPPmultimap71->equal_range(KeyUint);
		*(KeyEndNode->GetNode()->CPPmultinode71) = multimapUnion->CPPmultimap71->KeyEnd();
		break;
	case 72:
		*(multiNode->GetNode()->CPPmultinode72) = multimapUnion->CPPmultimap72->equal_range(KeyUint);
		*(KeyEndNode->GetNode()->CPPmultinode72) = multimapUnion->CPPmultimap72->KeyEnd();
		break;
	case 73:
		*(multiNode->GetNode()->CPPmultinode73) = multimapUnion->CPPmultimap73->equal_range(KeyUint);
		*(KeyEndNode->GetNode()->CPPmultinode73) = multimapUnion->CPPmultimap73->KeyEnd();
		break;
	case 74:
		*(multiNode->GetNode()->CPPmultinode74) = multimapUnion->CPPmultimap74->equal_range(KeyUint);
		*(KeyEndNode->GetNode()->CPPmultinode74) = multimapUnion->CPPmultimap74->KeyEnd();
		break;
	case 75:
		*(multiNode->GetNode()->CPPmultinode75) = multimapUnion->CPPmultimap75->equal_range(KeyUint);
		*(KeyEndNode->GetNode()->CPPmultinode75) = multimapUnion->CPPmultimap75->KeyEnd();
		break;
	case 76:
		*(multiNode->GetNode()->CPPmultinode76) = multimapUnion->CPPmultimap76->equal_range(KeyUint);
		*(KeyEndNode->GetNode()->CPPmultinode76) = multimapUnion->CPPmultimap76->KeyEnd();
		break;
	case 77:
		*(multiNode->GetNode()->CPPmultinode77) = multimapUnion->CPPmultimap77->equal_range(KeyUint);
		*(KeyEndNode->GetNode()->CPPmultinode77) = multimapUnion->CPPmultimap77->KeyEnd();
		break;
	case 78:
		*(multiNode->GetNode()->CPPmultinode78) = multimapUnion->CPPmultimap78->equal_range(KeyUint);
		*(KeyEndNode->GetNode()->CPPmultinode78) = multimapUnion->CPPmultimap78->KeyEnd();
		break;
	case 79:
		*(multiNode->GetNode()->CPPmultinode79) = multimapUnion->CPPmultimap79->equal_range(KeyUint);
		*(KeyEndNode->GetNode()->CPPmultinode79) = multimapUnion->CPPmultimap79->KeyEnd();
		break;
	case 80:
		*(multiNode->GetNode()->CPPmultinode80) = multimapUnion->CPPmultimap80->equal_range(KeyUint);
		*(KeyEndNode->GetNode()->CPPmultinode80) = multimapUnion->CPPmultimap80->KeyEnd();
		break;
	case 81:
		*(multiNode->GetNode()->CPPmultinode81) = multimapUnion->CPPmultimap81->equal_range(KeyUint);
		*(KeyEndNode->GetNode()->CPPmultinode81) = multimapUnion->CPPmultimap81->KeyEnd();
		break;
	case 82:
		*(multiNode->GetNode()->CPPmultinode82) = multimapUnion->CPPmultimap82->equal_range(KeyUint);
		*(KeyEndNode->GetNode()->CPPmultinode82) = multimapUnion->CPPmultimap82->KeyEnd();
		break;
	case 83:
		*(multiNode->GetNode()->CPPmultinode83) = multimapUnion->CPPmultimap83->equal_range(KeyUint);
		*(KeyEndNode->GetNode()->CPPmultinode83) = multimapUnion->CPPmultimap83->KeyEnd();
		break;
	case 84:
		*(multiNode->GetNode()->CPPmultinode84) = multimapUnion->CPPmultimap84->equal_range(KeyUint);
		*(KeyEndNode->GetNode()->CPPmultinode84) = multimapUnion->CPPmultimap84->KeyEnd();
		break;
	case 85:
		*(multiNode->GetNode()->CPPmultinode85) = multimapUnion->CPPmultimap85->equal_range(KeyLonglong);
		*(KeyEndNode->GetNode()->CPPmultinode85) = multimapUnion->CPPmultimap85->KeyEnd();
		break;
	case 86:
		*(multiNode->GetNode()->CPPmultinode86) = multimapUnion->CPPmultimap86->equal_range(KeyLonglong);
		*(KeyEndNode->GetNode()->CPPmultinode86) = multimapUnion->CPPmultimap86->KeyEnd();
		break;
	case 87:
		*(multiNode->GetNode()->CPPmultinode87) = multimapUnion->CPPmultimap87->equal_range(KeyLonglong);
		*(KeyEndNode->GetNode()->CPPmultinode87) = multimapUnion->CPPmultimap87->KeyEnd();
		break;
	case 88:
		*(multiNode->GetNode()->CPPmultinode88) = multimapUnion->CPPmultimap88->equal_range(KeyLonglong);
		*(KeyEndNode->GetNode()->CPPmultinode88) = multimapUnion->CPPmultimap88->KeyEnd();
		break;
	case 89:
		*(multiNode->GetNode()->CPPmultinode89) = multimapUnion->CPPmultimap89->equal_range(KeyLonglong);
		*(KeyEndNode->GetNode()->CPPmultinode89) = multimapUnion->CPPmultimap89->KeyEnd();
		break;
	case 90:
		*(multiNode->GetNode()->CPPmultinode90) = multimapUnion->CPPmultimap90->equal_range(KeyLonglong);
		*(KeyEndNode->GetNode()->CPPmultinode90) = multimapUnion->CPPmultimap90->KeyEnd();
		break;
	case 91:
		*(multiNode->GetNode()->CPPmultinode91) = multimapUnion->CPPmultimap91->equal_range(KeyLonglong);
		*(KeyEndNode->GetNode()->CPPmultinode91) = multimapUnion->CPPmultimap91->KeyEnd();
		break;
	case 92:
		*(multiNode->GetNode()->CPPmultinode92) = multimapUnion->CPPmultimap92->equal_range(KeyLonglong);
		*(KeyEndNode->GetNode()->CPPmultinode92) = multimapUnion->CPPmultimap92->KeyEnd();
		break;
	case 93:
		*(multiNode->GetNode()->CPPmultinode93) = multimapUnion->CPPmultimap93->equal_range(KeyLonglong);
		*(KeyEndNode->GetNode()->CPPmultinode93) = multimapUnion->CPPmultimap93->KeyEnd();
		break;
	case 94:
		*(multiNode->GetNode()->CPPmultinode94) = multimapUnion->CPPmultimap94->equal_range(KeyLonglong);
		*(KeyEndNode->GetNode()->CPPmultinode94) = multimapUnion->CPPmultimap94->KeyEnd();
		break;
	case 95:
		*(multiNode->GetNode()->CPPmultinode95) = multimapUnion->CPPmultimap95->equal_range(KeyLonglong);
		*(KeyEndNode->GetNode()->CPPmultinode95) = multimapUnion->CPPmultimap95->KeyEnd();
		break;
	case 96:
		*(multiNode->GetNode()->CPPmultinode96) = multimapUnion->CPPmultimap96->equal_range(KeyLonglong);
		*(KeyEndNode->GetNode()->CPPmultinode96) = multimapUnion->CPPmultimap96->KeyEnd();
		break;
	case 97:
		*(multiNode->GetNode()->CPPmultinode97) = multimapUnion->CPPmultimap97->equal_range(KeyLonglong);
		*(KeyEndNode->GetNode()->CPPmultinode97) = multimapUnion->CPPmultimap97->KeyEnd();
		break;
	case 98:
		*(multiNode->GetNode()->CPPmultinode98) = multimapUnion->CPPmultimap98->equal_range(KeyLonglong);
		*(KeyEndNode->GetNode()->CPPmultinode98) = multimapUnion->CPPmultimap98->KeyEnd();
		break;
	case 99:
		*(multiNode->GetNode()->CPPmultinode99) = multimapUnion->CPPmultimap99->equal_range(KeyUlonglong);
		*(KeyEndNode->GetNode()->CPPmultinode99) = multimapUnion->CPPmultimap99->KeyEnd();
		break;
	case 100:
		*(multiNode->GetNode()->CPPmultinode100) = multimapUnion->CPPmultimap100->equal_range(KeyUlonglong);
		*(KeyEndNode->GetNode()->CPPmultinode100) = multimapUnion->CPPmultimap100->KeyEnd();
		break;
	case 101:
		*(multiNode->GetNode()->CPPmultinode101) = multimapUnion->CPPmultimap101->equal_range(KeyUlonglong);
		*(KeyEndNode->GetNode()->CPPmultinode101) = multimapUnion->CPPmultimap101->KeyEnd();
		break;
	case 102:
		*(multiNode->GetNode()->CPPmultinode102) = multimapUnion->CPPmultimap102->equal_range(KeyUlonglong);
		*(KeyEndNode->GetNode()->CPPmultinode102) = multimapUnion->CPPmultimap102->KeyEnd();
		break;
	case 103:
		*(multiNode->GetNode()->CPPmultinode103) = multimapUnion->CPPmultimap103->equal_range(KeyUlonglong);
		*(KeyEndNode->GetNode()->CPPmultinode103) = multimapUnion->CPPmultimap103->KeyEnd();
		break;
	case 104:
		*(multiNode->GetNode()->CPPmultinode104) = multimapUnion->CPPmultimap104->equal_range(KeyUlonglong);
		*(KeyEndNode->GetNode()->CPPmultinode104) = multimapUnion->CPPmultimap104->KeyEnd();
		break;
	case 105:
		*(multiNode->GetNode()->CPPmultinode105) = multimapUnion->CPPmultimap105->equal_range(KeyUlonglong);
		*(KeyEndNode->GetNode()->CPPmultinode105) = multimapUnion->CPPmultimap105->KeyEnd();
		break;
	case 106:
		*(multiNode->GetNode()->CPPmultinode106) = multimapUnion->CPPmultimap106->equal_range(KeyUlonglong);
		*(KeyEndNode->GetNode()->CPPmultinode106) = multimapUnion->CPPmultimap106->KeyEnd();
		break;
	case 107:
		*(multiNode->GetNode()->CPPmultinode107) = multimapUnion->CPPmultimap107->equal_range(KeyUlonglong);
		*(KeyEndNode->GetNode()->CPPmultinode107) = multimapUnion->CPPmultimap107->KeyEnd();
		break;
	case 108:
		*(multiNode->GetNode()->CPPmultinode108) = multimapUnion->CPPmultimap108->equal_range(KeyUlonglong);
		*(KeyEndNode->GetNode()->CPPmultinode108) = multimapUnion->CPPmultimap108->KeyEnd();
		break;
	case 109:
		*(multiNode->GetNode()->CPPmultinode109) = multimapUnion->CPPmultimap109->equal_range(KeyUlonglong);
		*(KeyEndNode->GetNode()->CPPmultinode109) = multimapUnion->CPPmultimap109->KeyEnd();
		break;
	case 110:
		*(multiNode->GetNode()->CPPmultinode110) = multimapUnion->CPPmultimap110->equal_range(KeyUlonglong);
		*(KeyEndNode->GetNode()->CPPmultinode110) = multimapUnion->CPPmultimap110->KeyEnd();
		break;
	case 111:
		*(multiNode->GetNode()->CPPmultinode111) = multimapUnion->CPPmultimap111->equal_range(KeyUlonglong);
		*(KeyEndNode->GetNode()->CPPmultinode111) = multimapUnion->CPPmultimap111->KeyEnd();
		break;
	case 112:
		*(multiNode->GetNode()->CPPmultinode112) = multimapUnion->CPPmultimap112->equal_range(KeyUlonglong);
		*(KeyEndNode->GetNode()->CPPmultinode112) = multimapUnion->CPPmultimap112->KeyEnd();
		break;
	case 113:
		*(multiNode->GetNode()->CPPmultinode113) = multimapUnion->CPPmultimap113->equal_range(KeyFloat);
		*(KeyEndNode->GetNode()->CPPmultinode113) = multimapUnion->CPPmultimap113->KeyEnd();
		break;
	case 114:
		*(multiNode->GetNode()->CPPmultinode114) = multimapUnion->CPPmultimap114->equal_range(KeyFloat);
		*(KeyEndNode->GetNode()->CPPmultinode114) = multimapUnion->CPPmultimap114->KeyEnd();
		break;
	case 115:
		*(multiNode->GetNode()->CPPmultinode115) = multimapUnion->CPPmultimap115->equal_range(KeyFloat);
		*(KeyEndNode->GetNode()->CPPmultinode115) = multimapUnion->CPPmultimap115->KeyEnd();
		break;
	case 116:
		*(multiNode->GetNode()->CPPmultinode116) = multimapUnion->CPPmultimap116->equal_range(KeyFloat);
		*(KeyEndNode->GetNode()->CPPmultinode116) = multimapUnion->CPPmultimap116->KeyEnd();
		break;
	case 117:
		*(multiNode->GetNode()->CPPmultinode117) = multimapUnion->CPPmultimap117->equal_range(KeyFloat);
		*(KeyEndNode->GetNode()->CPPmultinode117) = multimapUnion->CPPmultimap117->KeyEnd();
		break;
	case 118:
		*(multiNode->GetNode()->CPPmultinode118) = multimapUnion->CPPmultimap118->equal_range(KeyFloat);
		*(KeyEndNode->GetNode()->CPPmultinode118) = multimapUnion->CPPmultimap118->KeyEnd();
		break;
	case 119:
		*(multiNode->GetNode()->CPPmultinode119) = multimapUnion->CPPmultimap119->equal_range(KeyFloat);
		*(KeyEndNode->GetNode()->CPPmultinode119) = multimapUnion->CPPmultimap119->KeyEnd();
		break;
	case 120:
		*(multiNode->GetNode()->CPPmultinode120) = multimapUnion->CPPmultimap120->equal_range(KeyFloat);
		*(KeyEndNode->GetNode()->CPPmultinode120) = multimapUnion->CPPmultimap120->KeyEnd();
		break;
	case 121:
		*(multiNode->GetNode()->CPPmultinode121) = multimapUnion->CPPmultimap121->equal_range(KeyFloat);
		*(KeyEndNode->GetNode()->CPPmultinode121) = multimapUnion->CPPmultimap121->KeyEnd();
		break;
	case 122:
		*(multiNode->GetNode()->CPPmultinode122) = multimapUnion->CPPmultimap122->equal_range(KeyFloat);
		*(KeyEndNode->GetNode()->CPPmultinode122) = multimapUnion->CPPmultimap122->KeyEnd();
		break;
	case 123:
		*(multiNode->GetNode()->CPPmultinode123) = multimapUnion->CPPmultimap123->equal_range(KeyFloat);
		*(KeyEndNode->GetNode()->CPPmultinode123) = multimapUnion->CPPmultimap123->KeyEnd();
		break;
	case 124:
		*(multiNode->GetNode()->CPPmultinode124) = multimapUnion->CPPmultimap124->equal_range(KeyFloat);
		*(KeyEndNode->GetNode()->CPPmultinode124) = multimapUnion->CPPmultimap124->KeyEnd();
		break;
	case 125:
		*(multiNode->GetNode()->CPPmultinode125) = multimapUnion->CPPmultimap125->equal_range(KeyFloat);
		*(KeyEndNode->GetNode()->CPPmultinode125) = multimapUnion->CPPmultimap125->KeyEnd();
		break;
	case 126:
		*(multiNode->GetNode()->CPPmultinode126) = multimapUnion->CPPmultimap126->equal_range(KeyFloat);
		*(KeyEndNode->GetNode()->CPPmultinode126) = multimapUnion->CPPmultimap126->KeyEnd();
		break;
	case 127:
		*(multiNode->GetNode()->CPPmultinode127) = multimapUnion->CPPmultimap127->equal_range(KeyDouble);
		*(KeyEndNode->GetNode()->CPPmultinode127) = multimapUnion->CPPmultimap127->KeyEnd();
		break;
	case 128:
		*(multiNode->GetNode()->CPPmultinode128) = multimapUnion->CPPmultimap128->equal_range(KeyDouble);
		*(KeyEndNode->GetNode()->CPPmultinode128) = multimapUnion->CPPmultimap128->KeyEnd();
		break;
	case 129:
		*(multiNode->GetNode()->CPPmultinode129) = multimapUnion->CPPmultimap129->equal_range(KeyDouble);
		*(KeyEndNode->GetNode()->CPPmultinode129) = multimapUnion->CPPmultimap129->KeyEnd();
		break;
	case 130:
		*(multiNode->GetNode()->CPPmultinode130) = multimapUnion->CPPmultimap130->equal_range(KeyDouble);
		*(KeyEndNode->GetNode()->CPPmultinode130) = multimapUnion->CPPmultimap130->KeyEnd();
		break;
	case 131:
		*(multiNode->GetNode()->CPPmultinode131) = multimapUnion->CPPmultimap131->equal_range(KeyDouble);
		*(KeyEndNode->GetNode()->CPPmultinode131) = multimapUnion->CPPmultimap131->KeyEnd();
		break;
	case 132:
		*(multiNode->GetNode()->CPPmultinode132) = multimapUnion->CPPmultimap132->equal_range(KeyDouble);
		*(KeyEndNode->GetNode()->CPPmultinode132) = multimapUnion->CPPmultimap132->KeyEnd();
		break;
	case 133:
		*(multiNode->GetNode()->CPPmultinode133) = multimapUnion->CPPmultimap133->equal_range(KeyDouble);
		*(KeyEndNode->GetNode()->CPPmultinode133) = multimapUnion->CPPmultimap133->KeyEnd();
		break;
	case 134:
		*(multiNode->GetNode()->CPPmultinode134) = multimapUnion->CPPmultimap134->equal_range(KeyDouble);
		*(KeyEndNode->GetNode()->CPPmultinode134) = multimapUnion->CPPmultimap134->KeyEnd();
		break;
	case 135:
		*(multiNode->GetNode()->CPPmultinode135) = multimapUnion->CPPmultimap135->equal_range(KeyDouble);
		*(KeyEndNode->GetNode()->CPPmultinode135) = multimapUnion->CPPmultimap135->KeyEnd();
		break;
	case 136:
		*(multiNode->GetNode()->CPPmultinode136) = multimapUnion->CPPmultimap136->equal_range(KeyDouble);
		*(KeyEndNode->GetNode()->CPPmultinode136) = multimapUnion->CPPmultimap136->KeyEnd();
		break;
	case 137:
		*(multiNode->GetNode()->CPPmultinode137) = multimapUnion->CPPmultimap137->equal_range(KeyDouble);
		*(KeyEndNode->GetNode()->CPPmultinode137) = multimapUnion->CPPmultimap137->KeyEnd();
		break;
	case 138:
		*(multiNode->GetNode()->CPPmultinode138) = multimapUnion->CPPmultimap138->equal_range(KeyDouble);
		*(KeyEndNode->GetNode()->CPPmultinode138) = multimapUnion->CPPmultimap138->KeyEnd();
		break;
	case 139:
		*(multiNode->GetNode()->CPPmultinode139) = multimapUnion->CPPmultimap139->equal_range(KeyDouble);
		*(KeyEndNode->GetNode()->CPPmultinode139) = multimapUnion->CPPmultimap139->KeyEnd();
		break;
	case 140:
		*(multiNode->GetNode()->CPPmultinode140) = multimapUnion->CPPmultimap140->equal_range(KeyDouble);
		*(KeyEndNode->GetNode()->CPPmultinode140) = multimapUnion->CPPmultimap140->KeyEnd();
		break;
	case 141:
		*(multiNode->GetNode()->CPPmultinode141) = multimapUnion->CPPmultimap141->equal_range(KeyWchar);
		*(KeyEndNode->GetNode()->CPPmultinode141) = multimapUnion->CPPmultimap141->KeyEnd();
		break;
	case 142:
		*(multiNode->GetNode()->CPPmultinode142) = multimapUnion->CPPmultimap142->equal_range(KeyWchar);
		*(KeyEndNode->GetNode()->CPPmultinode142) = multimapUnion->CPPmultimap142->KeyEnd();
		break;
	case 143:
		*(multiNode->GetNode()->CPPmultinode143) = multimapUnion->CPPmultimap143->equal_range(KeyWchar);
		*(KeyEndNode->GetNode()->CPPmultinode143) = multimapUnion->CPPmultimap143->KeyEnd();
		break;
	case 144:
		*(multiNode->GetNode()->CPPmultinode144) = multimapUnion->CPPmultimap144->equal_range(KeyWchar);
		*(KeyEndNode->GetNode()->CPPmultinode144) = multimapUnion->CPPmultimap144->KeyEnd();
		break;
	case 145:
		*(multiNode->GetNode()->CPPmultinode145) = multimapUnion->CPPmultimap145->equal_range(KeyWchar);
		*(KeyEndNode->GetNode()->CPPmultinode145) = multimapUnion->CPPmultimap145->KeyEnd();
		break;
	case 146:
		*(multiNode->GetNode()->CPPmultinode146) = multimapUnion->CPPmultimap146->equal_range(KeyWchar);
		*(KeyEndNode->GetNode()->CPPmultinode146) = multimapUnion->CPPmultimap146->KeyEnd();
		break;
	case 147:
		*(multiNode->GetNode()->CPPmultinode147) = multimapUnion->CPPmultimap147->equal_range(KeyWchar);
		*(KeyEndNode->GetNode()->CPPmultinode147) = multimapUnion->CPPmultimap147->KeyEnd();
		break;
	case 148:
		*(multiNode->GetNode()->CPPmultinode148) = multimapUnion->CPPmultimap148->equal_range(KeyWchar);
		*(KeyEndNode->GetNode()->CPPmultinode148) = multimapUnion->CPPmultimap148->KeyEnd();
		break;
	case 149:
		*(multiNode->GetNode()->CPPmultinode149) = multimapUnion->CPPmultimap149->equal_range(KeyWchar);
		*(KeyEndNode->GetNode()->CPPmultinode149) = multimapUnion->CPPmultimap149->KeyEnd();
		break;
	case 150:
		*(multiNode->GetNode()->CPPmultinode150) = multimapUnion->CPPmultimap150->equal_range(KeyWchar);
		*(KeyEndNode->GetNode()->CPPmultinode150) = multimapUnion->CPPmultimap150->KeyEnd();
		break;
	case 151:
		*(multiNode->GetNode()->CPPmultinode151) = multimapUnion->CPPmultimap151->equal_range(KeyWchar);
		*(KeyEndNode->GetNode()->CPPmultinode151) = multimapUnion->CPPmultimap151->KeyEnd();
		break;
	case 152:
		*(multiNode->GetNode()->CPPmultinode152) = multimapUnion->CPPmultimap152->equal_range(KeyWchar);
		*(KeyEndNode->GetNode()->CPPmultinode152) = multimapUnion->CPPmultimap152->KeyEnd();
		break;
	case 153:
		*(multiNode->GetNode()->CPPmultinode153) = multimapUnion->CPPmultimap153->equal_range(KeyWchar);
		*(KeyEndNode->GetNode()->CPPmultinode153) = multimapUnion->CPPmultimap153->KeyEnd();
		break;
	case 154:
		*(multiNode->GetNode()->CPPmultinode154) = multimapUnion->CPPmultimap154->equal_range(KeyWchar);
		*(KeyEndNode->GetNode()->CPPmultinode154) = multimapUnion->CPPmultimap154->KeyEnd();
		break;
	case 155:
		*(multiNode->GetNode()->CPPmultinode155) = multimapUnion->CPPmultimap155->equal_range(KeyBool);
		*(KeyEndNode->GetNode()->CPPmultinode155) = multimapUnion->CPPmultimap155->KeyEnd();
		break;
	case 156:
		*(multiNode->GetNode()->CPPmultinode156) = multimapUnion->CPPmultimap156->equal_range(KeyBool);
		*(KeyEndNode->GetNode()->CPPmultinode156) = multimapUnion->CPPmultimap156->KeyEnd();
		break;
	case 157:
		*(multiNode->GetNode()->CPPmultinode157) = multimapUnion->CPPmultimap157->equal_range(KeyBool);
		*(KeyEndNode->GetNode()->CPPmultinode157) = multimapUnion->CPPmultimap157->KeyEnd();
		break;
	case 158:
		*(multiNode->GetNode()->CPPmultinode158) = multimapUnion->CPPmultimap158->equal_range(KeyBool);
		*(KeyEndNode->GetNode()->CPPmultinode158) = multimapUnion->CPPmultimap158->KeyEnd();
		break;
	case 159:
		*(multiNode->GetNode()->CPPmultinode159) = multimapUnion->CPPmultimap159->equal_range(KeyBool);
		*(KeyEndNode->GetNode()->CPPmultinode159) = multimapUnion->CPPmultimap159->KeyEnd();
		break;
	case 160:
		*(multiNode->GetNode()->CPPmultinode160) = multimapUnion->CPPmultimap160->equal_range(KeyBool);
		*(KeyEndNode->GetNode()->CPPmultinode160) = multimapUnion->CPPmultimap160->KeyEnd();
		break;
	case 161:
		*(multiNode->GetNode()->CPPmultinode161) = multimapUnion->CPPmultimap161->equal_range(KeyBool);
		*(KeyEndNode->GetNode()->CPPmultinode161) = multimapUnion->CPPmultimap161->KeyEnd();
		break;
	case 162:
		*(multiNode->GetNode()->CPPmultinode162) = multimapUnion->CPPmultimap162->equal_range(KeyBool);
		*(KeyEndNode->GetNode()->CPPmultinode162) = multimapUnion->CPPmultimap162->KeyEnd();
		break;
	case 163:
		*(multiNode->GetNode()->CPPmultinode163) = multimapUnion->CPPmultimap163->equal_range(KeyBool);
		*(KeyEndNode->GetNode()->CPPmultinode163) = multimapUnion->CPPmultimap163->KeyEnd();
		break;
	case 164:
		*(multiNode->GetNode()->CPPmultinode164) = multimapUnion->CPPmultimap164->equal_range(KeyBool);
		*(KeyEndNode->GetNode()->CPPmultinode164) = multimapUnion->CPPmultimap164->KeyEnd();
		break;
	case 165:
		*(multiNode->GetNode()->CPPmultinode165) = multimapUnion->CPPmultimap165->equal_range(KeyBool);
		*(KeyEndNode->GetNode()->CPPmultinode165) = multimapUnion->CPPmultimap165->KeyEnd();
		break;
	case 166:
		*(multiNode->GetNode()->CPPmultinode166) = multimapUnion->CPPmultimap166->equal_range(KeyBool);
		*(KeyEndNode->GetNode()->CPPmultinode166) = multimapUnion->CPPmultimap166->KeyEnd();
		break;
	case 167:
		*(multiNode->GetNode()->CPPmultinode167) = multimapUnion->CPPmultimap167->equal_range(KeyBool);
		*(KeyEndNode->GetNode()->CPPmultinode167) = multimapUnion->CPPmultimap167->KeyEnd();
		break;
	case 168:
		*(multiNode->GetNode()->CPPmultinode168) = multimapUnion->CPPmultimap168->equal_range(KeyBool);
		*(KeyEndNode->GetNode()->CPPmultinode168) = multimapUnion->CPPmultimap168->KeyEnd();
		break;
	case 169:
		*(multiNode->GetNode()->CPPmultinode169) = multimapUnion->CPPmultimap169->equal_range(KeyWstring);
		*(KeyEndNode->GetNode()->CPPmultinode169) = multimapUnion->CPPmultimap169->KeyEnd();
		break;
	case 170:
		*(multiNode->GetNode()->CPPmultinode170) = multimapUnion->CPPmultimap170->equal_range(KeyWstring);
		*(KeyEndNode->GetNode()->CPPmultinode170) = multimapUnion->CPPmultimap170->KeyEnd();
		break;
	case 171:
		*(multiNode->GetNode()->CPPmultinode171) = multimapUnion->CPPmultimap171->equal_range(KeyWstring);
		*(KeyEndNode->GetNode()->CPPmultinode171) = multimapUnion->CPPmultimap171->KeyEnd();
		break;
	case 172:
		*(multiNode->GetNode()->CPPmultinode172) = multimapUnion->CPPmultimap172->equal_range(KeyWstring);
		*(KeyEndNode->GetNode()->CPPmultinode172) = multimapUnion->CPPmultimap172->KeyEnd();
		break;
	case 173:
		*(multiNode->GetNode()->CPPmultinode173) = multimapUnion->CPPmultimap173->equal_range(KeyWstring);
		*(KeyEndNode->GetNode()->CPPmultinode173) = multimapUnion->CPPmultimap173->KeyEnd();
		break;
	case 174:
		*(multiNode->GetNode()->CPPmultinode174) = multimapUnion->CPPmultimap174->equal_range(KeyWstring);
		*(KeyEndNode->GetNode()->CPPmultinode174) = multimapUnion->CPPmultimap174->KeyEnd();
		break;
	case 175:
		*(multiNode->GetNode()->CPPmultinode175) = multimapUnion->CPPmultimap175->equal_range(KeyWstring);
		*(KeyEndNode->GetNode()->CPPmultinode175) = multimapUnion->CPPmultimap175->KeyEnd();
		break;
	case 176:
		*(multiNode->GetNode()->CPPmultinode176) = multimapUnion->CPPmultimap176->equal_range(KeyWstring);
		*(KeyEndNode->GetNode()->CPPmultinode176) = multimapUnion->CPPmultimap176->KeyEnd();
		break;
	case 177:
		*(multiNode->GetNode()->CPPmultinode177) = multimapUnion->CPPmultimap177->equal_range(KeyWstring);
		*(KeyEndNode->GetNode()->CPPmultinode177) = multimapUnion->CPPmultimap177->KeyEnd();
		break;
	case 178:
		*(multiNode->GetNode()->CPPmultinode178) = multimapUnion->CPPmultimap178->equal_range(KeyWstring);
		*(KeyEndNode->GetNode()->CPPmultinode178) = multimapUnion->CPPmultimap178->KeyEnd();
		break;
	case 179:
		*(multiNode->GetNode()->CPPmultinode179) = multimapUnion->CPPmultimap179->equal_range(KeyWstring);
		*(KeyEndNode->GetNode()->CPPmultinode179) = multimapUnion->CPPmultimap179->KeyEnd();
		break;
	case 180:
		*(multiNode->GetNode()->CPPmultinode180) = multimapUnion->CPPmultimap180->equal_range(KeyWstring);
		*(KeyEndNode->GetNode()->CPPmultinode180) = multimapUnion->CPPmultimap180->KeyEnd();
		break;
	case 181:
		*(multiNode->GetNode()->CPPmultinode181) = multimapUnion->CPPmultimap181->equal_range(KeyWstring);
		*(KeyEndNode->GetNode()->CPPmultinode181) = multimapUnion->CPPmultimap181->KeyEnd();
		break;
	case 182:
		*(multiNode->GetNode()->CPPmultinode182) = multimapUnion->CPPmultimap182->equal_range(KeyWstring);
		*(KeyEndNode->GetNode()->CPPmultinode182) = multimapUnion->CPPmultimap182->KeyEnd();
		break;
	case 183:
		*(multiNode->GetNode()->CPPmultinode183) = multimapUnion->CPPmultimap183->equal_range(Key__Int);
		*(KeyEndNode->GetNode()->CPPmultinode183) = multimapUnion->CPPmultimap183->KeyEnd();
		break;
	case 184:
		*(multiNode->GetNode()->CPPmultinode184) = multimapUnion->CPPmultimap184->equal_range(Key__Int);
		*(KeyEndNode->GetNode()->CPPmultinode184) = multimapUnion->CPPmultimap184->KeyEnd();
		break;
	case 185:
		*(multiNode->GetNode()->CPPmultinode185) = multimapUnion->CPPmultimap185->equal_range(Key__Int);
		*(KeyEndNode->GetNode()->CPPmultinode185) = multimapUnion->CPPmultimap185->KeyEnd();
		break;
	case 186:
		*(multiNode->GetNode()->CPPmultinode186) = multimapUnion->CPPmultimap186->equal_range(Key__Int);
		*(KeyEndNode->GetNode()->CPPmultinode186) = multimapUnion->CPPmultimap186->KeyEnd();
		break;
	case 187:
		*(multiNode->GetNode()->CPPmultinode187) = multimapUnion->CPPmultimap187->equal_range(Key__Int);
		*(KeyEndNode->GetNode()->CPPmultinode187) = multimapUnion->CPPmultimap187->KeyEnd();
		break;
	case 188:
		*(multiNode->GetNode()->CPPmultinode188) = multimapUnion->CPPmultimap188->equal_range(Key__Int);
		*(KeyEndNode->GetNode()->CPPmultinode188) = multimapUnion->CPPmultimap188->KeyEnd();
		break;
	case 189:
		*(multiNode->GetNode()->CPPmultinode189) = multimapUnion->CPPmultimap189->equal_range(Key__Int);
		*(KeyEndNode->GetNode()->CPPmultinode189) = multimapUnion->CPPmultimap189->KeyEnd();
		break;
	case 190:
		*(multiNode->GetNode()->CPPmultinode190) = multimapUnion->CPPmultimap190->equal_range(Key__Int);
		*(KeyEndNode->GetNode()->CPPmultinode190) = multimapUnion->CPPmultimap190->KeyEnd();
		break;
	case 191:
		*(multiNode->GetNode()->CPPmultinode191) = multimapUnion->CPPmultimap191->equal_range(Key__Int);
		*(KeyEndNode->GetNode()->CPPmultinode191) = multimapUnion->CPPmultimap191->KeyEnd();
		break;
	case 192:
		*(multiNode->GetNode()->CPPmultinode192) = multimapUnion->CPPmultimap192->equal_range(Key__Int);
		*(KeyEndNode->GetNode()->CPPmultinode192) = multimapUnion->CPPmultimap192->KeyEnd();
		break;
	case 193:
		*(multiNode->GetNode()->CPPmultinode193) = multimapUnion->CPPmultimap193->equal_range(Key__Int);
		*(KeyEndNode->GetNode()->CPPmultinode193) = multimapUnion->CPPmultimap193->KeyEnd();
		break;
	case 194:
		*(multiNode->GetNode()->CPPmultinode194) = multimapUnion->CPPmultimap194->equal_range(Key__Int);
		*(KeyEndNode->GetNode()->CPPmultinode194) = multimapUnion->CPPmultimap194->KeyEnd();
		break;
	case 195:
		*(multiNode->GetNode()->CPPmultinode195) = multimapUnion->CPPmultimap195->equal_range(Key__Int);
		*(KeyEndNode->GetNode()->CPPmultinode195) = multimapUnion->CPPmultimap195->KeyEnd();
		break;
	case 196:
		*(multiNode->GetNode()->CPPmultinode196) = multimapUnion->CPPmultimap196->equal_range(Key__Int);
		*(KeyEndNode->GetNode()->CPPmultinode196) = multimapUnion->CPPmultimap196->KeyEnd();
		break;
	}
	return multiNode->DeepCopy();
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::insert(Key key, Value value)
{
	if (Object::ReferenceEquals(key, nullptr)) return nullptr;
	if (Object::ReferenceEquals(value, nullptr)) return nullptr;
	Type^ keyType = Key::typeid;
	Type^ valueType = Value::typeid;

	unsigned char KeyUchar = 0;
	char KeyChar = 0;
	short KeyShort = 0;
	unsigned short KeyUshort = 0;
	int KeyInt = 0;
	unsigned int KeyUint = 0;
	long long KeyLonglong = 0;
	unsigned long long KeyUlonglong = 0;
	float KeyFloat = 0.0f;
	double KeyDouble = 0;
	wchar_t KeyWchar = 0;
	bool KeyBool = false;
	std::wstring KeyWstring = L"";
	__int64 Key__Int = 0;

	if (keyType->Equals(System::Byte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUchar = static_cast<unsigned char>(safe_cast<System::Byte>(managedObject));
	}
	else if (keyType->Equals(System::SByte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyChar = static_cast<char>(safe_cast<System::SByte>(managedObject));
	}
	else if (keyType->Equals(System::Int16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyShort = static_cast<short>(safe_cast<System::Int16>(managedObject));
	}
	else if (keyType->Equals(System::UInt16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUshort = static_cast<unsigned short>(safe_cast<System::UInt16>(managedObject));
	}
	else if (keyType->Equals(System::Int32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyInt = static_cast<int>(safe_cast<System::Int32>(managedObject));
	}
	else if (keyType->Equals(System::UInt32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUint = static_cast<unsigned int>(safe_cast<System::UInt32>(managedObject));
	}
	else if (keyType->Equals(System::Int64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyLonglong = static_cast<long long>(safe_cast<System::Int64>(managedObject));
	}
	else if (keyType->Equals(System::UInt64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUlonglong = static_cast<unsigned long long>(safe_cast<System::UInt64>(managedObject));
	}
	else if (keyType->Equals(System::Single::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyFloat = static_cast<float>(safe_cast<System::Single>(managedObject));
	}
	else if (keyType->Equals(System::Double::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyDouble = static_cast<double>(safe_cast<System::Double>(managedObject));
	}
	else if (keyType->Equals(System::Char::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyWchar = static_cast<wchar_t>(safe_cast<System::Char>(managedObject));
	}
	else if (keyType->Equals(System::Boolean::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyBool = static_cast<bool>(safe_cast<System::Boolean>(managedObject));
	}
	else if (keyType->Equals(System::String::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		MarshalString(safe_cast<System::String^>(managedObject), KeyWstring);
	}
	else if (keyType->IsClass)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			gKeyClassDictionary->Add(key, nDictionaryKeyCount);
			gIntKeyClassDictionary->Add(nDictionaryKeyCount, key);
			Key__Int = nDictionaryKeyCount;
			nDictionaryKeyCount++;
		}
	}
	else if (keyType->IsValueType && !keyType->IsPrimitive && !keyType->IsEnum)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			gKeyClassDictionary->Add(key, nDictionaryKeyCount);
			gIntKeyClassDictionary->Add(nDictionaryKeyCount, key);
			Key__Int = nDictionaryKeyCount;
			nDictionaryKeyCount++;
		}
	}
	else if (keyType->IsInterface)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			gKeyClassDictionary->Add(key, nDictionaryKeyCount);
			gIntKeyClassDictionary->Add(nDictionaryKeyCount, key);
			Key__Int = nDictionaryKeyCount;
			nDictionaryKeyCount++;
		}
	}
	else
	{
		return nullptr;
	}

	unsigned char ValueUchar = 0;
	char ValueChar = 0;
	short ValueShort = 0;
	unsigned short ValueUshort = 0;
	int ValueInt = 0;
	unsigned int ValueUint = 0;
	long long ValueLonglong = 0;
	unsigned long long ValueUlonglong = 0;
	float ValueFloat = 0.0f;
	double ValueDouble = 0;
	wchar_t ValueWchar = 0;
	bool ValueBool = false;
	std::wstring ValueWstring = L"";
	__int64 Value__Int = 0;

	if (valueType->Equals(System::Byte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUchar = static_cast<unsigned char>(safe_cast<System::Byte>(managedObject));
	}
	else if (valueType->Equals(System::SByte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueChar = static_cast<char>(safe_cast<System::SByte>(managedObject));
	}
	else if (valueType->Equals(System::Int16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueShort = static_cast<short>(safe_cast<System::Int16>(managedObject));
	}
	else if (valueType->Equals(System::UInt16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUshort = static_cast<unsigned short>(safe_cast<System::UInt16>(managedObject));
	}
	else if (valueType->Equals(System::Int32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueInt = static_cast<int>(safe_cast<System::Int32>(managedObject));
	}
	else if (valueType->Equals(System::UInt32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUint = static_cast<unsigned int>(safe_cast<System::UInt32>(managedObject));
	}
	else if (valueType->Equals(System::Int64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueLonglong = static_cast<long long>(safe_cast<System::Int64>(managedObject));
	}
	else if (valueType->Equals(System::UInt64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUlonglong = static_cast<unsigned long long>(safe_cast<System::UInt64>(managedObject));
	}
	else if (valueType->Equals(System::Single::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueFloat = static_cast<float>(safe_cast<System::Single>(managedObject));
	}
	else if (valueType->Equals(System::Double::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueDouble = static_cast<double>(safe_cast<System::Double>(managedObject));
	}
	else if (valueType->Equals(System::Char::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueWchar = static_cast<wchar_t>(safe_cast<System::Char>(managedObject));
	}
	else if (valueType->Equals(System::Boolean::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueBool = static_cast<bool>(safe_cast<System::Boolean>(managedObject));
	}
	else if (valueType->Equals(System::String::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		MarshalString(safe_cast<System::String^>(managedObject), ValueWstring);
	}
	else if (valueType->IsClass)
	{
		gValueClassDictionary->Add(nDictionaryValueCount, value);
		Value__Int = nDictionaryValueCount;
		nDictionaryValueCount++;
	}
	else if (valueType->IsValueType && !valueType->IsPrimitive && !valueType->IsEnum)
	{
		gValueClassDictionary->Add(nDictionaryValueCount, value);
		Value__Int = nDictionaryValueCount;
		nDictionaryValueCount++;
	}
	else if (valueType->IsInterface)
	{
		gValueClassDictionary->Add(nDictionaryValueCount, value);
		Value__Int = nDictionaryValueCount;
		nDictionaryValueCount++;
	}
	else
	{
		GCHandle handle = GCHandle::Alloc(value);
		IntPtr ptr = GCHandle::ToIntPtr(handle);
		Value__Int = ptr.ToInt64();
		handle.Free();
		return nullptr;
	}

	switch (nKeyValueType)
	{
	case 0: default:
		return nullptr;
	case 1:
		*(multiNode->GetNode()->CPPmultinode1) = multimapUnion->CPPmultimap1->insert(KeyUchar, ValueUchar);
		break;
	case 2:
		*(multiNode->GetNode()->CPPmultinode2) = multimapUnion->CPPmultimap2->insert(KeyUchar, ValueChar);
		break;
	case 3:
		*(multiNode->GetNode()->CPPmultinode3) = multimapUnion->CPPmultimap3->insert(KeyUchar, ValueShort);
		break;
	case 4:
		*(multiNode->GetNode()->CPPmultinode4) = multimapUnion->CPPmultimap4->insert(KeyUchar, ValueUshort);
		break;
	case 5:
		*(multiNode->GetNode()->CPPmultinode5) = multimapUnion->CPPmultimap5->insert(KeyUchar, ValueInt);
		break;
	case 6:
		*(multiNode->GetNode()->CPPmultinode6) = multimapUnion->CPPmultimap6->insert(KeyUchar, ValueUint);
		break;
	case 7:
		*(multiNode->GetNode()->CPPmultinode7) = multimapUnion->CPPmultimap7->insert(KeyUchar, ValueLonglong);
		break;
	case 8:
		*(multiNode->GetNode()->CPPmultinode8) = multimapUnion->CPPmultimap8->insert(KeyUchar, ValueUlonglong);
		break;
	case 9:
		*(multiNode->GetNode()->CPPmultinode9) = multimapUnion->CPPmultimap9->insert(KeyUchar, ValueFloat);
		break;
	case 10:
		*(multiNode->GetNode()->CPPmultinode10) = multimapUnion->CPPmultimap10->insert(KeyUchar, ValueDouble);
		break;
	case 11:
		*(multiNode->GetNode()->CPPmultinode11) = multimapUnion->CPPmultimap11->insert(KeyUchar, ValueWchar);
		break;
	case 12:
		*(multiNode->GetNode()->CPPmultinode12) = multimapUnion->CPPmultimap12->insert(KeyUchar, ValueBool);
		break;
	case 13:
		*(multiNode->GetNode()->CPPmultinode13) = multimapUnion->CPPmultimap13->insert(KeyUchar, ValueWstring);
		break;
	case 14:
		*(multiNode->GetNode()->CPPmultinode14) = multimapUnion->CPPmultimap14->insert(KeyUchar, Value__Int);
		break;
	case 15:
		*(multiNode->GetNode()->CPPmultinode15) = multimapUnion->CPPmultimap15->insert(KeyChar, ValueUchar);
		break;
	case 16:
		*(multiNode->GetNode()->CPPmultinode16) = multimapUnion->CPPmultimap16->insert(KeyChar, ValueChar);
		break;
	case 17:
		*(multiNode->GetNode()->CPPmultinode17) = multimapUnion->CPPmultimap17->insert(KeyChar, ValueShort);
		break;
	case 18:
		*(multiNode->GetNode()->CPPmultinode18) = multimapUnion->CPPmultimap18->insert(KeyChar, ValueUshort);
		break;
	case 19:
		*(multiNode->GetNode()->CPPmultinode19) = multimapUnion->CPPmultimap19->insert(KeyChar, ValueInt);
		break;
	case 20:
		*(multiNode->GetNode()->CPPmultinode20) = multimapUnion->CPPmultimap20->insert(KeyChar, ValueUint);
		break;
	case 21:
		*(multiNode->GetNode()->CPPmultinode21) = multimapUnion->CPPmultimap21->insert(KeyChar, ValueLonglong);
		break;
	case 22:
		*(multiNode->GetNode()->CPPmultinode22) = multimapUnion->CPPmultimap22->insert(KeyChar, ValueUlonglong);
		break;
	case 23:
		*(multiNode->GetNode()->CPPmultinode23) = multimapUnion->CPPmultimap23->insert(KeyChar, ValueFloat);
		break;
	case 24:
		*(multiNode->GetNode()->CPPmultinode24) = multimapUnion->CPPmultimap24->insert(KeyChar, ValueDouble);
		break;
	case 25:
		*(multiNode->GetNode()->CPPmultinode25) = multimapUnion->CPPmultimap25->insert(KeyChar, ValueWchar);
		break;
	case 26:
		*(multiNode->GetNode()->CPPmultinode26) = multimapUnion->CPPmultimap26->insert(KeyChar, ValueBool);
		break;
	case 27:
		*(multiNode->GetNode()->CPPmultinode27) = multimapUnion->CPPmultimap27->insert(KeyChar, ValueWstring);
		break;
	case 28:
		*(multiNode->GetNode()->CPPmultinode28) = multimapUnion->CPPmultimap28->insert(KeyChar, Value__Int);
		break;
	case 29:
		*(multiNode->GetNode()->CPPmultinode29) = multimapUnion->CPPmultimap29->insert(KeyShort, ValueUchar);
		break;
	case 30:
		*(multiNode->GetNode()->CPPmultinode30) = multimapUnion->CPPmultimap30->insert(KeyShort, ValueChar);
		break;
	case 31:
		*(multiNode->GetNode()->CPPmultinode31) = multimapUnion->CPPmultimap31->insert(KeyShort, ValueShort);
		break;
	case 32:
		*(multiNode->GetNode()->CPPmultinode32) = multimapUnion->CPPmultimap32->insert(KeyShort, ValueUshort);
		break;
	case 33:
		*(multiNode->GetNode()->CPPmultinode33) = multimapUnion->CPPmultimap33->insert(KeyShort, ValueInt);
		break;
	case 34:
		*(multiNode->GetNode()->CPPmultinode34) = multimapUnion->CPPmultimap34->insert(KeyShort, ValueUint);
		break;
	case 35:
		*(multiNode->GetNode()->CPPmultinode35) = multimapUnion->CPPmultimap35->insert(KeyShort, ValueLonglong);
		break;
	case 36:
		*(multiNode->GetNode()->CPPmultinode36) = multimapUnion->CPPmultimap36->insert(KeyShort, ValueUlonglong);
		break;
	case 37:
		*(multiNode->GetNode()->CPPmultinode37) = multimapUnion->CPPmultimap37->insert(KeyShort, ValueFloat);
		break;
	case 38:
		*(multiNode->GetNode()->CPPmultinode38) = multimapUnion->CPPmultimap38->insert(KeyShort, ValueDouble);
		break;
	case 39:
		*(multiNode->GetNode()->CPPmultinode39) = multimapUnion->CPPmultimap39->insert(KeyShort, ValueWchar);
		break;
	case 40:
		*(multiNode->GetNode()->CPPmultinode40) = multimapUnion->CPPmultimap40->insert(KeyShort, ValueBool);
		break;
	case 41:
		*(multiNode->GetNode()->CPPmultinode41) = multimapUnion->CPPmultimap41->insert(KeyShort, ValueWstring);
		break;
	case 42:
		*(multiNode->GetNode()->CPPmultinode42) = multimapUnion->CPPmultimap42->insert(KeyShort, Value__Int);
		break;
	case 43:
		*(multiNode->GetNode()->CPPmultinode43) = multimapUnion->CPPmultimap43->insert(KeyUshort, ValueUchar);
		break;
	case 44:
		*(multiNode->GetNode()->CPPmultinode44) = multimapUnion->CPPmultimap44->insert(KeyUshort, ValueChar);
		break;
	case 45:
		*(multiNode->GetNode()->CPPmultinode45) = multimapUnion->CPPmultimap45->insert(KeyUshort, ValueShort);
		break;
	case 46:
		*(multiNode->GetNode()->CPPmultinode46) = multimapUnion->CPPmultimap46->insert(KeyUshort, ValueUshort);
		break;
	case 47:
		*(multiNode->GetNode()->CPPmultinode47) = multimapUnion->CPPmultimap47->insert(KeyUshort, ValueInt);
		break;
	case 48:
		*(multiNode->GetNode()->CPPmultinode48) = multimapUnion->CPPmultimap48->insert(KeyUshort, ValueUint);
		break;
	case 49:
		*(multiNode->GetNode()->CPPmultinode49) = multimapUnion->CPPmultimap49->insert(KeyUshort, ValueLonglong);
		break;
	case 50:
		*(multiNode->GetNode()->CPPmultinode50) = multimapUnion->CPPmultimap50->insert(KeyUshort, ValueUlonglong);
		break;
	case 51:
		*(multiNode->GetNode()->CPPmultinode51) = multimapUnion->CPPmultimap51->insert(KeyUshort, ValueFloat);
		break;
	case 52:
		*(multiNode->GetNode()->CPPmultinode52) = multimapUnion->CPPmultimap52->insert(KeyUshort, ValueDouble);
		break;
	case 53:
		*(multiNode->GetNode()->CPPmultinode53) = multimapUnion->CPPmultimap53->insert(KeyUshort, ValueWchar);
		break;
	case 54:
		*(multiNode->GetNode()->CPPmultinode54) = multimapUnion->CPPmultimap54->insert(KeyUshort, ValueBool);
		break;
	case 55:
		*(multiNode->GetNode()->CPPmultinode55) = multimapUnion->CPPmultimap55->insert(KeyUshort, ValueWstring);
		break;
	case 56:
		*(multiNode->GetNode()->CPPmultinode56) = multimapUnion->CPPmultimap56->insert(KeyUshort, Value__Int);
		break;
	case 57:
		*(multiNode->GetNode()->CPPmultinode57) = multimapUnion->CPPmultimap57->insert(KeyInt, ValueUchar);
		break;
	case 58:
		*(multiNode->GetNode()->CPPmultinode58) = multimapUnion->CPPmultimap58->insert(KeyInt, ValueChar);
		break;
	case 59:
		*(multiNode->GetNode()->CPPmultinode59) = multimapUnion->CPPmultimap59->insert(KeyInt, ValueShort);
		break;
	case 60:
		*(multiNode->GetNode()->CPPmultinode60) = multimapUnion->CPPmultimap60->insert(KeyInt, ValueUshort);
		break;
	case 61:
		*(multiNode->GetNode()->CPPmultinode61) = multimapUnion->CPPmultimap61->insert(KeyInt, ValueInt);
		break;
	case 62:
		*(multiNode->GetNode()->CPPmultinode62) = multimapUnion->CPPmultimap62->insert(KeyInt, ValueUint);
		break;
	case 63:
		*(multiNode->GetNode()->CPPmultinode63) = multimapUnion->CPPmultimap63->insert(KeyInt, ValueLonglong);
		break;
	case 64:
		*(multiNode->GetNode()->CPPmultinode64) = multimapUnion->CPPmultimap64->insert(KeyInt, ValueUlonglong);
		break;
	case 65:
		*(multiNode->GetNode()->CPPmultinode65) = multimapUnion->CPPmultimap65->insert(KeyInt, ValueFloat);
		break;
	case 66:
		*(multiNode->GetNode()->CPPmultinode66) = multimapUnion->CPPmultimap66->insert(KeyInt, ValueDouble);
		break;
	case 67:
		*(multiNode->GetNode()->CPPmultinode67) = multimapUnion->CPPmultimap67->insert(KeyInt, ValueWchar);
		break;
	case 68:
		*(multiNode->GetNode()->CPPmultinode68) = multimapUnion->CPPmultimap68->insert(KeyInt, ValueBool);
		break;
	case 69:
		*(multiNode->GetNode()->CPPmultinode69) = multimapUnion->CPPmultimap69->insert(KeyInt, ValueWstring);
		break;
	case 70:
		*(multiNode->GetNode()->CPPmultinode70) = multimapUnion->CPPmultimap70->insert(KeyInt, Value__Int);
		break;
	case 71:
		*(multiNode->GetNode()->CPPmultinode71) = multimapUnion->CPPmultimap71->insert(KeyUint, ValueUchar);
		break;
	case 72:
		*(multiNode->GetNode()->CPPmultinode72) = multimapUnion->CPPmultimap72->insert(KeyUint, ValueChar);
		break;
	case 73:
		*(multiNode->GetNode()->CPPmultinode73) = multimapUnion->CPPmultimap73->insert(KeyUint, ValueShort);
		break;
	case 74:
		*(multiNode->GetNode()->CPPmultinode74) = multimapUnion->CPPmultimap74->insert(KeyUint, ValueUshort);
		break;
	case 75:
		*(multiNode->GetNode()->CPPmultinode75) = multimapUnion->CPPmultimap75->insert(KeyUint, ValueInt);
		break;
	case 76:
		*(multiNode->GetNode()->CPPmultinode76) = multimapUnion->CPPmultimap76->insert(KeyUint, ValueUint);
		break;
	case 77:
		*(multiNode->GetNode()->CPPmultinode77) = multimapUnion->CPPmultimap77->insert(KeyUint, ValueLonglong);
		break;
	case 78:
		*(multiNode->GetNode()->CPPmultinode78) = multimapUnion->CPPmultimap78->insert(KeyUint, ValueUlonglong);
		break;
	case 79:
		*(multiNode->GetNode()->CPPmultinode79) = multimapUnion->CPPmultimap79->insert(KeyUint, ValueFloat);
		break;
	case 80:
		*(multiNode->GetNode()->CPPmultinode80) = multimapUnion->CPPmultimap80->insert(KeyUint, ValueDouble);
		break;
	case 81:
		*(multiNode->GetNode()->CPPmultinode81) = multimapUnion->CPPmultimap81->insert(KeyUint, ValueWchar);
		break;
	case 82:
		*(multiNode->GetNode()->CPPmultinode82) = multimapUnion->CPPmultimap82->insert(KeyUint, ValueBool);
		break;
	case 83:
		*(multiNode->GetNode()->CPPmultinode83) = multimapUnion->CPPmultimap83->insert(KeyUint, ValueWstring);
		break;
	case 84:
		*(multiNode->GetNode()->CPPmultinode84) = multimapUnion->CPPmultimap84->insert(KeyUint, Value__Int);
		break;
	case 85:
		*(multiNode->GetNode()->CPPmultinode85) = multimapUnion->CPPmultimap85->insert(KeyLonglong, ValueUchar);
		break;
	case 86:
		*(multiNode->GetNode()->CPPmultinode86) = multimapUnion->CPPmultimap86->insert(KeyLonglong, ValueChar);
		break;
	case 87:
		*(multiNode->GetNode()->CPPmultinode87) = multimapUnion->CPPmultimap87->insert(KeyLonglong, ValueShort);
		break;
	case 88:
		*(multiNode->GetNode()->CPPmultinode88) = multimapUnion->CPPmultimap88->insert(KeyLonglong, ValueUshort);
		break;
	case 89:
		*(multiNode->GetNode()->CPPmultinode89) = multimapUnion->CPPmultimap89->insert(KeyLonglong, ValueInt);
		break;
	case 90:
		*(multiNode->GetNode()->CPPmultinode90) = multimapUnion->CPPmultimap90->insert(KeyLonglong, ValueUint);
		break;
	case 91:
		*(multiNode->GetNode()->CPPmultinode91) = multimapUnion->CPPmultimap91->insert(KeyLonglong, ValueLonglong);
		break;
	case 92:
		*(multiNode->GetNode()->CPPmultinode92) = multimapUnion->CPPmultimap92->insert(KeyLonglong, ValueUlonglong);
		break;
	case 93:
		*(multiNode->GetNode()->CPPmultinode93) = multimapUnion->CPPmultimap93->insert(KeyLonglong, ValueFloat);
		break;
	case 94:
		*(multiNode->GetNode()->CPPmultinode94) = multimapUnion->CPPmultimap94->insert(KeyLonglong, ValueDouble);
		break;
	case 95:
		*(multiNode->GetNode()->CPPmultinode95) = multimapUnion->CPPmultimap95->insert(KeyLonglong, ValueWchar);
		break;
	case 96:
		*(multiNode->GetNode()->CPPmultinode96) = multimapUnion->CPPmultimap96->insert(KeyLonglong, ValueBool);
		break;
	case 97:
		*(multiNode->GetNode()->CPPmultinode97) = multimapUnion->CPPmultimap97->insert(KeyLonglong, ValueWstring);
		break;
	case 98:
		*(multiNode->GetNode()->CPPmultinode98) = multimapUnion->CPPmultimap98->insert(KeyLonglong, Value__Int);
		break;
	case 99:
		*(multiNode->GetNode()->CPPmultinode99) = multimapUnion->CPPmultimap99->insert(KeyUlonglong, ValueUchar);
		break;
	case 100:
		*(multiNode->GetNode()->CPPmultinode100) = multimapUnion->CPPmultimap100->insert(KeyUlonglong, ValueChar);
		break;
	case 101:
		*(multiNode->GetNode()->CPPmultinode101) = multimapUnion->CPPmultimap101->insert(KeyUlonglong, ValueShort);
		break;
	case 102:
		*(multiNode->GetNode()->CPPmultinode102) = multimapUnion->CPPmultimap102->insert(KeyUlonglong, ValueUshort);
		break;
	case 103:
		*(multiNode->GetNode()->CPPmultinode103) = multimapUnion->CPPmultimap103->insert(KeyUlonglong, ValueInt);
		break;
	case 104:
		*(multiNode->GetNode()->CPPmultinode104) = multimapUnion->CPPmultimap104->insert(KeyUlonglong, ValueUint);
		break;
	case 105:
		*(multiNode->GetNode()->CPPmultinode105) = multimapUnion->CPPmultimap105->insert(KeyUlonglong, ValueLonglong);
		break;
	case 106:
		*(multiNode->GetNode()->CPPmultinode106) = multimapUnion->CPPmultimap106->insert(KeyUlonglong, ValueUlonglong);
		break;
	case 107:
		*(multiNode->GetNode()->CPPmultinode107) = multimapUnion->CPPmultimap107->insert(KeyUlonglong, ValueFloat);
		break;
	case 108:
		*(multiNode->GetNode()->CPPmultinode108) = multimapUnion->CPPmultimap108->insert(KeyUlonglong, ValueDouble);
		break;
	case 109:
		*(multiNode->GetNode()->CPPmultinode109) = multimapUnion->CPPmultimap109->insert(KeyUlonglong, ValueWchar);
		break;
	case 110:
		*(multiNode->GetNode()->CPPmultinode110) = multimapUnion->CPPmultimap110->insert(KeyUlonglong, ValueBool);
		break;
	case 111:
		*(multiNode->GetNode()->CPPmultinode111) = multimapUnion->CPPmultimap111->insert(KeyUlonglong, ValueWstring);
		break;
	case 112:
		*(multiNode->GetNode()->CPPmultinode112) = multimapUnion->CPPmultimap112->insert(KeyUlonglong, Value__Int);
		break;
	case 113:
		*(multiNode->GetNode()->CPPmultinode113) = multimapUnion->CPPmultimap113->insert(KeyFloat, ValueUchar);
		break;
	case 114:
		*(multiNode->GetNode()->CPPmultinode114) = multimapUnion->CPPmultimap114->insert(KeyFloat, ValueChar);
		break;
	case 115:
		*(multiNode->GetNode()->CPPmultinode115) = multimapUnion->CPPmultimap115->insert(KeyFloat, ValueShort);
		break;
	case 116:
		*(multiNode->GetNode()->CPPmultinode116) = multimapUnion->CPPmultimap116->insert(KeyFloat, ValueUshort);
		break;
	case 117:
		*(multiNode->GetNode()->CPPmultinode117) = multimapUnion->CPPmultimap117->insert(KeyFloat, ValueInt);
		break;
	case 118:
		*(multiNode->GetNode()->CPPmultinode118) = multimapUnion->CPPmultimap118->insert(KeyFloat, ValueUint);
		break;
	case 119:
		*(multiNode->GetNode()->CPPmultinode119) = multimapUnion->CPPmultimap119->insert(KeyFloat, ValueLonglong);
		break;
	case 120:
		*(multiNode->GetNode()->CPPmultinode120) = multimapUnion->CPPmultimap120->insert(KeyFloat, ValueUlonglong);
		break;
	case 121:
		*(multiNode->GetNode()->CPPmultinode121) = multimapUnion->CPPmultimap121->insert(KeyFloat, ValueFloat);
		break;
	case 122:
		*(multiNode->GetNode()->CPPmultinode122) = multimapUnion->CPPmultimap122->insert(KeyFloat, ValueDouble);
		break;
	case 123:
		*(multiNode->GetNode()->CPPmultinode123) = multimapUnion->CPPmultimap123->insert(KeyFloat, ValueWchar);
		break;
	case 124:
		*(multiNode->GetNode()->CPPmultinode124) = multimapUnion->CPPmultimap124->insert(KeyFloat, ValueBool);
		break;
	case 125:
		*(multiNode->GetNode()->CPPmultinode125) = multimapUnion->CPPmultimap125->insert(KeyFloat, ValueWstring);
		break;
	case 126:
		*(multiNode->GetNode()->CPPmultinode126) = multimapUnion->CPPmultimap126->insert(KeyFloat, Value__Int);
		break;
	case 127:
		*(multiNode->GetNode()->CPPmultinode127) = multimapUnion->CPPmultimap127->insert(KeyDouble, ValueUchar);
		break;
	case 128:
		*(multiNode->GetNode()->CPPmultinode128) = multimapUnion->CPPmultimap128->insert(KeyDouble, ValueChar);
		break;
	case 129:
		*(multiNode->GetNode()->CPPmultinode129) = multimapUnion->CPPmultimap129->insert(KeyDouble, ValueShort);
		break;
	case 130:
		*(multiNode->GetNode()->CPPmultinode130) = multimapUnion->CPPmultimap130->insert(KeyDouble, ValueUshort);
		break;
	case 131:
		*(multiNode->GetNode()->CPPmultinode131) = multimapUnion->CPPmultimap131->insert(KeyDouble, ValueInt);
		break;
	case 132:
		*(multiNode->GetNode()->CPPmultinode132) = multimapUnion->CPPmultimap132->insert(KeyDouble, ValueUint);
		break;
	case 133:
		*(multiNode->GetNode()->CPPmultinode133) = multimapUnion->CPPmultimap133->insert(KeyDouble, ValueLonglong);
		break;
	case 134:
		*(multiNode->GetNode()->CPPmultinode134) = multimapUnion->CPPmultimap134->insert(KeyDouble, ValueUlonglong);
		break;
	case 135:
		*(multiNode->GetNode()->CPPmultinode135) = multimapUnion->CPPmultimap135->insert(KeyDouble, ValueFloat);
		break;
	case 136:
		*(multiNode->GetNode()->CPPmultinode136) = multimapUnion->CPPmultimap136->insert(KeyDouble, ValueDouble);
		break;
	case 137:
		*(multiNode->GetNode()->CPPmultinode137) = multimapUnion->CPPmultimap137->insert(KeyDouble, ValueWchar);
		break;
	case 138:
		*(multiNode->GetNode()->CPPmultinode138) = multimapUnion->CPPmultimap138->insert(KeyDouble, ValueBool);
		break;
	case 139:
		*(multiNode->GetNode()->CPPmultinode139) = multimapUnion->CPPmultimap139->insert(KeyDouble, ValueWstring);
		break;
	case 140:
		*(multiNode->GetNode()->CPPmultinode140) = multimapUnion->CPPmultimap140->insert(KeyDouble, Value__Int);
		break;
	case 141:
		*(multiNode->GetNode()->CPPmultinode141) = multimapUnion->CPPmultimap141->insert(KeyWchar, ValueUchar);
		break;
	case 142:
		*(multiNode->GetNode()->CPPmultinode142) = multimapUnion->CPPmultimap142->insert(KeyWchar, ValueChar);
		break;
	case 143:
		*(multiNode->GetNode()->CPPmultinode143) = multimapUnion->CPPmultimap143->insert(KeyWchar, ValueShort);
		break;
	case 144:
		*(multiNode->GetNode()->CPPmultinode144) = multimapUnion->CPPmultimap144->insert(KeyWchar, ValueUshort);
		break;
	case 145:
		*(multiNode->GetNode()->CPPmultinode145) = multimapUnion->CPPmultimap145->insert(KeyWchar, ValueInt);
		break;
	case 146:
		*(multiNode->GetNode()->CPPmultinode146) = multimapUnion->CPPmultimap146->insert(KeyWchar, ValueUint);
		break;
	case 147:
		*(multiNode->GetNode()->CPPmultinode147) = multimapUnion->CPPmultimap147->insert(KeyWchar, ValueLonglong);
		break;
	case 148:
		*(multiNode->GetNode()->CPPmultinode148) = multimapUnion->CPPmultimap148->insert(KeyWchar, ValueUlonglong);
		break;
	case 149:
		*(multiNode->GetNode()->CPPmultinode149) = multimapUnion->CPPmultimap149->insert(KeyWchar, ValueFloat);
		break;
	case 150:
		*(multiNode->GetNode()->CPPmultinode150) = multimapUnion->CPPmultimap150->insert(KeyWchar, ValueDouble);
		break;
	case 151:
		*(multiNode->GetNode()->CPPmultinode151) = multimapUnion->CPPmultimap151->insert(KeyWchar, ValueWchar);
		break;
	case 152:
		*(multiNode->GetNode()->CPPmultinode152) = multimapUnion->CPPmultimap152->insert(KeyWchar, ValueBool);
		break;
	case 153:
		*(multiNode->GetNode()->CPPmultinode153) = multimapUnion->CPPmultimap153->insert(KeyWchar, ValueWstring);
		break;
	case 154:
		*(multiNode->GetNode()->CPPmultinode154) = multimapUnion->CPPmultimap154->insert(KeyWchar, Value__Int);
		break;
	case 155:
		*(multiNode->GetNode()->CPPmultinode155) = multimapUnion->CPPmultimap155->insert(KeyBool, ValueUchar);
		break;
	case 156:
		*(multiNode->GetNode()->CPPmultinode156) = multimapUnion->CPPmultimap156->insert(KeyBool, ValueChar);
		break;
	case 157:
		*(multiNode->GetNode()->CPPmultinode157) = multimapUnion->CPPmultimap157->insert(KeyBool, ValueShort);
		break;
	case 158:
		*(multiNode->GetNode()->CPPmultinode158) = multimapUnion->CPPmultimap158->insert(KeyBool, ValueUshort);
		break;
	case 159:
		*(multiNode->GetNode()->CPPmultinode159) = multimapUnion->CPPmultimap159->insert(KeyBool, ValueInt);
		break;
	case 160:
		*(multiNode->GetNode()->CPPmultinode160) = multimapUnion->CPPmultimap160->insert(KeyBool, ValueUint);
		break;
	case 161:
		*(multiNode->GetNode()->CPPmultinode161) = multimapUnion->CPPmultimap161->insert(KeyBool, ValueLonglong);
		break;
	case 162:
		*(multiNode->GetNode()->CPPmultinode162) = multimapUnion->CPPmultimap162->insert(KeyBool, ValueUlonglong);
		break;
	case 163:
		*(multiNode->GetNode()->CPPmultinode163) = multimapUnion->CPPmultimap163->insert(KeyBool, ValueFloat);
		break;
	case 164:
		*(multiNode->GetNode()->CPPmultinode164) = multimapUnion->CPPmultimap164->insert(KeyBool, ValueDouble);
		break;
	case 165:
		*(multiNode->GetNode()->CPPmultinode165) = multimapUnion->CPPmultimap165->insert(KeyBool, ValueWchar);
		break;
	case 166:
		*(multiNode->GetNode()->CPPmultinode166) = multimapUnion->CPPmultimap166->insert(KeyBool, ValueBool);
		break;
	case 167:
		*(multiNode->GetNode()->CPPmultinode167) = multimapUnion->CPPmultimap167->insert(KeyBool, ValueWstring);
		break;
	case 168:
		*(multiNode->GetNode()->CPPmultinode168) = multimapUnion->CPPmultimap168->insert(KeyBool, Value__Int);
		break;
	case 169:
		*(multiNode->GetNode()->CPPmultinode169) = multimapUnion->CPPmultimap169->insert(KeyWstring, ValueUchar);
		break;
	case 170:
		*(multiNode->GetNode()->CPPmultinode170) = multimapUnion->CPPmultimap170->insert(KeyWstring, ValueChar);
		break;
	case 171:
		*(multiNode->GetNode()->CPPmultinode171) = multimapUnion->CPPmultimap171->insert(KeyWstring, ValueShort);
		break;
	case 172:
		*(multiNode->GetNode()->CPPmultinode172) = multimapUnion->CPPmultimap172->insert(KeyWstring, ValueUshort);
		break;
	case 173:
		*(multiNode->GetNode()->CPPmultinode173) = multimapUnion->CPPmultimap173->insert(KeyWstring, ValueInt);
		break;
	case 174:
		*(multiNode->GetNode()->CPPmultinode174) = multimapUnion->CPPmultimap174->insert(KeyWstring, ValueUint);
		break;
	case 175:
		*(multiNode->GetNode()->CPPmultinode175) = multimapUnion->CPPmultimap175->insert(KeyWstring, ValueLonglong);
		break;
	case 176:
		*(multiNode->GetNode()->CPPmultinode176) = multimapUnion->CPPmultimap176->insert(KeyWstring, ValueUlonglong);
		break;
	case 177:
		*(multiNode->GetNode()->CPPmultinode177) = multimapUnion->CPPmultimap177->insert(KeyWstring, ValueFloat);
		break;
	case 178:
		*(multiNode->GetNode()->CPPmultinode178) = multimapUnion->CPPmultimap178->insert(KeyWstring, ValueDouble);
		break;
	case 179:
		*(multiNode->GetNode()->CPPmultinode179) = multimapUnion->CPPmultimap179->insert(KeyWstring, ValueWchar);
		break;
	case 180:
		*(multiNode->GetNode()->CPPmultinode180) = multimapUnion->CPPmultimap180->insert(KeyWstring, ValueBool);
		break;
	case 181:
		*(multiNode->GetNode()->CPPmultinode181) = multimapUnion->CPPmultimap181->insert(KeyWstring, ValueWstring);
		break;
	case 182:
		*(multiNode->GetNode()->CPPmultinode182) = multimapUnion->CPPmultimap182->insert(KeyWstring, Value__Int);
		break;
	case 183:
		*(multiNode->GetNode()->CPPmultinode183) = multimapUnion->CPPmultimap183->insert(Key__Int, ValueUchar);
		break;
	case 184:
		*(multiNode->GetNode()->CPPmultinode184) = multimapUnion->CPPmultimap184->insert(Key__Int, ValueChar);
		break;
	case 185:
		*(multiNode->GetNode()->CPPmultinode185) = multimapUnion->CPPmultimap185->insert(Key__Int, ValueShort);
		break;
	case 186:
		*(multiNode->GetNode()->CPPmultinode186) = multimapUnion->CPPmultimap186->insert(Key__Int, ValueUshort);
		break;
	case 187:
		*(multiNode->GetNode()->CPPmultinode187) = multimapUnion->CPPmultimap187->insert(Key__Int, ValueInt);
		break;
	case 188:
		*(multiNode->GetNode()->CPPmultinode188) = multimapUnion->CPPmultimap188->insert(Key__Int, ValueUint);
		break;
	case 189:
		*(multiNode->GetNode()->CPPmultinode189) = multimapUnion->CPPmultimap189->insert(Key__Int, ValueLonglong);
		break;
	case 190:
		*(multiNode->GetNode()->CPPmultinode190) = multimapUnion->CPPmultimap190->insert(Key__Int, ValueUlonglong);
		break;
	case 191:
		*(multiNode->GetNode()->CPPmultinode191) = multimapUnion->CPPmultimap191->insert(Key__Int, ValueFloat);
		break;
	case 192:
		*(multiNode->GetNode()->CPPmultinode192) = multimapUnion->CPPmultimap192->insert(Key__Int, ValueDouble);
		break;
	case 193:
		*(multiNode->GetNode()->CPPmultinode193) = multimapUnion->CPPmultimap193->insert(Key__Int, ValueWchar);
		break;
	case 194:
		*(multiNode->GetNode()->CPPmultinode194) = multimapUnion->CPPmultimap194->insert(Key__Int, ValueBool);
		break;
	case 195:
		*(multiNode->GetNode()->CPPmultinode195) = multimapUnion->CPPmultimap195->insert(Key__Int, ValueWstring);
		break;
	case 196:
		*(multiNode->GetNode()->CPPmultinode196) = multimapUnion->CPPmultimap196->insert(Key__Int, Value__Int);
		break;
	}
	return multiNode->DeepCopy();
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::insert(CShorpUnOrderedMultiNode<Key, Value>^ _Where, Key key, Value value)
{
	if (Object::ReferenceEquals(_Where, nullptr)) return nullptr;
	if (Object::ReferenceEquals(key, nullptr)) return nullptr;
	if (Object::ReferenceEquals(value, nullptr)) return nullptr;
	Type^ keyType = Key::typeid;
	Type^ valueType = Value::typeid;

	unsigned char KeyUchar = 0;
	char KeyChar = 0;
	short KeyShort = 0;
	unsigned short KeyUshort = 0;
	int KeyInt = 0;
	unsigned int KeyUint = 0;
	long long KeyLonglong = 0;
	unsigned long long KeyUlonglong = 0;
	float KeyFloat = 0.0f;
	double KeyDouble = 0;
	wchar_t KeyWchar = 0;
	bool KeyBool = false;
	std::wstring KeyWstring = L"";
	__int64 Key__Int = 0;

	if (keyType->Equals(System::Byte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUchar = static_cast<unsigned char>(safe_cast<System::Byte>(managedObject));
	}
	else if (keyType->Equals(System::SByte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyChar = static_cast<char>(safe_cast<System::SByte>(managedObject));
	}
	else if (keyType->Equals(System::Int16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyShort = static_cast<short>(safe_cast<System::Int16>(managedObject));
	}
	else if (keyType->Equals(System::UInt16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUshort = static_cast<unsigned short>(safe_cast<System::UInt16>(managedObject));
	}
	else if (keyType->Equals(System::Int32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyInt = static_cast<int>(safe_cast<System::Int32>(managedObject));
	}
	else if (keyType->Equals(System::UInt32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUint = static_cast<unsigned int>(safe_cast<System::UInt32>(managedObject));
	}
	else if (keyType->Equals(System::Int64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyLonglong = static_cast<long long>(safe_cast<System::Int64>(managedObject));
	}
	else if (keyType->Equals(System::UInt64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUlonglong = static_cast<unsigned long long>(safe_cast<System::UInt64>(managedObject));
	}
	else if (keyType->Equals(System::Single::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyFloat = static_cast<float>(safe_cast<System::Single>(managedObject));
	}
	else if (keyType->Equals(System::Double::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyDouble = static_cast<double>(safe_cast<System::Double>(managedObject));
	}
	else if (keyType->Equals(System::Char::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyWchar = static_cast<wchar_t>(safe_cast<System::Char>(managedObject));
	}
	else if (keyType->Equals(System::Boolean::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyBool = static_cast<bool>(safe_cast<System::Boolean>(managedObject));
	}
	else if (keyType->Equals(System::String::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		MarshalString(safe_cast<System::String^>(managedObject), KeyWstring);
	}
	else if (keyType->IsClass)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			gKeyClassDictionary->Add(key, nDictionaryKeyCount);
			gIntKeyClassDictionary->Add(nDictionaryKeyCount, key);
			Key__Int = nDictionaryKeyCount;
			nDictionaryKeyCount++;
		}
	}
	else if (keyType->IsValueType && !keyType->IsPrimitive && !keyType->IsEnum)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			gKeyClassDictionary->Add(key, nDictionaryKeyCount);
			gIntKeyClassDictionary->Add(nDictionaryKeyCount, key);
			Key__Int = nDictionaryKeyCount;
			nDictionaryKeyCount++;
		}
	}
	else if (keyType->IsInterface)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			gKeyClassDictionary->Add(key, nDictionaryKeyCount);
			gIntKeyClassDictionary->Add(nDictionaryKeyCount, key);
			Key__Int = nDictionaryKeyCount;
			nDictionaryKeyCount++;
		}
	}
	else
	{
		return nullptr;
	}

	unsigned char ValueUchar = 0;
	char ValueChar = 0;
	short ValueShort = 0;
	unsigned short ValueUshort = 0;
	int ValueInt = 0;
	unsigned int ValueUint = 0;
	long long ValueLonglong = 0;
	unsigned long long ValueUlonglong = 0;
	float ValueFloat = 0.0f;
	double ValueDouble = 0;
	wchar_t ValueWchar = 0;
	bool ValueBool = false;
	std::wstring ValueWstring = L"";
	__int64 Value__Int = 0;

	if (valueType->Equals(System::Byte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUchar = static_cast<unsigned char>(safe_cast<System::Byte>(managedObject));
	}
	else if (valueType->Equals(System::SByte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueChar = static_cast<char>(safe_cast<System::SByte>(managedObject));
	}
	else if (valueType->Equals(System::Int16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueShort = static_cast<short>(safe_cast<System::Int16>(managedObject));
	}
	else if (valueType->Equals(System::UInt16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUshort = static_cast<unsigned short>(safe_cast<System::UInt16>(managedObject));
	}
	else if (valueType->Equals(System::Int32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueInt = static_cast<int>(safe_cast<System::Int32>(managedObject));
	}
	else if (valueType->Equals(System::UInt32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUint = static_cast<unsigned int>(safe_cast<System::UInt32>(managedObject));
	}
	else if (valueType->Equals(System::Int64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueLonglong = static_cast<long long>(safe_cast<System::Int64>(managedObject));
	}
	else if (valueType->Equals(System::UInt64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUlonglong = static_cast<unsigned long long>(safe_cast<System::UInt64>(managedObject));
	}
	else if (valueType->Equals(System::Single::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueFloat = static_cast<float>(safe_cast<System::Single>(managedObject));
	}
	else if (valueType->Equals(System::Double::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueDouble = static_cast<double>(safe_cast<System::Double>(managedObject));
	}
	else if (valueType->Equals(System::Char::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueWchar = static_cast<wchar_t>(safe_cast<System::Char>(managedObject));
	}
	else if (valueType->Equals(System::Boolean::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueBool = static_cast<bool>(safe_cast<System::Boolean>(managedObject));
	}
	else if (valueType->Equals(System::String::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		MarshalString(safe_cast<System::String^>(managedObject), ValueWstring);
	}
	else if (valueType->IsClass)
	{
		gValueClassDictionary->Add(nDictionaryValueCount, value);
		Value__Int = nDictionaryValueCount;
		nDictionaryValueCount++;
	}
	else if (valueType->IsValueType && !valueType->IsPrimitive && !valueType->IsEnum)
	{
		gValueClassDictionary->Add(nDictionaryValueCount, value);
		Value__Int = nDictionaryValueCount;
		nDictionaryValueCount++;
	}
	else if (valueType->IsInterface)
	{
		gValueClassDictionary->Add(nDictionaryValueCount, value);
		Value__Int = nDictionaryValueCount;
		nDictionaryValueCount++;
	}
	else
	{
		GCHandle handle = GCHandle::Alloc(value);
		IntPtr ptr = GCHandle::ToIntPtr(handle);
		Value__Int = ptr.ToInt64();
		handle.Free();
		return nullptr;
	}

	switch (nKeyValueType)
	{
	case 0: default:
		return nullptr;
	case 1:
		*(multiNode->GetNode()->CPPmultinode1) = multimapUnion->CPPmultimap1->insert(*(_Where->GetNode()->CPPmultinode1), KeyUchar, ValueUchar);
		break;
	case 2:
		*(multiNode->GetNode()->CPPmultinode2) = multimapUnion->CPPmultimap2->insert(*(_Where->GetNode()->CPPmultinode2), KeyUchar, ValueChar);
		break;
	case 3:
		*(multiNode->GetNode()->CPPmultinode3) = multimapUnion->CPPmultimap3->insert(*(_Where->GetNode()->CPPmultinode3), KeyUchar, ValueShort);
		break;
	case 4:
		*(multiNode->GetNode()->CPPmultinode4) = multimapUnion->CPPmultimap4->insert(*(_Where->GetNode()->CPPmultinode4), KeyUchar, ValueUshort);
		break;
	case 5:
		*(multiNode->GetNode()->CPPmultinode5) = multimapUnion->CPPmultimap5->insert(*(_Where->GetNode()->CPPmultinode5), KeyUchar, ValueInt);
		break;
	case 6:
		*(multiNode->GetNode()->CPPmultinode6) = multimapUnion->CPPmultimap6->insert(*(_Where->GetNode()->CPPmultinode6), KeyUchar, ValueUint);
		break;
	case 7:
		*(multiNode->GetNode()->CPPmultinode7) = multimapUnion->CPPmultimap7->insert(*(_Where->GetNode()->CPPmultinode7), KeyUchar, ValueLonglong);
		break;
	case 8:
		*(multiNode->GetNode()->CPPmultinode8) = multimapUnion->CPPmultimap8->insert(*(_Where->GetNode()->CPPmultinode8), KeyUchar, ValueUlonglong);
		break;
	case 9:
		*(multiNode->GetNode()->CPPmultinode9) = multimapUnion->CPPmultimap9->insert(*(_Where->GetNode()->CPPmultinode9), KeyUchar, ValueFloat);
		break;
	case 10:
		*(multiNode->GetNode()->CPPmultinode10) = multimapUnion->CPPmultimap10->insert(*(_Where->GetNode()->CPPmultinode10), KeyUchar, ValueDouble);
		break;
	case 11:
		*(multiNode->GetNode()->CPPmultinode11) = multimapUnion->CPPmultimap11->insert(*(_Where->GetNode()->CPPmultinode11), KeyUchar, ValueWchar);
		break;
	case 12:
		*(multiNode->GetNode()->CPPmultinode12) = multimapUnion->CPPmultimap12->insert(*(_Where->GetNode()->CPPmultinode12), KeyUchar, ValueBool);
		break;
	case 13:
		*(multiNode->GetNode()->CPPmultinode13) = multimapUnion->CPPmultimap13->insert(*(_Where->GetNode()->CPPmultinode13), KeyUchar, ValueWstring);
		break;
	case 14:
		*(multiNode->GetNode()->CPPmultinode14) = multimapUnion->CPPmultimap14->insert(*(_Where->GetNode()->CPPmultinode14), KeyUchar, Value__Int);
		break;
	case 15:
		*(multiNode->GetNode()->CPPmultinode15) = multimapUnion->CPPmultimap15->insert(*(_Where->GetNode()->CPPmultinode15), KeyChar, ValueUchar);
		break;
	case 16:
		*(multiNode->GetNode()->CPPmultinode16) = multimapUnion->CPPmultimap16->insert(*(_Where->GetNode()->CPPmultinode16), KeyChar, ValueChar);
		break;
	case 17:
		*(multiNode->GetNode()->CPPmultinode17) = multimapUnion->CPPmultimap17->insert(*(_Where->GetNode()->CPPmultinode17), KeyChar, ValueShort);
		break;
	case 18:
		*(multiNode->GetNode()->CPPmultinode18) = multimapUnion->CPPmultimap18->insert(*(_Where->GetNode()->CPPmultinode18), KeyChar, ValueUshort);
		break;
	case 19:
		*(multiNode->GetNode()->CPPmultinode19) = multimapUnion->CPPmultimap19->insert(*(_Where->GetNode()->CPPmultinode19), KeyChar, ValueInt);
		break;
	case 20:
		*(multiNode->GetNode()->CPPmultinode20) = multimapUnion->CPPmultimap20->insert(*(_Where->GetNode()->CPPmultinode20), KeyChar, ValueUint);
		break;
	case 21:
		*(multiNode->GetNode()->CPPmultinode21) = multimapUnion->CPPmultimap21->insert(*(_Where->GetNode()->CPPmultinode21), KeyChar, ValueLonglong);
		break;
	case 22:
		*(multiNode->GetNode()->CPPmultinode22) = multimapUnion->CPPmultimap22->insert(*(_Where->GetNode()->CPPmultinode22), KeyChar, ValueUlonglong);
		break;
	case 23:
		*(multiNode->GetNode()->CPPmultinode23) = multimapUnion->CPPmultimap23->insert(*(_Where->GetNode()->CPPmultinode23), KeyChar, ValueFloat);
		break;
	case 24:
		*(multiNode->GetNode()->CPPmultinode24) = multimapUnion->CPPmultimap24->insert(*(_Where->GetNode()->CPPmultinode24), KeyChar, ValueDouble);
		break;
	case 25:
		*(multiNode->GetNode()->CPPmultinode25) = multimapUnion->CPPmultimap25->insert(*(_Where->GetNode()->CPPmultinode25), KeyChar, ValueWchar);
		break;
	case 26:
		*(multiNode->GetNode()->CPPmultinode26) = multimapUnion->CPPmultimap26->insert(*(_Where->GetNode()->CPPmultinode26), KeyChar, ValueBool);
		break;
	case 27:
		*(multiNode->GetNode()->CPPmultinode27) = multimapUnion->CPPmultimap27->insert(*(_Where->GetNode()->CPPmultinode27), KeyChar, ValueWstring);
		break;
	case 28:
		*(multiNode->GetNode()->CPPmultinode28) = multimapUnion->CPPmultimap28->insert(*(_Where->GetNode()->CPPmultinode28), KeyChar, Value__Int);
		break;
	case 29:
		*(multiNode->GetNode()->CPPmultinode29) = multimapUnion->CPPmultimap29->insert(*(_Where->GetNode()->CPPmultinode29), KeyShort, ValueUchar);
		break;
	case 30:
		*(multiNode->GetNode()->CPPmultinode30) = multimapUnion->CPPmultimap30->insert(*(_Where->GetNode()->CPPmultinode30), KeyShort, ValueChar);
		break;
	case 31:
		*(multiNode->GetNode()->CPPmultinode31) = multimapUnion->CPPmultimap31->insert(*(_Where->GetNode()->CPPmultinode31), KeyShort, ValueShort);
		break;
	case 32:
		*(multiNode->GetNode()->CPPmultinode32) = multimapUnion->CPPmultimap32->insert(*(_Where->GetNode()->CPPmultinode32), KeyShort, ValueUshort);
		break;
	case 33:
		*(multiNode->GetNode()->CPPmultinode33) = multimapUnion->CPPmultimap33->insert(*(_Where->GetNode()->CPPmultinode33), KeyShort, ValueInt);
		break;
	case 34:
		*(multiNode->GetNode()->CPPmultinode34) = multimapUnion->CPPmultimap34->insert(*(_Where->GetNode()->CPPmultinode34), KeyShort, ValueUint);
		break;
	case 35:
		*(multiNode->GetNode()->CPPmultinode35) = multimapUnion->CPPmultimap35->insert(*(_Where->GetNode()->CPPmultinode35), KeyShort, ValueLonglong);
		break;
	case 36:
		*(multiNode->GetNode()->CPPmultinode36) = multimapUnion->CPPmultimap36->insert(*(_Where->GetNode()->CPPmultinode36), KeyShort, ValueUlonglong);
		break;
	case 37:
		*(multiNode->GetNode()->CPPmultinode37) = multimapUnion->CPPmultimap37->insert(*(_Where->GetNode()->CPPmultinode37), KeyShort, ValueFloat);
		break;
	case 38:
		*(multiNode->GetNode()->CPPmultinode38) = multimapUnion->CPPmultimap38->insert(*(_Where->GetNode()->CPPmultinode38), KeyShort, ValueDouble);
		break;
	case 39:
		*(multiNode->GetNode()->CPPmultinode39) = multimapUnion->CPPmultimap39->insert(*(_Where->GetNode()->CPPmultinode39), KeyShort, ValueWchar);
		break;
	case 40:
		*(multiNode->GetNode()->CPPmultinode40) = multimapUnion->CPPmultimap40->insert(*(_Where->GetNode()->CPPmultinode40), KeyShort, ValueBool);
		break;
	case 41:
		*(multiNode->GetNode()->CPPmultinode41) = multimapUnion->CPPmultimap41->insert(*(_Where->GetNode()->CPPmultinode41), KeyShort, ValueWstring);
		break;
	case 42:
		*(multiNode->GetNode()->CPPmultinode42) = multimapUnion->CPPmultimap42->insert(*(_Where->GetNode()->CPPmultinode42), KeyShort, Value__Int);
		break;
	case 43:
		*(multiNode->GetNode()->CPPmultinode43) = multimapUnion->CPPmultimap43->insert(*(_Where->GetNode()->CPPmultinode43), KeyUshort, ValueUchar);
		break;
	case 44:
		*(multiNode->GetNode()->CPPmultinode44) = multimapUnion->CPPmultimap44->insert(*(_Where->GetNode()->CPPmultinode44), KeyUshort, ValueChar);
		break;
	case 45:
		*(multiNode->GetNode()->CPPmultinode45) = multimapUnion->CPPmultimap45->insert(*(_Where->GetNode()->CPPmultinode45), KeyUshort, ValueShort);
		break;
	case 46:
		*(multiNode->GetNode()->CPPmultinode46) = multimapUnion->CPPmultimap46->insert(*(_Where->GetNode()->CPPmultinode46), KeyUshort, ValueUshort);
		break;
	case 47:
		*(multiNode->GetNode()->CPPmultinode47) = multimapUnion->CPPmultimap47->insert(*(_Where->GetNode()->CPPmultinode47), KeyUshort, ValueInt);
		break;
	case 48:
		*(multiNode->GetNode()->CPPmultinode48) = multimapUnion->CPPmultimap48->insert(*(_Where->GetNode()->CPPmultinode48), KeyUshort, ValueUint);
		break;
	case 49:
		*(multiNode->GetNode()->CPPmultinode49) = multimapUnion->CPPmultimap49->insert(*(_Where->GetNode()->CPPmultinode49), KeyUshort, ValueLonglong);
		break;
	case 50:
		*(multiNode->GetNode()->CPPmultinode50) = multimapUnion->CPPmultimap50->insert(*(_Where->GetNode()->CPPmultinode50), KeyUshort, ValueUlonglong);
		break;
	case 51:
		*(multiNode->GetNode()->CPPmultinode51) = multimapUnion->CPPmultimap51->insert(*(_Where->GetNode()->CPPmultinode51), KeyUshort, ValueFloat);
		break;
	case 52:
		*(multiNode->GetNode()->CPPmultinode52) = multimapUnion->CPPmultimap52->insert(*(_Where->GetNode()->CPPmultinode52), KeyUshort, ValueDouble);
		break;
	case 53:
		*(multiNode->GetNode()->CPPmultinode53) = multimapUnion->CPPmultimap53->insert(*(_Where->GetNode()->CPPmultinode53), KeyUshort, ValueWchar);
		break;
	case 54:
		*(multiNode->GetNode()->CPPmultinode54) = multimapUnion->CPPmultimap54->insert(*(_Where->GetNode()->CPPmultinode54), KeyUshort, ValueBool);
		break;
	case 55:
		*(multiNode->GetNode()->CPPmultinode55) = multimapUnion->CPPmultimap55->insert(*(_Where->GetNode()->CPPmultinode55), KeyUshort, ValueWstring);
		break;
	case 56:
		*(multiNode->GetNode()->CPPmultinode56) = multimapUnion->CPPmultimap56->insert(*(_Where->GetNode()->CPPmultinode56), KeyUshort, Value__Int);
		break;
	case 57:
		*(multiNode->GetNode()->CPPmultinode57) = multimapUnion->CPPmultimap57->insert(*(_Where->GetNode()->CPPmultinode57), KeyInt, ValueUchar);
		break;
	case 58:
		*(multiNode->GetNode()->CPPmultinode58) = multimapUnion->CPPmultimap58->insert(*(_Where->GetNode()->CPPmultinode58), KeyInt, ValueChar);
		break;
	case 59:
		*(multiNode->GetNode()->CPPmultinode59) = multimapUnion->CPPmultimap59->insert(*(_Where->GetNode()->CPPmultinode59), KeyInt, ValueShort);
		break;
	case 60:
		*(multiNode->GetNode()->CPPmultinode60) = multimapUnion->CPPmultimap60->insert(*(_Where->GetNode()->CPPmultinode60), KeyInt, ValueUshort);
		break;
	case 61:
		*(multiNode->GetNode()->CPPmultinode61) = multimapUnion->CPPmultimap61->insert(*(_Where->GetNode()->CPPmultinode61), KeyInt, ValueInt);
		break;
	case 62:
		*(multiNode->GetNode()->CPPmultinode62) = multimapUnion->CPPmultimap62->insert(*(_Where->GetNode()->CPPmultinode62), KeyInt, ValueUint);
		break;
	case 63:
		*(multiNode->GetNode()->CPPmultinode63) = multimapUnion->CPPmultimap63->insert(*(_Where->GetNode()->CPPmultinode63), KeyInt, ValueLonglong);
		break;
	case 64:
		*(multiNode->GetNode()->CPPmultinode64) = multimapUnion->CPPmultimap64->insert(*(_Where->GetNode()->CPPmultinode64), KeyInt, ValueUlonglong);
		break;
	case 65:
		*(multiNode->GetNode()->CPPmultinode65) = multimapUnion->CPPmultimap65->insert(*(_Where->GetNode()->CPPmultinode65), KeyInt, ValueFloat);
		break;
	case 66:
		*(multiNode->GetNode()->CPPmultinode66) = multimapUnion->CPPmultimap66->insert(*(_Where->GetNode()->CPPmultinode66), KeyInt, ValueDouble);
		break;
	case 67:
		*(multiNode->GetNode()->CPPmultinode67) = multimapUnion->CPPmultimap67->insert(*(_Where->GetNode()->CPPmultinode67), KeyInt, ValueWchar);
		break;
	case 68:
		*(multiNode->GetNode()->CPPmultinode68) = multimapUnion->CPPmultimap68->insert(*(_Where->GetNode()->CPPmultinode68), KeyInt, ValueBool);
		break;
	case 69:
		*(multiNode->GetNode()->CPPmultinode69) = multimapUnion->CPPmultimap69->insert(*(_Where->GetNode()->CPPmultinode69), KeyInt, ValueWstring);
		break;
	case 70:
		*(multiNode->GetNode()->CPPmultinode70) = multimapUnion->CPPmultimap70->insert(*(_Where->GetNode()->CPPmultinode70), KeyInt, Value__Int);
		break;
	case 71:
		*(multiNode->GetNode()->CPPmultinode71) = multimapUnion->CPPmultimap71->insert(*(_Where->GetNode()->CPPmultinode71), KeyUint, ValueUchar);
		break;
	case 72:
		*(multiNode->GetNode()->CPPmultinode72) = multimapUnion->CPPmultimap72->insert(*(_Where->GetNode()->CPPmultinode72), KeyUint, ValueChar);
		break;
	case 73:
		*(multiNode->GetNode()->CPPmultinode73) = multimapUnion->CPPmultimap73->insert(*(_Where->GetNode()->CPPmultinode73), KeyUint, ValueShort);
		break;
	case 74:
		*(multiNode->GetNode()->CPPmultinode74) = multimapUnion->CPPmultimap74->insert(*(_Where->GetNode()->CPPmultinode74), KeyUint, ValueUshort);
		break;
	case 75:
		*(multiNode->GetNode()->CPPmultinode75) = multimapUnion->CPPmultimap75->insert(*(_Where->GetNode()->CPPmultinode75), KeyUint, ValueInt);
		break;
	case 76:
		*(multiNode->GetNode()->CPPmultinode76) = multimapUnion->CPPmultimap76->insert(*(_Where->GetNode()->CPPmultinode76), KeyUint, ValueUint);
		break;
	case 77:
		*(multiNode->GetNode()->CPPmultinode77) = multimapUnion->CPPmultimap77->insert(*(_Where->GetNode()->CPPmultinode77), KeyUint, ValueLonglong);
		break;
	case 78:
		*(multiNode->GetNode()->CPPmultinode78) = multimapUnion->CPPmultimap78->insert(*(_Where->GetNode()->CPPmultinode78), KeyUint, ValueUlonglong);
		break;
	case 79:
		*(multiNode->GetNode()->CPPmultinode79) = multimapUnion->CPPmultimap79->insert(*(_Where->GetNode()->CPPmultinode79), KeyUint, ValueFloat);
		break;
	case 80:
		*(multiNode->GetNode()->CPPmultinode80) = multimapUnion->CPPmultimap80->insert(*(_Where->GetNode()->CPPmultinode80), KeyUint, ValueDouble);
		break;
	case 81:
		*(multiNode->GetNode()->CPPmultinode81) = multimapUnion->CPPmultimap81->insert(*(_Where->GetNode()->CPPmultinode81), KeyUint, ValueWchar);
		break;
	case 82:
		*(multiNode->GetNode()->CPPmultinode82) = multimapUnion->CPPmultimap82->insert(*(_Where->GetNode()->CPPmultinode82), KeyUint, ValueBool);
		break;
	case 83:
		*(multiNode->GetNode()->CPPmultinode83) = multimapUnion->CPPmultimap83->insert(*(_Where->GetNode()->CPPmultinode83), KeyUint, ValueWstring);
		break;
	case 84:
		*(multiNode->GetNode()->CPPmultinode84) = multimapUnion->CPPmultimap84->insert(*(_Where->GetNode()->CPPmultinode84), KeyUint, Value__Int);
		break;
	case 85:
		*(multiNode->GetNode()->CPPmultinode85) = multimapUnion->CPPmultimap85->insert(*(_Where->GetNode()->CPPmultinode85), KeyLonglong, ValueUchar);
		break;
	case 86:
		*(multiNode->GetNode()->CPPmultinode86) = multimapUnion->CPPmultimap86->insert(*(_Where->GetNode()->CPPmultinode86), KeyLonglong, ValueChar);
		break;
	case 87:
		*(multiNode->GetNode()->CPPmultinode87) = multimapUnion->CPPmultimap87->insert(*(_Where->GetNode()->CPPmultinode87), KeyLonglong, ValueShort);
		break;
	case 88:
		*(multiNode->GetNode()->CPPmultinode88) = multimapUnion->CPPmultimap88->insert(*(_Where->GetNode()->CPPmultinode88), KeyLonglong, ValueUshort);
		break;
	case 89:
		*(multiNode->GetNode()->CPPmultinode89) = multimapUnion->CPPmultimap89->insert(*(_Where->GetNode()->CPPmultinode89), KeyLonglong, ValueInt);
		break;
	case 90:
		*(multiNode->GetNode()->CPPmultinode90) = multimapUnion->CPPmultimap90->insert(*(_Where->GetNode()->CPPmultinode90), KeyLonglong, ValueUint);
		break;
	case 91:
		*(multiNode->GetNode()->CPPmultinode91) = multimapUnion->CPPmultimap91->insert(*(_Where->GetNode()->CPPmultinode91), KeyLonglong, ValueLonglong);
		break;
	case 92:
		*(multiNode->GetNode()->CPPmultinode92) = multimapUnion->CPPmultimap92->insert(*(_Where->GetNode()->CPPmultinode92), KeyLonglong, ValueUlonglong);
		break;
	case 93:
		*(multiNode->GetNode()->CPPmultinode93) = multimapUnion->CPPmultimap93->insert(*(_Where->GetNode()->CPPmultinode93), KeyLonglong, ValueFloat);
		break;
	case 94:
		*(multiNode->GetNode()->CPPmultinode94) = multimapUnion->CPPmultimap94->insert(*(_Where->GetNode()->CPPmultinode94), KeyLonglong, ValueDouble);
		break;
	case 95:
		*(multiNode->GetNode()->CPPmultinode95) = multimapUnion->CPPmultimap95->insert(*(_Where->GetNode()->CPPmultinode95), KeyLonglong, ValueWchar);
		break;
	case 96:
		*(multiNode->GetNode()->CPPmultinode96) = multimapUnion->CPPmultimap96->insert(*(_Where->GetNode()->CPPmultinode96), KeyLonglong, ValueBool);
		break;
	case 97:
		*(multiNode->GetNode()->CPPmultinode97) = multimapUnion->CPPmultimap97->insert(*(_Where->GetNode()->CPPmultinode97), KeyLonglong, ValueWstring);
		break;
	case 98:
		*(multiNode->GetNode()->CPPmultinode98) = multimapUnion->CPPmultimap98->insert(*(_Where->GetNode()->CPPmultinode98), KeyLonglong, Value__Int);
		break;
	case 99:
		*(multiNode->GetNode()->CPPmultinode99) = multimapUnion->CPPmultimap99->insert(*(_Where->GetNode()->CPPmultinode99), KeyUlonglong, ValueUchar);
		break;
	case 100:
		*(multiNode->GetNode()->CPPmultinode100) = multimapUnion->CPPmultimap100->insert(*(_Where->GetNode()->CPPmultinode100), KeyUlonglong, ValueChar);
		break;
	case 101:
		*(multiNode->GetNode()->CPPmultinode101) = multimapUnion->CPPmultimap101->insert(*(_Where->GetNode()->CPPmultinode101), KeyUlonglong, ValueShort);
		break;
	case 102:
		*(multiNode->GetNode()->CPPmultinode102) = multimapUnion->CPPmultimap102->insert(*(_Where->GetNode()->CPPmultinode102), KeyUlonglong, ValueUshort);
		break;
	case 103:
		*(multiNode->GetNode()->CPPmultinode103) = multimapUnion->CPPmultimap103->insert(*(_Where->GetNode()->CPPmultinode103), KeyUlonglong, ValueInt);
		break;
	case 104:
		*(multiNode->GetNode()->CPPmultinode104) = multimapUnion->CPPmultimap104->insert(*(_Where->GetNode()->CPPmultinode104), KeyUlonglong, ValueUint);
		break;
	case 105:
		*(multiNode->GetNode()->CPPmultinode105) = multimapUnion->CPPmultimap105->insert(*(_Where->GetNode()->CPPmultinode105), KeyUlonglong, ValueLonglong);
		break;
	case 106:
		*(multiNode->GetNode()->CPPmultinode106) = multimapUnion->CPPmultimap106->insert(*(_Where->GetNode()->CPPmultinode106), KeyUlonglong, ValueUlonglong);
		break;
	case 107:
		*(multiNode->GetNode()->CPPmultinode107) = multimapUnion->CPPmultimap107->insert(*(_Where->GetNode()->CPPmultinode107), KeyUlonglong, ValueFloat);
		break;
	case 108:
		*(multiNode->GetNode()->CPPmultinode108) = multimapUnion->CPPmultimap108->insert(*(_Where->GetNode()->CPPmultinode108), KeyUlonglong, ValueDouble);
		break;
	case 109:
		*(multiNode->GetNode()->CPPmultinode109) = multimapUnion->CPPmultimap109->insert(*(_Where->GetNode()->CPPmultinode109), KeyUlonglong, ValueWchar);
		break;
	case 110:
		*(multiNode->GetNode()->CPPmultinode110) = multimapUnion->CPPmultimap110->insert(*(_Where->GetNode()->CPPmultinode110), KeyUlonglong, ValueBool);
		break;
	case 111:
		*(multiNode->GetNode()->CPPmultinode111) = multimapUnion->CPPmultimap111->insert(*(_Where->GetNode()->CPPmultinode111), KeyUlonglong, ValueWstring);
		break;
	case 112:
		*(multiNode->GetNode()->CPPmultinode112) = multimapUnion->CPPmultimap112->insert(*(_Where->GetNode()->CPPmultinode112), KeyUlonglong, Value__Int);
		break;
	case 113:
		*(multiNode->GetNode()->CPPmultinode113) = multimapUnion->CPPmultimap113->insert(*(_Where->GetNode()->CPPmultinode113), KeyFloat, ValueUchar);
		break;
	case 114:
		*(multiNode->GetNode()->CPPmultinode114) = multimapUnion->CPPmultimap114->insert(*(_Where->GetNode()->CPPmultinode114), KeyFloat, ValueChar);
		break;
	case 115:
		*(multiNode->GetNode()->CPPmultinode115) = multimapUnion->CPPmultimap115->insert(*(_Where->GetNode()->CPPmultinode115), KeyFloat, ValueShort);
		break;
	case 116:
		*(multiNode->GetNode()->CPPmultinode116) = multimapUnion->CPPmultimap116->insert(*(_Where->GetNode()->CPPmultinode116), KeyFloat, ValueUshort);
		break;
	case 117:
		*(multiNode->GetNode()->CPPmultinode117) = multimapUnion->CPPmultimap117->insert(*(_Where->GetNode()->CPPmultinode117), KeyFloat, ValueInt);
		break;
	case 118:
		*(multiNode->GetNode()->CPPmultinode118) = multimapUnion->CPPmultimap118->insert(*(_Where->GetNode()->CPPmultinode118), KeyFloat, ValueUint);
		break;
	case 119:
		*(multiNode->GetNode()->CPPmultinode119) = multimapUnion->CPPmultimap119->insert(*(_Where->GetNode()->CPPmultinode119), KeyFloat, ValueLonglong);
		break;
	case 120:
		*(multiNode->GetNode()->CPPmultinode120) = multimapUnion->CPPmultimap120->insert(*(_Where->GetNode()->CPPmultinode120), KeyFloat, ValueUlonglong);
		break;
	case 121:
		*(multiNode->GetNode()->CPPmultinode121) = multimapUnion->CPPmultimap121->insert(*(_Where->GetNode()->CPPmultinode121), KeyFloat, ValueFloat);
		break;
	case 122:
		*(multiNode->GetNode()->CPPmultinode122) = multimapUnion->CPPmultimap122->insert(*(_Where->GetNode()->CPPmultinode122), KeyFloat, ValueDouble);
		break;
	case 123:
		*(multiNode->GetNode()->CPPmultinode123) = multimapUnion->CPPmultimap123->insert(*(_Where->GetNode()->CPPmultinode123), KeyFloat, ValueWchar);
		break;
	case 124:
		*(multiNode->GetNode()->CPPmultinode124) = multimapUnion->CPPmultimap124->insert(*(_Where->GetNode()->CPPmultinode124), KeyFloat, ValueBool);
		break;
	case 125:
		*(multiNode->GetNode()->CPPmultinode125) = multimapUnion->CPPmultimap125->insert(*(_Where->GetNode()->CPPmultinode125), KeyFloat, ValueWstring);
		break;
	case 126:
		*(multiNode->GetNode()->CPPmultinode126) = multimapUnion->CPPmultimap126->insert(*(_Where->GetNode()->CPPmultinode126), KeyFloat, Value__Int);
		break;
	case 127:
		*(multiNode->GetNode()->CPPmultinode127) = multimapUnion->CPPmultimap127->insert(*(_Where->GetNode()->CPPmultinode127), KeyDouble, ValueUchar);
		break;
	case 128:
		*(multiNode->GetNode()->CPPmultinode128) = multimapUnion->CPPmultimap128->insert(*(_Where->GetNode()->CPPmultinode128), KeyDouble, ValueChar);
		break;
	case 129:
		*(multiNode->GetNode()->CPPmultinode129) = multimapUnion->CPPmultimap129->insert(*(_Where->GetNode()->CPPmultinode129), KeyDouble, ValueShort);
		break;
	case 130:
		*(multiNode->GetNode()->CPPmultinode130) = multimapUnion->CPPmultimap130->insert(*(_Where->GetNode()->CPPmultinode130), KeyDouble, ValueUshort);
		break;
	case 131:
		*(multiNode->GetNode()->CPPmultinode131) = multimapUnion->CPPmultimap131->insert(*(_Where->GetNode()->CPPmultinode131), KeyDouble, ValueInt);
		break;
	case 132:
		*(multiNode->GetNode()->CPPmultinode132) = multimapUnion->CPPmultimap132->insert(*(_Where->GetNode()->CPPmultinode132), KeyDouble, ValueUint);
		break;
	case 133:
		*(multiNode->GetNode()->CPPmultinode133) = multimapUnion->CPPmultimap133->insert(*(_Where->GetNode()->CPPmultinode133), KeyDouble, ValueLonglong);
		break;
	case 134:
		*(multiNode->GetNode()->CPPmultinode134) = multimapUnion->CPPmultimap134->insert(*(_Where->GetNode()->CPPmultinode134), KeyDouble, ValueUlonglong);
		break;
	case 135:
		*(multiNode->GetNode()->CPPmultinode135) = multimapUnion->CPPmultimap135->insert(*(_Where->GetNode()->CPPmultinode135), KeyDouble, ValueFloat);
		break;
	case 136:
		*(multiNode->GetNode()->CPPmultinode136) = multimapUnion->CPPmultimap136->insert(*(_Where->GetNode()->CPPmultinode136), KeyDouble, ValueDouble);
		break;
	case 137:
		*(multiNode->GetNode()->CPPmultinode137) = multimapUnion->CPPmultimap137->insert(*(_Where->GetNode()->CPPmultinode137), KeyDouble, ValueWchar);
		break;
	case 138:
		*(multiNode->GetNode()->CPPmultinode138) = multimapUnion->CPPmultimap138->insert(*(_Where->GetNode()->CPPmultinode138), KeyDouble, ValueBool);
		break;
	case 139:
		*(multiNode->GetNode()->CPPmultinode139) = multimapUnion->CPPmultimap139->insert(*(_Where->GetNode()->CPPmultinode139), KeyDouble, ValueWstring);
		break;
	case 140:
		*(multiNode->GetNode()->CPPmultinode140) = multimapUnion->CPPmultimap140->insert(*(_Where->GetNode()->CPPmultinode140), KeyDouble, Value__Int);
		break;
	case 141:
		*(multiNode->GetNode()->CPPmultinode141) = multimapUnion->CPPmultimap141->insert(*(_Where->GetNode()->CPPmultinode141), KeyWchar, ValueUchar);
		break;
	case 142:
		*(multiNode->GetNode()->CPPmultinode142) = multimapUnion->CPPmultimap142->insert(*(_Where->GetNode()->CPPmultinode142), KeyWchar, ValueChar);
		break;
	case 143:
		*(multiNode->GetNode()->CPPmultinode143) = multimapUnion->CPPmultimap143->insert(*(_Where->GetNode()->CPPmultinode143), KeyWchar, ValueShort);
		break;
	case 144:
		*(multiNode->GetNode()->CPPmultinode144) = multimapUnion->CPPmultimap144->insert(*(_Where->GetNode()->CPPmultinode144), KeyWchar, ValueUshort);
		break;
	case 145:
		*(multiNode->GetNode()->CPPmultinode145) = multimapUnion->CPPmultimap145->insert(*(_Where->GetNode()->CPPmultinode145), KeyWchar, ValueInt);
		break;
	case 146:
		*(multiNode->GetNode()->CPPmultinode146) = multimapUnion->CPPmultimap146->insert(*(_Where->GetNode()->CPPmultinode146), KeyWchar, ValueUint);
		break;
	case 147:
		*(multiNode->GetNode()->CPPmultinode147) = multimapUnion->CPPmultimap147->insert(*(_Where->GetNode()->CPPmultinode147), KeyWchar, ValueLonglong);
		break;
	case 148:
		*(multiNode->GetNode()->CPPmultinode148) = multimapUnion->CPPmultimap148->insert(*(_Where->GetNode()->CPPmultinode148), KeyWchar, ValueUlonglong);
		break;
	case 149:
		*(multiNode->GetNode()->CPPmultinode149) = multimapUnion->CPPmultimap149->insert(*(_Where->GetNode()->CPPmultinode149), KeyWchar, ValueFloat);
		break;
	case 150:
		*(multiNode->GetNode()->CPPmultinode150) = multimapUnion->CPPmultimap150->insert(*(_Where->GetNode()->CPPmultinode150), KeyWchar, ValueDouble);
		break;
	case 151:
		*(multiNode->GetNode()->CPPmultinode151) = multimapUnion->CPPmultimap151->insert(*(_Where->GetNode()->CPPmultinode151), KeyWchar, ValueWchar);
		break;
	case 152:
		*(multiNode->GetNode()->CPPmultinode152) = multimapUnion->CPPmultimap152->insert(*(_Where->GetNode()->CPPmultinode152), KeyWchar, ValueBool);
		break;
	case 153:
		*(multiNode->GetNode()->CPPmultinode153) = multimapUnion->CPPmultimap153->insert(*(_Where->GetNode()->CPPmultinode153), KeyWchar, ValueWstring);
		break;
	case 154:
		*(multiNode->GetNode()->CPPmultinode154) = multimapUnion->CPPmultimap154->insert(*(_Where->GetNode()->CPPmultinode154), KeyWchar, Value__Int);
		break;
	case 155:
		*(multiNode->GetNode()->CPPmultinode155) = multimapUnion->CPPmultimap155->insert(*(_Where->GetNode()->CPPmultinode155), KeyBool, ValueUchar);
		break;
	case 156:
		*(multiNode->GetNode()->CPPmultinode156) = multimapUnion->CPPmultimap156->insert(*(_Where->GetNode()->CPPmultinode156), KeyBool, ValueChar);
		break;
	case 157:
		*(multiNode->GetNode()->CPPmultinode157) = multimapUnion->CPPmultimap157->insert(*(_Where->GetNode()->CPPmultinode157), KeyBool, ValueShort);
		break;
	case 158:
		*(multiNode->GetNode()->CPPmultinode158) = multimapUnion->CPPmultimap158->insert(*(_Where->GetNode()->CPPmultinode158), KeyBool, ValueUshort);
		break;
	case 159:
		*(multiNode->GetNode()->CPPmultinode159) = multimapUnion->CPPmultimap159->insert(*(_Where->GetNode()->CPPmultinode159), KeyBool, ValueInt);
		break;
	case 160:
		*(multiNode->GetNode()->CPPmultinode160) = multimapUnion->CPPmultimap160->insert(*(_Where->GetNode()->CPPmultinode160), KeyBool, ValueUint);
		break;
	case 161:
		*(multiNode->GetNode()->CPPmultinode161) = multimapUnion->CPPmultimap161->insert(*(_Where->GetNode()->CPPmultinode161), KeyBool, ValueLonglong);
		break;
	case 162:
		*(multiNode->GetNode()->CPPmultinode162) = multimapUnion->CPPmultimap162->insert(*(_Where->GetNode()->CPPmultinode162), KeyBool, ValueUlonglong);
		break;
	case 163:
		*(multiNode->GetNode()->CPPmultinode163) = multimapUnion->CPPmultimap163->insert(*(_Where->GetNode()->CPPmultinode163), KeyBool, ValueFloat);
		break;
	case 164:
		*(multiNode->GetNode()->CPPmultinode164) = multimapUnion->CPPmultimap164->insert(*(_Where->GetNode()->CPPmultinode164), KeyBool, ValueDouble);
		break;
	case 165:
		*(multiNode->GetNode()->CPPmultinode165) = multimapUnion->CPPmultimap165->insert(*(_Where->GetNode()->CPPmultinode165), KeyBool, ValueWchar);
		break;
	case 166:
		*(multiNode->GetNode()->CPPmultinode166) = multimapUnion->CPPmultimap166->insert(*(_Where->GetNode()->CPPmultinode166), KeyBool, ValueBool);
		break;
	case 167:
		*(multiNode->GetNode()->CPPmultinode167) = multimapUnion->CPPmultimap167->insert(*(_Where->GetNode()->CPPmultinode167), KeyBool, ValueWstring);
		break;
	case 168:
		*(multiNode->GetNode()->CPPmultinode168) = multimapUnion->CPPmultimap168->insert(*(_Where->GetNode()->CPPmultinode168), KeyBool, Value__Int);
		break;
	case 169:
		*(multiNode->GetNode()->CPPmultinode169) = multimapUnion->CPPmultimap169->insert(*(_Where->GetNode()->CPPmultinode169), KeyWstring, ValueUchar);
		break;
	case 170:
		*(multiNode->GetNode()->CPPmultinode170) = multimapUnion->CPPmultimap170->insert(*(_Where->GetNode()->CPPmultinode170), KeyWstring, ValueChar);
		break;
	case 171:
		*(multiNode->GetNode()->CPPmultinode171) = multimapUnion->CPPmultimap171->insert(*(_Where->GetNode()->CPPmultinode171), KeyWstring, ValueShort);
		break;
	case 172:
		*(multiNode->GetNode()->CPPmultinode172) = multimapUnion->CPPmultimap172->insert(*(_Where->GetNode()->CPPmultinode172), KeyWstring, ValueUshort);
		break;
	case 173:
		*(multiNode->GetNode()->CPPmultinode173) = multimapUnion->CPPmultimap173->insert(*(_Where->GetNode()->CPPmultinode173), KeyWstring, ValueInt);
		break;
	case 174:
		*(multiNode->GetNode()->CPPmultinode174) = multimapUnion->CPPmultimap174->insert(*(_Where->GetNode()->CPPmultinode174), KeyWstring, ValueUint);
		break;
	case 175:
		*(multiNode->GetNode()->CPPmultinode175) = multimapUnion->CPPmultimap175->insert(*(_Where->GetNode()->CPPmultinode175), KeyWstring, ValueLonglong);
		break;
	case 176:
		*(multiNode->GetNode()->CPPmultinode176) = multimapUnion->CPPmultimap176->insert(*(_Where->GetNode()->CPPmultinode176), KeyWstring, ValueUlonglong);
		break;
	case 177:
		*(multiNode->GetNode()->CPPmultinode177) = multimapUnion->CPPmultimap177->insert(*(_Where->GetNode()->CPPmultinode177), KeyWstring, ValueFloat);
		break;
	case 178:
		*(multiNode->GetNode()->CPPmultinode178) = multimapUnion->CPPmultimap178->insert(*(_Where->GetNode()->CPPmultinode178), KeyWstring, ValueDouble);
		break;
	case 179:
		*(multiNode->GetNode()->CPPmultinode179) = multimapUnion->CPPmultimap179->insert(*(_Where->GetNode()->CPPmultinode179), KeyWstring, ValueWchar);
		break;
	case 180:
		*(multiNode->GetNode()->CPPmultinode180) = multimapUnion->CPPmultimap180->insert(*(_Where->GetNode()->CPPmultinode180), KeyWstring, ValueBool);
		break;
	case 181:
		*(multiNode->GetNode()->CPPmultinode181) = multimapUnion->CPPmultimap181->insert(*(_Where->GetNode()->CPPmultinode181), KeyWstring, ValueWstring);
		break;
	case 182:
		*(multiNode->GetNode()->CPPmultinode182) = multimapUnion->CPPmultimap182->insert(*(_Where->GetNode()->CPPmultinode182), KeyWstring, Value__Int);
		break;
	case 183:
		*(multiNode->GetNode()->CPPmultinode183) = multimapUnion->CPPmultimap183->insert(*(_Where->GetNode()->CPPmultinode183), Key__Int, ValueUchar);
		break;
	case 184:
		*(multiNode->GetNode()->CPPmultinode184) = multimapUnion->CPPmultimap184->insert(*(_Where->GetNode()->CPPmultinode184), Key__Int, ValueChar);
		break;
	case 185:
		*(multiNode->GetNode()->CPPmultinode185) = multimapUnion->CPPmultimap185->insert(*(_Where->GetNode()->CPPmultinode185), Key__Int, ValueShort);
		break;
	case 186:
		*(multiNode->GetNode()->CPPmultinode186) = multimapUnion->CPPmultimap186->insert(*(_Where->GetNode()->CPPmultinode186), Key__Int, ValueUshort);
		break;
	case 187:
		*(multiNode->GetNode()->CPPmultinode187) = multimapUnion->CPPmultimap187->insert(*(_Where->GetNode()->CPPmultinode187), Key__Int, ValueInt);
		break;
	case 188:
		*(multiNode->GetNode()->CPPmultinode188) = multimapUnion->CPPmultimap188->insert(*(_Where->GetNode()->CPPmultinode188), Key__Int, ValueUint);
		break;
	case 189:
		*(multiNode->GetNode()->CPPmultinode189) = multimapUnion->CPPmultimap189->insert(*(_Where->GetNode()->CPPmultinode189), Key__Int, ValueLonglong);
		break;
	case 190:
		*(multiNode->GetNode()->CPPmultinode190) = multimapUnion->CPPmultimap190->insert(*(_Where->GetNode()->CPPmultinode190), Key__Int, ValueUlonglong);
		break;
	case 191:
		*(multiNode->GetNode()->CPPmultinode191) = multimapUnion->CPPmultimap191->insert(*(_Where->GetNode()->CPPmultinode191), Key__Int, ValueFloat);
		break;
	case 192:
		*(multiNode->GetNode()->CPPmultinode192) = multimapUnion->CPPmultimap192->insert(*(_Where->GetNode()->CPPmultinode192), Key__Int, ValueDouble);
		break;
	case 193:
		*(multiNode->GetNode()->CPPmultinode193) = multimapUnion->CPPmultimap193->insert(*(_Where->GetNode()->CPPmultinode193), Key__Int, ValueWchar);
		break;
	case 194:
		*(multiNode->GetNode()->CPPmultinode194) = multimapUnion->CPPmultimap194->insert(*(_Where->GetNode()->CPPmultinode194), Key__Int, ValueBool);
		break;
	case 195:
		*(multiNode->GetNode()->CPPmultinode195) = multimapUnion->CPPmultimap195->insert(*(_Where->GetNode()->CPPmultinode195), Key__Int, ValueWstring);
		break;
	case 196:
		*(multiNode->GetNode()->CPPmultinode196) = multimapUnion->CPPmultimap196->insert(*(_Where->GetNode()->CPPmultinode196), Key__Int, Value__Int);
		break;
	}
	return multiNode->DeepCopy();
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::insert(CShorpUnOrderedMultiConstNode<Key, Value>^ _Where, Key key, Value value)
{
	if (Object::ReferenceEquals(_Where, nullptr)) return nullptr;
	if (Object::ReferenceEquals(key, nullptr)) return nullptr;
	if (Object::ReferenceEquals(value, nullptr)) return nullptr;
	Type^ keyType = Key::typeid;
	Type^ valueType = Value::typeid;

	unsigned char KeyUchar = 0;
	char KeyChar = 0;
	short KeyShort = 0;
	unsigned short KeyUshort = 0;
	int KeyInt = 0;
	unsigned int KeyUint = 0;
	long long KeyLonglong = 0;
	unsigned long long KeyUlonglong = 0;
	float KeyFloat = 0.0f;
	double KeyDouble = 0;
	wchar_t KeyWchar = 0;
	bool KeyBool = false;
	std::wstring KeyWstring = L"";
	__int64 Key__Int = 0;

	if (keyType->Equals(System::Byte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUchar = static_cast<unsigned char>(safe_cast<System::Byte>(managedObject));
	}
	else if (keyType->Equals(System::SByte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyChar = static_cast<char>(safe_cast<System::SByte>(managedObject));
	}
	else if (keyType->Equals(System::Int16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyShort = static_cast<short>(safe_cast<System::Int16>(managedObject));
	}
	else if (keyType->Equals(System::UInt16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUshort = static_cast<unsigned short>(safe_cast<System::UInt16>(managedObject));
	}
	else if (keyType->Equals(System::Int32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyInt = static_cast<int>(safe_cast<System::Int32>(managedObject));
	}
	else if (keyType->Equals(System::UInt32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUint = static_cast<unsigned int>(safe_cast<System::UInt32>(managedObject));
	}
	else if (keyType->Equals(System::Int64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyLonglong = static_cast<long long>(safe_cast<System::Int64>(managedObject));
	}
	else if (keyType->Equals(System::UInt64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUlonglong = static_cast<unsigned long long>(safe_cast<System::UInt64>(managedObject));
	}
	else if (keyType->Equals(System::Single::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyFloat = static_cast<float>(safe_cast<System::Single>(managedObject));
	}
	else if (keyType->Equals(System::Double::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyDouble = static_cast<double>(safe_cast<System::Double>(managedObject));
	}
	else if (keyType->Equals(System::Char::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyWchar = static_cast<wchar_t>(safe_cast<System::Char>(managedObject));
	}
	else if (keyType->Equals(System::Boolean::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyBool = static_cast<bool>(safe_cast<System::Boolean>(managedObject));
	}
	else if (keyType->Equals(System::String::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		MarshalString(safe_cast<System::String^>(managedObject), KeyWstring);
	}
	else if (keyType->IsClass)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			gKeyClassDictionary->Add(key, nDictionaryKeyCount);
			gIntKeyClassDictionary->Add(nDictionaryKeyCount, key);
			Key__Int = nDictionaryKeyCount;
			nDictionaryKeyCount++;
		}
	}
	else if (keyType->IsValueType && !keyType->IsPrimitive && !keyType->IsEnum)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			gKeyClassDictionary->Add(key, nDictionaryKeyCount);
			gIntKeyClassDictionary->Add(nDictionaryKeyCount, key);
			Key__Int = nDictionaryKeyCount;
			nDictionaryKeyCount++;
		}
	}
	else if (keyType->IsInterface)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			gKeyClassDictionary->Add(key, nDictionaryKeyCount);
			gIntKeyClassDictionary->Add(nDictionaryKeyCount, key);
			Key__Int = nDictionaryKeyCount;
			nDictionaryKeyCount++;
		}
	}
	else
	{
		return nullptr;
	}

	unsigned char ValueUchar = 0;
	char ValueChar = 0;
	short ValueShort = 0;
	unsigned short ValueUshort = 0;
	int ValueInt = 0;
	unsigned int ValueUint = 0;
	long long ValueLonglong = 0;
	unsigned long long ValueUlonglong = 0;
	float ValueFloat = 0.0f;
	double ValueDouble = 0;
	wchar_t ValueWchar = 0;
	bool ValueBool = false;
	std::wstring ValueWstring = L"";
	__int64 Value__Int = 0;

	if (valueType->Equals(System::Byte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUchar = static_cast<unsigned char>(safe_cast<System::Byte>(managedObject));
	}
	else if (valueType->Equals(System::SByte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueChar = static_cast<char>(safe_cast<System::SByte>(managedObject));
	}
	else if (valueType->Equals(System::Int16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueShort = static_cast<short>(safe_cast<System::Int16>(managedObject));
	}
	else if (valueType->Equals(System::UInt16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUshort = static_cast<unsigned short>(safe_cast<System::UInt16>(managedObject));
	}
	else if (valueType->Equals(System::Int32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueInt = static_cast<int>(safe_cast<System::Int32>(managedObject));
	}
	else if (valueType->Equals(System::UInt32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUint = static_cast<unsigned int>(safe_cast<System::UInt32>(managedObject));
	}
	else if (valueType->Equals(System::Int64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueLonglong = static_cast<long long>(safe_cast<System::Int64>(managedObject));
	}
	else if (valueType->Equals(System::UInt64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUlonglong = static_cast<unsigned long long>(safe_cast<System::UInt64>(managedObject));
	}
	else if (valueType->Equals(System::Single::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueFloat = static_cast<float>(safe_cast<System::Single>(managedObject));
	}
	else if (valueType->Equals(System::Double::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueDouble = static_cast<double>(safe_cast<System::Double>(managedObject));
	}
	else if (valueType->Equals(System::Char::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueWchar = static_cast<wchar_t>(safe_cast<System::Char>(managedObject));
	}
	else if (valueType->Equals(System::Boolean::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueBool = static_cast<bool>(safe_cast<System::Boolean>(managedObject));
	}
	else if (valueType->Equals(System::String::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		MarshalString(safe_cast<System::String^>(managedObject), ValueWstring);
	}
	else if (valueType->IsClass)
	{
		gValueClassDictionary->Add(nDictionaryValueCount, value);
		Value__Int = nDictionaryValueCount;
		nDictionaryValueCount++;
	}
	else if (valueType->IsValueType && !valueType->IsPrimitive && !valueType->IsEnum)
	{
		gValueClassDictionary->Add(nDictionaryValueCount, value);
		Value__Int = nDictionaryValueCount;
		nDictionaryValueCount++;
	}
	else if (valueType->IsInterface)
	{
		gValueClassDictionary->Add(nDictionaryValueCount, value);
		Value__Int = nDictionaryValueCount;
		nDictionaryValueCount++;
	}
	else
	{
		GCHandle handle = GCHandle::Alloc(value);
		IntPtr ptr = GCHandle::ToIntPtr(handle);
		Value__Int = ptr.ToInt64();
		handle.Free();
		return nullptr;
	}

	switch (nKeyValueType)
	{
	case 0: default:
		return nullptr;
	case 1:
		*(multiNode->GetNode()->CPPmultinode1) = multimapUnion->CPPmultimap1->insert(*(_Where->GetNode()->CPPmulticonstnode1), KeyUchar, ValueUchar);
		break;
	case 2:
		*(multiNode->GetNode()->CPPmultinode2) = multimapUnion->CPPmultimap2->insert(*(_Where->GetNode()->CPPmulticonstnode2), KeyUchar, ValueChar);
		break;
	case 3:
		*(multiNode->GetNode()->CPPmultinode3) = multimapUnion->CPPmultimap3->insert(*(_Where->GetNode()->CPPmulticonstnode3), KeyUchar, ValueShort);
		break;
	case 4:
		*(multiNode->GetNode()->CPPmultinode4) = multimapUnion->CPPmultimap4->insert(*(_Where->GetNode()->CPPmulticonstnode4), KeyUchar, ValueUshort);
		break;
	case 5:
		*(multiNode->GetNode()->CPPmultinode5) = multimapUnion->CPPmultimap5->insert(*(_Where->GetNode()->CPPmulticonstnode5), KeyUchar, ValueInt);
		break;
	case 6:
		*(multiNode->GetNode()->CPPmultinode6) = multimapUnion->CPPmultimap6->insert(*(_Where->GetNode()->CPPmulticonstnode6), KeyUchar, ValueUint);
		break;
	case 7:
		*(multiNode->GetNode()->CPPmultinode7) = multimapUnion->CPPmultimap7->insert(*(_Where->GetNode()->CPPmulticonstnode7), KeyUchar, ValueLonglong);
		break;
	case 8:
		*(multiNode->GetNode()->CPPmultinode8) = multimapUnion->CPPmultimap8->insert(*(_Where->GetNode()->CPPmulticonstnode8), KeyUchar, ValueUlonglong);
		break;
	case 9:
		*(multiNode->GetNode()->CPPmultinode9) = multimapUnion->CPPmultimap9->insert(*(_Where->GetNode()->CPPmulticonstnode9), KeyUchar, ValueFloat);
		break;
	case 10:
		*(multiNode->GetNode()->CPPmultinode10) = multimapUnion->CPPmultimap10->insert(*(_Where->GetNode()->CPPmulticonstnode10), KeyUchar, ValueDouble);
		break;
	case 11:
		*(multiNode->GetNode()->CPPmultinode11) = multimapUnion->CPPmultimap11->insert(*(_Where->GetNode()->CPPmulticonstnode11), KeyUchar, ValueWchar);
		break;
	case 12:
		*(multiNode->GetNode()->CPPmultinode12) = multimapUnion->CPPmultimap12->insert(*(_Where->GetNode()->CPPmulticonstnode12), KeyUchar, ValueBool);
		break;
	case 13:
		*(multiNode->GetNode()->CPPmultinode13) = multimapUnion->CPPmultimap13->insert(*(_Where->GetNode()->CPPmulticonstnode13), KeyUchar, ValueWstring);
		break;
	case 14:
		*(multiNode->GetNode()->CPPmultinode14) = multimapUnion->CPPmultimap14->insert(*(_Where->GetNode()->CPPmulticonstnode14), KeyUchar, Value__Int);
		break;
	case 15:
		*(multiNode->GetNode()->CPPmultinode15) = multimapUnion->CPPmultimap15->insert(*(_Where->GetNode()->CPPmulticonstnode15), KeyChar, ValueUchar);
		break;
	case 16:
		*(multiNode->GetNode()->CPPmultinode16) = multimapUnion->CPPmultimap16->insert(*(_Where->GetNode()->CPPmulticonstnode16), KeyChar, ValueChar);
		break;
	case 17:
		*(multiNode->GetNode()->CPPmultinode17) = multimapUnion->CPPmultimap17->insert(*(_Where->GetNode()->CPPmulticonstnode17), KeyChar, ValueShort);
		break;
	case 18:
		*(multiNode->GetNode()->CPPmultinode18) = multimapUnion->CPPmultimap18->insert(*(_Where->GetNode()->CPPmulticonstnode18), KeyChar, ValueUshort);
		break;
	case 19:
		*(multiNode->GetNode()->CPPmultinode19) = multimapUnion->CPPmultimap19->insert(*(_Where->GetNode()->CPPmulticonstnode19), KeyChar, ValueInt);
		break;
	case 20:
		*(multiNode->GetNode()->CPPmultinode20) = multimapUnion->CPPmultimap20->insert(*(_Where->GetNode()->CPPmulticonstnode20), KeyChar, ValueUint);
		break;
	case 21:
		*(multiNode->GetNode()->CPPmultinode21) = multimapUnion->CPPmultimap21->insert(*(_Where->GetNode()->CPPmulticonstnode21), KeyChar, ValueLonglong);
		break;
	case 22:
		*(multiNode->GetNode()->CPPmultinode22) = multimapUnion->CPPmultimap22->insert(*(_Where->GetNode()->CPPmulticonstnode22), KeyChar, ValueUlonglong);
		break;
	case 23:
		*(multiNode->GetNode()->CPPmultinode23) = multimapUnion->CPPmultimap23->insert(*(_Where->GetNode()->CPPmulticonstnode23), KeyChar, ValueFloat);
		break;
	case 24:
		*(multiNode->GetNode()->CPPmultinode24) = multimapUnion->CPPmultimap24->insert(*(_Where->GetNode()->CPPmulticonstnode24), KeyChar, ValueDouble);
		break;
	case 25:
		*(multiNode->GetNode()->CPPmultinode25) = multimapUnion->CPPmultimap25->insert(*(_Where->GetNode()->CPPmulticonstnode25), KeyChar, ValueWchar);
		break;
	case 26:
		*(multiNode->GetNode()->CPPmultinode26) = multimapUnion->CPPmultimap26->insert(*(_Where->GetNode()->CPPmulticonstnode26), KeyChar, ValueBool);
		break;
	case 27:
		*(multiNode->GetNode()->CPPmultinode27) = multimapUnion->CPPmultimap27->insert(*(_Where->GetNode()->CPPmulticonstnode27), KeyChar, ValueWstring);
		break;
	case 28:
		*(multiNode->GetNode()->CPPmultinode28) = multimapUnion->CPPmultimap28->insert(*(_Where->GetNode()->CPPmulticonstnode28), KeyChar, Value__Int);
		break;
	case 29:
		*(multiNode->GetNode()->CPPmultinode29) = multimapUnion->CPPmultimap29->insert(*(_Where->GetNode()->CPPmulticonstnode29), KeyShort, ValueUchar);
		break;
	case 30:
		*(multiNode->GetNode()->CPPmultinode30) = multimapUnion->CPPmultimap30->insert(*(_Where->GetNode()->CPPmulticonstnode30), KeyShort, ValueChar);
		break;
	case 31:
		*(multiNode->GetNode()->CPPmultinode31) = multimapUnion->CPPmultimap31->insert(*(_Where->GetNode()->CPPmulticonstnode31), KeyShort, ValueShort);
		break;
	case 32:
		*(multiNode->GetNode()->CPPmultinode32) = multimapUnion->CPPmultimap32->insert(*(_Where->GetNode()->CPPmulticonstnode32), KeyShort, ValueUshort);
		break;
	case 33:
		*(multiNode->GetNode()->CPPmultinode33) = multimapUnion->CPPmultimap33->insert(*(_Where->GetNode()->CPPmulticonstnode33), KeyShort, ValueInt);
		break;
	case 34:
		*(multiNode->GetNode()->CPPmultinode34) = multimapUnion->CPPmultimap34->insert(*(_Where->GetNode()->CPPmulticonstnode34), KeyShort, ValueUint);
		break;
	case 35:
		*(multiNode->GetNode()->CPPmultinode35) = multimapUnion->CPPmultimap35->insert(*(_Where->GetNode()->CPPmulticonstnode35), KeyShort, ValueLonglong);
		break;
	case 36:
		*(multiNode->GetNode()->CPPmultinode36) = multimapUnion->CPPmultimap36->insert(*(_Where->GetNode()->CPPmulticonstnode36), KeyShort, ValueUlonglong);
		break;
	case 37:
		*(multiNode->GetNode()->CPPmultinode37) = multimapUnion->CPPmultimap37->insert(*(_Where->GetNode()->CPPmulticonstnode37), KeyShort, ValueFloat);
		break;
	case 38:
		*(multiNode->GetNode()->CPPmultinode38) = multimapUnion->CPPmultimap38->insert(*(_Where->GetNode()->CPPmulticonstnode38), KeyShort, ValueDouble);
		break;
	case 39:
		*(multiNode->GetNode()->CPPmultinode39) = multimapUnion->CPPmultimap39->insert(*(_Where->GetNode()->CPPmulticonstnode39), KeyShort, ValueWchar);
		break;
	case 40:
		*(multiNode->GetNode()->CPPmultinode40) = multimapUnion->CPPmultimap40->insert(*(_Where->GetNode()->CPPmulticonstnode40), KeyShort, ValueBool);
		break;
	case 41:
		*(multiNode->GetNode()->CPPmultinode41) = multimapUnion->CPPmultimap41->insert(*(_Where->GetNode()->CPPmulticonstnode41), KeyShort, ValueWstring);
		break;
	case 42:
		*(multiNode->GetNode()->CPPmultinode42) = multimapUnion->CPPmultimap42->insert(*(_Where->GetNode()->CPPmulticonstnode42), KeyShort, Value__Int);
		break;
	case 43:
		*(multiNode->GetNode()->CPPmultinode43) = multimapUnion->CPPmultimap43->insert(*(_Where->GetNode()->CPPmulticonstnode43), KeyUshort, ValueUchar);
		break;
	case 44:
		*(multiNode->GetNode()->CPPmultinode44) = multimapUnion->CPPmultimap44->insert(*(_Where->GetNode()->CPPmulticonstnode44), KeyUshort, ValueChar);
		break;
	case 45:
		*(multiNode->GetNode()->CPPmultinode45) = multimapUnion->CPPmultimap45->insert(*(_Where->GetNode()->CPPmulticonstnode45), KeyUshort, ValueShort);
		break;
	case 46:
		*(multiNode->GetNode()->CPPmultinode46) = multimapUnion->CPPmultimap46->insert(*(_Where->GetNode()->CPPmulticonstnode46), KeyUshort, ValueUshort);
		break;
	case 47:
		*(multiNode->GetNode()->CPPmultinode47) = multimapUnion->CPPmultimap47->insert(*(_Where->GetNode()->CPPmulticonstnode47), KeyUshort, ValueInt);
		break;
	case 48:
		*(multiNode->GetNode()->CPPmultinode48) = multimapUnion->CPPmultimap48->insert(*(_Where->GetNode()->CPPmulticonstnode48), KeyUshort, ValueUint);
		break;
	case 49:
		*(multiNode->GetNode()->CPPmultinode49) = multimapUnion->CPPmultimap49->insert(*(_Where->GetNode()->CPPmulticonstnode49), KeyUshort, ValueLonglong);
		break;
	case 50:
		*(multiNode->GetNode()->CPPmultinode50) = multimapUnion->CPPmultimap50->insert(*(_Where->GetNode()->CPPmulticonstnode50), KeyUshort, ValueUlonglong);
		break;
	case 51:
		*(multiNode->GetNode()->CPPmultinode51) = multimapUnion->CPPmultimap51->insert(*(_Where->GetNode()->CPPmulticonstnode51), KeyUshort, ValueFloat);
		break;
	case 52:
		*(multiNode->GetNode()->CPPmultinode52) = multimapUnion->CPPmultimap52->insert(*(_Where->GetNode()->CPPmulticonstnode52), KeyUshort, ValueDouble);
		break;
	case 53:
		*(multiNode->GetNode()->CPPmultinode53) = multimapUnion->CPPmultimap53->insert(*(_Where->GetNode()->CPPmulticonstnode53), KeyUshort, ValueWchar);
		break;
	case 54:
		*(multiNode->GetNode()->CPPmultinode54) = multimapUnion->CPPmultimap54->insert(*(_Where->GetNode()->CPPmulticonstnode54), KeyUshort, ValueBool);
		break;
	case 55:
		*(multiNode->GetNode()->CPPmultinode55) = multimapUnion->CPPmultimap55->insert(*(_Where->GetNode()->CPPmulticonstnode55), KeyUshort, ValueWstring);
		break;
	case 56:
		*(multiNode->GetNode()->CPPmultinode56) = multimapUnion->CPPmultimap56->insert(*(_Where->GetNode()->CPPmulticonstnode56), KeyUshort, Value__Int);
		break;
	case 57:
		*(multiNode->GetNode()->CPPmultinode57) = multimapUnion->CPPmultimap57->insert(*(_Where->GetNode()->CPPmulticonstnode57), KeyInt, ValueUchar);
		break;
	case 58:
		*(multiNode->GetNode()->CPPmultinode58) = multimapUnion->CPPmultimap58->insert(*(_Where->GetNode()->CPPmulticonstnode58), KeyInt, ValueChar);
		break;
	case 59:
		*(multiNode->GetNode()->CPPmultinode59) = multimapUnion->CPPmultimap59->insert(*(_Where->GetNode()->CPPmulticonstnode59), KeyInt, ValueShort);
		break;
	case 60:
		*(multiNode->GetNode()->CPPmultinode60) = multimapUnion->CPPmultimap60->insert(*(_Where->GetNode()->CPPmulticonstnode60), KeyInt, ValueUshort);
		break;
	case 61:
		*(multiNode->GetNode()->CPPmultinode61) = multimapUnion->CPPmultimap61->insert(*(_Where->GetNode()->CPPmulticonstnode61), KeyInt, ValueInt);
		break;
	case 62:
		*(multiNode->GetNode()->CPPmultinode62) = multimapUnion->CPPmultimap62->insert(*(_Where->GetNode()->CPPmulticonstnode62), KeyInt, ValueUint);
		break;
	case 63:
		*(multiNode->GetNode()->CPPmultinode63) = multimapUnion->CPPmultimap63->insert(*(_Where->GetNode()->CPPmulticonstnode63), KeyInt, ValueLonglong);
		break;
	case 64:
		*(multiNode->GetNode()->CPPmultinode64) = multimapUnion->CPPmultimap64->insert(*(_Where->GetNode()->CPPmulticonstnode64), KeyInt, ValueUlonglong);
		break;
	case 65:
		*(multiNode->GetNode()->CPPmultinode65) = multimapUnion->CPPmultimap65->insert(*(_Where->GetNode()->CPPmulticonstnode65), KeyInt, ValueFloat);
		break;
	case 66:
		*(multiNode->GetNode()->CPPmultinode66) = multimapUnion->CPPmultimap66->insert(*(_Where->GetNode()->CPPmulticonstnode66), KeyInt, ValueDouble);
		break;
	case 67:
		*(multiNode->GetNode()->CPPmultinode67) = multimapUnion->CPPmultimap67->insert(*(_Where->GetNode()->CPPmulticonstnode67), KeyInt, ValueWchar);
		break;
	case 68:
		*(multiNode->GetNode()->CPPmultinode68) = multimapUnion->CPPmultimap68->insert(*(_Where->GetNode()->CPPmulticonstnode68), KeyInt, ValueBool);
		break;
	case 69:
		*(multiNode->GetNode()->CPPmultinode69) = multimapUnion->CPPmultimap69->insert(*(_Where->GetNode()->CPPmulticonstnode69), KeyInt, ValueWstring);
		break;
	case 70:
		*(multiNode->GetNode()->CPPmultinode70) = multimapUnion->CPPmultimap70->insert(*(_Where->GetNode()->CPPmulticonstnode70), KeyInt, Value__Int);
		break;
	case 71:
		*(multiNode->GetNode()->CPPmultinode71) = multimapUnion->CPPmultimap71->insert(*(_Where->GetNode()->CPPmulticonstnode71), KeyUint, ValueUchar);
		break;
	case 72:
		*(multiNode->GetNode()->CPPmultinode72) = multimapUnion->CPPmultimap72->insert(*(_Where->GetNode()->CPPmulticonstnode72), KeyUint, ValueChar);
		break;
	case 73:
		*(multiNode->GetNode()->CPPmultinode73) = multimapUnion->CPPmultimap73->insert(*(_Where->GetNode()->CPPmulticonstnode73), KeyUint, ValueShort);
		break;
	case 74:
		*(multiNode->GetNode()->CPPmultinode74) = multimapUnion->CPPmultimap74->insert(*(_Where->GetNode()->CPPmulticonstnode74), KeyUint, ValueUshort);
		break;
	case 75:
		*(multiNode->GetNode()->CPPmultinode75) = multimapUnion->CPPmultimap75->insert(*(_Where->GetNode()->CPPmulticonstnode75), KeyUint, ValueInt);
		break;
	case 76:
		*(multiNode->GetNode()->CPPmultinode76) = multimapUnion->CPPmultimap76->insert(*(_Where->GetNode()->CPPmulticonstnode76), KeyUint, ValueUint);
		break;
	case 77:
		*(multiNode->GetNode()->CPPmultinode77) = multimapUnion->CPPmultimap77->insert(*(_Where->GetNode()->CPPmulticonstnode77), KeyUint, ValueLonglong);
		break;
	case 78:
		*(multiNode->GetNode()->CPPmultinode78) = multimapUnion->CPPmultimap78->insert(*(_Where->GetNode()->CPPmulticonstnode78), KeyUint, ValueUlonglong);
		break;
	case 79:
		*(multiNode->GetNode()->CPPmultinode79) = multimapUnion->CPPmultimap79->insert(*(_Where->GetNode()->CPPmulticonstnode79), KeyUint, ValueFloat);
		break;
	case 80:
		*(multiNode->GetNode()->CPPmultinode80) = multimapUnion->CPPmultimap80->insert(*(_Where->GetNode()->CPPmulticonstnode80), KeyUint, ValueDouble);
		break;
	case 81:
		*(multiNode->GetNode()->CPPmultinode81) = multimapUnion->CPPmultimap81->insert(*(_Where->GetNode()->CPPmulticonstnode81), KeyUint, ValueWchar);
		break;
	case 82:
		*(multiNode->GetNode()->CPPmultinode82) = multimapUnion->CPPmultimap82->insert(*(_Where->GetNode()->CPPmulticonstnode82), KeyUint, ValueBool);
		break;
	case 83:
		*(multiNode->GetNode()->CPPmultinode83) = multimapUnion->CPPmultimap83->insert(*(_Where->GetNode()->CPPmulticonstnode83), KeyUint, ValueWstring);
		break;
	case 84:
		*(multiNode->GetNode()->CPPmultinode84) = multimapUnion->CPPmultimap84->insert(*(_Where->GetNode()->CPPmulticonstnode84), KeyUint, Value__Int);
		break;
	case 85:
		*(multiNode->GetNode()->CPPmultinode85) = multimapUnion->CPPmultimap85->insert(*(_Where->GetNode()->CPPmulticonstnode85), KeyLonglong, ValueUchar);
		break;
	case 86:
		*(multiNode->GetNode()->CPPmultinode86) = multimapUnion->CPPmultimap86->insert(*(_Where->GetNode()->CPPmulticonstnode86), KeyLonglong, ValueChar);
		break;
	case 87:
		*(multiNode->GetNode()->CPPmultinode87) = multimapUnion->CPPmultimap87->insert(*(_Where->GetNode()->CPPmulticonstnode87), KeyLonglong, ValueShort);
		break;
	case 88:
		*(multiNode->GetNode()->CPPmultinode88) = multimapUnion->CPPmultimap88->insert(*(_Where->GetNode()->CPPmulticonstnode88), KeyLonglong, ValueUshort);
		break;
	case 89:
		*(multiNode->GetNode()->CPPmultinode89) = multimapUnion->CPPmultimap89->insert(*(_Where->GetNode()->CPPmulticonstnode89), KeyLonglong, ValueInt);
		break;
	case 90:
		*(multiNode->GetNode()->CPPmultinode90) = multimapUnion->CPPmultimap90->insert(*(_Where->GetNode()->CPPmulticonstnode90), KeyLonglong, ValueUint);
		break;
	case 91:
		*(multiNode->GetNode()->CPPmultinode91) = multimapUnion->CPPmultimap91->insert(*(_Where->GetNode()->CPPmulticonstnode91), KeyLonglong, ValueLonglong);
		break;
	case 92:
		*(multiNode->GetNode()->CPPmultinode92) = multimapUnion->CPPmultimap92->insert(*(_Where->GetNode()->CPPmulticonstnode92), KeyLonglong, ValueUlonglong);
		break;
	case 93:
		*(multiNode->GetNode()->CPPmultinode93) = multimapUnion->CPPmultimap93->insert(*(_Where->GetNode()->CPPmulticonstnode93), KeyLonglong, ValueFloat);
		break;
	case 94:
		*(multiNode->GetNode()->CPPmultinode94) = multimapUnion->CPPmultimap94->insert(*(_Where->GetNode()->CPPmulticonstnode94), KeyLonglong, ValueDouble);
		break;
	case 95:
		*(multiNode->GetNode()->CPPmultinode95) = multimapUnion->CPPmultimap95->insert(*(_Where->GetNode()->CPPmulticonstnode95), KeyLonglong, ValueWchar);
		break;
	case 96:
		*(multiNode->GetNode()->CPPmultinode96) = multimapUnion->CPPmultimap96->insert(*(_Where->GetNode()->CPPmulticonstnode96), KeyLonglong, ValueBool);
		break;
	case 97:
		*(multiNode->GetNode()->CPPmultinode97) = multimapUnion->CPPmultimap97->insert(*(_Where->GetNode()->CPPmulticonstnode97), KeyLonglong, ValueWstring);
		break;
	case 98:
		*(multiNode->GetNode()->CPPmultinode98) = multimapUnion->CPPmultimap98->insert(*(_Where->GetNode()->CPPmulticonstnode98), KeyLonglong, Value__Int);
		break;
	case 99:
		*(multiNode->GetNode()->CPPmultinode99) = multimapUnion->CPPmultimap99->insert(*(_Where->GetNode()->CPPmulticonstnode99), KeyUlonglong, ValueUchar);
		break;
	case 100:
		*(multiNode->GetNode()->CPPmultinode100) = multimapUnion->CPPmultimap100->insert(*(_Where->GetNode()->CPPmulticonstnode100), KeyUlonglong, ValueChar);
		break;
	case 101:
		*(multiNode->GetNode()->CPPmultinode101) = multimapUnion->CPPmultimap101->insert(*(_Where->GetNode()->CPPmulticonstnode101), KeyUlonglong, ValueShort);
		break;
	case 102:
		*(multiNode->GetNode()->CPPmultinode102) = multimapUnion->CPPmultimap102->insert(*(_Where->GetNode()->CPPmulticonstnode102), KeyUlonglong, ValueUshort);
		break;
	case 103:
		*(multiNode->GetNode()->CPPmultinode103) = multimapUnion->CPPmultimap103->insert(*(_Where->GetNode()->CPPmulticonstnode103), KeyUlonglong, ValueInt);
		break;
	case 104:
		*(multiNode->GetNode()->CPPmultinode104) = multimapUnion->CPPmultimap104->insert(*(_Where->GetNode()->CPPmulticonstnode104), KeyUlonglong, ValueUint);
		break;
	case 105:
		*(multiNode->GetNode()->CPPmultinode105) = multimapUnion->CPPmultimap105->insert(*(_Where->GetNode()->CPPmulticonstnode105), KeyUlonglong, ValueLonglong);
		break;
	case 106:
		*(multiNode->GetNode()->CPPmultinode106) = multimapUnion->CPPmultimap106->insert(*(_Where->GetNode()->CPPmulticonstnode106), KeyUlonglong, ValueUlonglong);
		break;
	case 107:
		*(multiNode->GetNode()->CPPmultinode107) = multimapUnion->CPPmultimap107->insert(*(_Where->GetNode()->CPPmulticonstnode107), KeyUlonglong, ValueFloat);
		break;
	case 108:
		*(multiNode->GetNode()->CPPmultinode108) = multimapUnion->CPPmultimap108->insert(*(_Where->GetNode()->CPPmulticonstnode108), KeyUlonglong, ValueDouble);
		break;
	case 109:
		*(multiNode->GetNode()->CPPmultinode109) = multimapUnion->CPPmultimap109->insert(*(_Where->GetNode()->CPPmulticonstnode109), KeyUlonglong, ValueWchar);
		break;
	case 110:
		*(multiNode->GetNode()->CPPmultinode110) = multimapUnion->CPPmultimap110->insert(*(_Where->GetNode()->CPPmulticonstnode110), KeyUlonglong, ValueBool);
		break;
	case 111:
		*(multiNode->GetNode()->CPPmultinode111) = multimapUnion->CPPmultimap111->insert(*(_Where->GetNode()->CPPmulticonstnode111), KeyUlonglong, ValueWstring);
		break;
	case 112:
		*(multiNode->GetNode()->CPPmultinode112) = multimapUnion->CPPmultimap112->insert(*(_Where->GetNode()->CPPmulticonstnode112), KeyUlonglong, Value__Int);
		break;
	case 113:
		*(multiNode->GetNode()->CPPmultinode113) = multimapUnion->CPPmultimap113->insert(*(_Where->GetNode()->CPPmulticonstnode113), KeyFloat, ValueUchar);
		break;
	case 114:
		*(multiNode->GetNode()->CPPmultinode114) = multimapUnion->CPPmultimap114->insert(*(_Where->GetNode()->CPPmulticonstnode114), KeyFloat, ValueChar);
		break;
	case 115:
		*(multiNode->GetNode()->CPPmultinode115) = multimapUnion->CPPmultimap115->insert(*(_Where->GetNode()->CPPmulticonstnode115), KeyFloat, ValueShort);
		break;
	case 116:
		*(multiNode->GetNode()->CPPmultinode116) = multimapUnion->CPPmultimap116->insert(*(_Where->GetNode()->CPPmulticonstnode116), KeyFloat, ValueUshort);
		break;
	case 117:
		*(multiNode->GetNode()->CPPmultinode117) = multimapUnion->CPPmultimap117->insert(*(_Where->GetNode()->CPPmulticonstnode117), KeyFloat, ValueInt);
		break;
	case 118:
		*(multiNode->GetNode()->CPPmultinode118) = multimapUnion->CPPmultimap118->insert(*(_Where->GetNode()->CPPmulticonstnode118), KeyFloat, ValueUint);
		break;
	case 119:
		*(multiNode->GetNode()->CPPmultinode119) = multimapUnion->CPPmultimap119->insert(*(_Where->GetNode()->CPPmulticonstnode119), KeyFloat, ValueLonglong);
		break;
	case 120:
		*(multiNode->GetNode()->CPPmultinode120) = multimapUnion->CPPmultimap120->insert(*(_Where->GetNode()->CPPmulticonstnode120), KeyFloat, ValueUlonglong);
		break;
	case 121:
		*(multiNode->GetNode()->CPPmultinode121) = multimapUnion->CPPmultimap121->insert(*(_Where->GetNode()->CPPmulticonstnode121), KeyFloat, ValueFloat);
		break;
	case 122:
		*(multiNode->GetNode()->CPPmultinode122) = multimapUnion->CPPmultimap122->insert(*(_Where->GetNode()->CPPmulticonstnode122), KeyFloat, ValueDouble);
		break;
	case 123:
		*(multiNode->GetNode()->CPPmultinode123) = multimapUnion->CPPmultimap123->insert(*(_Where->GetNode()->CPPmulticonstnode123), KeyFloat, ValueWchar);
		break;
	case 124:
		*(multiNode->GetNode()->CPPmultinode124) = multimapUnion->CPPmultimap124->insert(*(_Where->GetNode()->CPPmulticonstnode124), KeyFloat, ValueBool);
		break;
	case 125:
		*(multiNode->GetNode()->CPPmultinode125) = multimapUnion->CPPmultimap125->insert(*(_Where->GetNode()->CPPmulticonstnode125), KeyFloat, ValueWstring);
		break;
	case 126:
		*(multiNode->GetNode()->CPPmultinode126) = multimapUnion->CPPmultimap126->insert(*(_Where->GetNode()->CPPmulticonstnode126), KeyFloat, Value__Int);
		break;
	case 127:
		*(multiNode->GetNode()->CPPmultinode127) = multimapUnion->CPPmultimap127->insert(*(_Where->GetNode()->CPPmulticonstnode127), KeyDouble, ValueUchar);
		break;
	case 128:
		*(multiNode->GetNode()->CPPmultinode128) = multimapUnion->CPPmultimap128->insert(*(_Where->GetNode()->CPPmulticonstnode128), KeyDouble, ValueChar);
		break;
	case 129:
		*(multiNode->GetNode()->CPPmultinode129) = multimapUnion->CPPmultimap129->insert(*(_Where->GetNode()->CPPmulticonstnode129), KeyDouble, ValueShort);
		break;
	case 130:
		*(multiNode->GetNode()->CPPmultinode130) = multimapUnion->CPPmultimap130->insert(*(_Where->GetNode()->CPPmulticonstnode130), KeyDouble, ValueUshort);
		break;
	case 131:
		*(multiNode->GetNode()->CPPmultinode131) = multimapUnion->CPPmultimap131->insert(*(_Where->GetNode()->CPPmulticonstnode131), KeyDouble, ValueInt);
		break;
	case 132:
		*(multiNode->GetNode()->CPPmultinode132) = multimapUnion->CPPmultimap132->insert(*(_Where->GetNode()->CPPmulticonstnode132), KeyDouble, ValueUint);
		break;
	case 133:
		*(multiNode->GetNode()->CPPmultinode133) = multimapUnion->CPPmultimap133->insert(*(_Where->GetNode()->CPPmulticonstnode133), KeyDouble, ValueLonglong);
		break;
	case 134:
		*(multiNode->GetNode()->CPPmultinode134) = multimapUnion->CPPmultimap134->insert(*(_Where->GetNode()->CPPmulticonstnode134), KeyDouble, ValueUlonglong);
		break;
	case 135:
		*(multiNode->GetNode()->CPPmultinode135) = multimapUnion->CPPmultimap135->insert(*(_Where->GetNode()->CPPmulticonstnode135), KeyDouble, ValueFloat);
		break;
	case 136:
		*(multiNode->GetNode()->CPPmultinode136) = multimapUnion->CPPmultimap136->insert(*(_Where->GetNode()->CPPmulticonstnode136), KeyDouble, ValueDouble);
		break;
	case 137:
		*(multiNode->GetNode()->CPPmultinode137) = multimapUnion->CPPmultimap137->insert(*(_Where->GetNode()->CPPmulticonstnode137), KeyDouble, ValueWchar);
		break;
	case 138:
		*(multiNode->GetNode()->CPPmultinode138) = multimapUnion->CPPmultimap138->insert(*(_Where->GetNode()->CPPmulticonstnode138), KeyDouble, ValueBool);
		break;
	case 139:
		*(multiNode->GetNode()->CPPmultinode139) = multimapUnion->CPPmultimap139->insert(*(_Where->GetNode()->CPPmulticonstnode139), KeyDouble, ValueWstring);
		break;
	case 140:
		*(multiNode->GetNode()->CPPmultinode140) = multimapUnion->CPPmultimap140->insert(*(_Where->GetNode()->CPPmulticonstnode140), KeyDouble, Value__Int);
		break;
	case 141:
		*(multiNode->GetNode()->CPPmultinode141) = multimapUnion->CPPmultimap141->insert(*(_Where->GetNode()->CPPmulticonstnode141), KeyWchar, ValueUchar);
		break;
	case 142:
		*(multiNode->GetNode()->CPPmultinode142) = multimapUnion->CPPmultimap142->insert(*(_Where->GetNode()->CPPmulticonstnode142), KeyWchar, ValueChar);
		break;
	case 143:
		*(multiNode->GetNode()->CPPmultinode143) = multimapUnion->CPPmultimap143->insert(*(_Where->GetNode()->CPPmulticonstnode143), KeyWchar, ValueShort);
		break;
	case 144:
		*(multiNode->GetNode()->CPPmultinode144) = multimapUnion->CPPmultimap144->insert(*(_Where->GetNode()->CPPmulticonstnode144), KeyWchar, ValueUshort);
		break;
	case 145:
		*(multiNode->GetNode()->CPPmultinode145) = multimapUnion->CPPmultimap145->insert(*(_Where->GetNode()->CPPmulticonstnode145), KeyWchar, ValueInt);
		break;
	case 146:
		*(multiNode->GetNode()->CPPmultinode146) = multimapUnion->CPPmultimap146->insert(*(_Where->GetNode()->CPPmulticonstnode146), KeyWchar, ValueUint);
		break;
	case 147:
		*(multiNode->GetNode()->CPPmultinode147) = multimapUnion->CPPmultimap147->insert(*(_Where->GetNode()->CPPmulticonstnode147), KeyWchar, ValueLonglong);
		break;
	case 148:
		*(multiNode->GetNode()->CPPmultinode148) = multimapUnion->CPPmultimap148->insert(*(_Where->GetNode()->CPPmulticonstnode148), KeyWchar, ValueUlonglong);
		break;
	case 149:
		*(multiNode->GetNode()->CPPmultinode149) = multimapUnion->CPPmultimap149->insert(*(_Where->GetNode()->CPPmulticonstnode149), KeyWchar, ValueFloat);
		break;
	case 150:
		*(multiNode->GetNode()->CPPmultinode150) = multimapUnion->CPPmultimap150->insert(*(_Where->GetNode()->CPPmulticonstnode150), KeyWchar, ValueDouble);
		break;
	case 151:
		*(multiNode->GetNode()->CPPmultinode151) = multimapUnion->CPPmultimap151->insert(*(_Where->GetNode()->CPPmulticonstnode151), KeyWchar, ValueWchar);
		break;
	case 152:
		*(multiNode->GetNode()->CPPmultinode152) = multimapUnion->CPPmultimap152->insert(*(_Where->GetNode()->CPPmulticonstnode152), KeyWchar, ValueBool);
		break;
	case 153:
		*(multiNode->GetNode()->CPPmultinode153) = multimapUnion->CPPmultimap153->insert(*(_Where->GetNode()->CPPmulticonstnode153), KeyWchar, ValueWstring);
		break;
	case 154:
		*(multiNode->GetNode()->CPPmultinode154) = multimapUnion->CPPmultimap154->insert(*(_Where->GetNode()->CPPmulticonstnode154), KeyWchar, Value__Int);
		break;
	case 155:
		*(multiNode->GetNode()->CPPmultinode155) = multimapUnion->CPPmultimap155->insert(*(_Where->GetNode()->CPPmulticonstnode155), KeyBool, ValueUchar);
		break;
	case 156:
		*(multiNode->GetNode()->CPPmultinode156) = multimapUnion->CPPmultimap156->insert(*(_Where->GetNode()->CPPmulticonstnode156), KeyBool, ValueChar);
		break;
	case 157:
		*(multiNode->GetNode()->CPPmultinode157) = multimapUnion->CPPmultimap157->insert(*(_Where->GetNode()->CPPmulticonstnode157), KeyBool, ValueShort);
		break;
	case 158:
		*(multiNode->GetNode()->CPPmultinode158) = multimapUnion->CPPmultimap158->insert(*(_Where->GetNode()->CPPmulticonstnode158), KeyBool, ValueUshort);
		break;
	case 159:
		*(multiNode->GetNode()->CPPmultinode159) = multimapUnion->CPPmultimap159->insert(*(_Where->GetNode()->CPPmulticonstnode159), KeyBool, ValueInt);
		break;
	case 160:
		*(multiNode->GetNode()->CPPmultinode160) = multimapUnion->CPPmultimap160->insert(*(_Where->GetNode()->CPPmulticonstnode160), KeyBool, ValueUint);
		break;
	case 161:
		*(multiNode->GetNode()->CPPmultinode161) = multimapUnion->CPPmultimap161->insert(*(_Where->GetNode()->CPPmulticonstnode161), KeyBool, ValueLonglong);
		break;
	case 162:
		*(multiNode->GetNode()->CPPmultinode162) = multimapUnion->CPPmultimap162->insert(*(_Where->GetNode()->CPPmulticonstnode162), KeyBool, ValueUlonglong);
		break;
	case 163:
		*(multiNode->GetNode()->CPPmultinode163) = multimapUnion->CPPmultimap163->insert(*(_Where->GetNode()->CPPmulticonstnode163), KeyBool, ValueFloat);
		break;
	case 164:
		*(multiNode->GetNode()->CPPmultinode164) = multimapUnion->CPPmultimap164->insert(*(_Where->GetNode()->CPPmulticonstnode164), KeyBool, ValueDouble);
		break;
	case 165:
		*(multiNode->GetNode()->CPPmultinode165) = multimapUnion->CPPmultimap165->insert(*(_Where->GetNode()->CPPmulticonstnode165), KeyBool, ValueWchar);
		break;
	case 166:
		*(multiNode->GetNode()->CPPmultinode166) = multimapUnion->CPPmultimap166->insert(*(_Where->GetNode()->CPPmulticonstnode166), KeyBool, ValueBool);
		break;
	case 167:
		*(multiNode->GetNode()->CPPmultinode167) = multimapUnion->CPPmultimap167->insert(*(_Where->GetNode()->CPPmulticonstnode167), KeyBool, ValueWstring);
		break;
	case 168:
		*(multiNode->GetNode()->CPPmultinode168) = multimapUnion->CPPmultimap168->insert(*(_Where->GetNode()->CPPmulticonstnode168), KeyBool, Value__Int);
		break;
	case 169:
		*(multiNode->GetNode()->CPPmultinode169) = multimapUnion->CPPmultimap169->insert(*(_Where->GetNode()->CPPmulticonstnode169), KeyWstring, ValueUchar);
		break;
	case 170:
		*(multiNode->GetNode()->CPPmultinode170) = multimapUnion->CPPmultimap170->insert(*(_Where->GetNode()->CPPmulticonstnode170), KeyWstring, ValueChar);
		break;
	case 171:
		*(multiNode->GetNode()->CPPmultinode171) = multimapUnion->CPPmultimap171->insert(*(_Where->GetNode()->CPPmulticonstnode171), KeyWstring, ValueShort);
		break;
	case 172:
		*(multiNode->GetNode()->CPPmultinode172) = multimapUnion->CPPmultimap172->insert(*(_Where->GetNode()->CPPmulticonstnode172), KeyWstring, ValueUshort);
		break;
	case 173:
		*(multiNode->GetNode()->CPPmultinode173) = multimapUnion->CPPmultimap173->insert(*(_Where->GetNode()->CPPmulticonstnode173), KeyWstring, ValueInt);
		break;
	case 174:
		*(multiNode->GetNode()->CPPmultinode174) = multimapUnion->CPPmultimap174->insert(*(_Where->GetNode()->CPPmulticonstnode174), KeyWstring, ValueUint);
		break;
	case 175:
		*(multiNode->GetNode()->CPPmultinode175) = multimapUnion->CPPmultimap175->insert(*(_Where->GetNode()->CPPmulticonstnode175), KeyWstring, ValueLonglong);
		break;
	case 176:
		*(multiNode->GetNode()->CPPmultinode176) = multimapUnion->CPPmultimap176->insert(*(_Where->GetNode()->CPPmulticonstnode176), KeyWstring, ValueUlonglong);
		break;
	case 177:
		*(multiNode->GetNode()->CPPmultinode177) = multimapUnion->CPPmultimap177->insert(*(_Where->GetNode()->CPPmulticonstnode177), KeyWstring, ValueFloat);
		break;
	case 178:
		*(multiNode->GetNode()->CPPmultinode178) = multimapUnion->CPPmultimap178->insert(*(_Where->GetNode()->CPPmulticonstnode178), KeyWstring, ValueDouble);
		break;
	case 179:
		*(multiNode->GetNode()->CPPmultinode179) = multimapUnion->CPPmultimap179->insert(*(_Where->GetNode()->CPPmulticonstnode179), KeyWstring, ValueWchar);
		break;
	case 180:
		*(multiNode->GetNode()->CPPmultinode180) = multimapUnion->CPPmultimap180->insert(*(_Where->GetNode()->CPPmulticonstnode180), KeyWstring, ValueBool);
		break;
	case 181:
		*(multiNode->GetNode()->CPPmultinode181) = multimapUnion->CPPmultimap181->insert(*(_Where->GetNode()->CPPmulticonstnode181), KeyWstring, ValueWstring);
		break;
	case 182:
		*(multiNode->GetNode()->CPPmultinode182) = multimapUnion->CPPmultimap182->insert(*(_Where->GetNode()->CPPmulticonstnode182), KeyWstring, Value__Int);
		break;
	case 183:
		*(multiNode->GetNode()->CPPmultinode183) = multimapUnion->CPPmultimap183->insert(*(_Where->GetNode()->CPPmulticonstnode183), Key__Int, ValueUchar);
		break;
	case 184:
		*(multiNode->GetNode()->CPPmultinode184) = multimapUnion->CPPmultimap184->insert(*(_Where->GetNode()->CPPmulticonstnode184), Key__Int, ValueChar);
		break;
	case 185:
		*(multiNode->GetNode()->CPPmultinode185) = multimapUnion->CPPmultimap185->insert(*(_Where->GetNode()->CPPmulticonstnode185), Key__Int, ValueShort);
		break;
	case 186:
		*(multiNode->GetNode()->CPPmultinode186) = multimapUnion->CPPmultimap186->insert(*(_Where->GetNode()->CPPmulticonstnode186), Key__Int, ValueUshort);
		break;
	case 187:
		*(multiNode->GetNode()->CPPmultinode187) = multimapUnion->CPPmultimap187->insert(*(_Where->GetNode()->CPPmulticonstnode187), Key__Int, ValueInt);
		break;
	case 188:
		*(multiNode->GetNode()->CPPmultinode188) = multimapUnion->CPPmultimap188->insert(*(_Where->GetNode()->CPPmulticonstnode188), Key__Int, ValueUint);
		break;
	case 189:
		*(multiNode->GetNode()->CPPmultinode189) = multimapUnion->CPPmultimap189->insert(*(_Where->GetNode()->CPPmulticonstnode189), Key__Int, ValueLonglong);
		break;
	case 190:
		*(multiNode->GetNode()->CPPmultinode190) = multimapUnion->CPPmultimap190->insert(*(_Where->GetNode()->CPPmulticonstnode190), Key__Int, ValueUlonglong);
		break;
	case 191:
		*(multiNode->GetNode()->CPPmultinode191) = multimapUnion->CPPmultimap191->insert(*(_Where->GetNode()->CPPmulticonstnode191), Key__Int, ValueFloat);
		break;
	case 192:
		*(multiNode->GetNode()->CPPmultinode192) = multimapUnion->CPPmultimap192->insert(*(_Where->GetNode()->CPPmulticonstnode192), Key__Int, ValueDouble);
		break;
	case 193:
		*(multiNode->GetNode()->CPPmultinode193) = multimapUnion->CPPmultimap193->insert(*(_Where->GetNode()->CPPmulticonstnode193), Key__Int, ValueWchar);
		break;
	case 194:
		*(multiNode->GetNode()->CPPmultinode194) = multimapUnion->CPPmultimap194->insert(*(_Where->GetNode()->CPPmulticonstnode194), Key__Int, ValueBool);
		break;
	case 195:
		*(multiNode->GetNode()->CPPmultinode195) = multimapUnion->CPPmultimap195->insert(*(_Where->GetNode()->CPPmulticonstnode195), Key__Int, ValueWstring);
		break;
	case 196:
		*(multiNode->GetNode()->CPPmultinode196) = multimapUnion->CPPmultimap196->insert(*(_Where->GetNode()->CPPmulticonstnode196), Key__Int, Value__Int);
		break;
	}
	return multiNode->DeepCopy();
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiConstNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::cbegin()
{
	CShorpUnOrderedMultiConstNode<Key, Value>^ temp = gcnew CShorpUnOrderedMultiConstNode<Key, Value>();
	if (gIntKeyClassDictionary)
		temp->SetIntKeyClassDictionary(gIntKeyClassDictionary);
	switch (nKeyValueType)
	{
	case 0: default:
		return nullptr;
	case 1:
		*(temp->GetNode()->CPPmulticonstnode1) = multimapUnion->CPPmultimap1->cbegin();
		break;
	case 2:
		*(temp->GetNode()->CPPmulticonstnode2) = multimapUnion->CPPmultimap2->cbegin();
		break;
	case 3:
		*(temp->GetNode()->CPPmulticonstnode3) = multimapUnion->CPPmultimap3->cbegin();
		break;
	case 4:
		*(temp->GetNode()->CPPmulticonstnode4) = multimapUnion->CPPmultimap4->cbegin();
		break;
	case 5:
		*(temp->GetNode()->CPPmulticonstnode5) = multimapUnion->CPPmultimap5->cbegin();
		break;
	case 6:
		*(temp->GetNode()->CPPmulticonstnode6) = multimapUnion->CPPmultimap6->cbegin();
		break;
	case 7:
		*(temp->GetNode()->CPPmulticonstnode7) = multimapUnion->CPPmultimap7->cbegin();
		break;
	case 8:
		*(temp->GetNode()->CPPmulticonstnode8) = multimapUnion->CPPmultimap8->cbegin();
		break;
	case 9:
		*(temp->GetNode()->CPPmulticonstnode9) = multimapUnion->CPPmultimap9->cbegin();
		break;
	case 10:
		*(temp->GetNode()->CPPmulticonstnode10) = multimapUnion->CPPmultimap10->cbegin();
		break;
	case 11:
		*(temp->GetNode()->CPPmulticonstnode11) = multimapUnion->CPPmultimap11->cbegin();
		break;
	case 12:
		*(temp->GetNode()->CPPmulticonstnode12) = multimapUnion->CPPmultimap12->cbegin();
		break;
	case 13:
		*(temp->GetNode()->CPPmulticonstnode13) = multimapUnion->CPPmultimap13->cbegin();
		break;
	case 14:
		*(temp->GetNode()->CPPmulticonstnode14) = multimapUnion->CPPmultimap14->cbegin();
		break;
	case 15:
		*(temp->GetNode()->CPPmulticonstnode15) = multimapUnion->CPPmultimap15->cbegin();
		break;
	case 16:
		*(temp->GetNode()->CPPmulticonstnode16) = multimapUnion->CPPmultimap16->cbegin();
		break;
	case 17:
		*(temp->GetNode()->CPPmulticonstnode17) = multimapUnion->CPPmultimap17->cbegin();
		break;
	case 18:
		*(temp->GetNode()->CPPmulticonstnode18) = multimapUnion->CPPmultimap18->cbegin();
		break;
	case 19:
		*(temp->GetNode()->CPPmulticonstnode19) = multimapUnion->CPPmultimap19->cbegin();
		break;
	case 20:
		*(temp->GetNode()->CPPmulticonstnode20) = multimapUnion->CPPmultimap20->cbegin();
		break;
	case 21:
		*(temp->GetNode()->CPPmulticonstnode21) = multimapUnion->CPPmultimap21->cbegin();
		break;
	case 22:
		*(temp->GetNode()->CPPmulticonstnode22) = multimapUnion->CPPmultimap22->cbegin();
		break;
	case 23:
		*(temp->GetNode()->CPPmulticonstnode23) = multimapUnion->CPPmultimap23->cbegin();
		break;
	case 24:
		*(temp->GetNode()->CPPmulticonstnode24) = multimapUnion->CPPmultimap24->cbegin();
		break;
	case 25:
		*(temp->GetNode()->CPPmulticonstnode25) = multimapUnion->CPPmultimap25->cbegin();
		break;
	case 26:
		*(temp->GetNode()->CPPmulticonstnode26) = multimapUnion->CPPmultimap26->cbegin();
		break;
	case 27:
		*(temp->GetNode()->CPPmulticonstnode27) = multimapUnion->CPPmultimap27->cbegin();
		break;
	case 28:
		*(temp->GetNode()->CPPmulticonstnode28) = multimapUnion->CPPmultimap28->cbegin();
		break;
	case 29:
		*(temp->GetNode()->CPPmulticonstnode29) = multimapUnion->CPPmultimap29->cbegin();
		break;
	case 30:
		*(temp->GetNode()->CPPmulticonstnode30) = multimapUnion->CPPmultimap30->cbegin();
		break;
	case 31:
		*(temp->GetNode()->CPPmulticonstnode31) = multimapUnion->CPPmultimap31->cbegin();
		break;
	case 32:
		*(temp->GetNode()->CPPmulticonstnode32) = multimapUnion->CPPmultimap32->cbegin();
		break;
	case 33:
		*(temp->GetNode()->CPPmulticonstnode33) = multimapUnion->CPPmultimap33->cbegin();
		break;
	case 34:
		*(temp->GetNode()->CPPmulticonstnode34) = multimapUnion->CPPmultimap34->cbegin();
		break;
	case 35:
		*(temp->GetNode()->CPPmulticonstnode35) = multimapUnion->CPPmultimap35->cbegin();
		break;
	case 36:
		*(temp->GetNode()->CPPmulticonstnode36) = multimapUnion->CPPmultimap36->cbegin();
		break;
	case 37:
		*(temp->GetNode()->CPPmulticonstnode37) = multimapUnion->CPPmultimap37->cbegin();
		break;
	case 38:
		*(temp->GetNode()->CPPmulticonstnode38) = multimapUnion->CPPmultimap38->cbegin();
		break;
	case 39:
		*(temp->GetNode()->CPPmulticonstnode39) = multimapUnion->CPPmultimap39->cbegin();
		break;
	case 40:
		*(temp->GetNode()->CPPmulticonstnode40) = multimapUnion->CPPmultimap40->cbegin();
		break;
	case 41:
		*(temp->GetNode()->CPPmulticonstnode41) = multimapUnion->CPPmultimap41->cbegin();
		break;
	case 42:
		*(temp->GetNode()->CPPmulticonstnode42) = multimapUnion->CPPmultimap42->cbegin();
		break;
	case 43:
		*(temp->GetNode()->CPPmulticonstnode43) = multimapUnion->CPPmultimap43->cbegin();
		break;
	case 44:
		*(temp->GetNode()->CPPmulticonstnode44) = multimapUnion->CPPmultimap44->cbegin();
		break;
	case 45:
		*(temp->GetNode()->CPPmulticonstnode45) = multimapUnion->CPPmultimap45->cbegin();
		break;
	case 46:
		*(temp->GetNode()->CPPmulticonstnode46) = multimapUnion->CPPmultimap46->cbegin();
		break;
	case 47:
		*(temp->GetNode()->CPPmulticonstnode47) = multimapUnion->CPPmultimap47->cbegin();
		break;
	case 48:
		*(temp->GetNode()->CPPmulticonstnode48) = multimapUnion->CPPmultimap48->cbegin();
		break;
	case 49:
		*(temp->GetNode()->CPPmulticonstnode49) = multimapUnion->CPPmultimap49->cbegin();
		break;
	case 50:
		*(temp->GetNode()->CPPmulticonstnode50) = multimapUnion->CPPmultimap50->cbegin();
		break;
	case 51:
		*(temp->GetNode()->CPPmulticonstnode51) = multimapUnion->CPPmultimap51->cbegin();
		break;
	case 52:
		*(temp->GetNode()->CPPmulticonstnode52) = multimapUnion->CPPmultimap52->cbegin();
		break;
	case 53:
		*(temp->GetNode()->CPPmulticonstnode53) = multimapUnion->CPPmultimap53->cbegin();
		break;
	case 54:
		*(temp->GetNode()->CPPmulticonstnode54) = multimapUnion->CPPmultimap54->cbegin();
		break;
	case 55:
		*(temp->GetNode()->CPPmulticonstnode55) = multimapUnion->CPPmultimap55->cbegin();
		break;
	case 56:
		*(temp->GetNode()->CPPmulticonstnode56) = multimapUnion->CPPmultimap56->cbegin();
		break;
	case 57:
		*(temp->GetNode()->CPPmulticonstnode57) = multimapUnion->CPPmultimap57->cbegin();
		break;
	case 58:
		*(temp->GetNode()->CPPmulticonstnode58) = multimapUnion->CPPmultimap58->cbegin();
		break;
	case 59:
		*(temp->GetNode()->CPPmulticonstnode59) = multimapUnion->CPPmultimap59->cbegin();
		break;
	case 60:
		*(temp->GetNode()->CPPmulticonstnode60) = multimapUnion->CPPmultimap60->cbegin();
		break;
	case 61:
		*(temp->GetNode()->CPPmulticonstnode61) = multimapUnion->CPPmultimap61->cbegin();
		break;
	case 62:
		*(temp->GetNode()->CPPmulticonstnode62) = multimapUnion->CPPmultimap62->cbegin();
		break;
	case 63:
		*(temp->GetNode()->CPPmulticonstnode63) = multimapUnion->CPPmultimap63->cbegin();
		break;
	case 64:
		*(temp->GetNode()->CPPmulticonstnode64) = multimapUnion->CPPmultimap64->cbegin();
		break;
	case 65:
		*(temp->GetNode()->CPPmulticonstnode65) = multimapUnion->CPPmultimap65->cbegin();
		break;
	case 66:
		*(temp->GetNode()->CPPmulticonstnode66) = multimapUnion->CPPmultimap66->cbegin();
		break;
	case 67:
		*(temp->GetNode()->CPPmulticonstnode67) = multimapUnion->CPPmultimap67->cbegin();
		break;
	case 68:
		*(temp->GetNode()->CPPmulticonstnode68) = multimapUnion->CPPmultimap68->cbegin();
		break;
	case 69:
		*(temp->GetNode()->CPPmulticonstnode69) = multimapUnion->CPPmultimap69->cbegin();
		break;
	case 70:
		*(temp->GetNode()->CPPmulticonstnode70) = multimapUnion->CPPmultimap70->cbegin();
		break;
	case 71:
		*(temp->GetNode()->CPPmulticonstnode71) = multimapUnion->CPPmultimap71->cbegin();
		break;
	case 72:
		*(temp->GetNode()->CPPmulticonstnode72) = multimapUnion->CPPmultimap72->cbegin();
		break;
	case 73:
		*(temp->GetNode()->CPPmulticonstnode73) = multimapUnion->CPPmultimap73->cbegin();
		break;
	case 74:
		*(temp->GetNode()->CPPmulticonstnode74) = multimapUnion->CPPmultimap74->cbegin();
		break;
	case 75:
		*(temp->GetNode()->CPPmulticonstnode75) = multimapUnion->CPPmultimap75->cbegin();
		break;
	case 76:
		*(temp->GetNode()->CPPmulticonstnode76) = multimapUnion->CPPmultimap76->cbegin();
		break;
	case 77:
		*(temp->GetNode()->CPPmulticonstnode77) = multimapUnion->CPPmultimap77->cbegin();
		break;
	case 78:
		*(temp->GetNode()->CPPmulticonstnode78) = multimapUnion->CPPmultimap78->cbegin();
		break;
	case 79:
		*(temp->GetNode()->CPPmulticonstnode79) = multimapUnion->CPPmultimap79->cbegin();
		break;
	case 80:
		*(temp->GetNode()->CPPmulticonstnode80) = multimapUnion->CPPmultimap80->cbegin();
		break;
	case 81:
		*(temp->GetNode()->CPPmulticonstnode81) = multimapUnion->CPPmultimap81->cbegin();
		break;
	case 82:
		*(temp->GetNode()->CPPmulticonstnode82) = multimapUnion->CPPmultimap82->cbegin();
		break;
	case 83:
		*(temp->GetNode()->CPPmulticonstnode83) = multimapUnion->CPPmultimap83->cbegin();
		break;
	case 84:
		*(temp->GetNode()->CPPmulticonstnode84) = multimapUnion->CPPmultimap84->cbegin();
		break;
	case 85:
		*(temp->GetNode()->CPPmulticonstnode85) = multimapUnion->CPPmultimap85->cbegin();
		break;
	case 86:
		*(temp->GetNode()->CPPmulticonstnode86) = multimapUnion->CPPmultimap86->cbegin();
		break;
	case 87:
		*(temp->GetNode()->CPPmulticonstnode87) = multimapUnion->CPPmultimap87->cbegin();
		break;
	case 88:
		*(temp->GetNode()->CPPmulticonstnode88) = multimapUnion->CPPmultimap88->cbegin();
		break;
	case 89:
		*(temp->GetNode()->CPPmulticonstnode89) = multimapUnion->CPPmultimap89->cbegin();
		break;
	case 90:
		*(temp->GetNode()->CPPmulticonstnode90) = multimapUnion->CPPmultimap90->cbegin();
		break;
	case 91:
		*(temp->GetNode()->CPPmulticonstnode91) = multimapUnion->CPPmultimap91->cbegin();
		break;
	case 92:
		*(temp->GetNode()->CPPmulticonstnode92) = multimapUnion->CPPmultimap92->cbegin();
		break;
	case 93:
		*(temp->GetNode()->CPPmulticonstnode93) = multimapUnion->CPPmultimap93->cbegin();
		break;
	case 94:
		*(temp->GetNode()->CPPmulticonstnode94) = multimapUnion->CPPmultimap94->cbegin();
		break;
	case 95:
		*(temp->GetNode()->CPPmulticonstnode95) = multimapUnion->CPPmultimap95->cbegin();
		break;
	case 96:
		*(temp->GetNode()->CPPmulticonstnode96) = multimapUnion->CPPmultimap96->cbegin();
		break;
	case 97:
		*(temp->GetNode()->CPPmulticonstnode97) = multimapUnion->CPPmultimap97->cbegin();
		break;
	case 98:
		*(temp->GetNode()->CPPmulticonstnode98) = multimapUnion->CPPmultimap98->cbegin();
		break;
	case 99:
		*(temp->GetNode()->CPPmulticonstnode99) = multimapUnion->CPPmultimap99->cbegin();
		break;
	case 100:
		*(temp->GetNode()->CPPmulticonstnode100) = multimapUnion->CPPmultimap100->cbegin();
		break;
	case 101:
		*(temp->GetNode()->CPPmulticonstnode101) = multimapUnion->CPPmultimap101->cbegin();
		break;
	case 102:
		*(temp->GetNode()->CPPmulticonstnode102) = multimapUnion->CPPmultimap102->cbegin();
		break;
	case 103:
		*(temp->GetNode()->CPPmulticonstnode103) = multimapUnion->CPPmultimap103->cbegin();
		break;
	case 104:
		*(temp->GetNode()->CPPmulticonstnode104) = multimapUnion->CPPmultimap104->cbegin();
		break;
	case 105:
		*(temp->GetNode()->CPPmulticonstnode105) = multimapUnion->CPPmultimap105->cbegin();
		break;
	case 106:
		*(temp->GetNode()->CPPmulticonstnode106) = multimapUnion->CPPmultimap106->cbegin();
		break;
	case 107:
		*(temp->GetNode()->CPPmulticonstnode107) = multimapUnion->CPPmultimap107->cbegin();
		break;
	case 108:
		*(temp->GetNode()->CPPmulticonstnode108) = multimapUnion->CPPmultimap108->cbegin();
		break;
	case 109:
		*(temp->GetNode()->CPPmulticonstnode109) = multimapUnion->CPPmultimap109->cbegin();
		break;
	case 110:
		*(temp->GetNode()->CPPmulticonstnode110) = multimapUnion->CPPmultimap110->cbegin();
		break;
	case 111:
		*(temp->GetNode()->CPPmulticonstnode111) = multimapUnion->CPPmultimap111->cbegin();
		break;
	case 112:
		*(temp->GetNode()->CPPmulticonstnode112) = multimapUnion->CPPmultimap112->cbegin();
		break;
	case 113:
		*(temp->GetNode()->CPPmulticonstnode113) = multimapUnion->CPPmultimap113->cbegin();
		break;
	case 114:
		*(temp->GetNode()->CPPmulticonstnode114) = multimapUnion->CPPmultimap114->cbegin();
		break;
	case 115:
		*(temp->GetNode()->CPPmulticonstnode115) = multimapUnion->CPPmultimap115->cbegin();
		break;
	case 116:
		*(temp->GetNode()->CPPmulticonstnode116) = multimapUnion->CPPmultimap116->cbegin();
		break;
	case 117:
		*(temp->GetNode()->CPPmulticonstnode117) = multimapUnion->CPPmultimap117->cbegin();
		break;
	case 118:
		*(temp->GetNode()->CPPmulticonstnode118) = multimapUnion->CPPmultimap118->cbegin();
		break;
	case 119:
		*(temp->GetNode()->CPPmulticonstnode119) = multimapUnion->CPPmultimap119->cbegin();
		break;
	case 120:
		*(temp->GetNode()->CPPmulticonstnode120) = multimapUnion->CPPmultimap120->cbegin();
		break;
	case 121:
		*(temp->GetNode()->CPPmulticonstnode121) = multimapUnion->CPPmultimap121->cbegin();
		break;
	case 122:
		*(temp->GetNode()->CPPmulticonstnode122) = multimapUnion->CPPmultimap122->cbegin();
		break;
	case 123:
		*(temp->GetNode()->CPPmulticonstnode123) = multimapUnion->CPPmultimap123->cbegin();
		break;
	case 124:
		*(temp->GetNode()->CPPmulticonstnode124) = multimapUnion->CPPmultimap124->cbegin();
		break;
	case 125:
		*(temp->GetNode()->CPPmulticonstnode125) = multimapUnion->CPPmultimap125->cbegin();
		break;
	case 126:
		*(temp->GetNode()->CPPmulticonstnode126) = multimapUnion->CPPmultimap126->cbegin();
		break;
	case 127:
		*(temp->GetNode()->CPPmulticonstnode127) = multimapUnion->CPPmultimap127->cbegin();
		break;
	case 128:
		*(temp->GetNode()->CPPmulticonstnode128) = multimapUnion->CPPmultimap128->cbegin();
		break;
	case 129:
		*(temp->GetNode()->CPPmulticonstnode129) = multimapUnion->CPPmultimap129->cbegin();
		break;
	case 130:
		*(temp->GetNode()->CPPmulticonstnode130) = multimapUnion->CPPmultimap130->cbegin();
		break;
	case 131:
		*(temp->GetNode()->CPPmulticonstnode131) = multimapUnion->CPPmultimap131->cbegin();
		break;
	case 132:
		*(temp->GetNode()->CPPmulticonstnode132) = multimapUnion->CPPmultimap132->cbegin();
		break;
	case 133:
		*(temp->GetNode()->CPPmulticonstnode133) = multimapUnion->CPPmultimap133->cbegin();
		break;
	case 134:
		*(temp->GetNode()->CPPmulticonstnode134) = multimapUnion->CPPmultimap134->cbegin();
		break;
	case 135:
		*(temp->GetNode()->CPPmulticonstnode135) = multimapUnion->CPPmultimap135->cbegin();
		break;
	case 136:
		*(temp->GetNode()->CPPmulticonstnode136) = multimapUnion->CPPmultimap136->cbegin();
		break;
	case 137:
		*(temp->GetNode()->CPPmulticonstnode137) = multimapUnion->CPPmultimap137->cbegin();
		break;
	case 138:
		*(temp->GetNode()->CPPmulticonstnode138) = multimapUnion->CPPmultimap138->cbegin();
		break;
	case 139:
		*(temp->GetNode()->CPPmulticonstnode139) = multimapUnion->CPPmultimap139->cbegin();
		break;
	case 140:
		*(temp->GetNode()->CPPmulticonstnode140) = multimapUnion->CPPmultimap140->cbegin();
		break;
	case 141:
		*(temp->GetNode()->CPPmulticonstnode141) = multimapUnion->CPPmultimap141->cbegin();
		break;
	case 142:
		*(temp->GetNode()->CPPmulticonstnode142) = multimapUnion->CPPmultimap142->cbegin();
		break;
	case 143:
		*(temp->GetNode()->CPPmulticonstnode143) = multimapUnion->CPPmultimap143->cbegin();
		break;
	case 144:
		*(temp->GetNode()->CPPmulticonstnode144) = multimapUnion->CPPmultimap144->cbegin();
		break;
	case 145:
		*(temp->GetNode()->CPPmulticonstnode145) = multimapUnion->CPPmultimap145->cbegin();
		break;
	case 146:
		*(temp->GetNode()->CPPmulticonstnode146) = multimapUnion->CPPmultimap146->cbegin();
		break;
	case 147:
		*(temp->GetNode()->CPPmulticonstnode147) = multimapUnion->CPPmultimap147->cbegin();
		break;
	case 148:
		*(temp->GetNode()->CPPmulticonstnode148) = multimapUnion->CPPmultimap148->cbegin();
		break;
	case 149:
		*(temp->GetNode()->CPPmulticonstnode149) = multimapUnion->CPPmultimap149->cbegin();
		break;
	case 150:
		*(temp->GetNode()->CPPmulticonstnode150) = multimapUnion->CPPmultimap150->cbegin();
		break;
	case 151:
		*(temp->GetNode()->CPPmulticonstnode151) = multimapUnion->CPPmultimap151->cbegin();
		break;
	case 152:
		*(temp->GetNode()->CPPmulticonstnode152) = multimapUnion->CPPmultimap152->cbegin();
		break;
	case 153:
		*(temp->GetNode()->CPPmulticonstnode153) = multimapUnion->CPPmultimap153->cbegin();
		break;
	case 154:
		*(temp->GetNode()->CPPmulticonstnode154) = multimapUnion->CPPmultimap154->cbegin();
		break;
	case 155:
		*(temp->GetNode()->CPPmulticonstnode155) = multimapUnion->CPPmultimap155->cbegin();
		break;
	case 156:
		*(temp->GetNode()->CPPmulticonstnode156) = multimapUnion->CPPmultimap156->cbegin();
		break;
	case 157:
		*(temp->GetNode()->CPPmulticonstnode157) = multimapUnion->CPPmultimap157->cbegin();
		break;
	case 158:
		*(temp->GetNode()->CPPmulticonstnode158) = multimapUnion->CPPmultimap158->cbegin();
		break;
	case 159:
		*(temp->GetNode()->CPPmulticonstnode159) = multimapUnion->CPPmultimap159->cbegin();
		break;
	case 160:
		*(temp->GetNode()->CPPmulticonstnode160) = multimapUnion->CPPmultimap160->cbegin();
		break;
	case 161:
		*(temp->GetNode()->CPPmulticonstnode161) = multimapUnion->CPPmultimap161->cbegin();
		break;
	case 162:
		*(temp->GetNode()->CPPmulticonstnode162) = multimapUnion->CPPmultimap162->cbegin();
		break;
	case 163:
		*(temp->GetNode()->CPPmulticonstnode163) = multimapUnion->CPPmultimap163->cbegin();
		break;
	case 164:
		*(temp->GetNode()->CPPmulticonstnode164) = multimapUnion->CPPmultimap164->cbegin();
		break;
	case 165:
		*(temp->GetNode()->CPPmulticonstnode165) = multimapUnion->CPPmultimap165->cbegin();
		break;
	case 166:
		*(temp->GetNode()->CPPmulticonstnode166) = multimapUnion->CPPmultimap166->cbegin();
		break;
	case 167:
		*(temp->GetNode()->CPPmulticonstnode167) = multimapUnion->CPPmultimap167->cbegin();
		break;
	case 168:
		*(temp->GetNode()->CPPmulticonstnode168) = multimapUnion->CPPmultimap168->cbegin();
		break;
	case 169:
		*(temp->GetNode()->CPPmulticonstnode169) = multimapUnion->CPPmultimap169->cbegin();
		break;
	case 170:
		*(temp->GetNode()->CPPmulticonstnode170) = multimapUnion->CPPmultimap170->cbegin();
		break;
	case 171:
		*(temp->GetNode()->CPPmulticonstnode171) = multimapUnion->CPPmultimap171->cbegin();
		break;
	case 172:
		*(temp->GetNode()->CPPmulticonstnode172) = multimapUnion->CPPmultimap172->cbegin();
		break;
	case 173:
		*(temp->GetNode()->CPPmulticonstnode173) = multimapUnion->CPPmultimap173->cbegin();
		break;
	case 174:
		*(temp->GetNode()->CPPmulticonstnode174) = multimapUnion->CPPmultimap174->cbegin();
		break;
	case 175:
		*(temp->GetNode()->CPPmulticonstnode175) = multimapUnion->CPPmultimap175->cbegin();
		break;
	case 176:
		*(temp->GetNode()->CPPmulticonstnode176) = multimapUnion->CPPmultimap176->cbegin();
		break;
	case 177:
		*(temp->GetNode()->CPPmulticonstnode177) = multimapUnion->CPPmultimap177->cbegin();
		break;
	case 178:
		*(temp->GetNode()->CPPmulticonstnode178) = multimapUnion->CPPmultimap178->cbegin();
		break;
	case 179:
		*(temp->GetNode()->CPPmulticonstnode179) = multimapUnion->CPPmultimap179->cbegin();
		break;
	case 180:
		*(temp->GetNode()->CPPmulticonstnode180) = multimapUnion->CPPmultimap180->cbegin();
		break;
	case 181:
		*(temp->GetNode()->CPPmulticonstnode181) = multimapUnion->CPPmultimap181->cbegin();
		break;
	case 182:
		*(temp->GetNode()->CPPmulticonstnode182) = multimapUnion->CPPmultimap182->cbegin();
		break;
	case 183:
		*(temp->GetNode()->CPPmulticonstnode183) = multimapUnion->CPPmultimap183->cbegin();
		break;
	case 184:
		*(temp->GetNode()->CPPmulticonstnode184) = multimapUnion->CPPmultimap184->cbegin();
		break;
	case 185:
		*(temp->GetNode()->CPPmulticonstnode185) = multimapUnion->CPPmultimap185->cbegin();
		break;
	case 186:
		*(temp->GetNode()->CPPmulticonstnode186) = multimapUnion->CPPmultimap186->cbegin();
		break;
	case 187:
		*(temp->GetNode()->CPPmulticonstnode187) = multimapUnion->CPPmultimap187->cbegin();
		break;
	case 188:
		*(temp->GetNode()->CPPmulticonstnode188) = multimapUnion->CPPmultimap188->cbegin();
		break;
	case 189:
		*(temp->GetNode()->CPPmulticonstnode189) = multimapUnion->CPPmultimap189->cbegin();
		break;
	case 190:
		*(temp->GetNode()->CPPmulticonstnode190) = multimapUnion->CPPmultimap190->cbegin();
		break;
	case 191:
		*(temp->GetNode()->CPPmulticonstnode191) = multimapUnion->CPPmultimap191->cbegin();
		break;
	case 192:
		*(temp->GetNode()->CPPmulticonstnode192) = multimapUnion->CPPmultimap192->cbegin();
		break;
	case 193:
		*(temp->GetNode()->CPPmulticonstnode193) = multimapUnion->CPPmultimap193->cbegin();
		break;
	case 194:
		*(temp->GetNode()->CPPmulticonstnode194) = multimapUnion->CPPmultimap194->cbegin();
		break;
	case 195:
		*(temp->GetNode()->CPPmulticonstnode195) = multimapUnion->CPPmultimap195->cbegin();
		break;
	case 196:
		*(temp->GetNode()->CPPmulticonstnode196) = multimapUnion->CPPmultimap196->cbegin();
		break;
	}
	return temp;
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiConstNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::cend()
{
	CShorpUnOrderedMultiConstNode<Key, Value>^ temp = gcnew CShorpUnOrderedMultiConstNode<Key, Value>();
	if (gIntKeyClassDictionary)
		temp->SetIntKeyClassDictionary(gIntKeyClassDictionary);
	switch (nKeyValueType)
	{
	case 0: default:
		return nullptr;
	case 1:
		*(temp->GetNode()->CPPmulticonstnode1) = multimapUnion->CPPmultimap1->cend();
		break;
	case 2:
		*(temp->GetNode()->CPPmulticonstnode2) = multimapUnion->CPPmultimap2->cend();
		break;
	case 3:
		*(temp->GetNode()->CPPmulticonstnode3) = multimapUnion->CPPmultimap3->cend();
		break;
	case 4:
		*(temp->GetNode()->CPPmulticonstnode4) = multimapUnion->CPPmultimap4->cend();
		break;
	case 5:
		*(temp->GetNode()->CPPmulticonstnode5) = multimapUnion->CPPmultimap5->cend();
		break;
	case 6:
		*(temp->GetNode()->CPPmulticonstnode6) = multimapUnion->CPPmultimap6->cend();
		break;
	case 7:
		*(temp->GetNode()->CPPmulticonstnode7) = multimapUnion->CPPmultimap7->cend();
		break;
	case 8:
		*(temp->GetNode()->CPPmulticonstnode8) = multimapUnion->CPPmultimap8->cend();
		break;
	case 9:
		*(temp->GetNode()->CPPmulticonstnode9) = multimapUnion->CPPmultimap9->cend();
		break;
	case 10:
		*(temp->GetNode()->CPPmulticonstnode10) = multimapUnion->CPPmultimap10->cend();
		break;
	case 11:
		*(temp->GetNode()->CPPmulticonstnode11) = multimapUnion->CPPmultimap11->cend();
		break;
	case 12:
		*(temp->GetNode()->CPPmulticonstnode12) = multimapUnion->CPPmultimap12->cend();
		break;
	case 13:
		*(temp->GetNode()->CPPmulticonstnode13) = multimapUnion->CPPmultimap13->cend();
		break;
	case 14:
		*(temp->GetNode()->CPPmulticonstnode14) = multimapUnion->CPPmultimap14->cend();
		break;
	case 15:
		*(temp->GetNode()->CPPmulticonstnode15) = multimapUnion->CPPmultimap15->cend();
		break;
	case 16:
		*(temp->GetNode()->CPPmulticonstnode16) = multimapUnion->CPPmultimap16->cend();
		break;
	case 17:
		*(temp->GetNode()->CPPmulticonstnode17) = multimapUnion->CPPmultimap17->cend();
		break;
	case 18:
		*(temp->GetNode()->CPPmulticonstnode18) = multimapUnion->CPPmultimap18->cend();
		break;
	case 19:
		*(temp->GetNode()->CPPmulticonstnode19) = multimapUnion->CPPmultimap19->cend();
		break;
	case 20:
		*(temp->GetNode()->CPPmulticonstnode20) = multimapUnion->CPPmultimap20->cend();
		break;
	case 21:
		*(temp->GetNode()->CPPmulticonstnode21) = multimapUnion->CPPmultimap21->cend();
		break;
	case 22:
		*(temp->GetNode()->CPPmulticonstnode22) = multimapUnion->CPPmultimap22->cend();
		break;
	case 23:
		*(temp->GetNode()->CPPmulticonstnode23) = multimapUnion->CPPmultimap23->cend();
		break;
	case 24:
		*(temp->GetNode()->CPPmulticonstnode24) = multimapUnion->CPPmultimap24->cend();
		break;
	case 25:
		*(temp->GetNode()->CPPmulticonstnode25) = multimapUnion->CPPmultimap25->cend();
		break;
	case 26:
		*(temp->GetNode()->CPPmulticonstnode26) = multimapUnion->CPPmultimap26->cend();
		break;
	case 27:
		*(temp->GetNode()->CPPmulticonstnode27) = multimapUnion->CPPmultimap27->cend();
		break;
	case 28:
		*(temp->GetNode()->CPPmulticonstnode28) = multimapUnion->CPPmultimap28->cend();
		break;
	case 29:
		*(temp->GetNode()->CPPmulticonstnode29) = multimapUnion->CPPmultimap29->cend();
		break;
	case 30:
		*(temp->GetNode()->CPPmulticonstnode30) = multimapUnion->CPPmultimap30->cend();
		break;
	case 31:
		*(temp->GetNode()->CPPmulticonstnode31) = multimapUnion->CPPmultimap31->cend();
		break;
	case 32:
		*(temp->GetNode()->CPPmulticonstnode32) = multimapUnion->CPPmultimap32->cend();
		break;
	case 33:
		*(temp->GetNode()->CPPmulticonstnode33) = multimapUnion->CPPmultimap33->cend();
		break;
	case 34:
		*(temp->GetNode()->CPPmulticonstnode34) = multimapUnion->CPPmultimap34->cend();
		break;
	case 35:
		*(temp->GetNode()->CPPmulticonstnode35) = multimapUnion->CPPmultimap35->cend();
		break;
	case 36:
		*(temp->GetNode()->CPPmulticonstnode36) = multimapUnion->CPPmultimap36->cend();
		break;
	case 37:
		*(temp->GetNode()->CPPmulticonstnode37) = multimapUnion->CPPmultimap37->cend();
		break;
	case 38:
		*(temp->GetNode()->CPPmulticonstnode38) = multimapUnion->CPPmultimap38->cend();
		break;
	case 39:
		*(temp->GetNode()->CPPmulticonstnode39) = multimapUnion->CPPmultimap39->cend();
		break;
	case 40:
		*(temp->GetNode()->CPPmulticonstnode40) = multimapUnion->CPPmultimap40->cend();
		break;
	case 41:
		*(temp->GetNode()->CPPmulticonstnode41) = multimapUnion->CPPmultimap41->cend();
		break;
	case 42:
		*(temp->GetNode()->CPPmulticonstnode42) = multimapUnion->CPPmultimap42->cend();
		break;
	case 43:
		*(temp->GetNode()->CPPmulticonstnode43) = multimapUnion->CPPmultimap43->cend();
		break;
	case 44:
		*(temp->GetNode()->CPPmulticonstnode44) = multimapUnion->CPPmultimap44->cend();
		break;
	case 45:
		*(temp->GetNode()->CPPmulticonstnode45) = multimapUnion->CPPmultimap45->cend();
		break;
	case 46:
		*(temp->GetNode()->CPPmulticonstnode46) = multimapUnion->CPPmultimap46->cend();
		break;
	case 47:
		*(temp->GetNode()->CPPmulticonstnode47) = multimapUnion->CPPmultimap47->cend();
		break;
	case 48:
		*(temp->GetNode()->CPPmulticonstnode48) = multimapUnion->CPPmultimap48->cend();
		break;
	case 49:
		*(temp->GetNode()->CPPmulticonstnode49) = multimapUnion->CPPmultimap49->cend();
		break;
	case 50:
		*(temp->GetNode()->CPPmulticonstnode50) = multimapUnion->CPPmultimap50->cend();
		break;
	case 51:
		*(temp->GetNode()->CPPmulticonstnode51) = multimapUnion->CPPmultimap51->cend();
		break;
	case 52:
		*(temp->GetNode()->CPPmulticonstnode52) = multimapUnion->CPPmultimap52->cend();
		break;
	case 53:
		*(temp->GetNode()->CPPmulticonstnode53) = multimapUnion->CPPmultimap53->cend();
		break;
	case 54:
		*(temp->GetNode()->CPPmulticonstnode54) = multimapUnion->CPPmultimap54->cend();
		break;
	case 55:
		*(temp->GetNode()->CPPmulticonstnode55) = multimapUnion->CPPmultimap55->cend();
		break;
	case 56:
		*(temp->GetNode()->CPPmulticonstnode56) = multimapUnion->CPPmultimap56->cend();
		break;
	case 57:
		*(temp->GetNode()->CPPmulticonstnode57) = multimapUnion->CPPmultimap57->cend();
		break;
	case 58:
		*(temp->GetNode()->CPPmulticonstnode58) = multimapUnion->CPPmultimap58->cend();
		break;
	case 59:
		*(temp->GetNode()->CPPmulticonstnode59) = multimapUnion->CPPmultimap59->cend();
		break;
	case 60:
		*(temp->GetNode()->CPPmulticonstnode60) = multimapUnion->CPPmultimap60->cend();
		break;
	case 61:
		*(temp->GetNode()->CPPmulticonstnode61) = multimapUnion->CPPmultimap61->cend();
		break;
	case 62:
		*(temp->GetNode()->CPPmulticonstnode62) = multimapUnion->CPPmultimap62->cend();
		break;
	case 63:
		*(temp->GetNode()->CPPmulticonstnode63) = multimapUnion->CPPmultimap63->cend();
		break;
	case 64:
		*(temp->GetNode()->CPPmulticonstnode64) = multimapUnion->CPPmultimap64->cend();
		break;
	case 65:
		*(temp->GetNode()->CPPmulticonstnode65) = multimapUnion->CPPmultimap65->cend();
		break;
	case 66:
		*(temp->GetNode()->CPPmulticonstnode66) = multimapUnion->CPPmultimap66->cend();
		break;
	case 67:
		*(temp->GetNode()->CPPmulticonstnode67) = multimapUnion->CPPmultimap67->cend();
		break;
	case 68:
		*(temp->GetNode()->CPPmulticonstnode68) = multimapUnion->CPPmultimap68->cend();
		break;
	case 69:
		*(temp->GetNode()->CPPmulticonstnode69) = multimapUnion->CPPmultimap69->cend();
		break;
	case 70:
		*(temp->GetNode()->CPPmulticonstnode70) = multimapUnion->CPPmultimap70->cend();
		break;
	case 71:
		*(temp->GetNode()->CPPmulticonstnode71) = multimapUnion->CPPmultimap71->cend();
		break;
	case 72:
		*(temp->GetNode()->CPPmulticonstnode72) = multimapUnion->CPPmultimap72->cend();
		break;
	case 73:
		*(temp->GetNode()->CPPmulticonstnode73) = multimapUnion->CPPmultimap73->cend();
		break;
	case 74:
		*(temp->GetNode()->CPPmulticonstnode74) = multimapUnion->CPPmultimap74->cend();
		break;
	case 75:
		*(temp->GetNode()->CPPmulticonstnode75) = multimapUnion->CPPmultimap75->cend();
		break;
	case 76:
		*(temp->GetNode()->CPPmulticonstnode76) = multimapUnion->CPPmultimap76->cend();
		break;
	case 77:
		*(temp->GetNode()->CPPmulticonstnode77) = multimapUnion->CPPmultimap77->cend();
		break;
	case 78:
		*(temp->GetNode()->CPPmulticonstnode78) = multimapUnion->CPPmultimap78->cend();
		break;
	case 79:
		*(temp->GetNode()->CPPmulticonstnode79) = multimapUnion->CPPmultimap79->cend();
		break;
	case 80:
		*(temp->GetNode()->CPPmulticonstnode80) = multimapUnion->CPPmultimap80->cend();
		break;
	case 81:
		*(temp->GetNode()->CPPmulticonstnode81) = multimapUnion->CPPmultimap81->cend();
		break;
	case 82:
		*(temp->GetNode()->CPPmulticonstnode82) = multimapUnion->CPPmultimap82->cend();
		break;
	case 83:
		*(temp->GetNode()->CPPmulticonstnode83) = multimapUnion->CPPmultimap83->cend();
		break;
	case 84:
		*(temp->GetNode()->CPPmulticonstnode84) = multimapUnion->CPPmultimap84->cend();
		break;
	case 85:
		*(temp->GetNode()->CPPmulticonstnode85) = multimapUnion->CPPmultimap85->cend();
		break;
	case 86:
		*(temp->GetNode()->CPPmulticonstnode86) = multimapUnion->CPPmultimap86->cend();
		break;
	case 87:
		*(temp->GetNode()->CPPmulticonstnode87) = multimapUnion->CPPmultimap87->cend();
		break;
	case 88:
		*(temp->GetNode()->CPPmulticonstnode88) = multimapUnion->CPPmultimap88->cend();
		break;
	case 89:
		*(temp->GetNode()->CPPmulticonstnode89) = multimapUnion->CPPmultimap89->cend();
		break;
	case 90:
		*(temp->GetNode()->CPPmulticonstnode90) = multimapUnion->CPPmultimap90->cend();
		break;
	case 91:
		*(temp->GetNode()->CPPmulticonstnode91) = multimapUnion->CPPmultimap91->cend();
		break;
	case 92:
		*(temp->GetNode()->CPPmulticonstnode92) = multimapUnion->CPPmultimap92->cend();
		break;
	case 93:
		*(temp->GetNode()->CPPmulticonstnode93) = multimapUnion->CPPmultimap93->cend();
		break;
	case 94:
		*(temp->GetNode()->CPPmulticonstnode94) = multimapUnion->CPPmultimap94->cend();
		break;
	case 95:
		*(temp->GetNode()->CPPmulticonstnode95) = multimapUnion->CPPmultimap95->cend();
		break;
	case 96:
		*(temp->GetNode()->CPPmulticonstnode96) = multimapUnion->CPPmultimap96->cend();
		break;
	case 97:
		*(temp->GetNode()->CPPmulticonstnode97) = multimapUnion->CPPmultimap97->cend();
		break;
	case 98:
		*(temp->GetNode()->CPPmulticonstnode98) = multimapUnion->CPPmultimap98->cend();
		break;
	case 99:
		*(temp->GetNode()->CPPmulticonstnode99) = multimapUnion->CPPmultimap99->cend();
		break;
	case 100:
		*(temp->GetNode()->CPPmulticonstnode100) = multimapUnion->CPPmultimap100->cend();
		break;
	case 101:
		*(temp->GetNode()->CPPmulticonstnode101) = multimapUnion->CPPmultimap101->cend();
		break;
	case 102:
		*(temp->GetNode()->CPPmulticonstnode102) = multimapUnion->CPPmultimap102->cend();
		break;
	case 103:
		*(temp->GetNode()->CPPmulticonstnode103) = multimapUnion->CPPmultimap103->cend();
		break;
	case 104:
		*(temp->GetNode()->CPPmulticonstnode104) = multimapUnion->CPPmultimap104->cend();
		break;
	case 105:
		*(temp->GetNode()->CPPmulticonstnode105) = multimapUnion->CPPmultimap105->cend();
		break;
	case 106:
		*(temp->GetNode()->CPPmulticonstnode106) = multimapUnion->CPPmultimap106->cend();
		break;
	case 107:
		*(temp->GetNode()->CPPmulticonstnode107) = multimapUnion->CPPmultimap107->cend();
		break;
	case 108:
		*(temp->GetNode()->CPPmulticonstnode108) = multimapUnion->CPPmultimap108->cend();
		break;
	case 109:
		*(temp->GetNode()->CPPmulticonstnode109) = multimapUnion->CPPmultimap109->cend();
		break;
	case 110:
		*(temp->GetNode()->CPPmulticonstnode110) = multimapUnion->CPPmultimap110->cend();
		break;
	case 111:
		*(temp->GetNode()->CPPmulticonstnode111) = multimapUnion->CPPmultimap111->cend();
		break;
	case 112:
		*(temp->GetNode()->CPPmulticonstnode112) = multimapUnion->CPPmultimap112->cend();
		break;
	case 113:
		*(temp->GetNode()->CPPmulticonstnode113) = multimapUnion->CPPmultimap113->cend();
		break;
	case 114:
		*(temp->GetNode()->CPPmulticonstnode114) = multimapUnion->CPPmultimap114->cend();
		break;
	case 115:
		*(temp->GetNode()->CPPmulticonstnode115) = multimapUnion->CPPmultimap115->cend();
		break;
	case 116:
		*(temp->GetNode()->CPPmulticonstnode116) = multimapUnion->CPPmultimap116->cend();
		break;
	case 117:
		*(temp->GetNode()->CPPmulticonstnode117) = multimapUnion->CPPmultimap117->cend();
		break;
	case 118:
		*(temp->GetNode()->CPPmulticonstnode118) = multimapUnion->CPPmultimap118->cend();
		break;
	case 119:
		*(temp->GetNode()->CPPmulticonstnode119) = multimapUnion->CPPmultimap119->cend();
		break;
	case 120:
		*(temp->GetNode()->CPPmulticonstnode120) = multimapUnion->CPPmultimap120->cend();
		break;
	case 121:
		*(temp->GetNode()->CPPmulticonstnode121) = multimapUnion->CPPmultimap121->cend();
		break;
	case 122:
		*(temp->GetNode()->CPPmulticonstnode122) = multimapUnion->CPPmultimap122->cend();
		break;
	case 123:
		*(temp->GetNode()->CPPmulticonstnode123) = multimapUnion->CPPmultimap123->cend();
		break;
	case 124:
		*(temp->GetNode()->CPPmulticonstnode124) = multimapUnion->CPPmultimap124->cend();
		break;
	case 125:
		*(temp->GetNode()->CPPmulticonstnode125) = multimapUnion->CPPmultimap125->cend();
		break;
	case 126:
		*(temp->GetNode()->CPPmulticonstnode126) = multimapUnion->CPPmultimap126->cend();
		break;
	case 127:
		*(temp->GetNode()->CPPmulticonstnode127) = multimapUnion->CPPmultimap127->cend();
		break;
	case 128:
		*(temp->GetNode()->CPPmulticonstnode128) = multimapUnion->CPPmultimap128->cend();
		break;
	case 129:
		*(temp->GetNode()->CPPmulticonstnode129) = multimapUnion->CPPmultimap129->cend();
		break;
	case 130:
		*(temp->GetNode()->CPPmulticonstnode130) = multimapUnion->CPPmultimap130->cend();
		break;
	case 131:
		*(temp->GetNode()->CPPmulticonstnode131) = multimapUnion->CPPmultimap131->cend();
		break;
	case 132:
		*(temp->GetNode()->CPPmulticonstnode132) = multimapUnion->CPPmultimap132->cend();
		break;
	case 133:
		*(temp->GetNode()->CPPmulticonstnode133) = multimapUnion->CPPmultimap133->cend();
		break;
	case 134:
		*(temp->GetNode()->CPPmulticonstnode134) = multimapUnion->CPPmultimap134->cend();
		break;
	case 135:
		*(temp->GetNode()->CPPmulticonstnode135) = multimapUnion->CPPmultimap135->cend();
		break;
	case 136:
		*(temp->GetNode()->CPPmulticonstnode136) = multimapUnion->CPPmultimap136->cend();
		break;
	case 137:
		*(temp->GetNode()->CPPmulticonstnode137) = multimapUnion->CPPmultimap137->cend();
		break;
	case 138:
		*(temp->GetNode()->CPPmulticonstnode138) = multimapUnion->CPPmultimap138->cend();
		break;
	case 139:
		*(temp->GetNode()->CPPmulticonstnode139) = multimapUnion->CPPmultimap139->cend();
		break;
	case 140:
		*(temp->GetNode()->CPPmulticonstnode140) = multimapUnion->CPPmultimap140->cend();
		break;
	case 141:
		*(temp->GetNode()->CPPmulticonstnode141) = multimapUnion->CPPmultimap141->cend();
		break;
	case 142:
		*(temp->GetNode()->CPPmulticonstnode142) = multimapUnion->CPPmultimap142->cend();
		break;
	case 143:
		*(temp->GetNode()->CPPmulticonstnode143) = multimapUnion->CPPmultimap143->cend();
		break;
	case 144:
		*(temp->GetNode()->CPPmulticonstnode144) = multimapUnion->CPPmultimap144->cend();
		break;
	case 145:
		*(temp->GetNode()->CPPmulticonstnode145) = multimapUnion->CPPmultimap145->cend();
		break;
	case 146:
		*(temp->GetNode()->CPPmulticonstnode146) = multimapUnion->CPPmultimap146->cend();
		break;
	case 147:
		*(temp->GetNode()->CPPmulticonstnode147) = multimapUnion->CPPmultimap147->cend();
		break;
	case 148:
		*(temp->GetNode()->CPPmulticonstnode148) = multimapUnion->CPPmultimap148->cend();
		break;
	case 149:
		*(temp->GetNode()->CPPmulticonstnode149) = multimapUnion->CPPmultimap149->cend();
		break;
	case 150:
		*(temp->GetNode()->CPPmulticonstnode150) = multimapUnion->CPPmultimap150->cend();
		break;
	case 151:
		*(temp->GetNode()->CPPmulticonstnode151) = multimapUnion->CPPmultimap151->cend();
		break;
	case 152:
		*(temp->GetNode()->CPPmulticonstnode152) = multimapUnion->CPPmultimap152->cend();
		break;
	case 153:
		*(temp->GetNode()->CPPmulticonstnode153) = multimapUnion->CPPmultimap153->cend();
		break;
	case 154:
		*(temp->GetNode()->CPPmulticonstnode154) = multimapUnion->CPPmultimap154->cend();
		break;
	case 155:
		*(temp->GetNode()->CPPmulticonstnode155) = multimapUnion->CPPmultimap155->cend();
		break;
	case 156:
		*(temp->GetNode()->CPPmulticonstnode156) = multimapUnion->CPPmultimap156->cend();
		break;
	case 157:
		*(temp->GetNode()->CPPmulticonstnode157) = multimapUnion->CPPmultimap157->cend();
		break;
	case 158:
		*(temp->GetNode()->CPPmulticonstnode158) = multimapUnion->CPPmultimap158->cend();
		break;
	case 159:
		*(temp->GetNode()->CPPmulticonstnode159) = multimapUnion->CPPmultimap159->cend();
		break;
	case 160:
		*(temp->GetNode()->CPPmulticonstnode160) = multimapUnion->CPPmultimap160->cend();
		break;
	case 161:
		*(temp->GetNode()->CPPmulticonstnode161) = multimapUnion->CPPmultimap161->cend();
		break;
	case 162:
		*(temp->GetNode()->CPPmulticonstnode162) = multimapUnion->CPPmultimap162->cend();
		break;
	case 163:
		*(temp->GetNode()->CPPmulticonstnode163) = multimapUnion->CPPmultimap163->cend();
		break;
	case 164:
		*(temp->GetNode()->CPPmulticonstnode164) = multimapUnion->CPPmultimap164->cend();
		break;
	case 165:
		*(temp->GetNode()->CPPmulticonstnode165) = multimapUnion->CPPmultimap165->cend();
		break;
	case 166:
		*(temp->GetNode()->CPPmulticonstnode166) = multimapUnion->CPPmultimap166->cend();
		break;
	case 167:
		*(temp->GetNode()->CPPmulticonstnode167) = multimapUnion->CPPmultimap167->cend();
		break;
	case 168:
		*(temp->GetNode()->CPPmulticonstnode168) = multimapUnion->CPPmultimap168->cend();
		break;
	case 169:
		*(temp->GetNode()->CPPmulticonstnode169) = multimapUnion->CPPmultimap169->cend();
		break;
	case 170:
		*(temp->GetNode()->CPPmulticonstnode170) = multimapUnion->CPPmultimap170->cend();
		break;
	case 171:
		*(temp->GetNode()->CPPmulticonstnode171) = multimapUnion->CPPmultimap171->cend();
		break;
	case 172:
		*(temp->GetNode()->CPPmulticonstnode172) = multimapUnion->CPPmultimap172->cend();
		break;
	case 173:
		*(temp->GetNode()->CPPmulticonstnode173) = multimapUnion->CPPmultimap173->cend();
		break;
	case 174:
		*(temp->GetNode()->CPPmulticonstnode174) = multimapUnion->CPPmultimap174->cend();
		break;
	case 175:
		*(temp->GetNode()->CPPmulticonstnode175) = multimapUnion->CPPmultimap175->cend();
		break;
	case 176:
		*(temp->GetNode()->CPPmulticonstnode176) = multimapUnion->CPPmultimap176->cend();
		break;
	case 177:
		*(temp->GetNode()->CPPmulticonstnode177) = multimapUnion->CPPmultimap177->cend();
		break;
	case 178:
		*(temp->GetNode()->CPPmulticonstnode178) = multimapUnion->CPPmultimap178->cend();
		break;
	case 179:
		*(temp->GetNode()->CPPmulticonstnode179) = multimapUnion->CPPmultimap179->cend();
		break;
	case 180:
		*(temp->GetNode()->CPPmulticonstnode180) = multimapUnion->CPPmultimap180->cend();
		break;
	case 181:
		*(temp->GetNode()->CPPmulticonstnode181) = multimapUnion->CPPmultimap181->cend();
		break;
	case 182:
		*(temp->GetNode()->CPPmulticonstnode182) = multimapUnion->CPPmultimap182->cend();
		break;
	case 183:
		*(temp->GetNode()->CPPmulticonstnode183) = multimapUnion->CPPmultimap183->cend();
		break;
	case 184:
		*(temp->GetNode()->CPPmulticonstnode184) = multimapUnion->CPPmultimap184->cend();
		break;
	case 185:
		*(temp->GetNode()->CPPmulticonstnode185) = multimapUnion->CPPmultimap185->cend();
		break;
	case 186:
		*(temp->GetNode()->CPPmulticonstnode186) = multimapUnion->CPPmultimap186->cend();
		break;
	case 187:
		*(temp->GetNode()->CPPmulticonstnode187) = multimapUnion->CPPmultimap187->cend();
		break;
	case 188:
		*(temp->GetNode()->CPPmulticonstnode188) = multimapUnion->CPPmultimap188->cend();
		break;
	case 189:
		*(temp->GetNode()->CPPmulticonstnode189) = multimapUnion->CPPmultimap189->cend();
		break;
	case 190:
		*(temp->GetNode()->CPPmulticonstnode190) = multimapUnion->CPPmultimap190->cend();
		break;
	case 191:
		*(temp->GetNode()->CPPmulticonstnode191) = multimapUnion->CPPmultimap191->cend();
		break;
	case 192:
		*(temp->GetNode()->CPPmulticonstnode192) = multimapUnion->CPPmultimap192->cend();
		break;
	case 193:
		*(temp->GetNode()->CPPmulticonstnode193) = multimapUnion->CPPmultimap193->cend();
		break;
	case 194:
		*(temp->GetNode()->CPPmulticonstnode194) = multimapUnion->CPPmultimap194->cend();
		break;
	case 195:
		*(temp->GetNode()->CPPmulticonstnode195) = multimapUnion->CPPmultimap195->cend();
		break;
	case 196:
		*(temp->GetNode()->CPPmulticonstnode196) = multimapUnion->CPPmultimap196->cend();
		break;
	}
	return temp;
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::emplace_hint(CShorpUnOrderedMultiNode<Key, Value>^ _Where, Key key, Value value)
{
	if (Object::ReferenceEquals(_Where, nullptr)) return nullptr;
	if (Object::ReferenceEquals(key, nullptr)) return nullptr;
	if (Object::ReferenceEquals(value, nullptr)) return nullptr;
	Type^ keyType = Key::typeid;
	Type^ valueType = Value::typeid;

	unsigned char KeyUchar = 0;
	char KeyChar = 0;
	short KeyShort = 0;
	unsigned short KeyUshort = 0;
	int KeyInt = 0;
	unsigned int KeyUint = 0;
	long long KeyLonglong = 0;
	unsigned long long KeyUlonglong = 0;
	float KeyFloat = 0.0f;
	double KeyDouble = 0;
	wchar_t KeyWchar = 0;
	bool KeyBool = false;
	std::wstring KeyWstring = L"";
	__int64 Key__Int = 0;

	if (keyType->Equals(System::Byte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUchar = static_cast<unsigned char>(safe_cast<System::Byte>(managedObject));
	}
	else if (keyType->Equals(System::SByte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyChar = static_cast<char>(safe_cast<System::SByte>(managedObject));
	}
	else if (keyType->Equals(System::Int16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyShort = static_cast<short>(safe_cast<System::Int16>(managedObject));
	}
	else if (keyType->Equals(System::UInt16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUshort = static_cast<unsigned short>(safe_cast<System::UInt16>(managedObject));
	}
	else if (keyType->Equals(System::Int32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyInt = static_cast<int>(safe_cast<System::Int32>(managedObject));
	}
	else if (keyType->Equals(System::UInt32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUint = static_cast<unsigned int>(safe_cast<System::UInt32>(managedObject));
	}
	else if (keyType->Equals(System::Int64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyLonglong = static_cast<long long>(safe_cast<System::Int64>(managedObject));
	}
	else if (keyType->Equals(System::UInt64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUlonglong = static_cast<unsigned long long>(safe_cast<System::UInt64>(managedObject));
	}
	else if (keyType->Equals(System::Single::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyFloat = static_cast<float>(safe_cast<System::Single>(managedObject));
	}
	else if (keyType->Equals(System::Double::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyDouble = static_cast<double>(safe_cast<System::Double>(managedObject));
	}
	else if (keyType->Equals(System::Char::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyWchar = static_cast<wchar_t>(safe_cast<System::Char>(managedObject));
	}
	else if (keyType->Equals(System::Boolean::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyBool = static_cast<bool>(safe_cast<System::Boolean>(managedObject));
	}
	else if (keyType->Equals(System::String::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		MarshalString(safe_cast<System::String^>(managedObject), KeyWstring);
	}
	else if (keyType->IsClass)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			gKeyClassDictionary->Add(key, nDictionaryKeyCount);
			gIntKeyClassDictionary->Add(nDictionaryKeyCount, key);
			Key__Int = nDictionaryKeyCount;
			nDictionaryKeyCount++;
		}
	}
	else if (keyType->IsValueType && !keyType->IsPrimitive && !keyType->IsEnum)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			gKeyClassDictionary->Add(key, nDictionaryKeyCount);
			gIntKeyClassDictionary->Add(nDictionaryKeyCount, key);
			Key__Int = nDictionaryKeyCount;
			nDictionaryKeyCount++;
		}
	}
	else if (keyType->IsInterface)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			gKeyClassDictionary->Add(key, nDictionaryKeyCount);
			gIntKeyClassDictionary->Add(nDictionaryKeyCount, key);
			Key__Int = nDictionaryKeyCount;
			nDictionaryKeyCount++;
		}
	}
	else
	{
		return nullptr;
	}

	unsigned char ValueUchar = 0;
	char ValueChar = 0;
	short ValueShort = 0;
	unsigned short ValueUshort = 0;
	int ValueInt = 0;
	unsigned int ValueUint = 0;
	long long ValueLonglong = 0;
	unsigned long long ValueUlonglong = 0;
	float ValueFloat = 0.0f;
	double ValueDouble = 0;
	wchar_t ValueWchar = 0;
	bool ValueBool = false;
	std::wstring ValueWstring = L"";
	__int64 Value__Int = 0;

	if (valueType->Equals(System::Byte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUchar = static_cast<unsigned char>(safe_cast<System::Byte>(managedObject));
	}
	else if (valueType->Equals(System::SByte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueChar = static_cast<char>(safe_cast<System::SByte>(managedObject));
	}
	else if (valueType->Equals(System::Int16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueShort = static_cast<short>(safe_cast<System::Int16>(managedObject));
	}
	else if (valueType->Equals(System::UInt16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUshort = static_cast<unsigned short>(safe_cast<System::UInt16>(managedObject));
	}
	else if (valueType->Equals(System::Int32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueInt = static_cast<int>(safe_cast<System::Int32>(managedObject));
	}
	else if (valueType->Equals(System::UInt32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUint = static_cast<unsigned int>(safe_cast<System::UInt32>(managedObject));
	}
	else if (valueType->Equals(System::Int64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueLonglong = static_cast<long long>(safe_cast<System::Int64>(managedObject));
	}
	else if (valueType->Equals(System::UInt64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUlonglong = static_cast<unsigned long long>(safe_cast<System::UInt64>(managedObject));
	}
	else if (valueType->Equals(System::Single::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueFloat = static_cast<float>(safe_cast<System::Single>(managedObject));
	}
	else if (valueType->Equals(System::Double::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueDouble = static_cast<double>(safe_cast<System::Double>(managedObject));
	}
	else if (valueType->Equals(System::Char::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueWchar = static_cast<wchar_t>(safe_cast<System::Char>(managedObject));
	}
	else if (valueType->Equals(System::Boolean::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueBool = static_cast<bool>(safe_cast<System::Boolean>(managedObject));
	}
	else if (valueType->Equals(System::String::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		MarshalString(safe_cast<System::String^>(managedObject), ValueWstring);
	}
	else if (valueType->IsClass)
	{
		gValueClassDictionary->Add(nDictionaryValueCount, value);
		Value__Int = nDictionaryValueCount;
		nDictionaryValueCount++;
	}
	else if (valueType->IsValueType && !valueType->IsPrimitive && !valueType->IsEnum)
	{
		gValueClassDictionary->Add(nDictionaryValueCount, value);
		Value__Int = nDictionaryValueCount;
		nDictionaryValueCount++;
	}
	else if (valueType->IsInterface)
	{
		gValueClassDictionary->Add(nDictionaryValueCount, value);
		Value__Int = nDictionaryValueCount;
		nDictionaryValueCount++;
	}
	else
	{
		GCHandle handle = GCHandle::Alloc(value);
		IntPtr ptr = GCHandle::ToIntPtr(handle);
		Value__Int = ptr.ToInt64();
		handle.Free();
		return nullptr;
	}

	switch (nKeyValueType)
	{
	case 0: default:
		return nullptr;
	case 1:
		*(multiNode->GetNode()->CPPmultinode1) = multimapUnion->CPPmultimap1->emplace_hint(*(_Where->GetNode()->CPPmultinode1), KeyUchar, ValueUchar);
		break;
	case 2:
		*(multiNode->GetNode()->CPPmultinode2) = multimapUnion->CPPmultimap2->emplace_hint(*(_Where->GetNode()->CPPmultinode2), KeyUchar, ValueChar);
		break;
	case 3:
		*(multiNode->GetNode()->CPPmultinode3) = multimapUnion->CPPmultimap3->emplace_hint(*(_Where->GetNode()->CPPmultinode3), KeyUchar, ValueShort);
		break;
	case 4:
		*(multiNode->GetNode()->CPPmultinode4) = multimapUnion->CPPmultimap4->emplace_hint(*(_Where->GetNode()->CPPmultinode4), KeyUchar, ValueUshort);
		break;
	case 5:
		*(multiNode->GetNode()->CPPmultinode5) = multimapUnion->CPPmultimap5->emplace_hint(*(_Where->GetNode()->CPPmultinode5), KeyUchar, ValueInt);
		break;
	case 6:
		*(multiNode->GetNode()->CPPmultinode6) = multimapUnion->CPPmultimap6->emplace_hint(*(_Where->GetNode()->CPPmultinode6), KeyUchar, ValueUint);
		break;
	case 7:
		*(multiNode->GetNode()->CPPmultinode7) = multimapUnion->CPPmultimap7->emplace_hint(*(_Where->GetNode()->CPPmultinode7), KeyUchar, ValueLonglong);
		break;
	case 8:
		*(multiNode->GetNode()->CPPmultinode8) = multimapUnion->CPPmultimap8->emplace_hint(*(_Where->GetNode()->CPPmultinode8), KeyUchar, ValueUlonglong);
		break;
	case 9:
		*(multiNode->GetNode()->CPPmultinode9) = multimapUnion->CPPmultimap9->emplace_hint(*(_Where->GetNode()->CPPmultinode9), KeyUchar, ValueFloat);
		break;
	case 10:
		*(multiNode->GetNode()->CPPmultinode10) = multimapUnion->CPPmultimap10->emplace_hint(*(_Where->GetNode()->CPPmultinode10), KeyUchar, ValueDouble);
		break;
	case 11:
		*(multiNode->GetNode()->CPPmultinode11) = multimapUnion->CPPmultimap11->emplace_hint(*(_Where->GetNode()->CPPmultinode11), KeyUchar, ValueWchar);
		break;
	case 12:
		*(multiNode->GetNode()->CPPmultinode12) = multimapUnion->CPPmultimap12->emplace_hint(*(_Where->GetNode()->CPPmultinode12), KeyUchar, ValueBool);
		break;
	case 13:
		*(multiNode->GetNode()->CPPmultinode13) = multimapUnion->CPPmultimap13->emplace_hint(*(_Where->GetNode()->CPPmultinode13), KeyUchar, ValueWstring);
		break;
	case 14:
		*(multiNode->GetNode()->CPPmultinode14) = multimapUnion->CPPmultimap14->emplace_hint(*(_Where->GetNode()->CPPmultinode14), KeyUchar, Value__Int);
		break;
	case 15:
		*(multiNode->GetNode()->CPPmultinode15) = multimapUnion->CPPmultimap15->emplace_hint(*(_Where->GetNode()->CPPmultinode15), KeyChar, ValueUchar);
		break;
	case 16:
		*(multiNode->GetNode()->CPPmultinode16) = multimapUnion->CPPmultimap16->emplace_hint(*(_Where->GetNode()->CPPmultinode16), KeyChar, ValueChar);
		break;
	case 17:
		*(multiNode->GetNode()->CPPmultinode17) = multimapUnion->CPPmultimap17->emplace_hint(*(_Where->GetNode()->CPPmultinode17), KeyChar, ValueShort);
		break;
	case 18:
		*(multiNode->GetNode()->CPPmultinode18) = multimapUnion->CPPmultimap18->emplace_hint(*(_Where->GetNode()->CPPmultinode18), KeyChar, ValueUshort);
		break;
	case 19:
		*(multiNode->GetNode()->CPPmultinode19) = multimapUnion->CPPmultimap19->emplace_hint(*(_Where->GetNode()->CPPmultinode19), KeyChar, ValueInt);
		break;
	case 20:
		*(multiNode->GetNode()->CPPmultinode20) = multimapUnion->CPPmultimap20->emplace_hint(*(_Where->GetNode()->CPPmultinode20), KeyChar, ValueUint);
		break;
	case 21:
		*(multiNode->GetNode()->CPPmultinode21) = multimapUnion->CPPmultimap21->emplace_hint(*(_Where->GetNode()->CPPmultinode21), KeyChar, ValueLonglong);
		break;
	case 22:
		*(multiNode->GetNode()->CPPmultinode22) = multimapUnion->CPPmultimap22->emplace_hint(*(_Where->GetNode()->CPPmultinode22), KeyChar, ValueUlonglong);
		break;
	case 23:
		*(multiNode->GetNode()->CPPmultinode23) = multimapUnion->CPPmultimap23->emplace_hint(*(_Where->GetNode()->CPPmultinode23), KeyChar, ValueFloat);
		break;
	case 24:
		*(multiNode->GetNode()->CPPmultinode24) = multimapUnion->CPPmultimap24->emplace_hint(*(_Where->GetNode()->CPPmultinode24), KeyChar, ValueDouble);
		break;
	case 25:
		*(multiNode->GetNode()->CPPmultinode25) = multimapUnion->CPPmultimap25->emplace_hint(*(_Where->GetNode()->CPPmultinode25), KeyChar, ValueWchar);
		break;
	case 26:
		*(multiNode->GetNode()->CPPmultinode26) = multimapUnion->CPPmultimap26->emplace_hint(*(_Where->GetNode()->CPPmultinode26), KeyChar, ValueBool);
		break;
	case 27:
		*(multiNode->GetNode()->CPPmultinode27) = multimapUnion->CPPmultimap27->emplace_hint(*(_Where->GetNode()->CPPmultinode27), KeyChar, ValueWstring);
		break;
	case 28:
		*(multiNode->GetNode()->CPPmultinode28) = multimapUnion->CPPmultimap28->emplace_hint(*(_Where->GetNode()->CPPmultinode28), KeyChar, Value__Int);
		break;
	case 29:
		*(multiNode->GetNode()->CPPmultinode29) = multimapUnion->CPPmultimap29->emplace_hint(*(_Where->GetNode()->CPPmultinode29), KeyShort, ValueUchar);
		break;
	case 30:
		*(multiNode->GetNode()->CPPmultinode30) = multimapUnion->CPPmultimap30->emplace_hint(*(_Where->GetNode()->CPPmultinode30), KeyShort, ValueChar);
		break;
	case 31:
		*(multiNode->GetNode()->CPPmultinode31) = multimapUnion->CPPmultimap31->emplace_hint(*(_Where->GetNode()->CPPmultinode31), KeyShort, ValueShort);
		break;
	case 32:
		*(multiNode->GetNode()->CPPmultinode32) = multimapUnion->CPPmultimap32->emplace_hint(*(_Where->GetNode()->CPPmultinode32), KeyShort, ValueUshort);
		break;
	case 33:
		*(multiNode->GetNode()->CPPmultinode33) = multimapUnion->CPPmultimap33->emplace_hint(*(_Where->GetNode()->CPPmultinode33), KeyShort, ValueInt);
		break;
	case 34:
		*(multiNode->GetNode()->CPPmultinode34) = multimapUnion->CPPmultimap34->emplace_hint(*(_Where->GetNode()->CPPmultinode34), KeyShort, ValueUint);
		break;
	case 35:
		*(multiNode->GetNode()->CPPmultinode35) = multimapUnion->CPPmultimap35->emplace_hint(*(_Where->GetNode()->CPPmultinode35), KeyShort, ValueLonglong);
		break;
	case 36:
		*(multiNode->GetNode()->CPPmultinode36) = multimapUnion->CPPmultimap36->emplace_hint(*(_Where->GetNode()->CPPmultinode36), KeyShort, ValueUlonglong);
		break;
	case 37:
		*(multiNode->GetNode()->CPPmultinode37) = multimapUnion->CPPmultimap37->emplace_hint(*(_Where->GetNode()->CPPmultinode37), KeyShort, ValueFloat);
		break;
	case 38:
		*(multiNode->GetNode()->CPPmultinode38) = multimapUnion->CPPmultimap38->emplace_hint(*(_Where->GetNode()->CPPmultinode38), KeyShort, ValueDouble);
		break;
	case 39:
		*(multiNode->GetNode()->CPPmultinode39) = multimapUnion->CPPmultimap39->emplace_hint(*(_Where->GetNode()->CPPmultinode39), KeyShort, ValueWchar);
		break;
	case 40:
		*(multiNode->GetNode()->CPPmultinode40) = multimapUnion->CPPmultimap40->emplace_hint(*(_Where->GetNode()->CPPmultinode40), KeyShort, ValueBool);
		break;
	case 41:
		*(multiNode->GetNode()->CPPmultinode41) = multimapUnion->CPPmultimap41->emplace_hint(*(_Where->GetNode()->CPPmultinode41), KeyShort, ValueWstring);
		break;
	case 42:
		*(multiNode->GetNode()->CPPmultinode42) = multimapUnion->CPPmultimap42->emplace_hint(*(_Where->GetNode()->CPPmultinode42), KeyShort, Value__Int);
		break;
	case 43:
		*(multiNode->GetNode()->CPPmultinode43) = multimapUnion->CPPmultimap43->emplace_hint(*(_Where->GetNode()->CPPmultinode43), KeyUshort, ValueUchar);
		break;
	case 44:
		*(multiNode->GetNode()->CPPmultinode44) = multimapUnion->CPPmultimap44->emplace_hint(*(_Where->GetNode()->CPPmultinode44), KeyUshort, ValueChar);
		break;
	case 45:
		*(multiNode->GetNode()->CPPmultinode45) = multimapUnion->CPPmultimap45->emplace_hint(*(_Where->GetNode()->CPPmultinode45), KeyUshort, ValueShort);
		break;
	case 46:
		*(multiNode->GetNode()->CPPmultinode46) = multimapUnion->CPPmultimap46->emplace_hint(*(_Where->GetNode()->CPPmultinode46), KeyUshort, ValueUshort);
		break;
	case 47:
		*(multiNode->GetNode()->CPPmultinode47) = multimapUnion->CPPmultimap47->emplace_hint(*(_Where->GetNode()->CPPmultinode47), KeyUshort, ValueInt);
		break;
	case 48:
		*(multiNode->GetNode()->CPPmultinode48) = multimapUnion->CPPmultimap48->emplace_hint(*(_Where->GetNode()->CPPmultinode48), KeyUshort, ValueUint);
		break;
	case 49:
		*(multiNode->GetNode()->CPPmultinode49) = multimapUnion->CPPmultimap49->emplace_hint(*(_Where->GetNode()->CPPmultinode49), KeyUshort, ValueLonglong);
		break;
	case 50:
		*(multiNode->GetNode()->CPPmultinode50) = multimapUnion->CPPmultimap50->emplace_hint(*(_Where->GetNode()->CPPmultinode50), KeyUshort, ValueUlonglong);
		break;
	case 51:
		*(multiNode->GetNode()->CPPmultinode51) = multimapUnion->CPPmultimap51->emplace_hint(*(_Where->GetNode()->CPPmultinode51), KeyUshort, ValueFloat);
		break;
	case 52:
		*(multiNode->GetNode()->CPPmultinode52) = multimapUnion->CPPmultimap52->emplace_hint(*(_Where->GetNode()->CPPmultinode52), KeyUshort, ValueDouble);
		break;
	case 53:
		*(multiNode->GetNode()->CPPmultinode53) = multimapUnion->CPPmultimap53->emplace_hint(*(_Where->GetNode()->CPPmultinode53), KeyUshort, ValueWchar);
		break;
	case 54:
		*(multiNode->GetNode()->CPPmultinode54) = multimapUnion->CPPmultimap54->emplace_hint(*(_Where->GetNode()->CPPmultinode54), KeyUshort, ValueBool);
		break;
	case 55:
		*(multiNode->GetNode()->CPPmultinode55) = multimapUnion->CPPmultimap55->emplace_hint(*(_Where->GetNode()->CPPmultinode55), KeyUshort, ValueWstring);
		break;
	case 56:
		*(multiNode->GetNode()->CPPmultinode56) = multimapUnion->CPPmultimap56->emplace_hint(*(_Where->GetNode()->CPPmultinode56), KeyUshort, Value__Int);
		break;
	case 57:
		*(multiNode->GetNode()->CPPmultinode57) = multimapUnion->CPPmultimap57->emplace_hint(*(_Where->GetNode()->CPPmultinode57), KeyInt, ValueUchar);
		break;
	case 58:
		*(multiNode->GetNode()->CPPmultinode58) = multimapUnion->CPPmultimap58->emplace_hint(*(_Where->GetNode()->CPPmultinode58), KeyInt, ValueChar);
		break;
	case 59:
		*(multiNode->GetNode()->CPPmultinode59) = multimapUnion->CPPmultimap59->emplace_hint(*(_Where->GetNode()->CPPmultinode59), KeyInt, ValueShort);
		break;
	case 60:
		*(multiNode->GetNode()->CPPmultinode60) = multimapUnion->CPPmultimap60->emplace_hint(*(_Where->GetNode()->CPPmultinode60), KeyInt, ValueUshort);
		break;
	case 61:
		*(multiNode->GetNode()->CPPmultinode61) = multimapUnion->CPPmultimap61->emplace_hint(*(_Where->GetNode()->CPPmultinode61), KeyInt, ValueInt);
		break;
	case 62:
		*(multiNode->GetNode()->CPPmultinode62) = multimapUnion->CPPmultimap62->emplace_hint(*(_Where->GetNode()->CPPmultinode62), KeyInt, ValueUint);
		break;
	case 63:
		*(multiNode->GetNode()->CPPmultinode63) = multimapUnion->CPPmultimap63->emplace_hint(*(_Where->GetNode()->CPPmultinode63), KeyInt, ValueLonglong);
		break;
	case 64:
		*(multiNode->GetNode()->CPPmultinode64) = multimapUnion->CPPmultimap64->emplace_hint(*(_Where->GetNode()->CPPmultinode64), KeyInt, ValueUlonglong);
		break;
	case 65:
		*(multiNode->GetNode()->CPPmultinode65) = multimapUnion->CPPmultimap65->emplace_hint(*(_Where->GetNode()->CPPmultinode65), KeyInt, ValueFloat);
		break;
	case 66:
		*(multiNode->GetNode()->CPPmultinode66) = multimapUnion->CPPmultimap66->emplace_hint(*(_Where->GetNode()->CPPmultinode66), KeyInt, ValueDouble);
		break;
	case 67:
		*(multiNode->GetNode()->CPPmultinode67) = multimapUnion->CPPmultimap67->emplace_hint(*(_Where->GetNode()->CPPmultinode67), KeyInt, ValueWchar);
		break;
	case 68:
		*(multiNode->GetNode()->CPPmultinode68) = multimapUnion->CPPmultimap68->emplace_hint(*(_Where->GetNode()->CPPmultinode68), KeyInt, ValueBool);
		break;
	case 69:
		*(multiNode->GetNode()->CPPmultinode69) = multimapUnion->CPPmultimap69->emplace_hint(*(_Where->GetNode()->CPPmultinode69), KeyInt, ValueWstring);
		break;
	case 70:
		*(multiNode->GetNode()->CPPmultinode70) = multimapUnion->CPPmultimap70->emplace_hint(*(_Where->GetNode()->CPPmultinode70), KeyInt, Value__Int);
		break;
	case 71:
		*(multiNode->GetNode()->CPPmultinode71) = multimapUnion->CPPmultimap71->emplace_hint(*(_Where->GetNode()->CPPmultinode71), KeyUint, ValueUchar);
		break;
	case 72:
		*(multiNode->GetNode()->CPPmultinode72) = multimapUnion->CPPmultimap72->emplace_hint(*(_Where->GetNode()->CPPmultinode72), KeyUint, ValueChar);
		break;
	case 73:
		*(multiNode->GetNode()->CPPmultinode73) = multimapUnion->CPPmultimap73->emplace_hint(*(_Where->GetNode()->CPPmultinode73), KeyUint, ValueShort);
		break;
	case 74:
		*(multiNode->GetNode()->CPPmultinode74) = multimapUnion->CPPmultimap74->emplace_hint(*(_Where->GetNode()->CPPmultinode74), KeyUint, ValueUshort);
		break;
	case 75:
		*(multiNode->GetNode()->CPPmultinode75) = multimapUnion->CPPmultimap75->emplace_hint(*(_Where->GetNode()->CPPmultinode75), KeyUint, ValueInt);
		break;
	case 76:
		*(multiNode->GetNode()->CPPmultinode76) = multimapUnion->CPPmultimap76->emplace_hint(*(_Where->GetNode()->CPPmultinode76), KeyUint, ValueUint);
		break;
	case 77:
		*(multiNode->GetNode()->CPPmultinode77) = multimapUnion->CPPmultimap77->emplace_hint(*(_Where->GetNode()->CPPmultinode77), KeyUint, ValueLonglong);
		break;
	case 78:
		*(multiNode->GetNode()->CPPmultinode78) = multimapUnion->CPPmultimap78->emplace_hint(*(_Where->GetNode()->CPPmultinode78), KeyUint, ValueUlonglong);
		break;
	case 79:
		*(multiNode->GetNode()->CPPmultinode79) = multimapUnion->CPPmultimap79->emplace_hint(*(_Where->GetNode()->CPPmultinode79), KeyUint, ValueFloat);
		break;
	case 80:
		*(multiNode->GetNode()->CPPmultinode80) = multimapUnion->CPPmultimap80->emplace_hint(*(_Where->GetNode()->CPPmultinode80), KeyUint, ValueDouble);
		break;
	case 81:
		*(multiNode->GetNode()->CPPmultinode81) = multimapUnion->CPPmultimap81->emplace_hint(*(_Where->GetNode()->CPPmultinode81), KeyUint, ValueWchar);
		break;
	case 82:
		*(multiNode->GetNode()->CPPmultinode82) = multimapUnion->CPPmultimap82->emplace_hint(*(_Where->GetNode()->CPPmultinode82), KeyUint, ValueBool);
		break;
	case 83:
		*(multiNode->GetNode()->CPPmultinode83) = multimapUnion->CPPmultimap83->emplace_hint(*(_Where->GetNode()->CPPmultinode83), KeyUint, ValueWstring);
		break;
	case 84:
		*(multiNode->GetNode()->CPPmultinode84) = multimapUnion->CPPmultimap84->emplace_hint(*(_Where->GetNode()->CPPmultinode84), KeyUint, Value__Int);
		break;
	case 85:
		*(multiNode->GetNode()->CPPmultinode85) = multimapUnion->CPPmultimap85->emplace_hint(*(_Where->GetNode()->CPPmultinode85), KeyLonglong, ValueUchar);
		break;
	case 86:
		*(multiNode->GetNode()->CPPmultinode86) = multimapUnion->CPPmultimap86->emplace_hint(*(_Where->GetNode()->CPPmultinode86), KeyLonglong, ValueChar);
		break;
	case 87:
		*(multiNode->GetNode()->CPPmultinode87) = multimapUnion->CPPmultimap87->emplace_hint(*(_Where->GetNode()->CPPmultinode87), KeyLonglong, ValueShort);
		break;
	case 88:
		*(multiNode->GetNode()->CPPmultinode88) = multimapUnion->CPPmultimap88->emplace_hint(*(_Where->GetNode()->CPPmultinode88), KeyLonglong, ValueUshort);
		break;
	case 89:
		*(multiNode->GetNode()->CPPmultinode89) = multimapUnion->CPPmultimap89->emplace_hint(*(_Where->GetNode()->CPPmultinode89), KeyLonglong, ValueInt);
		break;
	case 90:
		*(multiNode->GetNode()->CPPmultinode90) = multimapUnion->CPPmultimap90->emplace_hint(*(_Where->GetNode()->CPPmultinode90), KeyLonglong, ValueUint);
		break;
	case 91:
		*(multiNode->GetNode()->CPPmultinode91) = multimapUnion->CPPmultimap91->emplace_hint(*(_Where->GetNode()->CPPmultinode91), KeyLonglong, ValueLonglong);
		break;
	case 92:
		*(multiNode->GetNode()->CPPmultinode92) = multimapUnion->CPPmultimap92->emplace_hint(*(_Where->GetNode()->CPPmultinode92), KeyLonglong, ValueUlonglong);
		break;
	case 93:
		*(multiNode->GetNode()->CPPmultinode93) = multimapUnion->CPPmultimap93->emplace_hint(*(_Where->GetNode()->CPPmultinode93), KeyLonglong, ValueFloat);
		break;
	case 94:
		*(multiNode->GetNode()->CPPmultinode94) = multimapUnion->CPPmultimap94->emplace_hint(*(_Where->GetNode()->CPPmultinode94), KeyLonglong, ValueDouble);
		break;
	case 95:
		*(multiNode->GetNode()->CPPmultinode95) = multimapUnion->CPPmultimap95->emplace_hint(*(_Where->GetNode()->CPPmultinode95), KeyLonglong, ValueWchar);
		break;
	case 96:
		*(multiNode->GetNode()->CPPmultinode96) = multimapUnion->CPPmultimap96->emplace_hint(*(_Where->GetNode()->CPPmultinode96), KeyLonglong, ValueBool);
		break;
	case 97:
		*(multiNode->GetNode()->CPPmultinode97) = multimapUnion->CPPmultimap97->emplace_hint(*(_Where->GetNode()->CPPmultinode97), KeyLonglong, ValueWstring);
		break;
	case 98:
		*(multiNode->GetNode()->CPPmultinode98) = multimapUnion->CPPmultimap98->emplace_hint(*(_Where->GetNode()->CPPmultinode98), KeyLonglong, Value__Int);
		break;
	case 99:
		*(multiNode->GetNode()->CPPmultinode99) = multimapUnion->CPPmultimap99->emplace_hint(*(_Where->GetNode()->CPPmultinode99), KeyUlonglong, ValueUchar);
		break;
	case 100:
		*(multiNode->GetNode()->CPPmultinode100) = multimapUnion->CPPmultimap100->emplace_hint(*(_Where->GetNode()->CPPmultinode100), KeyUlonglong, ValueChar);
		break;
	case 101:
		*(multiNode->GetNode()->CPPmultinode101) = multimapUnion->CPPmultimap101->emplace_hint(*(_Where->GetNode()->CPPmultinode101), KeyUlonglong, ValueShort);
		break;
	case 102:
		*(multiNode->GetNode()->CPPmultinode102) = multimapUnion->CPPmultimap102->emplace_hint(*(_Where->GetNode()->CPPmultinode102), KeyUlonglong, ValueUshort);
		break;
	case 103:
		*(multiNode->GetNode()->CPPmultinode103) = multimapUnion->CPPmultimap103->emplace_hint(*(_Where->GetNode()->CPPmultinode103), KeyUlonglong, ValueInt);
		break;
	case 104:
		*(multiNode->GetNode()->CPPmultinode104) = multimapUnion->CPPmultimap104->emplace_hint(*(_Where->GetNode()->CPPmultinode104), KeyUlonglong, ValueUint);
		break;
	case 105:
		*(multiNode->GetNode()->CPPmultinode105) = multimapUnion->CPPmultimap105->emplace_hint(*(_Where->GetNode()->CPPmultinode105), KeyUlonglong, ValueLonglong);
		break;
	case 106:
		*(multiNode->GetNode()->CPPmultinode106) = multimapUnion->CPPmultimap106->emplace_hint(*(_Where->GetNode()->CPPmultinode106), KeyUlonglong, ValueUlonglong);
		break;
	case 107:
		*(multiNode->GetNode()->CPPmultinode107) = multimapUnion->CPPmultimap107->emplace_hint(*(_Where->GetNode()->CPPmultinode107), KeyUlonglong, ValueFloat);
		break;
	case 108:
		*(multiNode->GetNode()->CPPmultinode108) = multimapUnion->CPPmultimap108->emplace_hint(*(_Where->GetNode()->CPPmultinode108), KeyUlonglong, ValueDouble);
		break;
	case 109:
		*(multiNode->GetNode()->CPPmultinode109) = multimapUnion->CPPmultimap109->emplace_hint(*(_Where->GetNode()->CPPmultinode109), KeyUlonglong, ValueWchar);
		break;
	case 110:
		*(multiNode->GetNode()->CPPmultinode110) = multimapUnion->CPPmultimap110->emplace_hint(*(_Where->GetNode()->CPPmultinode110), KeyUlonglong, ValueBool);
		break;
	case 111:
		*(multiNode->GetNode()->CPPmultinode111) = multimapUnion->CPPmultimap111->emplace_hint(*(_Where->GetNode()->CPPmultinode111), KeyUlonglong, ValueWstring);
		break;
	case 112:
		*(multiNode->GetNode()->CPPmultinode112) = multimapUnion->CPPmultimap112->emplace_hint(*(_Where->GetNode()->CPPmultinode112), KeyUlonglong, Value__Int);
		break;
	case 113:
		*(multiNode->GetNode()->CPPmultinode113) = multimapUnion->CPPmultimap113->emplace_hint(*(_Where->GetNode()->CPPmultinode113), KeyFloat, ValueUchar);
		break;
	case 114:
		*(multiNode->GetNode()->CPPmultinode114) = multimapUnion->CPPmultimap114->emplace_hint(*(_Where->GetNode()->CPPmultinode114), KeyFloat, ValueChar);
		break;
	case 115:
		*(multiNode->GetNode()->CPPmultinode115) = multimapUnion->CPPmultimap115->emplace_hint(*(_Where->GetNode()->CPPmultinode115), KeyFloat, ValueShort);
		break;
	case 116:
		*(multiNode->GetNode()->CPPmultinode116) = multimapUnion->CPPmultimap116->emplace_hint(*(_Where->GetNode()->CPPmultinode116), KeyFloat, ValueUshort);
		break;
	case 117:
		*(multiNode->GetNode()->CPPmultinode117) = multimapUnion->CPPmultimap117->emplace_hint(*(_Where->GetNode()->CPPmultinode117), KeyFloat, ValueInt);
		break;
	case 118:
		*(multiNode->GetNode()->CPPmultinode118) = multimapUnion->CPPmultimap118->emplace_hint(*(_Where->GetNode()->CPPmultinode118), KeyFloat, ValueUint);
		break;
	case 119:
		*(multiNode->GetNode()->CPPmultinode119) = multimapUnion->CPPmultimap119->emplace_hint(*(_Where->GetNode()->CPPmultinode119), KeyFloat, ValueLonglong);
		break;
	case 120:
		*(multiNode->GetNode()->CPPmultinode120) = multimapUnion->CPPmultimap120->emplace_hint(*(_Where->GetNode()->CPPmultinode120), KeyFloat, ValueUlonglong);
		break;
	case 121:
		*(multiNode->GetNode()->CPPmultinode121) = multimapUnion->CPPmultimap121->emplace_hint(*(_Where->GetNode()->CPPmultinode121), KeyFloat, ValueFloat);
		break;
	case 122:
		*(multiNode->GetNode()->CPPmultinode122) = multimapUnion->CPPmultimap122->emplace_hint(*(_Where->GetNode()->CPPmultinode122), KeyFloat, ValueDouble);
		break;
	case 123:
		*(multiNode->GetNode()->CPPmultinode123) = multimapUnion->CPPmultimap123->emplace_hint(*(_Where->GetNode()->CPPmultinode123), KeyFloat, ValueWchar);
		break;
	case 124:
		*(multiNode->GetNode()->CPPmultinode124) = multimapUnion->CPPmultimap124->emplace_hint(*(_Where->GetNode()->CPPmultinode124), KeyFloat, ValueBool);
		break;
	case 125:
		*(multiNode->GetNode()->CPPmultinode125) = multimapUnion->CPPmultimap125->emplace_hint(*(_Where->GetNode()->CPPmultinode125), KeyFloat, ValueWstring);
		break;
	case 126:
		*(multiNode->GetNode()->CPPmultinode126) = multimapUnion->CPPmultimap126->emplace_hint(*(_Where->GetNode()->CPPmultinode126), KeyFloat, Value__Int);
		break;
	case 127:
		*(multiNode->GetNode()->CPPmultinode127) = multimapUnion->CPPmultimap127->emplace_hint(*(_Where->GetNode()->CPPmultinode127), KeyDouble, ValueUchar);
		break;
	case 128:
		*(multiNode->GetNode()->CPPmultinode128) = multimapUnion->CPPmultimap128->emplace_hint(*(_Where->GetNode()->CPPmultinode128), KeyDouble, ValueChar);
		break;
	case 129:
		*(multiNode->GetNode()->CPPmultinode129) = multimapUnion->CPPmultimap129->emplace_hint(*(_Where->GetNode()->CPPmultinode129), KeyDouble, ValueShort);
		break;
	case 130:
		*(multiNode->GetNode()->CPPmultinode130) = multimapUnion->CPPmultimap130->emplace_hint(*(_Where->GetNode()->CPPmultinode130), KeyDouble, ValueUshort);
		break;
	case 131:
		*(multiNode->GetNode()->CPPmultinode131) = multimapUnion->CPPmultimap131->emplace_hint(*(_Where->GetNode()->CPPmultinode131), KeyDouble, ValueInt);
		break;
	case 132:
		*(multiNode->GetNode()->CPPmultinode132) = multimapUnion->CPPmultimap132->emplace_hint(*(_Where->GetNode()->CPPmultinode132), KeyDouble, ValueUint);
		break;
	case 133:
		*(multiNode->GetNode()->CPPmultinode133) = multimapUnion->CPPmultimap133->emplace_hint(*(_Where->GetNode()->CPPmultinode133), KeyDouble, ValueLonglong);
		break;
	case 134:
		*(multiNode->GetNode()->CPPmultinode134) = multimapUnion->CPPmultimap134->emplace_hint(*(_Where->GetNode()->CPPmultinode134), KeyDouble, ValueUlonglong);
		break;
	case 135:
		*(multiNode->GetNode()->CPPmultinode135) = multimapUnion->CPPmultimap135->emplace_hint(*(_Where->GetNode()->CPPmultinode135), KeyDouble, ValueFloat);
		break;
	case 136:
		*(multiNode->GetNode()->CPPmultinode136) = multimapUnion->CPPmultimap136->emplace_hint(*(_Where->GetNode()->CPPmultinode136), KeyDouble, ValueDouble);
		break;
	case 137:
		*(multiNode->GetNode()->CPPmultinode137) = multimapUnion->CPPmultimap137->emplace_hint(*(_Where->GetNode()->CPPmultinode137), KeyDouble, ValueWchar);
		break;
	case 138:
		*(multiNode->GetNode()->CPPmultinode138) = multimapUnion->CPPmultimap138->emplace_hint(*(_Where->GetNode()->CPPmultinode138), KeyDouble, ValueBool);
		break;
	case 139:
		*(multiNode->GetNode()->CPPmultinode139) = multimapUnion->CPPmultimap139->emplace_hint(*(_Where->GetNode()->CPPmultinode139), KeyDouble, ValueWstring);
		break;
	case 140:
		*(multiNode->GetNode()->CPPmultinode140) = multimapUnion->CPPmultimap140->emplace_hint(*(_Where->GetNode()->CPPmultinode140), KeyDouble, Value__Int);
		break;
	case 141:
		*(multiNode->GetNode()->CPPmultinode141) = multimapUnion->CPPmultimap141->emplace_hint(*(_Where->GetNode()->CPPmultinode141), KeyWchar, ValueUchar);
		break;
	case 142:
		*(multiNode->GetNode()->CPPmultinode142) = multimapUnion->CPPmultimap142->emplace_hint(*(_Where->GetNode()->CPPmultinode142), KeyWchar, ValueChar);
		break;
	case 143:
		*(multiNode->GetNode()->CPPmultinode143) = multimapUnion->CPPmultimap143->emplace_hint(*(_Where->GetNode()->CPPmultinode143), KeyWchar, ValueShort);
		break;
	case 144:
		*(multiNode->GetNode()->CPPmultinode144) = multimapUnion->CPPmultimap144->emplace_hint(*(_Where->GetNode()->CPPmultinode144), KeyWchar, ValueUshort);
		break;
	case 145:
		*(multiNode->GetNode()->CPPmultinode145) = multimapUnion->CPPmultimap145->emplace_hint(*(_Where->GetNode()->CPPmultinode145), KeyWchar, ValueInt);
		break;
	case 146:
		*(multiNode->GetNode()->CPPmultinode146) = multimapUnion->CPPmultimap146->emplace_hint(*(_Where->GetNode()->CPPmultinode146), KeyWchar, ValueUint);
		break;
	case 147:
		*(multiNode->GetNode()->CPPmultinode147) = multimapUnion->CPPmultimap147->emplace_hint(*(_Where->GetNode()->CPPmultinode147), KeyWchar, ValueLonglong);
		break;
	case 148:
		*(multiNode->GetNode()->CPPmultinode148) = multimapUnion->CPPmultimap148->emplace_hint(*(_Where->GetNode()->CPPmultinode148), KeyWchar, ValueUlonglong);
		break;
	case 149:
		*(multiNode->GetNode()->CPPmultinode149) = multimapUnion->CPPmultimap149->emplace_hint(*(_Where->GetNode()->CPPmultinode149), KeyWchar, ValueFloat);
		break;
	case 150:
		*(multiNode->GetNode()->CPPmultinode150) = multimapUnion->CPPmultimap150->emplace_hint(*(_Where->GetNode()->CPPmultinode150), KeyWchar, ValueDouble);
		break;
	case 151:
		*(multiNode->GetNode()->CPPmultinode151) = multimapUnion->CPPmultimap151->emplace_hint(*(_Where->GetNode()->CPPmultinode151), KeyWchar, ValueWchar);
		break;
	case 152:
		*(multiNode->GetNode()->CPPmultinode152) = multimapUnion->CPPmultimap152->emplace_hint(*(_Where->GetNode()->CPPmultinode152), KeyWchar, ValueBool);
		break;
	case 153:
		*(multiNode->GetNode()->CPPmultinode153) = multimapUnion->CPPmultimap153->emplace_hint(*(_Where->GetNode()->CPPmultinode153), KeyWchar, ValueWstring);
		break;
	case 154:
		*(multiNode->GetNode()->CPPmultinode154) = multimapUnion->CPPmultimap154->emplace_hint(*(_Where->GetNode()->CPPmultinode154), KeyWchar, Value__Int);
		break;
	case 155:
		*(multiNode->GetNode()->CPPmultinode155) = multimapUnion->CPPmultimap155->emplace_hint(*(_Where->GetNode()->CPPmultinode155), KeyBool, ValueUchar);
		break;
	case 156:
		*(multiNode->GetNode()->CPPmultinode156) = multimapUnion->CPPmultimap156->emplace_hint(*(_Where->GetNode()->CPPmultinode156), KeyBool, ValueChar);
		break;
	case 157:
		*(multiNode->GetNode()->CPPmultinode157) = multimapUnion->CPPmultimap157->emplace_hint(*(_Where->GetNode()->CPPmultinode157), KeyBool, ValueShort);
		break;
	case 158:
		*(multiNode->GetNode()->CPPmultinode158) = multimapUnion->CPPmultimap158->emplace_hint(*(_Where->GetNode()->CPPmultinode158), KeyBool, ValueUshort);
		break;
	case 159:
		*(multiNode->GetNode()->CPPmultinode159) = multimapUnion->CPPmultimap159->emplace_hint(*(_Where->GetNode()->CPPmultinode159), KeyBool, ValueInt);
		break;
	case 160:
		*(multiNode->GetNode()->CPPmultinode160) = multimapUnion->CPPmultimap160->emplace_hint(*(_Where->GetNode()->CPPmultinode160), KeyBool, ValueUint);
		break;
	case 161:
		*(multiNode->GetNode()->CPPmultinode161) = multimapUnion->CPPmultimap161->emplace_hint(*(_Where->GetNode()->CPPmultinode161), KeyBool, ValueLonglong);
		break;
	case 162:
		*(multiNode->GetNode()->CPPmultinode162) = multimapUnion->CPPmultimap162->emplace_hint(*(_Where->GetNode()->CPPmultinode162), KeyBool, ValueUlonglong);
		break;
	case 163:
		*(multiNode->GetNode()->CPPmultinode163) = multimapUnion->CPPmultimap163->emplace_hint(*(_Where->GetNode()->CPPmultinode163), KeyBool, ValueFloat);
		break;
	case 164:
		*(multiNode->GetNode()->CPPmultinode164) = multimapUnion->CPPmultimap164->emplace_hint(*(_Where->GetNode()->CPPmultinode164), KeyBool, ValueDouble);
		break;
	case 165:
		*(multiNode->GetNode()->CPPmultinode165) = multimapUnion->CPPmultimap165->emplace_hint(*(_Where->GetNode()->CPPmultinode165), KeyBool, ValueWchar);
		break;
	case 166:
		*(multiNode->GetNode()->CPPmultinode166) = multimapUnion->CPPmultimap166->emplace_hint(*(_Where->GetNode()->CPPmultinode166), KeyBool, ValueBool);
		break;
	case 167:
		*(multiNode->GetNode()->CPPmultinode167) = multimapUnion->CPPmultimap167->emplace_hint(*(_Where->GetNode()->CPPmultinode167), KeyBool, ValueWstring);
		break;
	case 168:
		*(multiNode->GetNode()->CPPmultinode168) = multimapUnion->CPPmultimap168->emplace_hint(*(_Where->GetNode()->CPPmultinode168), KeyBool, Value__Int);
		break;
	case 169:
		*(multiNode->GetNode()->CPPmultinode169) = multimapUnion->CPPmultimap169->emplace_hint(*(_Where->GetNode()->CPPmultinode169), KeyWstring, ValueUchar);
		break;
	case 170:
		*(multiNode->GetNode()->CPPmultinode170) = multimapUnion->CPPmultimap170->emplace_hint(*(_Where->GetNode()->CPPmultinode170), KeyWstring, ValueChar);
		break;
	case 171:
		*(multiNode->GetNode()->CPPmultinode171) = multimapUnion->CPPmultimap171->emplace_hint(*(_Where->GetNode()->CPPmultinode171), KeyWstring, ValueShort);
		break;
	case 172:
		*(multiNode->GetNode()->CPPmultinode172) = multimapUnion->CPPmultimap172->emplace_hint(*(_Where->GetNode()->CPPmultinode172), KeyWstring, ValueUshort);
		break;
	case 173:
		*(multiNode->GetNode()->CPPmultinode173) = multimapUnion->CPPmultimap173->emplace_hint(*(_Where->GetNode()->CPPmultinode173), KeyWstring, ValueInt);
		break;
	case 174:
		*(multiNode->GetNode()->CPPmultinode174) = multimapUnion->CPPmultimap174->emplace_hint(*(_Where->GetNode()->CPPmultinode174), KeyWstring, ValueUint);
		break;
	case 175:
		*(multiNode->GetNode()->CPPmultinode175) = multimapUnion->CPPmultimap175->emplace_hint(*(_Where->GetNode()->CPPmultinode175), KeyWstring, ValueLonglong);
		break;
	case 176:
		*(multiNode->GetNode()->CPPmultinode176) = multimapUnion->CPPmultimap176->emplace_hint(*(_Where->GetNode()->CPPmultinode176), KeyWstring, ValueUlonglong);
		break;
	case 177:
		*(multiNode->GetNode()->CPPmultinode177) = multimapUnion->CPPmultimap177->emplace_hint(*(_Where->GetNode()->CPPmultinode177), KeyWstring, ValueFloat);
		break;
	case 178:
		*(multiNode->GetNode()->CPPmultinode178) = multimapUnion->CPPmultimap178->emplace_hint(*(_Where->GetNode()->CPPmultinode178), KeyWstring, ValueDouble);
		break;
	case 179:
		*(multiNode->GetNode()->CPPmultinode179) = multimapUnion->CPPmultimap179->emplace_hint(*(_Where->GetNode()->CPPmultinode179), KeyWstring, ValueWchar);
		break;
	case 180:
		*(multiNode->GetNode()->CPPmultinode180) = multimapUnion->CPPmultimap180->emplace_hint(*(_Where->GetNode()->CPPmultinode180), KeyWstring, ValueBool);
		break;
	case 181:
		*(multiNode->GetNode()->CPPmultinode181) = multimapUnion->CPPmultimap181->emplace_hint(*(_Where->GetNode()->CPPmultinode181), KeyWstring, ValueWstring);
		break;
	case 182:
		*(multiNode->GetNode()->CPPmultinode182) = multimapUnion->CPPmultimap182->emplace_hint(*(_Where->GetNode()->CPPmultinode182), KeyWstring, Value__Int);
		break;
	case 183:
		*(multiNode->GetNode()->CPPmultinode183) = multimapUnion->CPPmultimap183->emplace_hint(*(_Where->GetNode()->CPPmultinode183), Key__Int, ValueUchar);
		break;
	case 184:
		*(multiNode->GetNode()->CPPmultinode184) = multimapUnion->CPPmultimap184->emplace_hint(*(_Where->GetNode()->CPPmultinode184), Key__Int, ValueChar);
		break;
	case 185:
		*(multiNode->GetNode()->CPPmultinode185) = multimapUnion->CPPmultimap185->emplace_hint(*(_Where->GetNode()->CPPmultinode185), Key__Int, ValueShort);
		break;
	case 186:
		*(multiNode->GetNode()->CPPmultinode186) = multimapUnion->CPPmultimap186->emplace_hint(*(_Where->GetNode()->CPPmultinode186), Key__Int, ValueUshort);
		break;
	case 187:
		*(multiNode->GetNode()->CPPmultinode187) = multimapUnion->CPPmultimap187->emplace_hint(*(_Where->GetNode()->CPPmultinode187), Key__Int, ValueInt);
		break;
	case 188:
		*(multiNode->GetNode()->CPPmultinode188) = multimapUnion->CPPmultimap188->emplace_hint(*(_Where->GetNode()->CPPmultinode188), Key__Int, ValueUint);
		break;
	case 189:
		*(multiNode->GetNode()->CPPmultinode189) = multimapUnion->CPPmultimap189->emplace_hint(*(_Where->GetNode()->CPPmultinode189), Key__Int, ValueLonglong);
		break;
	case 190:
		*(multiNode->GetNode()->CPPmultinode190) = multimapUnion->CPPmultimap190->emplace_hint(*(_Where->GetNode()->CPPmultinode190), Key__Int, ValueUlonglong);
		break;
	case 191:
		*(multiNode->GetNode()->CPPmultinode191) = multimapUnion->CPPmultimap191->emplace_hint(*(_Where->GetNode()->CPPmultinode191), Key__Int, ValueFloat);
		break;
	case 192:
		*(multiNode->GetNode()->CPPmultinode192) = multimapUnion->CPPmultimap192->emplace_hint(*(_Where->GetNode()->CPPmultinode192), Key__Int, ValueDouble);
		break;
	case 193:
		*(multiNode->GetNode()->CPPmultinode193) = multimapUnion->CPPmultimap193->emplace_hint(*(_Where->GetNode()->CPPmultinode193), Key__Int, ValueWchar);
		break;
	case 194:
		*(multiNode->GetNode()->CPPmultinode194) = multimapUnion->CPPmultimap194->emplace_hint(*(_Where->GetNode()->CPPmultinode194), Key__Int, ValueBool);
		break;
	case 195:
		*(multiNode->GetNode()->CPPmultinode195) = multimapUnion->CPPmultimap195->emplace_hint(*(_Where->GetNode()->CPPmultinode195), Key__Int, ValueWstring);
		break;
	case 196:
		*(multiNode->GetNode()->CPPmultinode196) = multimapUnion->CPPmultimap196->emplace_hint(*(_Where->GetNode()->CPPmultinode196), Key__Int, Value__Int);
		break;
	}
	return multiNode->DeepCopy();
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::emplace_hint(CShorpUnOrderedMultiConstNode<Key, Value>^ _Where, Key key, Value value)
{
	if (Object::ReferenceEquals(_Where, nullptr)) return nullptr;
	if (Object::ReferenceEquals(key, nullptr)) return nullptr;
	if (Object::ReferenceEquals(value, nullptr)) return nullptr;
	Type^ keyType = Key::typeid;
	Type^ valueType = Value::typeid;

	unsigned char KeyUchar = 0;
	char KeyChar = 0;
	short KeyShort = 0;
	unsigned short KeyUshort = 0;
	int KeyInt = 0;
	unsigned int KeyUint = 0;
	long long KeyLonglong = 0;
	unsigned long long KeyUlonglong = 0;
	float KeyFloat = 0.0f;
	double KeyDouble = 0;
	wchar_t KeyWchar = 0;
	bool KeyBool = false;
	std::wstring KeyWstring = L"";
	__int64 Key__Int = 0;

	if (keyType->Equals(System::Byte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUchar = static_cast<unsigned char>(safe_cast<System::Byte>(managedObject));
	}
	else if (keyType->Equals(System::SByte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyChar = static_cast<char>(safe_cast<System::SByte>(managedObject));
	}
	else if (keyType->Equals(System::Int16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyShort = static_cast<short>(safe_cast<System::Int16>(managedObject));
	}
	else if (keyType->Equals(System::UInt16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUshort = static_cast<unsigned short>(safe_cast<System::UInt16>(managedObject));
	}
	else if (keyType->Equals(System::Int32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyInt = static_cast<int>(safe_cast<System::Int32>(managedObject));
	}
	else if (keyType->Equals(System::UInt32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUint = static_cast<unsigned int>(safe_cast<System::UInt32>(managedObject));
	}
	else if (keyType->Equals(System::Int64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyLonglong = static_cast<long long>(safe_cast<System::Int64>(managedObject));
	}
	else if (keyType->Equals(System::UInt64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUlonglong = static_cast<unsigned long long>(safe_cast<System::UInt64>(managedObject));
	}
	else if (keyType->Equals(System::Single::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyFloat = static_cast<float>(safe_cast<System::Single>(managedObject));
	}
	else if (keyType->Equals(System::Double::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyDouble = static_cast<double>(safe_cast<System::Double>(managedObject));
	}
	else if (keyType->Equals(System::Char::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyWchar = static_cast<wchar_t>(safe_cast<System::Char>(managedObject));
	}
	else if (keyType->Equals(System::Boolean::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyBool = static_cast<bool>(safe_cast<System::Boolean>(managedObject));
	}
	else if (keyType->Equals(System::String::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		MarshalString(safe_cast<System::String^>(managedObject), KeyWstring);
	}
	else if (keyType->IsClass)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			gKeyClassDictionary->Add(key, nDictionaryKeyCount);
			gIntKeyClassDictionary->Add(nDictionaryKeyCount, key);
			Key__Int = nDictionaryKeyCount;
			nDictionaryKeyCount++;
		}
	}
	else if (keyType->IsValueType && !keyType->IsPrimitive && !keyType->IsEnum)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			gKeyClassDictionary->Add(key, nDictionaryKeyCount);
			gIntKeyClassDictionary->Add(nDictionaryKeyCount, key);
			Key__Int = nDictionaryKeyCount;
			nDictionaryKeyCount++;
		}
	}
	else if (keyType->IsInterface)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			gKeyClassDictionary->Add(key, nDictionaryKeyCount);
			gIntKeyClassDictionary->Add(nDictionaryKeyCount, key);
			Key__Int = nDictionaryKeyCount;
			nDictionaryKeyCount++;
		}
	}
	else
	{
		return nullptr;
	}

	unsigned char ValueUchar = 0;
	char ValueChar = 0;
	short ValueShort = 0;
	unsigned short ValueUshort = 0;
	int ValueInt = 0;
	unsigned int ValueUint = 0;
	long long ValueLonglong = 0;
	unsigned long long ValueUlonglong = 0;
	float ValueFloat = 0.0f;
	double ValueDouble = 0;
	wchar_t ValueWchar = 0;
	bool ValueBool = false;
	std::wstring ValueWstring = L"";
	__int64 Value__Int = 0;

	if (valueType->Equals(System::Byte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUchar = static_cast<unsigned char>(safe_cast<System::Byte>(managedObject));
	}
	else if (valueType->Equals(System::SByte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueChar = static_cast<char>(safe_cast<System::SByte>(managedObject));
	}
	else if (valueType->Equals(System::Int16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueShort = static_cast<short>(safe_cast<System::Int16>(managedObject));
	}
	else if (valueType->Equals(System::UInt16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUshort = static_cast<unsigned short>(safe_cast<System::UInt16>(managedObject));
	}
	else if (valueType->Equals(System::Int32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueInt = static_cast<int>(safe_cast<System::Int32>(managedObject));
	}
	else if (valueType->Equals(System::UInt32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUint = static_cast<unsigned int>(safe_cast<System::UInt32>(managedObject));
	}
	else if (valueType->Equals(System::Int64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueLonglong = static_cast<long long>(safe_cast<System::Int64>(managedObject));
	}
	else if (valueType->Equals(System::UInt64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUlonglong = static_cast<unsigned long long>(safe_cast<System::UInt64>(managedObject));
	}
	else if (valueType->Equals(System::Single::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueFloat = static_cast<float>(safe_cast<System::Single>(managedObject));
	}
	else if (valueType->Equals(System::Double::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueDouble = static_cast<double>(safe_cast<System::Double>(managedObject));
	}
	else if (valueType->Equals(System::Char::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueWchar = static_cast<wchar_t>(safe_cast<System::Char>(managedObject));
	}
	else if (valueType->Equals(System::Boolean::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueBool = static_cast<bool>(safe_cast<System::Boolean>(managedObject));
	}
	else if (valueType->Equals(System::String::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		MarshalString(safe_cast<System::String^>(managedObject), ValueWstring);
	}
	else if (valueType->IsClass)
	{
		gValueClassDictionary->Add(nDictionaryValueCount, value);
		Value__Int = nDictionaryValueCount;
		nDictionaryValueCount++;
	}
	else if (valueType->IsValueType && !valueType->IsPrimitive && !valueType->IsEnum)
	{
		gValueClassDictionary->Add(nDictionaryValueCount, value);
		Value__Int = nDictionaryValueCount;
		nDictionaryValueCount++;
	}
	else if (valueType->IsInterface)
	{
		gValueClassDictionary->Add(nDictionaryValueCount, value);
		Value__Int = nDictionaryValueCount;
		nDictionaryValueCount++;
	}
	else
	{
		GCHandle handle = GCHandle::Alloc(value);
		IntPtr ptr = GCHandle::ToIntPtr(handle);
		Value__Int = ptr.ToInt64();
		handle.Free();
		return nullptr;
	}

	switch (nKeyValueType)
	{
	case 0: default:
		return nullptr;
	case 1:
		*(multiNode->GetNode()->CPPmultinode1) = multimapUnion->CPPmultimap1->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode1), KeyUchar, ValueUchar);
		break;
	case 2:
		*(multiNode->GetNode()->CPPmultinode2) = multimapUnion->CPPmultimap2->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode2), KeyUchar, ValueChar);
		break;
	case 3:
		*(multiNode->GetNode()->CPPmultinode3) = multimapUnion->CPPmultimap3->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode3), KeyUchar, ValueShort);
		break;
	case 4:
		*(multiNode->GetNode()->CPPmultinode4) = multimapUnion->CPPmultimap4->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode4), KeyUchar, ValueUshort);
		break;
	case 5:
		*(multiNode->GetNode()->CPPmultinode5) = multimapUnion->CPPmultimap5->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode5), KeyUchar, ValueInt);
		break;
	case 6:
		*(multiNode->GetNode()->CPPmultinode6) = multimapUnion->CPPmultimap6->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode6), KeyUchar, ValueUint);
		break;
	case 7:
		*(multiNode->GetNode()->CPPmultinode7) = multimapUnion->CPPmultimap7->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode7), KeyUchar, ValueLonglong);
		break;
	case 8:
		*(multiNode->GetNode()->CPPmultinode8) = multimapUnion->CPPmultimap8->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode8), KeyUchar, ValueUlonglong);
		break;
	case 9:
		*(multiNode->GetNode()->CPPmultinode9) = multimapUnion->CPPmultimap9->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode9), KeyUchar, ValueFloat);
		break;
	case 10:
		*(multiNode->GetNode()->CPPmultinode10) = multimapUnion->CPPmultimap10->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode10), KeyUchar, ValueDouble);
		break;
	case 11:
		*(multiNode->GetNode()->CPPmultinode11) = multimapUnion->CPPmultimap11->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode11), KeyUchar, ValueWchar);
		break;
	case 12:
		*(multiNode->GetNode()->CPPmultinode12) = multimapUnion->CPPmultimap12->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode12), KeyUchar, ValueBool);
		break;
	case 13:
		*(multiNode->GetNode()->CPPmultinode13) = multimapUnion->CPPmultimap13->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode13), KeyUchar, ValueWstring);
		break;
	case 14:
		*(multiNode->GetNode()->CPPmultinode14) = multimapUnion->CPPmultimap14->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode14), KeyUchar, Value__Int);
		break;
	case 15:
		*(multiNode->GetNode()->CPPmultinode15) = multimapUnion->CPPmultimap15->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode15), KeyChar, ValueUchar);
		break;
	case 16:
		*(multiNode->GetNode()->CPPmultinode16) = multimapUnion->CPPmultimap16->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode16), KeyChar, ValueChar);
		break;
	case 17:
		*(multiNode->GetNode()->CPPmultinode17) = multimapUnion->CPPmultimap17->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode17), KeyChar, ValueShort);
		break;
	case 18:
		*(multiNode->GetNode()->CPPmultinode18) = multimapUnion->CPPmultimap18->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode18), KeyChar, ValueUshort);
		break;
	case 19:
		*(multiNode->GetNode()->CPPmultinode19) = multimapUnion->CPPmultimap19->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode19), KeyChar, ValueInt);
		break;
	case 20:
		*(multiNode->GetNode()->CPPmultinode20) = multimapUnion->CPPmultimap20->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode20), KeyChar, ValueUint);
		break;
	case 21:
		*(multiNode->GetNode()->CPPmultinode21) = multimapUnion->CPPmultimap21->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode21), KeyChar, ValueLonglong);
		break;
	case 22:
		*(multiNode->GetNode()->CPPmultinode22) = multimapUnion->CPPmultimap22->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode22), KeyChar, ValueUlonglong);
		break;
	case 23:
		*(multiNode->GetNode()->CPPmultinode23) = multimapUnion->CPPmultimap23->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode23), KeyChar, ValueFloat);
		break;
	case 24:
		*(multiNode->GetNode()->CPPmultinode24) = multimapUnion->CPPmultimap24->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode24), KeyChar, ValueDouble);
		break;
	case 25:
		*(multiNode->GetNode()->CPPmultinode25) = multimapUnion->CPPmultimap25->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode25), KeyChar, ValueWchar);
		break;
	case 26:
		*(multiNode->GetNode()->CPPmultinode26) = multimapUnion->CPPmultimap26->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode26), KeyChar, ValueBool);
		break;
	case 27:
		*(multiNode->GetNode()->CPPmultinode27) = multimapUnion->CPPmultimap27->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode27), KeyChar, ValueWstring);
		break;
	case 28:
		*(multiNode->GetNode()->CPPmultinode28) = multimapUnion->CPPmultimap28->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode28), KeyChar, Value__Int);
		break;
	case 29:
		*(multiNode->GetNode()->CPPmultinode29) = multimapUnion->CPPmultimap29->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode29), KeyShort, ValueUchar);
		break;
	case 30:
		*(multiNode->GetNode()->CPPmultinode30) = multimapUnion->CPPmultimap30->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode30), KeyShort, ValueChar);
		break;
	case 31:
		*(multiNode->GetNode()->CPPmultinode31) = multimapUnion->CPPmultimap31->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode31), KeyShort, ValueShort);
		break;
	case 32:
		*(multiNode->GetNode()->CPPmultinode32) = multimapUnion->CPPmultimap32->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode32), KeyShort, ValueUshort);
		break;
	case 33:
		*(multiNode->GetNode()->CPPmultinode33) = multimapUnion->CPPmultimap33->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode33), KeyShort, ValueInt);
		break;
	case 34:
		*(multiNode->GetNode()->CPPmultinode34) = multimapUnion->CPPmultimap34->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode34), KeyShort, ValueUint);
		break;
	case 35:
		*(multiNode->GetNode()->CPPmultinode35) = multimapUnion->CPPmultimap35->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode35), KeyShort, ValueLonglong);
		break;
	case 36:
		*(multiNode->GetNode()->CPPmultinode36) = multimapUnion->CPPmultimap36->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode36), KeyShort, ValueUlonglong);
		break;
	case 37:
		*(multiNode->GetNode()->CPPmultinode37) = multimapUnion->CPPmultimap37->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode37), KeyShort, ValueFloat);
		break;
	case 38:
		*(multiNode->GetNode()->CPPmultinode38) = multimapUnion->CPPmultimap38->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode38), KeyShort, ValueDouble);
		break;
	case 39:
		*(multiNode->GetNode()->CPPmultinode39) = multimapUnion->CPPmultimap39->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode39), KeyShort, ValueWchar);
		break;
	case 40:
		*(multiNode->GetNode()->CPPmultinode40) = multimapUnion->CPPmultimap40->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode40), KeyShort, ValueBool);
		break;
	case 41:
		*(multiNode->GetNode()->CPPmultinode41) = multimapUnion->CPPmultimap41->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode41), KeyShort, ValueWstring);
		break;
	case 42:
		*(multiNode->GetNode()->CPPmultinode42) = multimapUnion->CPPmultimap42->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode42), KeyShort, Value__Int);
		break;
	case 43:
		*(multiNode->GetNode()->CPPmultinode43) = multimapUnion->CPPmultimap43->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode43), KeyUshort, ValueUchar);
		break;
	case 44:
		*(multiNode->GetNode()->CPPmultinode44) = multimapUnion->CPPmultimap44->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode44), KeyUshort, ValueChar);
		break;
	case 45:
		*(multiNode->GetNode()->CPPmultinode45) = multimapUnion->CPPmultimap45->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode45), KeyUshort, ValueShort);
		break;
	case 46:
		*(multiNode->GetNode()->CPPmultinode46) = multimapUnion->CPPmultimap46->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode46), KeyUshort, ValueUshort);
		break;
	case 47:
		*(multiNode->GetNode()->CPPmultinode47) = multimapUnion->CPPmultimap47->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode47), KeyUshort, ValueInt);
		break;
	case 48:
		*(multiNode->GetNode()->CPPmultinode48) = multimapUnion->CPPmultimap48->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode48), KeyUshort, ValueUint);
		break;
	case 49:
		*(multiNode->GetNode()->CPPmultinode49) = multimapUnion->CPPmultimap49->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode49), KeyUshort, ValueLonglong);
		break;
	case 50:
		*(multiNode->GetNode()->CPPmultinode50) = multimapUnion->CPPmultimap50->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode50), KeyUshort, ValueUlonglong);
		break;
	case 51:
		*(multiNode->GetNode()->CPPmultinode51) = multimapUnion->CPPmultimap51->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode51), KeyUshort, ValueFloat);
		break;
	case 52:
		*(multiNode->GetNode()->CPPmultinode52) = multimapUnion->CPPmultimap52->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode52), KeyUshort, ValueDouble);
		break;
	case 53:
		*(multiNode->GetNode()->CPPmultinode53) = multimapUnion->CPPmultimap53->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode53), KeyUshort, ValueWchar);
		break;
	case 54:
		*(multiNode->GetNode()->CPPmultinode54) = multimapUnion->CPPmultimap54->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode54), KeyUshort, ValueBool);
		break;
	case 55:
		*(multiNode->GetNode()->CPPmultinode55) = multimapUnion->CPPmultimap55->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode55), KeyUshort, ValueWstring);
		break;
	case 56:
		*(multiNode->GetNode()->CPPmultinode56) = multimapUnion->CPPmultimap56->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode56), KeyUshort, Value__Int);
		break;
	case 57:
		*(multiNode->GetNode()->CPPmultinode57) = multimapUnion->CPPmultimap57->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode57), KeyInt, ValueUchar);
		break;
	case 58:
		*(multiNode->GetNode()->CPPmultinode58) = multimapUnion->CPPmultimap58->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode58), KeyInt, ValueChar);
		break;
	case 59:
		*(multiNode->GetNode()->CPPmultinode59) = multimapUnion->CPPmultimap59->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode59), KeyInt, ValueShort);
		break;
	case 60:
		*(multiNode->GetNode()->CPPmultinode60) = multimapUnion->CPPmultimap60->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode60), KeyInt, ValueUshort);
		break;
	case 61:
		*(multiNode->GetNode()->CPPmultinode61) = multimapUnion->CPPmultimap61->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode61), KeyInt, ValueInt);
		break;
	case 62:
		*(multiNode->GetNode()->CPPmultinode62) = multimapUnion->CPPmultimap62->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode62), KeyInt, ValueUint);
		break;
	case 63:
		*(multiNode->GetNode()->CPPmultinode63) = multimapUnion->CPPmultimap63->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode63), KeyInt, ValueLonglong);
		break;
	case 64:
		*(multiNode->GetNode()->CPPmultinode64) = multimapUnion->CPPmultimap64->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode64), KeyInt, ValueUlonglong);
		break;
	case 65:
		*(multiNode->GetNode()->CPPmultinode65) = multimapUnion->CPPmultimap65->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode65), KeyInt, ValueFloat);
		break;
	case 66:
		*(multiNode->GetNode()->CPPmultinode66) = multimapUnion->CPPmultimap66->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode66), KeyInt, ValueDouble);
		break;
	case 67:
		*(multiNode->GetNode()->CPPmultinode67) = multimapUnion->CPPmultimap67->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode67), KeyInt, ValueWchar);
		break;
	case 68:
		*(multiNode->GetNode()->CPPmultinode68) = multimapUnion->CPPmultimap68->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode68), KeyInt, ValueBool);
		break;
	case 69:
		*(multiNode->GetNode()->CPPmultinode69) = multimapUnion->CPPmultimap69->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode69), KeyInt, ValueWstring);
		break;
	case 70:
		*(multiNode->GetNode()->CPPmultinode70) = multimapUnion->CPPmultimap70->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode70), KeyInt, Value__Int);
		break;
	case 71:
		*(multiNode->GetNode()->CPPmultinode71) = multimapUnion->CPPmultimap71->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode71), KeyUint, ValueUchar);
		break;
	case 72:
		*(multiNode->GetNode()->CPPmultinode72) = multimapUnion->CPPmultimap72->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode72), KeyUint, ValueChar);
		break;
	case 73:
		*(multiNode->GetNode()->CPPmultinode73) = multimapUnion->CPPmultimap73->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode73), KeyUint, ValueShort);
		break;
	case 74:
		*(multiNode->GetNode()->CPPmultinode74) = multimapUnion->CPPmultimap74->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode74), KeyUint, ValueUshort);
		break;
	case 75:
		*(multiNode->GetNode()->CPPmultinode75) = multimapUnion->CPPmultimap75->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode75), KeyUint, ValueInt);
		break;
	case 76:
		*(multiNode->GetNode()->CPPmultinode76) = multimapUnion->CPPmultimap76->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode76), KeyUint, ValueUint);
		break;
	case 77:
		*(multiNode->GetNode()->CPPmultinode77) = multimapUnion->CPPmultimap77->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode77), KeyUint, ValueLonglong);
		break;
	case 78:
		*(multiNode->GetNode()->CPPmultinode78) = multimapUnion->CPPmultimap78->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode78), KeyUint, ValueUlonglong);
		break;
	case 79:
		*(multiNode->GetNode()->CPPmultinode79) = multimapUnion->CPPmultimap79->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode79), KeyUint, ValueFloat);
		break;
	case 80:
		*(multiNode->GetNode()->CPPmultinode80) = multimapUnion->CPPmultimap80->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode80), KeyUint, ValueDouble);
		break;
	case 81:
		*(multiNode->GetNode()->CPPmultinode81) = multimapUnion->CPPmultimap81->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode81), KeyUint, ValueWchar);
		break;
	case 82:
		*(multiNode->GetNode()->CPPmultinode82) = multimapUnion->CPPmultimap82->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode82), KeyUint, ValueBool);
		break;
	case 83:
		*(multiNode->GetNode()->CPPmultinode83) = multimapUnion->CPPmultimap83->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode83), KeyUint, ValueWstring);
		break;
	case 84:
		*(multiNode->GetNode()->CPPmultinode84) = multimapUnion->CPPmultimap84->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode84), KeyUint, Value__Int);
		break;
	case 85:
		*(multiNode->GetNode()->CPPmultinode85) = multimapUnion->CPPmultimap85->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode85), KeyLonglong, ValueUchar);
		break;
	case 86:
		*(multiNode->GetNode()->CPPmultinode86) = multimapUnion->CPPmultimap86->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode86), KeyLonglong, ValueChar);
		break;
	case 87:
		*(multiNode->GetNode()->CPPmultinode87) = multimapUnion->CPPmultimap87->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode87), KeyLonglong, ValueShort);
		break;
	case 88:
		*(multiNode->GetNode()->CPPmultinode88) = multimapUnion->CPPmultimap88->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode88), KeyLonglong, ValueUshort);
		break;
	case 89:
		*(multiNode->GetNode()->CPPmultinode89) = multimapUnion->CPPmultimap89->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode89), KeyLonglong, ValueInt);
		break;
	case 90:
		*(multiNode->GetNode()->CPPmultinode90) = multimapUnion->CPPmultimap90->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode90), KeyLonglong, ValueUint);
		break;
	case 91:
		*(multiNode->GetNode()->CPPmultinode91) = multimapUnion->CPPmultimap91->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode91), KeyLonglong, ValueLonglong);
		break;
	case 92:
		*(multiNode->GetNode()->CPPmultinode92) = multimapUnion->CPPmultimap92->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode92), KeyLonglong, ValueUlonglong);
		break;
	case 93:
		*(multiNode->GetNode()->CPPmultinode93) = multimapUnion->CPPmultimap93->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode93), KeyLonglong, ValueFloat);
		break;
	case 94:
		*(multiNode->GetNode()->CPPmultinode94) = multimapUnion->CPPmultimap94->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode94), KeyLonglong, ValueDouble);
		break;
	case 95:
		*(multiNode->GetNode()->CPPmultinode95) = multimapUnion->CPPmultimap95->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode95), KeyLonglong, ValueWchar);
		break;
	case 96:
		*(multiNode->GetNode()->CPPmultinode96) = multimapUnion->CPPmultimap96->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode96), KeyLonglong, ValueBool);
		break;
	case 97:
		*(multiNode->GetNode()->CPPmultinode97) = multimapUnion->CPPmultimap97->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode97), KeyLonglong, ValueWstring);
		break;
	case 98:
		*(multiNode->GetNode()->CPPmultinode98) = multimapUnion->CPPmultimap98->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode98), KeyLonglong, Value__Int);
		break;
	case 99:
		*(multiNode->GetNode()->CPPmultinode99) = multimapUnion->CPPmultimap99->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode99), KeyUlonglong, ValueUchar);
		break;
	case 100:
		*(multiNode->GetNode()->CPPmultinode100) = multimapUnion->CPPmultimap100->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode100), KeyUlonglong, ValueChar);
		break;
	case 101:
		*(multiNode->GetNode()->CPPmultinode101) = multimapUnion->CPPmultimap101->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode101), KeyUlonglong, ValueShort);
		break;
	case 102:
		*(multiNode->GetNode()->CPPmultinode102) = multimapUnion->CPPmultimap102->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode102), KeyUlonglong, ValueUshort);
		break;
	case 103:
		*(multiNode->GetNode()->CPPmultinode103) = multimapUnion->CPPmultimap103->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode103), KeyUlonglong, ValueInt);
		break;
	case 104:
		*(multiNode->GetNode()->CPPmultinode104) = multimapUnion->CPPmultimap104->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode104), KeyUlonglong, ValueUint);
		break;
	case 105:
		*(multiNode->GetNode()->CPPmultinode105) = multimapUnion->CPPmultimap105->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode105), KeyUlonglong, ValueLonglong);
		break;
	case 106:
		*(multiNode->GetNode()->CPPmultinode106) = multimapUnion->CPPmultimap106->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode106), KeyUlonglong, ValueUlonglong);
		break;
	case 107:
		*(multiNode->GetNode()->CPPmultinode107) = multimapUnion->CPPmultimap107->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode107), KeyUlonglong, ValueFloat);
		break;
	case 108:
		*(multiNode->GetNode()->CPPmultinode108) = multimapUnion->CPPmultimap108->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode108), KeyUlonglong, ValueDouble);
		break;
	case 109:
		*(multiNode->GetNode()->CPPmultinode109) = multimapUnion->CPPmultimap109->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode109), KeyUlonglong, ValueWchar);
		break;
	case 110:
		*(multiNode->GetNode()->CPPmultinode110) = multimapUnion->CPPmultimap110->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode110), KeyUlonglong, ValueBool);
		break;
	case 111:
		*(multiNode->GetNode()->CPPmultinode111) = multimapUnion->CPPmultimap111->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode111), KeyUlonglong, ValueWstring);
		break;
	case 112:
		*(multiNode->GetNode()->CPPmultinode112) = multimapUnion->CPPmultimap112->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode112), KeyUlonglong, Value__Int);
		break;
	case 113:
		*(multiNode->GetNode()->CPPmultinode113) = multimapUnion->CPPmultimap113->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode113), KeyFloat, ValueUchar);
		break;
	case 114:
		*(multiNode->GetNode()->CPPmultinode114) = multimapUnion->CPPmultimap114->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode114), KeyFloat, ValueChar);
		break;
	case 115:
		*(multiNode->GetNode()->CPPmultinode115) = multimapUnion->CPPmultimap115->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode115), KeyFloat, ValueShort);
		break;
	case 116:
		*(multiNode->GetNode()->CPPmultinode116) = multimapUnion->CPPmultimap116->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode116), KeyFloat, ValueUshort);
		break;
	case 117:
		*(multiNode->GetNode()->CPPmultinode117) = multimapUnion->CPPmultimap117->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode117), KeyFloat, ValueInt);
		break;
	case 118:
		*(multiNode->GetNode()->CPPmultinode118) = multimapUnion->CPPmultimap118->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode118), KeyFloat, ValueUint);
		break;
	case 119:
		*(multiNode->GetNode()->CPPmultinode119) = multimapUnion->CPPmultimap119->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode119), KeyFloat, ValueLonglong);
		break;
	case 120:
		*(multiNode->GetNode()->CPPmultinode120) = multimapUnion->CPPmultimap120->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode120), KeyFloat, ValueUlonglong);
		break;
	case 121:
		*(multiNode->GetNode()->CPPmultinode121) = multimapUnion->CPPmultimap121->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode121), KeyFloat, ValueFloat);
		break;
	case 122:
		*(multiNode->GetNode()->CPPmultinode122) = multimapUnion->CPPmultimap122->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode122), KeyFloat, ValueDouble);
		break;
	case 123:
		*(multiNode->GetNode()->CPPmultinode123) = multimapUnion->CPPmultimap123->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode123), KeyFloat, ValueWchar);
		break;
	case 124:
		*(multiNode->GetNode()->CPPmultinode124) = multimapUnion->CPPmultimap124->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode124), KeyFloat, ValueBool);
		break;
	case 125:
		*(multiNode->GetNode()->CPPmultinode125) = multimapUnion->CPPmultimap125->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode125), KeyFloat, ValueWstring);
		break;
	case 126:
		*(multiNode->GetNode()->CPPmultinode126) = multimapUnion->CPPmultimap126->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode126), KeyFloat, Value__Int);
		break;
	case 127:
		*(multiNode->GetNode()->CPPmultinode127) = multimapUnion->CPPmultimap127->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode127), KeyDouble, ValueUchar);
		break;
	case 128:
		*(multiNode->GetNode()->CPPmultinode128) = multimapUnion->CPPmultimap128->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode128), KeyDouble, ValueChar);
		break;
	case 129:
		*(multiNode->GetNode()->CPPmultinode129) = multimapUnion->CPPmultimap129->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode129), KeyDouble, ValueShort);
		break;
	case 130:
		*(multiNode->GetNode()->CPPmultinode130) = multimapUnion->CPPmultimap130->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode130), KeyDouble, ValueUshort);
		break;
	case 131:
		*(multiNode->GetNode()->CPPmultinode131) = multimapUnion->CPPmultimap131->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode131), KeyDouble, ValueInt);
		break;
	case 132:
		*(multiNode->GetNode()->CPPmultinode132) = multimapUnion->CPPmultimap132->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode132), KeyDouble, ValueUint);
		break;
	case 133:
		*(multiNode->GetNode()->CPPmultinode133) = multimapUnion->CPPmultimap133->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode133), KeyDouble, ValueLonglong);
		break;
	case 134:
		*(multiNode->GetNode()->CPPmultinode134) = multimapUnion->CPPmultimap134->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode134), KeyDouble, ValueUlonglong);
		break;
	case 135:
		*(multiNode->GetNode()->CPPmultinode135) = multimapUnion->CPPmultimap135->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode135), KeyDouble, ValueFloat);
		break;
	case 136:
		*(multiNode->GetNode()->CPPmultinode136) = multimapUnion->CPPmultimap136->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode136), KeyDouble, ValueDouble);
		break;
	case 137:
		*(multiNode->GetNode()->CPPmultinode137) = multimapUnion->CPPmultimap137->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode137), KeyDouble, ValueWchar);
		break;
	case 138:
		*(multiNode->GetNode()->CPPmultinode138) = multimapUnion->CPPmultimap138->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode138), KeyDouble, ValueBool);
		break;
	case 139:
		*(multiNode->GetNode()->CPPmultinode139) = multimapUnion->CPPmultimap139->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode139), KeyDouble, ValueWstring);
		break;
	case 140:
		*(multiNode->GetNode()->CPPmultinode140) = multimapUnion->CPPmultimap140->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode140), KeyDouble, Value__Int);
		break;
	case 141:
		*(multiNode->GetNode()->CPPmultinode141) = multimapUnion->CPPmultimap141->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode141), KeyWchar, ValueUchar);
		break;
	case 142:
		*(multiNode->GetNode()->CPPmultinode142) = multimapUnion->CPPmultimap142->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode142), KeyWchar, ValueChar);
		break;
	case 143:
		*(multiNode->GetNode()->CPPmultinode143) = multimapUnion->CPPmultimap143->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode143), KeyWchar, ValueShort);
		break;
	case 144:
		*(multiNode->GetNode()->CPPmultinode144) = multimapUnion->CPPmultimap144->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode144), KeyWchar, ValueUshort);
		break;
	case 145:
		*(multiNode->GetNode()->CPPmultinode145) = multimapUnion->CPPmultimap145->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode145), KeyWchar, ValueInt);
		break;
	case 146:
		*(multiNode->GetNode()->CPPmultinode146) = multimapUnion->CPPmultimap146->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode146), KeyWchar, ValueUint);
		break;
	case 147:
		*(multiNode->GetNode()->CPPmultinode147) = multimapUnion->CPPmultimap147->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode147), KeyWchar, ValueLonglong);
		break;
	case 148:
		*(multiNode->GetNode()->CPPmultinode148) = multimapUnion->CPPmultimap148->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode148), KeyWchar, ValueUlonglong);
		break;
	case 149:
		*(multiNode->GetNode()->CPPmultinode149) = multimapUnion->CPPmultimap149->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode149), KeyWchar, ValueFloat);
		break;
	case 150:
		*(multiNode->GetNode()->CPPmultinode150) = multimapUnion->CPPmultimap150->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode150), KeyWchar, ValueDouble);
		break;
	case 151:
		*(multiNode->GetNode()->CPPmultinode151) = multimapUnion->CPPmultimap151->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode151), KeyWchar, ValueWchar);
		break;
	case 152:
		*(multiNode->GetNode()->CPPmultinode152) = multimapUnion->CPPmultimap152->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode152), KeyWchar, ValueBool);
		break;
	case 153:
		*(multiNode->GetNode()->CPPmultinode153) = multimapUnion->CPPmultimap153->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode153), KeyWchar, ValueWstring);
		break;
	case 154:
		*(multiNode->GetNode()->CPPmultinode154) = multimapUnion->CPPmultimap154->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode154), KeyWchar, Value__Int);
		break;
	case 155:
		*(multiNode->GetNode()->CPPmultinode155) = multimapUnion->CPPmultimap155->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode155), KeyBool, ValueUchar);
		break;
	case 156:
		*(multiNode->GetNode()->CPPmultinode156) = multimapUnion->CPPmultimap156->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode156), KeyBool, ValueChar);
		break;
	case 157:
		*(multiNode->GetNode()->CPPmultinode157) = multimapUnion->CPPmultimap157->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode157), KeyBool, ValueShort);
		break;
	case 158:
		*(multiNode->GetNode()->CPPmultinode158) = multimapUnion->CPPmultimap158->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode158), KeyBool, ValueUshort);
		break;
	case 159:
		*(multiNode->GetNode()->CPPmultinode159) = multimapUnion->CPPmultimap159->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode159), KeyBool, ValueInt);
		break;
	case 160:
		*(multiNode->GetNode()->CPPmultinode160) = multimapUnion->CPPmultimap160->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode160), KeyBool, ValueUint);
		break;
	case 161:
		*(multiNode->GetNode()->CPPmultinode161) = multimapUnion->CPPmultimap161->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode161), KeyBool, ValueLonglong);
		break;
	case 162:
		*(multiNode->GetNode()->CPPmultinode162) = multimapUnion->CPPmultimap162->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode162), KeyBool, ValueUlonglong);
		break;
	case 163:
		*(multiNode->GetNode()->CPPmultinode163) = multimapUnion->CPPmultimap163->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode163), KeyBool, ValueFloat);
		break;
	case 164:
		*(multiNode->GetNode()->CPPmultinode164) = multimapUnion->CPPmultimap164->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode164), KeyBool, ValueDouble);
		break;
	case 165:
		*(multiNode->GetNode()->CPPmultinode165) = multimapUnion->CPPmultimap165->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode165), KeyBool, ValueWchar);
		break;
	case 166:
		*(multiNode->GetNode()->CPPmultinode166) = multimapUnion->CPPmultimap166->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode166), KeyBool, ValueBool);
		break;
	case 167:
		*(multiNode->GetNode()->CPPmultinode167) = multimapUnion->CPPmultimap167->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode167), KeyBool, ValueWstring);
		break;
	case 168:
		*(multiNode->GetNode()->CPPmultinode168) = multimapUnion->CPPmultimap168->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode168), KeyBool, Value__Int);
		break;
	case 169:
		*(multiNode->GetNode()->CPPmultinode169) = multimapUnion->CPPmultimap169->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode169), KeyWstring, ValueUchar);
		break;
	case 170:
		*(multiNode->GetNode()->CPPmultinode170) = multimapUnion->CPPmultimap170->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode170), KeyWstring, ValueChar);
		break;
	case 171:
		*(multiNode->GetNode()->CPPmultinode171) = multimapUnion->CPPmultimap171->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode171), KeyWstring, ValueShort);
		break;
	case 172:
		*(multiNode->GetNode()->CPPmultinode172) = multimapUnion->CPPmultimap172->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode172), KeyWstring, ValueUshort);
		break;
	case 173:
		*(multiNode->GetNode()->CPPmultinode173) = multimapUnion->CPPmultimap173->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode173), KeyWstring, ValueInt);
		break;
	case 174:
		*(multiNode->GetNode()->CPPmultinode174) = multimapUnion->CPPmultimap174->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode174), KeyWstring, ValueUint);
		break;
	case 175:
		*(multiNode->GetNode()->CPPmultinode175) = multimapUnion->CPPmultimap175->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode175), KeyWstring, ValueLonglong);
		break;
	case 176:
		*(multiNode->GetNode()->CPPmultinode176) = multimapUnion->CPPmultimap176->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode176), KeyWstring, ValueUlonglong);
		break;
	case 177:
		*(multiNode->GetNode()->CPPmultinode177) = multimapUnion->CPPmultimap177->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode177), KeyWstring, ValueFloat);
		break;
	case 178:
		*(multiNode->GetNode()->CPPmultinode178) = multimapUnion->CPPmultimap178->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode178), KeyWstring, ValueDouble);
		break;
	case 179:
		*(multiNode->GetNode()->CPPmultinode179) = multimapUnion->CPPmultimap179->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode179), KeyWstring, ValueWchar);
		break;
	case 180:
		*(multiNode->GetNode()->CPPmultinode180) = multimapUnion->CPPmultimap180->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode180), KeyWstring, ValueBool);
		break;
	case 181:
		*(multiNode->GetNode()->CPPmultinode181) = multimapUnion->CPPmultimap181->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode181), KeyWstring, ValueWstring);
		break;
	case 182:
		*(multiNode->GetNode()->CPPmultinode182) = multimapUnion->CPPmultimap182->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode182), KeyWstring, Value__Int);
		break;
	case 183:
		*(multiNode->GetNode()->CPPmultinode183) = multimapUnion->CPPmultimap183->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode183), Key__Int, ValueUchar);
		break;
	case 184:
		*(multiNode->GetNode()->CPPmultinode184) = multimapUnion->CPPmultimap184->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode184), Key__Int, ValueChar);
		break;
	case 185:
		*(multiNode->GetNode()->CPPmultinode185) = multimapUnion->CPPmultimap185->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode185), Key__Int, ValueShort);
		break;
	case 186:
		*(multiNode->GetNode()->CPPmultinode186) = multimapUnion->CPPmultimap186->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode186), Key__Int, ValueUshort);
		break;
	case 187:
		*(multiNode->GetNode()->CPPmultinode187) = multimapUnion->CPPmultimap187->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode187), Key__Int, ValueInt);
		break;
	case 188:
		*(multiNode->GetNode()->CPPmultinode188) = multimapUnion->CPPmultimap188->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode188), Key__Int, ValueUint);
		break;
	case 189:
		*(multiNode->GetNode()->CPPmultinode189) = multimapUnion->CPPmultimap189->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode189), Key__Int, ValueLonglong);
		break;
	case 190:
		*(multiNode->GetNode()->CPPmultinode190) = multimapUnion->CPPmultimap190->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode190), Key__Int, ValueUlonglong);
		break;
	case 191:
		*(multiNode->GetNode()->CPPmultinode191) = multimapUnion->CPPmultimap191->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode191), Key__Int, ValueFloat);
		break;
	case 192:
		*(multiNode->GetNode()->CPPmultinode192) = multimapUnion->CPPmultimap192->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode192), Key__Int, ValueDouble);
		break;
	case 193:
		*(multiNode->GetNode()->CPPmultinode193) = multimapUnion->CPPmultimap193->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode193), Key__Int, ValueWchar);
		break;
	case 194:
		*(multiNode->GetNode()->CPPmultinode194) = multimapUnion->CPPmultimap194->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode194), Key__Int, ValueBool);
		break;
	case 195:
		*(multiNode->GetNode()->CPPmultinode195) = multimapUnion->CPPmultimap195->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode195), Key__Int, ValueWstring);
		break;
	case 196:
		*(multiNode->GetNode()->CPPmultinode196) = multimapUnion->CPPmultimap196->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode196), Key__Int, Value__Int);
		break;
	}
	return multiNode->DeepCopy();
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedReverseNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::rbegin()
{
	switch (nKeyValueType)
	{
	case 0: default:
		return nullptr;
	case 1:
		*(RIterNode->GetNode()->CPPreversenode1) = multimapUnion->CPPmultimap1->rbegin();
		break;
	case 2:
		*(RIterNode->GetNode()->CPPreversenode2) = multimapUnion->CPPmultimap2->rbegin();
		break;
	case 3:
		*(RIterNode->GetNode()->CPPreversenode3) = multimapUnion->CPPmultimap3->rbegin();
		break;
	case 4:
		*(RIterNode->GetNode()->CPPreversenode4) = multimapUnion->CPPmultimap4->rbegin();
		break;
	case 5:
		*(RIterNode->GetNode()->CPPreversenode5) = multimapUnion->CPPmultimap5->rbegin();
		break;
	case 6:
		*(RIterNode->GetNode()->CPPreversenode6) = multimapUnion->CPPmultimap6->rbegin();
		break;
	case 7:
		*(RIterNode->GetNode()->CPPreversenode7) = multimapUnion->CPPmultimap7->rbegin();
		break;
	case 8:
		*(RIterNode->GetNode()->CPPreversenode8) = multimapUnion->CPPmultimap8->rbegin();
		break;
	case 9:
		*(RIterNode->GetNode()->CPPreversenode9) = multimapUnion->CPPmultimap9->rbegin();
		break;
	case 10:
		*(RIterNode->GetNode()->CPPreversenode10) = multimapUnion->CPPmultimap10->rbegin();
		break;
	case 11:
		*(RIterNode->GetNode()->CPPreversenode11) = multimapUnion->CPPmultimap11->rbegin();
		break;
	case 12:
		*(RIterNode->GetNode()->CPPreversenode12) = multimapUnion->CPPmultimap12->rbegin();
		break;
	case 13:
		*(RIterNode->GetNode()->CPPreversenode13) = multimapUnion->CPPmultimap13->rbegin();
		break;
	case 14:
		*(RIterNode->GetNode()->CPPreversenode14) = multimapUnion->CPPmultimap14->rbegin();
		break;
	case 15:
		*(RIterNode->GetNode()->CPPreversenode15) = multimapUnion->CPPmultimap15->rbegin();
		break;
	case 16:
		*(RIterNode->GetNode()->CPPreversenode16) = multimapUnion->CPPmultimap16->rbegin();
		break;
	case 17:
		*(RIterNode->GetNode()->CPPreversenode17) = multimapUnion->CPPmultimap17->rbegin();
		break;
	case 18:
		*(RIterNode->GetNode()->CPPreversenode18) = multimapUnion->CPPmultimap18->rbegin();
		break;
	case 19:
		*(RIterNode->GetNode()->CPPreversenode19) = multimapUnion->CPPmultimap19->rbegin();
		break;
	case 20:
		*(RIterNode->GetNode()->CPPreversenode20) = multimapUnion->CPPmultimap20->rbegin();
		break;
	case 21:
		*(RIterNode->GetNode()->CPPreversenode21) = multimapUnion->CPPmultimap21->rbegin();
		break;
	case 22:
		*(RIterNode->GetNode()->CPPreversenode22) = multimapUnion->CPPmultimap22->rbegin();
		break;
	case 23:
		*(RIterNode->GetNode()->CPPreversenode23) = multimapUnion->CPPmultimap23->rbegin();
		break;
	case 24:
		*(RIterNode->GetNode()->CPPreversenode24) = multimapUnion->CPPmultimap24->rbegin();
		break;
	case 25:
		*(RIterNode->GetNode()->CPPreversenode25) = multimapUnion->CPPmultimap25->rbegin();
		break;
	case 26:
		*(RIterNode->GetNode()->CPPreversenode26) = multimapUnion->CPPmultimap26->rbegin();
		break;
	case 27:
		*(RIterNode->GetNode()->CPPreversenode27) = multimapUnion->CPPmultimap27->rbegin();
		break;
	case 28:
		*(RIterNode->GetNode()->CPPreversenode28) = multimapUnion->CPPmultimap28->rbegin();
		break;
	case 29:
		*(RIterNode->GetNode()->CPPreversenode29) = multimapUnion->CPPmultimap29->rbegin();
		break;
	case 30:
		*(RIterNode->GetNode()->CPPreversenode30) = multimapUnion->CPPmultimap30->rbegin();
		break;
	case 31:
		*(RIterNode->GetNode()->CPPreversenode31) = multimapUnion->CPPmultimap31->rbegin();
		break;
	case 32:
		*(RIterNode->GetNode()->CPPreversenode32) = multimapUnion->CPPmultimap32->rbegin();
		break;
	case 33:
		*(RIterNode->GetNode()->CPPreversenode33) = multimapUnion->CPPmultimap33->rbegin();
		break;
	case 34:
		*(RIterNode->GetNode()->CPPreversenode34) = multimapUnion->CPPmultimap34->rbegin();
		break;
	case 35:
		*(RIterNode->GetNode()->CPPreversenode35) = multimapUnion->CPPmultimap35->rbegin();
		break;
	case 36:
		*(RIterNode->GetNode()->CPPreversenode36) = multimapUnion->CPPmultimap36->rbegin();
		break;
	case 37:
		*(RIterNode->GetNode()->CPPreversenode37) = multimapUnion->CPPmultimap37->rbegin();
		break;
	case 38:
		*(RIterNode->GetNode()->CPPreversenode38) = multimapUnion->CPPmultimap38->rbegin();
		break;
	case 39:
		*(RIterNode->GetNode()->CPPreversenode39) = multimapUnion->CPPmultimap39->rbegin();
		break;
	case 40:
		*(RIterNode->GetNode()->CPPreversenode40) = multimapUnion->CPPmultimap40->rbegin();
		break;
	case 41:
		*(RIterNode->GetNode()->CPPreversenode41) = multimapUnion->CPPmultimap41->rbegin();
		break;
	case 42:
		*(RIterNode->GetNode()->CPPreversenode42) = multimapUnion->CPPmultimap42->rbegin();
		break;
	case 43:
		*(RIterNode->GetNode()->CPPreversenode43) = multimapUnion->CPPmultimap43->rbegin();
		break;
	case 44:
		*(RIterNode->GetNode()->CPPreversenode44) = multimapUnion->CPPmultimap44->rbegin();
		break;
	case 45:
		*(RIterNode->GetNode()->CPPreversenode45) = multimapUnion->CPPmultimap45->rbegin();
		break;
	case 46:
		*(RIterNode->GetNode()->CPPreversenode46) = multimapUnion->CPPmultimap46->rbegin();
		break;
	case 47:
		*(RIterNode->GetNode()->CPPreversenode47) = multimapUnion->CPPmultimap47->rbegin();
		break;
	case 48:
		*(RIterNode->GetNode()->CPPreversenode48) = multimapUnion->CPPmultimap48->rbegin();
		break;
	case 49:
		*(RIterNode->GetNode()->CPPreversenode49) = multimapUnion->CPPmultimap49->rbegin();
		break;
	case 50:
		*(RIterNode->GetNode()->CPPreversenode50) = multimapUnion->CPPmultimap50->rbegin();
		break;
	case 51:
		*(RIterNode->GetNode()->CPPreversenode51) = multimapUnion->CPPmultimap51->rbegin();
		break;
	case 52:
		*(RIterNode->GetNode()->CPPreversenode52) = multimapUnion->CPPmultimap52->rbegin();
		break;
	case 53:
		*(RIterNode->GetNode()->CPPreversenode53) = multimapUnion->CPPmultimap53->rbegin();
		break;
	case 54:
		*(RIterNode->GetNode()->CPPreversenode54) = multimapUnion->CPPmultimap54->rbegin();
		break;
	case 55:
		*(RIterNode->GetNode()->CPPreversenode55) = multimapUnion->CPPmultimap55->rbegin();
		break;
	case 56:
		*(RIterNode->GetNode()->CPPreversenode56) = multimapUnion->CPPmultimap56->rbegin();
		break;
	case 57:
		*(RIterNode->GetNode()->CPPreversenode57) = multimapUnion->CPPmultimap57->rbegin();
		break;
	case 58:
		*(RIterNode->GetNode()->CPPreversenode58) = multimapUnion->CPPmultimap58->rbegin();
		break;
	case 59:
		*(RIterNode->GetNode()->CPPreversenode59) = multimapUnion->CPPmultimap59->rbegin();
		break;
	case 60:
		*(RIterNode->GetNode()->CPPreversenode60) = multimapUnion->CPPmultimap60->rbegin();
		break;
	case 61:
		*(RIterNode->GetNode()->CPPreversenode61) = multimapUnion->CPPmultimap61->rbegin();
		break;
	case 62:
		*(RIterNode->GetNode()->CPPreversenode62) = multimapUnion->CPPmultimap62->rbegin();
		break;
	case 63:
		*(RIterNode->GetNode()->CPPreversenode63) = multimapUnion->CPPmultimap63->rbegin();
		break;
	case 64:
		*(RIterNode->GetNode()->CPPreversenode64) = multimapUnion->CPPmultimap64->rbegin();
		break;
	case 65:
		*(RIterNode->GetNode()->CPPreversenode65) = multimapUnion->CPPmultimap65->rbegin();
		break;
	case 66:
		*(RIterNode->GetNode()->CPPreversenode66) = multimapUnion->CPPmultimap66->rbegin();
		break;
	case 67:
		*(RIterNode->GetNode()->CPPreversenode67) = multimapUnion->CPPmultimap67->rbegin();
		break;
	case 68:
		*(RIterNode->GetNode()->CPPreversenode68) = multimapUnion->CPPmultimap68->rbegin();
		break;
	case 69:
		*(RIterNode->GetNode()->CPPreversenode69) = multimapUnion->CPPmultimap69->rbegin();
		break;
	case 70:
		*(RIterNode->GetNode()->CPPreversenode70) = multimapUnion->CPPmultimap70->rbegin();
		break;
	case 71:
		*(RIterNode->GetNode()->CPPreversenode71) = multimapUnion->CPPmultimap71->rbegin();
		break;
	case 72:
		*(RIterNode->GetNode()->CPPreversenode72) = multimapUnion->CPPmultimap72->rbegin();
		break;
	case 73:
		*(RIterNode->GetNode()->CPPreversenode73) = multimapUnion->CPPmultimap73->rbegin();
		break;
	case 74:
		*(RIterNode->GetNode()->CPPreversenode74) = multimapUnion->CPPmultimap74->rbegin();
		break;
	case 75:
		*(RIterNode->GetNode()->CPPreversenode75) = multimapUnion->CPPmultimap75->rbegin();
		break;
	case 76:
		*(RIterNode->GetNode()->CPPreversenode76) = multimapUnion->CPPmultimap76->rbegin();
		break;
	case 77:
		*(RIterNode->GetNode()->CPPreversenode77) = multimapUnion->CPPmultimap77->rbegin();
		break;
	case 78:
		*(RIterNode->GetNode()->CPPreversenode78) = multimapUnion->CPPmultimap78->rbegin();
		break;
	case 79:
		*(RIterNode->GetNode()->CPPreversenode79) = multimapUnion->CPPmultimap79->rbegin();
		break;
	case 80:
		*(RIterNode->GetNode()->CPPreversenode80) = multimapUnion->CPPmultimap80->rbegin();
		break;
	case 81:
		*(RIterNode->GetNode()->CPPreversenode81) = multimapUnion->CPPmultimap81->rbegin();
		break;
	case 82:
		*(RIterNode->GetNode()->CPPreversenode82) = multimapUnion->CPPmultimap82->rbegin();
		break;
	case 83:
		*(RIterNode->GetNode()->CPPreversenode83) = multimapUnion->CPPmultimap83->rbegin();
		break;
	case 84:
		*(RIterNode->GetNode()->CPPreversenode84) = multimapUnion->CPPmultimap84->rbegin();
		break;
	case 85:
		*(RIterNode->GetNode()->CPPreversenode85) = multimapUnion->CPPmultimap85->rbegin();
		break;
	case 86:
		*(RIterNode->GetNode()->CPPreversenode86) = multimapUnion->CPPmultimap86->rbegin();
		break;
	case 87:
		*(RIterNode->GetNode()->CPPreversenode87) = multimapUnion->CPPmultimap87->rbegin();
		break;
	case 88:
		*(RIterNode->GetNode()->CPPreversenode88) = multimapUnion->CPPmultimap88->rbegin();
		break;
	case 89:
		*(RIterNode->GetNode()->CPPreversenode89) = multimapUnion->CPPmultimap89->rbegin();
		break;
	case 90:
		*(RIterNode->GetNode()->CPPreversenode90) = multimapUnion->CPPmultimap90->rbegin();
		break;
	case 91:
		*(RIterNode->GetNode()->CPPreversenode91) = multimapUnion->CPPmultimap91->rbegin();
		break;
	case 92:
		*(RIterNode->GetNode()->CPPreversenode92) = multimapUnion->CPPmultimap92->rbegin();
		break;
	case 93:
		*(RIterNode->GetNode()->CPPreversenode93) = multimapUnion->CPPmultimap93->rbegin();
		break;
	case 94:
		*(RIterNode->GetNode()->CPPreversenode94) = multimapUnion->CPPmultimap94->rbegin();
		break;
	case 95:
		*(RIterNode->GetNode()->CPPreversenode95) = multimapUnion->CPPmultimap95->rbegin();
		break;
	case 96:
		*(RIterNode->GetNode()->CPPreversenode96) = multimapUnion->CPPmultimap96->rbegin();
		break;
	case 97:
		*(RIterNode->GetNode()->CPPreversenode97) = multimapUnion->CPPmultimap97->rbegin();
		break;
	case 98:
		*(RIterNode->GetNode()->CPPreversenode98) = multimapUnion->CPPmultimap98->rbegin();
		break;
	case 99:
		*(RIterNode->GetNode()->CPPreversenode99) = multimapUnion->CPPmultimap99->rbegin();
		break;
	case 100:
		*(RIterNode->GetNode()->CPPreversenode100) = multimapUnion->CPPmultimap100->rbegin();
		break;
	case 101:
		*(RIterNode->GetNode()->CPPreversenode101) = multimapUnion->CPPmultimap101->rbegin();
		break;
	case 102:
		*(RIterNode->GetNode()->CPPreversenode102) = multimapUnion->CPPmultimap102->rbegin();
		break;
	case 103:
		*(RIterNode->GetNode()->CPPreversenode103) = multimapUnion->CPPmultimap103->rbegin();
		break;
	case 104:
		*(RIterNode->GetNode()->CPPreversenode104) = multimapUnion->CPPmultimap104->rbegin();
		break;
	case 105:
		*(RIterNode->GetNode()->CPPreversenode105) = multimapUnion->CPPmultimap105->rbegin();
		break;
	case 106:
		*(RIterNode->GetNode()->CPPreversenode106) = multimapUnion->CPPmultimap106->rbegin();
		break;
	case 107:
		*(RIterNode->GetNode()->CPPreversenode107) = multimapUnion->CPPmultimap107->rbegin();
		break;
	case 108:
		*(RIterNode->GetNode()->CPPreversenode108) = multimapUnion->CPPmultimap108->rbegin();
		break;
	case 109:
		*(RIterNode->GetNode()->CPPreversenode109) = multimapUnion->CPPmultimap109->rbegin();
		break;
	case 110:
		*(RIterNode->GetNode()->CPPreversenode110) = multimapUnion->CPPmultimap110->rbegin();
		break;
	case 111:
		*(RIterNode->GetNode()->CPPreversenode111) = multimapUnion->CPPmultimap111->rbegin();
		break;
	case 112:
		*(RIterNode->GetNode()->CPPreversenode112) = multimapUnion->CPPmultimap112->rbegin();
		break;
	case 113:
		*(RIterNode->GetNode()->CPPreversenode113) = multimapUnion->CPPmultimap113->rbegin();
		break;
	case 114:
		*(RIterNode->GetNode()->CPPreversenode114) = multimapUnion->CPPmultimap114->rbegin();
		break;
	case 115:
		*(RIterNode->GetNode()->CPPreversenode115) = multimapUnion->CPPmultimap115->rbegin();
		break;
	case 116:
		*(RIterNode->GetNode()->CPPreversenode116) = multimapUnion->CPPmultimap116->rbegin();
		break;
	case 117:
		*(RIterNode->GetNode()->CPPreversenode117) = multimapUnion->CPPmultimap117->rbegin();
		break;
	case 118:
		*(RIterNode->GetNode()->CPPreversenode118) = multimapUnion->CPPmultimap118->rbegin();
		break;
	case 119:
		*(RIterNode->GetNode()->CPPreversenode119) = multimapUnion->CPPmultimap119->rbegin();
		break;
	case 120:
		*(RIterNode->GetNode()->CPPreversenode120) = multimapUnion->CPPmultimap120->rbegin();
		break;
	case 121:
		*(RIterNode->GetNode()->CPPreversenode121) = multimapUnion->CPPmultimap121->rbegin();
		break;
	case 122:
		*(RIterNode->GetNode()->CPPreversenode122) = multimapUnion->CPPmultimap122->rbegin();
		break;
	case 123:
		*(RIterNode->GetNode()->CPPreversenode123) = multimapUnion->CPPmultimap123->rbegin();
		break;
	case 124:
		*(RIterNode->GetNode()->CPPreversenode124) = multimapUnion->CPPmultimap124->rbegin();
		break;
	case 125:
		*(RIterNode->GetNode()->CPPreversenode125) = multimapUnion->CPPmultimap125->rbegin();
		break;
	case 126:
		*(RIterNode->GetNode()->CPPreversenode126) = multimapUnion->CPPmultimap126->rbegin();
		break;
	case 127:
		*(RIterNode->GetNode()->CPPreversenode127) = multimapUnion->CPPmultimap127->rbegin();
		break;
	case 128:
		*(RIterNode->GetNode()->CPPreversenode128) = multimapUnion->CPPmultimap128->rbegin();
		break;
	case 129:
		*(RIterNode->GetNode()->CPPreversenode129) = multimapUnion->CPPmultimap129->rbegin();
		break;
	case 130:
		*(RIterNode->GetNode()->CPPreversenode130) = multimapUnion->CPPmultimap130->rbegin();
		break;
	case 131:
		*(RIterNode->GetNode()->CPPreversenode131) = multimapUnion->CPPmultimap131->rbegin();
		break;
	case 132:
		*(RIterNode->GetNode()->CPPreversenode132) = multimapUnion->CPPmultimap132->rbegin();
		break;
	case 133:
		*(RIterNode->GetNode()->CPPreversenode133) = multimapUnion->CPPmultimap133->rbegin();
		break;
	case 134:
		*(RIterNode->GetNode()->CPPreversenode134) = multimapUnion->CPPmultimap134->rbegin();
		break;
	case 135:
		*(RIterNode->GetNode()->CPPreversenode135) = multimapUnion->CPPmultimap135->rbegin();
		break;
	case 136:
		*(RIterNode->GetNode()->CPPreversenode136) = multimapUnion->CPPmultimap136->rbegin();
		break;
	case 137:
		*(RIterNode->GetNode()->CPPreversenode137) = multimapUnion->CPPmultimap137->rbegin();
		break;
	case 138:
		*(RIterNode->GetNode()->CPPreversenode138) = multimapUnion->CPPmultimap138->rbegin();
		break;
	case 139:
		*(RIterNode->GetNode()->CPPreversenode139) = multimapUnion->CPPmultimap139->rbegin();
		break;
	case 140:
		*(RIterNode->GetNode()->CPPreversenode140) = multimapUnion->CPPmultimap140->rbegin();
		break;
	case 141:
		*(RIterNode->GetNode()->CPPreversenode141) = multimapUnion->CPPmultimap141->rbegin();
		break;
	case 142:
		*(RIterNode->GetNode()->CPPreversenode142) = multimapUnion->CPPmultimap142->rbegin();
		break;
	case 143:
		*(RIterNode->GetNode()->CPPreversenode143) = multimapUnion->CPPmultimap143->rbegin();
		break;
	case 144:
		*(RIterNode->GetNode()->CPPreversenode144) = multimapUnion->CPPmultimap144->rbegin();
		break;
	case 145:
		*(RIterNode->GetNode()->CPPreversenode145) = multimapUnion->CPPmultimap145->rbegin();
		break;
	case 146:
		*(RIterNode->GetNode()->CPPreversenode146) = multimapUnion->CPPmultimap146->rbegin();
		break;
	case 147:
		*(RIterNode->GetNode()->CPPreversenode147) = multimapUnion->CPPmultimap147->rbegin();
		break;
	case 148:
		*(RIterNode->GetNode()->CPPreversenode148) = multimapUnion->CPPmultimap148->rbegin();
		break;
	case 149:
		*(RIterNode->GetNode()->CPPreversenode149) = multimapUnion->CPPmultimap149->rbegin();
		break;
	case 150:
		*(RIterNode->GetNode()->CPPreversenode150) = multimapUnion->CPPmultimap150->rbegin();
		break;
	case 151:
		*(RIterNode->GetNode()->CPPreversenode151) = multimapUnion->CPPmultimap151->rbegin();
		break;
	case 152:
		*(RIterNode->GetNode()->CPPreversenode152) = multimapUnion->CPPmultimap152->rbegin();
		break;
	case 153:
		*(RIterNode->GetNode()->CPPreversenode153) = multimapUnion->CPPmultimap153->rbegin();
		break;
	case 154:
		*(RIterNode->GetNode()->CPPreversenode154) = multimapUnion->CPPmultimap154->rbegin();
		break;
	case 155:
		*(RIterNode->GetNode()->CPPreversenode155) = multimapUnion->CPPmultimap155->rbegin();
		break;
	case 156:
		*(RIterNode->GetNode()->CPPreversenode156) = multimapUnion->CPPmultimap156->rbegin();
		break;
	case 157:
		*(RIterNode->GetNode()->CPPreversenode157) = multimapUnion->CPPmultimap157->rbegin();
		break;
	case 158:
		*(RIterNode->GetNode()->CPPreversenode158) = multimapUnion->CPPmultimap158->rbegin();
		break;
	case 159:
		*(RIterNode->GetNode()->CPPreversenode159) = multimapUnion->CPPmultimap159->rbegin();
		break;
	case 160:
		*(RIterNode->GetNode()->CPPreversenode160) = multimapUnion->CPPmultimap160->rbegin();
		break;
	case 161:
		*(RIterNode->GetNode()->CPPreversenode161) = multimapUnion->CPPmultimap161->rbegin();
		break;
	case 162:
		*(RIterNode->GetNode()->CPPreversenode162) = multimapUnion->CPPmultimap162->rbegin();
		break;
	case 163:
		*(RIterNode->GetNode()->CPPreversenode163) = multimapUnion->CPPmultimap163->rbegin();
		break;
	case 164:
		*(RIterNode->GetNode()->CPPreversenode164) = multimapUnion->CPPmultimap164->rbegin();
		break;
	case 165:
		*(RIterNode->GetNode()->CPPreversenode165) = multimapUnion->CPPmultimap165->rbegin();
		break;
	case 166:
		*(RIterNode->GetNode()->CPPreversenode166) = multimapUnion->CPPmultimap166->rbegin();
		break;
	case 167:
		*(RIterNode->GetNode()->CPPreversenode167) = multimapUnion->CPPmultimap167->rbegin();
		break;
	case 168:
		*(RIterNode->GetNode()->CPPreversenode168) = multimapUnion->CPPmultimap168->rbegin();
		break;
	case 169:
		*(RIterNode->GetNode()->CPPreversenode169) = multimapUnion->CPPmultimap169->rbegin();
		break;
	case 170:
		*(RIterNode->GetNode()->CPPreversenode170) = multimapUnion->CPPmultimap170->rbegin();
		break;
	case 171:
		*(RIterNode->GetNode()->CPPreversenode171) = multimapUnion->CPPmultimap171->rbegin();
		break;
	case 172:
		*(RIterNode->GetNode()->CPPreversenode172) = multimapUnion->CPPmultimap172->rbegin();
		break;
	case 173:
		*(RIterNode->GetNode()->CPPreversenode173) = multimapUnion->CPPmultimap173->rbegin();
		break;
	case 174:
		*(RIterNode->GetNode()->CPPreversenode174) = multimapUnion->CPPmultimap174->rbegin();
		break;
	case 175:
		*(RIterNode->GetNode()->CPPreversenode175) = multimapUnion->CPPmultimap175->rbegin();
		break;
	case 176:
		*(RIterNode->GetNode()->CPPreversenode176) = multimapUnion->CPPmultimap176->rbegin();
		break;
	case 177:
		*(RIterNode->GetNode()->CPPreversenode177) = multimapUnion->CPPmultimap177->rbegin();
		break;
	case 178:
		*(RIterNode->GetNode()->CPPreversenode178) = multimapUnion->CPPmultimap178->rbegin();
		break;
	case 179:
		*(RIterNode->GetNode()->CPPreversenode179) = multimapUnion->CPPmultimap179->rbegin();
		break;
	case 180:
		*(RIterNode->GetNode()->CPPreversenode180) = multimapUnion->CPPmultimap180->rbegin();
		break;
	case 181:
		*(RIterNode->GetNode()->CPPreversenode181) = multimapUnion->CPPmultimap181->rbegin();
		break;
	case 182:
		*(RIterNode->GetNode()->CPPreversenode182) = multimapUnion->CPPmultimap182->rbegin();
		break;
	case 183:
		*(RIterNode->GetNode()->CPPreversenode183) = multimapUnion->CPPmultimap183->rbegin();
		break;
	case 184:
		*(RIterNode->GetNode()->CPPreversenode184) = multimapUnion->CPPmultimap184->rbegin();
		break;
	case 185:
		*(RIterNode->GetNode()->CPPreversenode185) = multimapUnion->CPPmultimap185->rbegin();
		break;
	case 186:
		*(RIterNode->GetNode()->CPPreversenode186) = multimapUnion->CPPmultimap186->rbegin();
		break;
	case 187:
		*(RIterNode->GetNode()->CPPreversenode187) = multimapUnion->CPPmultimap187->rbegin();
		break;
	case 188:
		*(RIterNode->GetNode()->CPPreversenode188) = multimapUnion->CPPmultimap188->rbegin();
		break;
	case 189:
		*(RIterNode->GetNode()->CPPreversenode189) = multimapUnion->CPPmultimap189->rbegin();
		break;
	case 190:
		*(RIterNode->GetNode()->CPPreversenode190) = multimapUnion->CPPmultimap190->rbegin();
		break;
	case 191:
		*(RIterNode->GetNode()->CPPreversenode191) = multimapUnion->CPPmultimap191->rbegin();
		break;
	case 192:
		*(RIterNode->GetNode()->CPPreversenode192) = multimapUnion->CPPmultimap192->rbegin();
		break;
	case 193:
		*(RIterNode->GetNode()->CPPreversenode193) = multimapUnion->CPPmultimap193->rbegin();
		break;
	case 194:
		*(RIterNode->GetNode()->CPPreversenode194) = multimapUnion->CPPmultimap194->rbegin();
		break;
	case 195:
		*(RIterNode->GetNode()->CPPreversenode195) = multimapUnion->CPPmultimap195->rbegin();
		break;
	case 196:
		*(RIterNode->GetNode()->CPPreversenode196) = multimapUnion->CPPmultimap196->rbegin();
		break;
	}
	return RIterNode->DeepCopy();
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedReverseNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::rend()
{
	switch (nKeyValueType)
	{
	case 0: default:
		return nullptr;
	case 1:
		*(RIterNode->GetNode()->CPPreversenode1) = multimapUnion->CPPmultimap1->rend();
		break;
	case 2:
		*(RIterNode->GetNode()->CPPreversenode2) = multimapUnion->CPPmultimap2->rend();
		break;
	case 3:
		*(RIterNode->GetNode()->CPPreversenode3) = multimapUnion->CPPmultimap3->rend();
		break;
	case 4:
		*(RIterNode->GetNode()->CPPreversenode4) = multimapUnion->CPPmultimap4->rend();
		break;
	case 5:
		*(RIterNode->GetNode()->CPPreversenode5) = multimapUnion->CPPmultimap5->rend();
		break;
	case 6:
		*(RIterNode->GetNode()->CPPreversenode6) = multimapUnion->CPPmultimap6->rend();
		break;
	case 7:
		*(RIterNode->GetNode()->CPPreversenode7) = multimapUnion->CPPmultimap7->rend();
		break;
	case 8:
		*(RIterNode->GetNode()->CPPreversenode8) = multimapUnion->CPPmultimap8->rend();
		break;
	case 9:
		*(RIterNode->GetNode()->CPPreversenode9) = multimapUnion->CPPmultimap9->rend();
		break;
	case 10:
		*(RIterNode->GetNode()->CPPreversenode10) = multimapUnion->CPPmultimap10->rend();
		break;
	case 11:
		*(RIterNode->GetNode()->CPPreversenode11) = multimapUnion->CPPmultimap11->rend();
		break;
	case 12:
		*(RIterNode->GetNode()->CPPreversenode12) = multimapUnion->CPPmultimap12->rend();
		break;
	case 13:
		*(RIterNode->GetNode()->CPPreversenode13) = multimapUnion->CPPmultimap13->rend();
		break;
	case 14:
		*(RIterNode->GetNode()->CPPreversenode14) = multimapUnion->CPPmultimap14->rend();
		break;
	case 15:
		*(RIterNode->GetNode()->CPPreversenode15) = multimapUnion->CPPmultimap15->rend();
		break;
	case 16:
		*(RIterNode->GetNode()->CPPreversenode16) = multimapUnion->CPPmultimap16->rend();
		break;
	case 17:
		*(RIterNode->GetNode()->CPPreversenode17) = multimapUnion->CPPmultimap17->rend();
		break;
	case 18:
		*(RIterNode->GetNode()->CPPreversenode18) = multimapUnion->CPPmultimap18->rend();
		break;
	case 19:
		*(RIterNode->GetNode()->CPPreversenode19) = multimapUnion->CPPmultimap19->rend();
		break;
	case 20:
		*(RIterNode->GetNode()->CPPreversenode20) = multimapUnion->CPPmultimap20->rend();
		break;
	case 21:
		*(RIterNode->GetNode()->CPPreversenode21) = multimapUnion->CPPmultimap21->rend();
		break;
	case 22:
		*(RIterNode->GetNode()->CPPreversenode22) = multimapUnion->CPPmultimap22->rend();
		break;
	case 23:
		*(RIterNode->GetNode()->CPPreversenode23) = multimapUnion->CPPmultimap23->rend();
		break;
	case 24:
		*(RIterNode->GetNode()->CPPreversenode24) = multimapUnion->CPPmultimap24->rend();
		break;
	case 25:
		*(RIterNode->GetNode()->CPPreversenode25) = multimapUnion->CPPmultimap25->rend();
		break;
	case 26:
		*(RIterNode->GetNode()->CPPreversenode26) = multimapUnion->CPPmultimap26->rend();
		break;
	case 27:
		*(RIterNode->GetNode()->CPPreversenode27) = multimapUnion->CPPmultimap27->rend();
		break;
	case 28:
		*(RIterNode->GetNode()->CPPreversenode28) = multimapUnion->CPPmultimap28->rend();
		break;
	case 29:
		*(RIterNode->GetNode()->CPPreversenode29) = multimapUnion->CPPmultimap29->rend();
		break;
	case 30:
		*(RIterNode->GetNode()->CPPreversenode30) = multimapUnion->CPPmultimap30->rend();
		break;
	case 31:
		*(RIterNode->GetNode()->CPPreversenode31) = multimapUnion->CPPmultimap31->rend();
		break;
	case 32:
		*(RIterNode->GetNode()->CPPreversenode32) = multimapUnion->CPPmultimap32->rend();
		break;
	case 33:
		*(RIterNode->GetNode()->CPPreversenode33) = multimapUnion->CPPmultimap33->rend();
		break;
	case 34:
		*(RIterNode->GetNode()->CPPreversenode34) = multimapUnion->CPPmultimap34->rend();
		break;
	case 35:
		*(RIterNode->GetNode()->CPPreversenode35) = multimapUnion->CPPmultimap35->rend();
		break;
	case 36:
		*(RIterNode->GetNode()->CPPreversenode36) = multimapUnion->CPPmultimap36->rend();
		break;
	case 37:
		*(RIterNode->GetNode()->CPPreversenode37) = multimapUnion->CPPmultimap37->rend();
		break;
	case 38:
		*(RIterNode->GetNode()->CPPreversenode38) = multimapUnion->CPPmultimap38->rend();
		break;
	case 39:
		*(RIterNode->GetNode()->CPPreversenode39) = multimapUnion->CPPmultimap39->rend();
		break;
	case 40:
		*(RIterNode->GetNode()->CPPreversenode40) = multimapUnion->CPPmultimap40->rend();
		break;
	case 41:
		*(RIterNode->GetNode()->CPPreversenode41) = multimapUnion->CPPmultimap41->rend();
		break;
	case 42:
		*(RIterNode->GetNode()->CPPreversenode42) = multimapUnion->CPPmultimap42->rend();
		break;
	case 43:
		*(RIterNode->GetNode()->CPPreversenode43) = multimapUnion->CPPmultimap43->rend();
		break;
	case 44:
		*(RIterNode->GetNode()->CPPreversenode44) = multimapUnion->CPPmultimap44->rend();
		break;
	case 45:
		*(RIterNode->GetNode()->CPPreversenode45) = multimapUnion->CPPmultimap45->rend();
		break;
	case 46:
		*(RIterNode->GetNode()->CPPreversenode46) = multimapUnion->CPPmultimap46->rend();
		break;
	case 47:
		*(RIterNode->GetNode()->CPPreversenode47) = multimapUnion->CPPmultimap47->rend();
		break;
	case 48:
		*(RIterNode->GetNode()->CPPreversenode48) = multimapUnion->CPPmultimap48->rend();
		break;
	case 49:
		*(RIterNode->GetNode()->CPPreversenode49) = multimapUnion->CPPmultimap49->rend();
		break;
	case 50:
		*(RIterNode->GetNode()->CPPreversenode50) = multimapUnion->CPPmultimap50->rend();
		break;
	case 51:
		*(RIterNode->GetNode()->CPPreversenode51) = multimapUnion->CPPmultimap51->rend();
		break;
	case 52:
		*(RIterNode->GetNode()->CPPreversenode52) = multimapUnion->CPPmultimap52->rend();
		break;
	case 53:
		*(RIterNode->GetNode()->CPPreversenode53) = multimapUnion->CPPmultimap53->rend();
		break;
	case 54:
		*(RIterNode->GetNode()->CPPreversenode54) = multimapUnion->CPPmultimap54->rend();
		break;
	case 55:
		*(RIterNode->GetNode()->CPPreversenode55) = multimapUnion->CPPmultimap55->rend();
		break;
	case 56:
		*(RIterNode->GetNode()->CPPreversenode56) = multimapUnion->CPPmultimap56->rend();
		break;
	case 57:
		*(RIterNode->GetNode()->CPPreversenode57) = multimapUnion->CPPmultimap57->rend();
		break;
	case 58:
		*(RIterNode->GetNode()->CPPreversenode58) = multimapUnion->CPPmultimap58->rend();
		break;
	case 59:
		*(RIterNode->GetNode()->CPPreversenode59) = multimapUnion->CPPmultimap59->rend();
		break;
	case 60:
		*(RIterNode->GetNode()->CPPreversenode60) = multimapUnion->CPPmultimap60->rend();
		break;
	case 61:
		*(RIterNode->GetNode()->CPPreversenode61) = multimapUnion->CPPmultimap61->rend();
		break;
	case 62:
		*(RIterNode->GetNode()->CPPreversenode62) = multimapUnion->CPPmultimap62->rend();
		break;
	case 63:
		*(RIterNode->GetNode()->CPPreversenode63) = multimapUnion->CPPmultimap63->rend();
		break;
	case 64:
		*(RIterNode->GetNode()->CPPreversenode64) = multimapUnion->CPPmultimap64->rend();
		break;
	case 65:
		*(RIterNode->GetNode()->CPPreversenode65) = multimapUnion->CPPmultimap65->rend();
		break;
	case 66:
		*(RIterNode->GetNode()->CPPreversenode66) = multimapUnion->CPPmultimap66->rend();
		break;
	case 67:
		*(RIterNode->GetNode()->CPPreversenode67) = multimapUnion->CPPmultimap67->rend();
		break;
	case 68:
		*(RIterNode->GetNode()->CPPreversenode68) = multimapUnion->CPPmultimap68->rend();
		break;
	case 69:
		*(RIterNode->GetNode()->CPPreversenode69) = multimapUnion->CPPmultimap69->rend();
		break;
	case 70:
		*(RIterNode->GetNode()->CPPreversenode70) = multimapUnion->CPPmultimap70->rend();
		break;
	case 71:
		*(RIterNode->GetNode()->CPPreversenode71) = multimapUnion->CPPmultimap71->rend();
		break;
	case 72:
		*(RIterNode->GetNode()->CPPreversenode72) = multimapUnion->CPPmultimap72->rend();
		break;
	case 73:
		*(RIterNode->GetNode()->CPPreversenode73) = multimapUnion->CPPmultimap73->rend();
		break;
	case 74:
		*(RIterNode->GetNode()->CPPreversenode74) = multimapUnion->CPPmultimap74->rend();
		break;
	case 75:
		*(RIterNode->GetNode()->CPPreversenode75) = multimapUnion->CPPmultimap75->rend();
		break;
	case 76:
		*(RIterNode->GetNode()->CPPreversenode76) = multimapUnion->CPPmultimap76->rend();
		break;
	case 77:
		*(RIterNode->GetNode()->CPPreversenode77) = multimapUnion->CPPmultimap77->rend();
		break;
	case 78:
		*(RIterNode->GetNode()->CPPreversenode78) = multimapUnion->CPPmultimap78->rend();
		break;
	case 79:
		*(RIterNode->GetNode()->CPPreversenode79) = multimapUnion->CPPmultimap79->rend();
		break;
	case 80:
		*(RIterNode->GetNode()->CPPreversenode80) = multimapUnion->CPPmultimap80->rend();
		break;
	case 81:
		*(RIterNode->GetNode()->CPPreversenode81) = multimapUnion->CPPmultimap81->rend();
		break;
	case 82:
		*(RIterNode->GetNode()->CPPreversenode82) = multimapUnion->CPPmultimap82->rend();
		break;
	case 83:
		*(RIterNode->GetNode()->CPPreversenode83) = multimapUnion->CPPmultimap83->rend();
		break;
	case 84:
		*(RIterNode->GetNode()->CPPreversenode84) = multimapUnion->CPPmultimap84->rend();
		break;
	case 85:
		*(RIterNode->GetNode()->CPPreversenode85) = multimapUnion->CPPmultimap85->rend();
		break;
	case 86:
		*(RIterNode->GetNode()->CPPreversenode86) = multimapUnion->CPPmultimap86->rend();
		break;
	case 87:
		*(RIterNode->GetNode()->CPPreversenode87) = multimapUnion->CPPmultimap87->rend();
		break;
	case 88:
		*(RIterNode->GetNode()->CPPreversenode88) = multimapUnion->CPPmultimap88->rend();
		break;
	case 89:
		*(RIterNode->GetNode()->CPPreversenode89) = multimapUnion->CPPmultimap89->rend();
		break;
	case 90:
		*(RIterNode->GetNode()->CPPreversenode90) = multimapUnion->CPPmultimap90->rend();
		break;
	case 91:
		*(RIterNode->GetNode()->CPPreversenode91) = multimapUnion->CPPmultimap91->rend();
		break;
	case 92:
		*(RIterNode->GetNode()->CPPreversenode92) = multimapUnion->CPPmultimap92->rend();
		break;
	case 93:
		*(RIterNode->GetNode()->CPPreversenode93) = multimapUnion->CPPmultimap93->rend();
		break;
	case 94:
		*(RIterNode->GetNode()->CPPreversenode94) = multimapUnion->CPPmultimap94->rend();
		break;
	case 95:
		*(RIterNode->GetNode()->CPPreversenode95) = multimapUnion->CPPmultimap95->rend();
		break;
	case 96:
		*(RIterNode->GetNode()->CPPreversenode96) = multimapUnion->CPPmultimap96->rend();
		break;
	case 97:
		*(RIterNode->GetNode()->CPPreversenode97) = multimapUnion->CPPmultimap97->rend();
		break;
	case 98:
		*(RIterNode->GetNode()->CPPreversenode98) = multimapUnion->CPPmultimap98->rend();
		break;
	case 99:
		*(RIterNode->GetNode()->CPPreversenode99) = multimapUnion->CPPmultimap99->rend();
		break;
	case 100:
		*(RIterNode->GetNode()->CPPreversenode100) = multimapUnion->CPPmultimap100->rend();
		break;
	case 101:
		*(RIterNode->GetNode()->CPPreversenode101) = multimapUnion->CPPmultimap101->rend();
		break;
	case 102:
		*(RIterNode->GetNode()->CPPreversenode102) = multimapUnion->CPPmultimap102->rend();
		break;
	case 103:
		*(RIterNode->GetNode()->CPPreversenode103) = multimapUnion->CPPmultimap103->rend();
		break;
	case 104:
		*(RIterNode->GetNode()->CPPreversenode104) = multimapUnion->CPPmultimap104->rend();
		break;
	case 105:
		*(RIterNode->GetNode()->CPPreversenode105) = multimapUnion->CPPmultimap105->rend();
		break;
	case 106:
		*(RIterNode->GetNode()->CPPreversenode106) = multimapUnion->CPPmultimap106->rend();
		break;
	case 107:
		*(RIterNode->GetNode()->CPPreversenode107) = multimapUnion->CPPmultimap107->rend();
		break;
	case 108:
		*(RIterNode->GetNode()->CPPreversenode108) = multimapUnion->CPPmultimap108->rend();
		break;
	case 109:
		*(RIterNode->GetNode()->CPPreversenode109) = multimapUnion->CPPmultimap109->rend();
		break;
	case 110:
		*(RIterNode->GetNode()->CPPreversenode110) = multimapUnion->CPPmultimap110->rend();
		break;
	case 111:
		*(RIterNode->GetNode()->CPPreversenode111) = multimapUnion->CPPmultimap111->rend();
		break;
	case 112:
		*(RIterNode->GetNode()->CPPreversenode112) = multimapUnion->CPPmultimap112->rend();
		break;
	case 113:
		*(RIterNode->GetNode()->CPPreversenode113) = multimapUnion->CPPmultimap113->rend();
		break;
	case 114:
		*(RIterNode->GetNode()->CPPreversenode114) = multimapUnion->CPPmultimap114->rend();
		break;
	case 115:
		*(RIterNode->GetNode()->CPPreversenode115) = multimapUnion->CPPmultimap115->rend();
		break;
	case 116:
		*(RIterNode->GetNode()->CPPreversenode116) = multimapUnion->CPPmultimap116->rend();
		break;
	case 117:
		*(RIterNode->GetNode()->CPPreversenode117) = multimapUnion->CPPmultimap117->rend();
		break;
	case 118:
		*(RIterNode->GetNode()->CPPreversenode118) = multimapUnion->CPPmultimap118->rend();
		break;
	case 119:
		*(RIterNode->GetNode()->CPPreversenode119) = multimapUnion->CPPmultimap119->rend();
		break;
	case 120:
		*(RIterNode->GetNode()->CPPreversenode120) = multimapUnion->CPPmultimap120->rend();
		break;
	case 121:
		*(RIterNode->GetNode()->CPPreversenode121) = multimapUnion->CPPmultimap121->rend();
		break;
	case 122:
		*(RIterNode->GetNode()->CPPreversenode122) = multimapUnion->CPPmultimap122->rend();
		break;
	case 123:
		*(RIterNode->GetNode()->CPPreversenode123) = multimapUnion->CPPmultimap123->rend();
		break;
	case 124:
		*(RIterNode->GetNode()->CPPreversenode124) = multimapUnion->CPPmultimap124->rend();
		break;
	case 125:
		*(RIterNode->GetNode()->CPPreversenode125) = multimapUnion->CPPmultimap125->rend();
		break;
	case 126:
		*(RIterNode->GetNode()->CPPreversenode126) = multimapUnion->CPPmultimap126->rend();
		break;
	case 127:
		*(RIterNode->GetNode()->CPPreversenode127) = multimapUnion->CPPmultimap127->rend();
		break;
	case 128:
		*(RIterNode->GetNode()->CPPreversenode128) = multimapUnion->CPPmultimap128->rend();
		break;
	case 129:
		*(RIterNode->GetNode()->CPPreversenode129) = multimapUnion->CPPmultimap129->rend();
		break;
	case 130:
		*(RIterNode->GetNode()->CPPreversenode130) = multimapUnion->CPPmultimap130->rend();
		break;
	case 131:
		*(RIterNode->GetNode()->CPPreversenode131) = multimapUnion->CPPmultimap131->rend();
		break;
	case 132:
		*(RIterNode->GetNode()->CPPreversenode132) = multimapUnion->CPPmultimap132->rend();
		break;
	case 133:
		*(RIterNode->GetNode()->CPPreversenode133) = multimapUnion->CPPmultimap133->rend();
		break;
	case 134:
		*(RIterNode->GetNode()->CPPreversenode134) = multimapUnion->CPPmultimap134->rend();
		break;
	case 135:
		*(RIterNode->GetNode()->CPPreversenode135) = multimapUnion->CPPmultimap135->rend();
		break;
	case 136:
		*(RIterNode->GetNode()->CPPreversenode136) = multimapUnion->CPPmultimap136->rend();
		break;
	case 137:
		*(RIterNode->GetNode()->CPPreversenode137) = multimapUnion->CPPmultimap137->rend();
		break;
	case 138:
		*(RIterNode->GetNode()->CPPreversenode138) = multimapUnion->CPPmultimap138->rend();
		break;
	case 139:
		*(RIterNode->GetNode()->CPPreversenode139) = multimapUnion->CPPmultimap139->rend();
		break;
	case 140:
		*(RIterNode->GetNode()->CPPreversenode140) = multimapUnion->CPPmultimap140->rend();
		break;
	case 141:
		*(RIterNode->GetNode()->CPPreversenode141) = multimapUnion->CPPmultimap141->rend();
		break;
	case 142:
		*(RIterNode->GetNode()->CPPreversenode142) = multimapUnion->CPPmultimap142->rend();
		break;
	case 143:
		*(RIterNode->GetNode()->CPPreversenode143) = multimapUnion->CPPmultimap143->rend();
		break;
	case 144:
		*(RIterNode->GetNode()->CPPreversenode144) = multimapUnion->CPPmultimap144->rend();
		break;
	case 145:
		*(RIterNode->GetNode()->CPPreversenode145) = multimapUnion->CPPmultimap145->rend();
		break;
	case 146:
		*(RIterNode->GetNode()->CPPreversenode146) = multimapUnion->CPPmultimap146->rend();
		break;
	case 147:
		*(RIterNode->GetNode()->CPPreversenode147) = multimapUnion->CPPmultimap147->rend();
		break;
	case 148:
		*(RIterNode->GetNode()->CPPreversenode148) = multimapUnion->CPPmultimap148->rend();
		break;
	case 149:
		*(RIterNode->GetNode()->CPPreversenode149) = multimapUnion->CPPmultimap149->rend();
		break;
	case 150:
		*(RIterNode->GetNode()->CPPreversenode150) = multimapUnion->CPPmultimap150->rend();
		break;
	case 151:
		*(RIterNode->GetNode()->CPPreversenode151) = multimapUnion->CPPmultimap151->rend();
		break;
	case 152:
		*(RIterNode->GetNode()->CPPreversenode152) = multimapUnion->CPPmultimap152->rend();
		break;
	case 153:
		*(RIterNode->GetNode()->CPPreversenode153) = multimapUnion->CPPmultimap153->rend();
		break;
	case 154:
		*(RIterNode->GetNode()->CPPreversenode154) = multimapUnion->CPPmultimap154->rend();
		break;
	case 155:
		*(RIterNode->GetNode()->CPPreversenode155) = multimapUnion->CPPmultimap155->rend();
		break;
	case 156:
		*(RIterNode->GetNode()->CPPreversenode156) = multimapUnion->CPPmultimap156->rend();
		break;
	case 157:
		*(RIterNode->GetNode()->CPPreversenode157) = multimapUnion->CPPmultimap157->rend();
		break;
	case 158:
		*(RIterNode->GetNode()->CPPreversenode158) = multimapUnion->CPPmultimap158->rend();
		break;
	case 159:
		*(RIterNode->GetNode()->CPPreversenode159) = multimapUnion->CPPmultimap159->rend();
		break;
	case 160:
		*(RIterNode->GetNode()->CPPreversenode160) = multimapUnion->CPPmultimap160->rend();
		break;
	case 161:
		*(RIterNode->GetNode()->CPPreversenode161) = multimapUnion->CPPmultimap161->rend();
		break;
	case 162:
		*(RIterNode->GetNode()->CPPreversenode162) = multimapUnion->CPPmultimap162->rend();
		break;
	case 163:
		*(RIterNode->GetNode()->CPPreversenode163) = multimapUnion->CPPmultimap163->rend();
		break;
	case 164:
		*(RIterNode->GetNode()->CPPreversenode164) = multimapUnion->CPPmultimap164->rend();
		break;
	case 165:
		*(RIterNode->GetNode()->CPPreversenode165) = multimapUnion->CPPmultimap165->rend();
		break;
	case 166:
		*(RIterNode->GetNode()->CPPreversenode166) = multimapUnion->CPPmultimap166->rend();
		break;
	case 167:
		*(RIterNode->GetNode()->CPPreversenode167) = multimapUnion->CPPmultimap167->rend();
		break;
	case 168:
		*(RIterNode->GetNode()->CPPreversenode168) = multimapUnion->CPPmultimap168->rend();
		break;
	case 169:
		*(RIterNode->GetNode()->CPPreversenode169) = multimapUnion->CPPmultimap169->rend();
		break;
	case 170:
		*(RIterNode->GetNode()->CPPreversenode170) = multimapUnion->CPPmultimap170->rend();
		break;
	case 171:
		*(RIterNode->GetNode()->CPPreversenode171) = multimapUnion->CPPmultimap171->rend();
		break;
	case 172:
		*(RIterNode->GetNode()->CPPreversenode172) = multimapUnion->CPPmultimap172->rend();
		break;
	case 173:
		*(RIterNode->GetNode()->CPPreversenode173) = multimapUnion->CPPmultimap173->rend();
		break;
	case 174:
		*(RIterNode->GetNode()->CPPreversenode174) = multimapUnion->CPPmultimap174->rend();
		break;
	case 175:
		*(RIterNode->GetNode()->CPPreversenode175) = multimapUnion->CPPmultimap175->rend();
		break;
	case 176:
		*(RIterNode->GetNode()->CPPreversenode176) = multimapUnion->CPPmultimap176->rend();
		break;
	case 177:
		*(RIterNode->GetNode()->CPPreversenode177) = multimapUnion->CPPmultimap177->rend();
		break;
	case 178:
		*(RIterNode->GetNode()->CPPreversenode178) = multimapUnion->CPPmultimap178->rend();
		break;
	case 179:
		*(RIterNode->GetNode()->CPPreversenode179) = multimapUnion->CPPmultimap179->rend();
		break;
	case 180:
		*(RIterNode->GetNode()->CPPreversenode180) = multimapUnion->CPPmultimap180->rend();
		break;
	case 181:
		*(RIterNode->GetNode()->CPPreversenode181) = multimapUnion->CPPmultimap181->rend();
		break;
	case 182:
		*(RIterNode->GetNode()->CPPreversenode182) = multimapUnion->CPPmultimap182->rend();
		break;
	case 183:
		*(RIterNode->GetNode()->CPPreversenode183) = multimapUnion->CPPmultimap183->rend();
		break;
	case 184:
		*(RIterNode->GetNode()->CPPreversenode184) = multimapUnion->CPPmultimap184->rend();
		break;
	case 185:
		*(RIterNode->GetNode()->CPPreversenode185) = multimapUnion->CPPmultimap185->rend();
		break;
	case 186:
		*(RIterNode->GetNode()->CPPreversenode186) = multimapUnion->CPPmultimap186->rend();
		break;
	case 187:
		*(RIterNode->GetNode()->CPPreversenode187) = multimapUnion->CPPmultimap187->rend();
		break;
	case 188:
		*(RIterNode->GetNode()->CPPreversenode188) = multimapUnion->CPPmultimap188->rend();
		break;
	case 189:
		*(RIterNode->GetNode()->CPPreversenode189) = multimapUnion->CPPmultimap189->rend();
		break;
	case 190:
		*(RIterNode->GetNode()->CPPreversenode190) = multimapUnion->CPPmultimap190->rend();
		break;
	case 191:
		*(RIterNode->GetNode()->CPPreversenode191) = multimapUnion->CPPmultimap191->rend();
		break;
	case 192:
		*(RIterNode->GetNode()->CPPreversenode192) = multimapUnion->CPPmultimap192->rend();
		break;
	case 193:
		*(RIterNode->GetNode()->CPPreversenode193) = multimapUnion->CPPmultimap193->rend();
		break;
	case 194:
		*(RIterNode->GetNode()->CPPreversenode194) = multimapUnion->CPPmultimap194->rend();
		break;
	case 195:
		*(RIterNode->GetNode()->CPPreversenode195) = multimapUnion->CPPmultimap195->rend();
		break;
	case 196:
		*(RIterNode->GetNode()->CPPreversenode196) = multimapUnion->CPPmultimap196->rend();
		break;
	}
	return RIterNode;
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedCReverseNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::crbegin()
{
	CShorpUnOrderedCReverseNode<Key, Value>^ temp = gcnew CShorpUnOrderedCReverseNode<Key, Value>();
	if (gIntKeyClassDictionary)
		temp->SetIntKeyClassDictionary(gIntKeyClassDictionary);
	switch (nKeyValueType)
	{
	case 0: default:
		return nullptr;
	case 1:
		*(temp->GetNode()->CPPcreversenode1) = multimapUnion->CPPmultimap1->crbegin();
		break;
	case 2:
		*(temp->GetNode()->CPPcreversenode2) = multimapUnion->CPPmultimap2->crbegin();
		break;
	case 3:
		*(temp->GetNode()->CPPcreversenode3) = multimapUnion->CPPmultimap3->crbegin();
		break;
	case 4:
		*(temp->GetNode()->CPPcreversenode4) = multimapUnion->CPPmultimap4->crbegin();
		break;
	case 5:
		*(temp->GetNode()->CPPcreversenode5) = multimapUnion->CPPmultimap5->crbegin();
		break;
	case 6:
		*(temp->GetNode()->CPPcreversenode6) = multimapUnion->CPPmultimap6->crbegin();
		break;
	case 7:
		*(temp->GetNode()->CPPcreversenode7) = multimapUnion->CPPmultimap7->crbegin();
		break;
	case 8:
		*(temp->GetNode()->CPPcreversenode8) = multimapUnion->CPPmultimap8->crbegin();
		break;
	case 9:
		*(temp->GetNode()->CPPcreversenode9) = multimapUnion->CPPmultimap9->crbegin();
		break;
	case 10:
		*(temp->GetNode()->CPPcreversenode10) = multimapUnion->CPPmultimap10->crbegin();
		break;
	case 11:
		*(temp->GetNode()->CPPcreversenode11) = multimapUnion->CPPmultimap11->crbegin();
		break;
	case 12:
		*(temp->GetNode()->CPPcreversenode12) = multimapUnion->CPPmultimap12->crbegin();
		break;
	case 13:
		*(temp->GetNode()->CPPcreversenode13) = multimapUnion->CPPmultimap13->crbegin();
		break;
	case 14:
		*(temp->GetNode()->CPPcreversenode14) = multimapUnion->CPPmultimap14->crbegin();
		break;
	case 15:
		*(temp->GetNode()->CPPcreversenode15) = multimapUnion->CPPmultimap15->crbegin();
		break;
	case 16:
		*(temp->GetNode()->CPPcreversenode16) = multimapUnion->CPPmultimap16->crbegin();
		break;
	case 17:
		*(temp->GetNode()->CPPcreversenode17) = multimapUnion->CPPmultimap17->crbegin();
		break;
	case 18:
		*(temp->GetNode()->CPPcreversenode18) = multimapUnion->CPPmultimap18->crbegin();
		break;
	case 19:
		*(temp->GetNode()->CPPcreversenode19) = multimapUnion->CPPmultimap19->crbegin();
		break;
	case 20:
		*(temp->GetNode()->CPPcreversenode20) = multimapUnion->CPPmultimap20->crbegin();
		break;
	case 21:
		*(temp->GetNode()->CPPcreversenode21) = multimapUnion->CPPmultimap21->crbegin();
		break;
	case 22:
		*(temp->GetNode()->CPPcreversenode22) = multimapUnion->CPPmultimap22->crbegin();
		break;
	case 23:
		*(temp->GetNode()->CPPcreversenode23) = multimapUnion->CPPmultimap23->crbegin();
		break;
	case 24:
		*(temp->GetNode()->CPPcreversenode24) = multimapUnion->CPPmultimap24->crbegin();
		break;
	case 25:
		*(temp->GetNode()->CPPcreversenode25) = multimapUnion->CPPmultimap25->crbegin();
		break;
	case 26:
		*(temp->GetNode()->CPPcreversenode26) = multimapUnion->CPPmultimap26->crbegin();
		break;
	case 27:
		*(temp->GetNode()->CPPcreversenode27) = multimapUnion->CPPmultimap27->crbegin();
		break;
	case 28:
		*(temp->GetNode()->CPPcreversenode28) = multimapUnion->CPPmultimap28->crbegin();
		break;
	case 29:
		*(temp->GetNode()->CPPcreversenode29) = multimapUnion->CPPmultimap29->crbegin();
		break;
	case 30:
		*(temp->GetNode()->CPPcreversenode30) = multimapUnion->CPPmultimap30->crbegin();
		break;
	case 31:
		*(temp->GetNode()->CPPcreversenode31) = multimapUnion->CPPmultimap31->crbegin();
		break;
	case 32:
		*(temp->GetNode()->CPPcreversenode32) = multimapUnion->CPPmultimap32->crbegin();
		break;
	case 33:
		*(temp->GetNode()->CPPcreversenode33) = multimapUnion->CPPmultimap33->crbegin();
		break;
	case 34:
		*(temp->GetNode()->CPPcreversenode34) = multimapUnion->CPPmultimap34->crbegin();
		break;
	case 35:
		*(temp->GetNode()->CPPcreversenode35) = multimapUnion->CPPmultimap35->crbegin();
		break;
	case 36:
		*(temp->GetNode()->CPPcreversenode36) = multimapUnion->CPPmultimap36->crbegin();
		break;
	case 37:
		*(temp->GetNode()->CPPcreversenode37) = multimapUnion->CPPmultimap37->crbegin();
		break;
	case 38:
		*(temp->GetNode()->CPPcreversenode38) = multimapUnion->CPPmultimap38->crbegin();
		break;
	case 39:
		*(temp->GetNode()->CPPcreversenode39) = multimapUnion->CPPmultimap39->crbegin();
		break;
	case 40:
		*(temp->GetNode()->CPPcreversenode40) = multimapUnion->CPPmultimap40->crbegin();
		break;
	case 41:
		*(temp->GetNode()->CPPcreversenode41) = multimapUnion->CPPmultimap41->crbegin();
		break;
	case 42:
		*(temp->GetNode()->CPPcreversenode42) = multimapUnion->CPPmultimap42->crbegin();
		break;
	case 43:
		*(temp->GetNode()->CPPcreversenode43) = multimapUnion->CPPmultimap43->crbegin();
		break;
	case 44:
		*(temp->GetNode()->CPPcreversenode44) = multimapUnion->CPPmultimap44->crbegin();
		break;
	case 45:
		*(temp->GetNode()->CPPcreversenode45) = multimapUnion->CPPmultimap45->crbegin();
		break;
	case 46:
		*(temp->GetNode()->CPPcreversenode46) = multimapUnion->CPPmultimap46->crbegin();
		break;
	case 47:
		*(temp->GetNode()->CPPcreversenode47) = multimapUnion->CPPmultimap47->crbegin();
		break;
	case 48:
		*(temp->GetNode()->CPPcreversenode48) = multimapUnion->CPPmultimap48->crbegin();
		break;
	case 49:
		*(temp->GetNode()->CPPcreversenode49) = multimapUnion->CPPmultimap49->crbegin();
		break;
	case 50:
		*(temp->GetNode()->CPPcreversenode50) = multimapUnion->CPPmultimap50->crbegin();
		break;
	case 51:
		*(temp->GetNode()->CPPcreversenode51) = multimapUnion->CPPmultimap51->crbegin();
		break;
	case 52:
		*(temp->GetNode()->CPPcreversenode52) = multimapUnion->CPPmultimap52->crbegin();
		break;
	case 53:
		*(temp->GetNode()->CPPcreversenode53) = multimapUnion->CPPmultimap53->crbegin();
		break;
	case 54:
		*(temp->GetNode()->CPPcreversenode54) = multimapUnion->CPPmultimap54->crbegin();
		break;
	case 55:
		*(temp->GetNode()->CPPcreversenode55) = multimapUnion->CPPmultimap55->crbegin();
		break;
	case 56:
		*(temp->GetNode()->CPPcreversenode56) = multimapUnion->CPPmultimap56->crbegin();
		break;
	case 57:
		*(temp->GetNode()->CPPcreversenode57) = multimapUnion->CPPmultimap57->crbegin();
		break;
	case 58:
		*(temp->GetNode()->CPPcreversenode58) = multimapUnion->CPPmultimap58->crbegin();
		break;
	case 59:
		*(temp->GetNode()->CPPcreversenode59) = multimapUnion->CPPmultimap59->crbegin();
		break;
	case 60:
		*(temp->GetNode()->CPPcreversenode60) = multimapUnion->CPPmultimap60->crbegin();
		break;
	case 61:
		*(temp->GetNode()->CPPcreversenode61) = multimapUnion->CPPmultimap61->crbegin();
		break;
	case 62:
		*(temp->GetNode()->CPPcreversenode62) = multimapUnion->CPPmultimap62->crbegin();
		break;
	case 63:
		*(temp->GetNode()->CPPcreversenode63) = multimapUnion->CPPmultimap63->crbegin();
		break;
	case 64:
		*(temp->GetNode()->CPPcreversenode64) = multimapUnion->CPPmultimap64->crbegin();
		break;
	case 65:
		*(temp->GetNode()->CPPcreversenode65) = multimapUnion->CPPmultimap65->crbegin();
		break;
	case 66:
		*(temp->GetNode()->CPPcreversenode66) = multimapUnion->CPPmultimap66->crbegin();
		break;
	case 67:
		*(temp->GetNode()->CPPcreversenode67) = multimapUnion->CPPmultimap67->crbegin();
		break;
	case 68:
		*(temp->GetNode()->CPPcreversenode68) = multimapUnion->CPPmultimap68->crbegin();
		break;
	case 69:
		*(temp->GetNode()->CPPcreversenode69) = multimapUnion->CPPmultimap69->crbegin();
		break;
	case 70:
		*(temp->GetNode()->CPPcreversenode70) = multimapUnion->CPPmultimap70->crbegin();
		break;
	case 71:
		*(temp->GetNode()->CPPcreversenode71) = multimapUnion->CPPmultimap71->crbegin();
		break;
	case 72:
		*(temp->GetNode()->CPPcreversenode72) = multimapUnion->CPPmultimap72->crbegin();
		break;
	case 73:
		*(temp->GetNode()->CPPcreversenode73) = multimapUnion->CPPmultimap73->crbegin();
		break;
	case 74:
		*(temp->GetNode()->CPPcreversenode74) = multimapUnion->CPPmultimap74->crbegin();
		break;
	case 75:
		*(temp->GetNode()->CPPcreversenode75) = multimapUnion->CPPmultimap75->crbegin();
		break;
	case 76:
		*(temp->GetNode()->CPPcreversenode76) = multimapUnion->CPPmultimap76->crbegin();
		break;
	case 77:
		*(temp->GetNode()->CPPcreversenode77) = multimapUnion->CPPmultimap77->crbegin();
		break;
	case 78:
		*(temp->GetNode()->CPPcreversenode78) = multimapUnion->CPPmultimap78->crbegin();
		break;
	case 79:
		*(temp->GetNode()->CPPcreversenode79) = multimapUnion->CPPmultimap79->crbegin();
		break;
	case 80:
		*(temp->GetNode()->CPPcreversenode80) = multimapUnion->CPPmultimap80->crbegin();
		break;
	case 81:
		*(temp->GetNode()->CPPcreversenode81) = multimapUnion->CPPmultimap81->crbegin();
		break;
	case 82:
		*(temp->GetNode()->CPPcreversenode82) = multimapUnion->CPPmultimap82->crbegin();
		break;
	case 83:
		*(temp->GetNode()->CPPcreversenode83) = multimapUnion->CPPmultimap83->crbegin();
		break;
	case 84:
		*(temp->GetNode()->CPPcreversenode84) = multimapUnion->CPPmultimap84->crbegin();
		break;
	case 85:
		*(temp->GetNode()->CPPcreversenode85) = multimapUnion->CPPmultimap85->crbegin();
		break;
	case 86:
		*(temp->GetNode()->CPPcreversenode86) = multimapUnion->CPPmultimap86->crbegin();
		break;
	case 87:
		*(temp->GetNode()->CPPcreversenode87) = multimapUnion->CPPmultimap87->crbegin();
		break;
	case 88:
		*(temp->GetNode()->CPPcreversenode88) = multimapUnion->CPPmultimap88->crbegin();
		break;
	case 89:
		*(temp->GetNode()->CPPcreversenode89) = multimapUnion->CPPmultimap89->crbegin();
		break;
	case 90:
		*(temp->GetNode()->CPPcreversenode90) = multimapUnion->CPPmultimap90->crbegin();
		break;
	case 91:
		*(temp->GetNode()->CPPcreversenode91) = multimapUnion->CPPmultimap91->crbegin();
		break;
	case 92:
		*(temp->GetNode()->CPPcreversenode92) = multimapUnion->CPPmultimap92->crbegin();
		break;
	case 93:
		*(temp->GetNode()->CPPcreversenode93) = multimapUnion->CPPmultimap93->crbegin();
		break;
	case 94:
		*(temp->GetNode()->CPPcreversenode94) = multimapUnion->CPPmultimap94->crbegin();
		break;
	case 95:
		*(temp->GetNode()->CPPcreversenode95) = multimapUnion->CPPmultimap95->crbegin();
		break;
	case 96:
		*(temp->GetNode()->CPPcreversenode96) = multimapUnion->CPPmultimap96->crbegin();
		break;
	case 97:
		*(temp->GetNode()->CPPcreversenode97) = multimapUnion->CPPmultimap97->crbegin();
		break;
	case 98:
		*(temp->GetNode()->CPPcreversenode98) = multimapUnion->CPPmultimap98->crbegin();
		break;
	case 99:
		*(temp->GetNode()->CPPcreversenode99) = multimapUnion->CPPmultimap99->crbegin();
		break;
	case 100:
		*(temp->GetNode()->CPPcreversenode100) = multimapUnion->CPPmultimap100->crbegin();
		break;
	case 101:
		*(temp->GetNode()->CPPcreversenode101) = multimapUnion->CPPmultimap101->crbegin();
		break;
	case 102:
		*(temp->GetNode()->CPPcreversenode102) = multimapUnion->CPPmultimap102->crbegin();
		break;
	case 103:
		*(temp->GetNode()->CPPcreversenode103) = multimapUnion->CPPmultimap103->crbegin();
		break;
	case 104:
		*(temp->GetNode()->CPPcreversenode104) = multimapUnion->CPPmultimap104->crbegin();
		break;
	case 105:
		*(temp->GetNode()->CPPcreversenode105) = multimapUnion->CPPmultimap105->crbegin();
		break;
	case 106:
		*(temp->GetNode()->CPPcreversenode106) = multimapUnion->CPPmultimap106->crbegin();
		break;
	case 107:
		*(temp->GetNode()->CPPcreversenode107) = multimapUnion->CPPmultimap107->crbegin();
		break;
	case 108:
		*(temp->GetNode()->CPPcreversenode108) = multimapUnion->CPPmultimap108->crbegin();
		break;
	case 109:
		*(temp->GetNode()->CPPcreversenode109) = multimapUnion->CPPmultimap109->crbegin();
		break;
	case 110:
		*(temp->GetNode()->CPPcreversenode110) = multimapUnion->CPPmultimap110->crbegin();
		break;
	case 111:
		*(temp->GetNode()->CPPcreversenode111) = multimapUnion->CPPmultimap111->crbegin();
		break;
	case 112:
		*(temp->GetNode()->CPPcreversenode112) = multimapUnion->CPPmultimap112->crbegin();
		break;
	case 113:
		*(temp->GetNode()->CPPcreversenode113) = multimapUnion->CPPmultimap113->crbegin();
		break;
	case 114:
		*(temp->GetNode()->CPPcreversenode114) = multimapUnion->CPPmultimap114->crbegin();
		break;
	case 115:
		*(temp->GetNode()->CPPcreversenode115) = multimapUnion->CPPmultimap115->crbegin();
		break;
	case 116:
		*(temp->GetNode()->CPPcreversenode116) = multimapUnion->CPPmultimap116->crbegin();
		break;
	case 117:
		*(temp->GetNode()->CPPcreversenode117) = multimapUnion->CPPmultimap117->crbegin();
		break;
	case 118:
		*(temp->GetNode()->CPPcreversenode118) = multimapUnion->CPPmultimap118->crbegin();
		break;
	case 119:
		*(temp->GetNode()->CPPcreversenode119) = multimapUnion->CPPmultimap119->crbegin();
		break;
	case 120:
		*(temp->GetNode()->CPPcreversenode120) = multimapUnion->CPPmultimap120->crbegin();
		break;
	case 121:
		*(temp->GetNode()->CPPcreversenode121) = multimapUnion->CPPmultimap121->crbegin();
		break;
	case 122:
		*(temp->GetNode()->CPPcreversenode122) = multimapUnion->CPPmultimap122->crbegin();
		break;
	case 123:
		*(temp->GetNode()->CPPcreversenode123) = multimapUnion->CPPmultimap123->crbegin();
		break;
	case 124:
		*(temp->GetNode()->CPPcreversenode124) = multimapUnion->CPPmultimap124->crbegin();
		break;
	case 125:
		*(temp->GetNode()->CPPcreversenode125) = multimapUnion->CPPmultimap125->crbegin();
		break;
	case 126:
		*(temp->GetNode()->CPPcreversenode126) = multimapUnion->CPPmultimap126->crbegin();
		break;
	case 127:
		*(temp->GetNode()->CPPcreversenode127) = multimapUnion->CPPmultimap127->crbegin();
		break;
	case 128:
		*(temp->GetNode()->CPPcreversenode128) = multimapUnion->CPPmultimap128->crbegin();
		break;
	case 129:
		*(temp->GetNode()->CPPcreversenode129) = multimapUnion->CPPmultimap129->crbegin();
		break;
	case 130:
		*(temp->GetNode()->CPPcreversenode130) = multimapUnion->CPPmultimap130->crbegin();
		break;
	case 131:
		*(temp->GetNode()->CPPcreversenode131) = multimapUnion->CPPmultimap131->crbegin();
		break;
	case 132:
		*(temp->GetNode()->CPPcreversenode132) = multimapUnion->CPPmultimap132->crbegin();
		break;
	case 133:
		*(temp->GetNode()->CPPcreversenode133) = multimapUnion->CPPmultimap133->crbegin();
		break;
	case 134:
		*(temp->GetNode()->CPPcreversenode134) = multimapUnion->CPPmultimap134->crbegin();
		break;
	case 135:
		*(temp->GetNode()->CPPcreversenode135) = multimapUnion->CPPmultimap135->crbegin();
		break;
	case 136:
		*(temp->GetNode()->CPPcreversenode136) = multimapUnion->CPPmultimap136->crbegin();
		break;
	case 137:
		*(temp->GetNode()->CPPcreversenode137) = multimapUnion->CPPmultimap137->crbegin();
		break;
	case 138:
		*(temp->GetNode()->CPPcreversenode138) = multimapUnion->CPPmultimap138->crbegin();
		break;
	case 139:
		*(temp->GetNode()->CPPcreversenode139) = multimapUnion->CPPmultimap139->crbegin();
		break;
	case 140:
		*(temp->GetNode()->CPPcreversenode140) = multimapUnion->CPPmultimap140->crbegin();
		break;
	case 141:
		*(temp->GetNode()->CPPcreversenode141) = multimapUnion->CPPmultimap141->crbegin();
		break;
	case 142:
		*(temp->GetNode()->CPPcreversenode142) = multimapUnion->CPPmultimap142->crbegin();
		break;
	case 143:
		*(temp->GetNode()->CPPcreversenode143) = multimapUnion->CPPmultimap143->crbegin();
		break;
	case 144:
		*(temp->GetNode()->CPPcreversenode144) = multimapUnion->CPPmultimap144->crbegin();
		break;
	case 145:
		*(temp->GetNode()->CPPcreversenode145) = multimapUnion->CPPmultimap145->crbegin();
		break;
	case 146:
		*(temp->GetNode()->CPPcreversenode146) = multimapUnion->CPPmultimap146->crbegin();
		break;
	case 147:
		*(temp->GetNode()->CPPcreversenode147) = multimapUnion->CPPmultimap147->crbegin();
		break;
	case 148:
		*(temp->GetNode()->CPPcreversenode148) = multimapUnion->CPPmultimap148->crbegin();
		break;
	case 149:
		*(temp->GetNode()->CPPcreversenode149) = multimapUnion->CPPmultimap149->crbegin();
		break;
	case 150:
		*(temp->GetNode()->CPPcreversenode150) = multimapUnion->CPPmultimap150->crbegin();
		break;
	case 151:
		*(temp->GetNode()->CPPcreversenode151) = multimapUnion->CPPmultimap151->crbegin();
		break;
	case 152:
		*(temp->GetNode()->CPPcreversenode152) = multimapUnion->CPPmultimap152->crbegin();
		break;
	case 153:
		*(temp->GetNode()->CPPcreversenode153) = multimapUnion->CPPmultimap153->crbegin();
		break;
	case 154:
		*(temp->GetNode()->CPPcreversenode154) = multimapUnion->CPPmultimap154->crbegin();
		break;
	case 155:
		*(temp->GetNode()->CPPcreversenode155) = multimapUnion->CPPmultimap155->crbegin();
		break;
	case 156:
		*(temp->GetNode()->CPPcreversenode156) = multimapUnion->CPPmultimap156->crbegin();
		break;
	case 157:
		*(temp->GetNode()->CPPcreversenode157) = multimapUnion->CPPmultimap157->crbegin();
		break;
	case 158:
		*(temp->GetNode()->CPPcreversenode158) = multimapUnion->CPPmultimap158->crbegin();
		break;
	case 159:
		*(temp->GetNode()->CPPcreversenode159) = multimapUnion->CPPmultimap159->crbegin();
		break;
	case 160:
		*(temp->GetNode()->CPPcreversenode160) = multimapUnion->CPPmultimap160->crbegin();
		break;
	case 161:
		*(temp->GetNode()->CPPcreversenode161) = multimapUnion->CPPmultimap161->crbegin();
		break;
	case 162:
		*(temp->GetNode()->CPPcreversenode162) = multimapUnion->CPPmultimap162->crbegin();
		break;
	case 163:
		*(temp->GetNode()->CPPcreversenode163) = multimapUnion->CPPmultimap163->crbegin();
		break;
	case 164:
		*(temp->GetNode()->CPPcreversenode164) = multimapUnion->CPPmultimap164->crbegin();
		break;
	case 165:
		*(temp->GetNode()->CPPcreversenode165) = multimapUnion->CPPmultimap165->crbegin();
		break;
	case 166:
		*(temp->GetNode()->CPPcreversenode166) = multimapUnion->CPPmultimap166->crbegin();
		break;
	case 167:
		*(temp->GetNode()->CPPcreversenode167) = multimapUnion->CPPmultimap167->crbegin();
		break;
	case 168:
		*(temp->GetNode()->CPPcreversenode168) = multimapUnion->CPPmultimap168->crbegin();
		break;
	case 169:
		*(temp->GetNode()->CPPcreversenode169) = multimapUnion->CPPmultimap169->crbegin();
		break;
	case 170:
		*(temp->GetNode()->CPPcreversenode170) = multimapUnion->CPPmultimap170->crbegin();
		break;
	case 171:
		*(temp->GetNode()->CPPcreversenode171) = multimapUnion->CPPmultimap171->crbegin();
		break;
	case 172:
		*(temp->GetNode()->CPPcreversenode172) = multimapUnion->CPPmultimap172->crbegin();
		break;
	case 173:
		*(temp->GetNode()->CPPcreversenode173) = multimapUnion->CPPmultimap173->crbegin();
		break;
	case 174:
		*(temp->GetNode()->CPPcreversenode174) = multimapUnion->CPPmultimap174->crbegin();
		break;
	case 175:
		*(temp->GetNode()->CPPcreversenode175) = multimapUnion->CPPmultimap175->crbegin();
		break;
	case 176:
		*(temp->GetNode()->CPPcreversenode176) = multimapUnion->CPPmultimap176->crbegin();
		break;
	case 177:
		*(temp->GetNode()->CPPcreversenode177) = multimapUnion->CPPmultimap177->crbegin();
		break;
	case 178:
		*(temp->GetNode()->CPPcreversenode178) = multimapUnion->CPPmultimap178->crbegin();
		break;
	case 179:
		*(temp->GetNode()->CPPcreversenode179) = multimapUnion->CPPmultimap179->crbegin();
		break;
	case 180:
		*(temp->GetNode()->CPPcreversenode180) = multimapUnion->CPPmultimap180->crbegin();
		break;
	case 181:
		*(temp->GetNode()->CPPcreversenode181) = multimapUnion->CPPmultimap181->crbegin();
		break;
	case 182:
		*(temp->GetNode()->CPPcreversenode182) = multimapUnion->CPPmultimap182->crbegin();
		break;
	case 183:
		*(temp->GetNode()->CPPcreversenode183) = multimapUnion->CPPmultimap183->crbegin();
		break;
	case 184:
		*(temp->GetNode()->CPPcreversenode184) = multimapUnion->CPPmultimap184->crbegin();
		break;
	case 185:
		*(temp->GetNode()->CPPcreversenode185) = multimapUnion->CPPmultimap185->crbegin();
		break;
	case 186:
		*(temp->GetNode()->CPPcreversenode186) = multimapUnion->CPPmultimap186->crbegin();
		break;
	case 187:
		*(temp->GetNode()->CPPcreversenode187) = multimapUnion->CPPmultimap187->crbegin();
		break;
	case 188:
		*(temp->GetNode()->CPPcreversenode188) = multimapUnion->CPPmultimap188->crbegin();
		break;
	case 189:
		*(temp->GetNode()->CPPcreversenode189) = multimapUnion->CPPmultimap189->crbegin();
		break;
	case 190:
		*(temp->GetNode()->CPPcreversenode190) = multimapUnion->CPPmultimap190->crbegin();
		break;
	case 191:
		*(temp->GetNode()->CPPcreversenode191) = multimapUnion->CPPmultimap191->crbegin();
		break;
	case 192:
		*(temp->GetNode()->CPPcreversenode192) = multimapUnion->CPPmultimap192->crbegin();
		break;
	case 193:
		*(temp->GetNode()->CPPcreversenode193) = multimapUnion->CPPmultimap193->crbegin();
		break;
	case 194:
		*(temp->GetNode()->CPPcreversenode194) = multimapUnion->CPPmultimap194->crbegin();
		break;
	case 195:
		*(temp->GetNode()->CPPcreversenode195) = multimapUnion->CPPmultimap195->crbegin();
		break;
	case 196:
		*(temp->GetNode()->CPPcreversenode196) = multimapUnion->CPPmultimap196->crbegin();
		break;
	}
	return temp;
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedCReverseNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::crend()
{
	CShorpUnOrderedCReverseNode<Key, Value>^ temp = gcnew CShorpUnOrderedCReverseNode<Key, Value>();
	if (gIntKeyClassDictionary)
		temp->SetIntKeyClassDictionary(gIntKeyClassDictionary);
	switch (nKeyValueType)
	{
	case 0: default:
		return nullptr;
	case 1:
		*(temp->GetNode()->CPPcreversenode1) = multimapUnion->CPPmultimap1->crend();
		break;
	case 2:
		*(temp->GetNode()->CPPcreversenode2) = multimapUnion->CPPmultimap2->crend();
		break;
	case 3:
		*(temp->GetNode()->CPPcreversenode3) = multimapUnion->CPPmultimap3->crend();
		break;
	case 4:
		*(temp->GetNode()->CPPcreversenode4) = multimapUnion->CPPmultimap4->crend();
		break;
	case 5:
		*(temp->GetNode()->CPPcreversenode5) = multimapUnion->CPPmultimap5->crend();
		break;
	case 6:
		*(temp->GetNode()->CPPcreversenode6) = multimapUnion->CPPmultimap6->crend();
		break;
	case 7:
		*(temp->GetNode()->CPPcreversenode7) = multimapUnion->CPPmultimap7->crend();
		break;
	case 8:
		*(temp->GetNode()->CPPcreversenode8) = multimapUnion->CPPmultimap8->crend();
		break;
	case 9:
		*(temp->GetNode()->CPPcreversenode9) = multimapUnion->CPPmultimap9->crend();
		break;
	case 10:
		*(temp->GetNode()->CPPcreversenode10) = multimapUnion->CPPmultimap10->crend();
		break;
	case 11:
		*(temp->GetNode()->CPPcreversenode11) = multimapUnion->CPPmultimap11->crend();
		break;
	case 12:
		*(temp->GetNode()->CPPcreversenode12) = multimapUnion->CPPmultimap12->crend();
		break;
	case 13:
		*(temp->GetNode()->CPPcreversenode13) = multimapUnion->CPPmultimap13->crend();
		break;
	case 14:
		*(temp->GetNode()->CPPcreversenode14) = multimapUnion->CPPmultimap14->crend();
		break;
	case 15:
		*(temp->GetNode()->CPPcreversenode15) = multimapUnion->CPPmultimap15->crend();
		break;
	case 16:
		*(temp->GetNode()->CPPcreversenode16) = multimapUnion->CPPmultimap16->crend();
		break;
	case 17:
		*(temp->GetNode()->CPPcreversenode17) = multimapUnion->CPPmultimap17->crend();
		break;
	case 18:
		*(temp->GetNode()->CPPcreversenode18) = multimapUnion->CPPmultimap18->crend();
		break;
	case 19:
		*(temp->GetNode()->CPPcreversenode19) = multimapUnion->CPPmultimap19->crend();
		break;
	case 20:
		*(temp->GetNode()->CPPcreversenode20) = multimapUnion->CPPmultimap20->crend();
		break;
	case 21:
		*(temp->GetNode()->CPPcreversenode21) = multimapUnion->CPPmultimap21->crend();
		break;
	case 22:
		*(temp->GetNode()->CPPcreversenode22) = multimapUnion->CPPmultimap22->crend();
		break;
	case 23:
		*(temp->GetNode()->CPPcreversenode23) = multimapUnion->CPPmultimap23->crend();
		break;
	case 24:
		*(temp->GetNode()->CPPcreversenode24) = multimapUnion->CPPmultimap24->crend();
		break;
	case 25:
		*(temp->GetNode()->CPPcreversenode25) = multimapUnion->CPPmultimap25->crend();
		break;
	case 26:
		*(temp->GetNode()->CPPcreversenode26) = multimapUnion->CPPmultimap26->crend();
		break;
	case 27:
		*(temp->GetNode()->CPPcreversenode27) = multimapUnion->CPPmultimap27->crend();
		break;
	case 28:
		*(temp->GetNode()->CPPcreversenode28) = multimapUnion->CPPmultimap28->crend();
		break;
	case 29:
		*(temp->GetNode()->CPPcreversenode29) = multimapUnion->CPPmultimap29->crend();
		break;
	case 30:
		*(temp->GetNode()->CPPcreversenode30) = multimapUnion->CPPmultimap30->crend();
		break;
	case 31:
		*(temp->GetNode()->CPPcreversenode31) = multimapUnion->CPPmultimap31->crend();
		break;
	case 32:
		*(temp->GetNode()->CPPcreversenode32) = multimapUnion->CPPmultimap32->crend();
		break;
	case 33:
		*(temp->GetNode()->CPPcreversenode33) = multimapUnion->CPPmultimap33->crend();
		break;
	case 34:
		*(temp->GetNode()->CPPcreversenode34) = multimapUnion->CPPmultimap34->crend();
		break;
	case 35:
		*(temp->GetNode()->CPPcreversenode35) = multimapUnion->CPPmultimap35->crend();
		break;
	case 36:
		*(temp->GetNode()->CPPcreversenode36) = multimapUnion->CPPmultimap36->crend();
		break;
	case 37:
		*(temp->GetNode()->CPPcreversenode37) = multimapUnion->CPPmultimap37->crend();
		break;
	case 38:
		*(temp->GetNode()->CPPcreversenode38) = multimapUnion->CPPmultimap38->crend();
		break;
	case 39:
		*(temp->GetNode()->CPPcreversenode39) = multimapUnion->CPPmultimap39->crend();
		break;
	case 40:
		*(temp->GetNode()->CPPcreversenode40) = multimapUnion->CPPmultimap40->crend();
		break;
	case 41:
		*(temp->GetNode()->CPPcreversenode41) = multimapUnion->CPPmultimap41->crend();
		break;
	case 42:
		*(temp->GetNode()->CPPcreversenode42) = multimapUnion->CPPmultimap42->crend();
		break;
	case 43:
		*(temp->GetNode()->CPPcreversenode43) = multimapUnion->CPPmultimap43->crend();
		break;
	case 44:
		*(temp->GetNode()->CPPcreversenode44) = multimapUnion->CPPmultimap44->crend();
		break;
	case 45:
		*(temp->GetNode()->CPPcreversenode45) = multimapUnion->CPPmultimap45->crend();
		break;
	case 46:
		*(temp->GetNode()->CPPcreversenode46) = multimapUnion->CPPmultimap46->crend();
		break;
	case 47:
		*(temp->GetNode()->CPPcreversenode47) = multimapUnion->CPPmultimap47->crend();
		break;
	case 48:
		*(temp->GetNode()->CPPcreversenode48) = multimapUnion->CPPmultimap48->crend();
		break;
	case 49:
		*(temp->GetNode()->CPPcreversenode49) = multimapUnion->CPPmultimap49->crend();
		break;
	case 50:
		*(temp->GetNode()->CPPcreversenode50) = multimapUnion->CPPmultimap50->crend();
		break;
	case 51:
		*(temp->GetNode()->CPPcreversenode51) = multimapUnion->CPPmultimap51->crend();
		break;
	case 52:
		*(temp->GetNode()->CPPcreversenode52) = multimapUnion->CPPmultimap52->crend();
		break;
	case 53:
		*(temp->GetNode()->CPPcreversenode53) = multimapUnion->CPPmultimap53->crend();
		break;
	case 54:
		*(temp->GetNode()->CPPcreversenode54) = multimapUnion->CPPmultimap54->crend();
		break;
	case 55:
		*(temp->GetNode()->CPPcreversenode55) = multimapUnion->CPPmultimap55->crend();
		break;
	case 56:
		*(temp->GetNode()->CPPcreversenode56) = multimapUnion->CPPmultimap56->crend();
		break;
	case 57:
		*(temp->GetNode()->CPPcreversenode57) = multimapUnion->CPPmultimap57->crend();
		break;
	case 58:
		*(temp->GetNode()->CPPcreversenode58) = multimapUnion->CPPmultimap58->crend();
		break;
	case 59:
		*(temp->GetNode()->CPPcreversenode59) = multimapUnion->CPPmultimap59->crend();
		break;
	case 60:
		*(temp->GetNode()->CPPcreversenode60) = multimapUnion->CPPmultimap60->crend();
		break;
	case 61:
		*(temp->GetNode()->CPPcreversenode61) = multimapUnion->CPPmultimap61->crend();
		break;
	case 62:
		*(temp->GetNode()->CPPcreversenode62) = multimapUnion->CPPmultimap62->crend();
		break;
	case 63:
		*(temp->GetNode()->CPPcreversenode63) = multimapUnion->CPPmultimap63->crend();
		break;
	case 64:
		*(temp->GetNode()->CPPcreversenode64) = multimapUnion->CPPmultimap64->crend();
		break;
	case 65:
		*(temp->GetNode()->CPPcreversenode65) = multimapUnion->CPPmultimap65->crend();
		break;
	case 66:
		*(temp->GetNode()->CPPcreversenode66) = multimapUnion->CPPmultimap66->crend();
		break;
	case 67:
		*(temp->GetNode()->CPPcreversenode67) = multimapUnion->CPPmultimap67->crend();
		break;
	case 68:
		*(temp->GetNode()->CPPcreversenode68) = multimapUnion->CPPmultimap68->crend();
		break;
	case 69:
		*(temp->GetNode()->CPPcreversenode69) = multimapUnion->CPPmultimap69->crend();
		break;
	case 70:
		*(temp->GetNode()->CPPcreversenode70) = multimapUnion->CPPmultimap70->crend();
		break;
	case 71:
		*(temp->GetNode()->CPPcreversenode71) = multimapUnion->CPPmultimap71->crend();
		break;
	case 72:
		*(temp->GetNode()->CPPcreversenode72) = multimapUnion->CPPmultimap72->crend();
		break;
	case 73:
		*(temp->GetNode()->CPPcreversenode73) = multimapUnion->CPPmultimap73->crend();
		break;
	case 74:
		*(temp->GetNode()->CPPcreversenode74) = multimapUnion->CPPmultimap74->crend();
		break;
	case 75:
		*(temp->GetNode()->CPPcreversenode75) = multimapUnion->CPPmultimap75->crend();
		break;
	case 76:
		*(temp->GetNode()->CPPcreversenode76) = multimapUnion->CPPmultimap76->crend();
		break;
	case 77:
		*(temp->GetNode()->CPPcreversenode77) = multimapUnion->CPPmultimap77->crend();
		break;
	case 78:
		*(temp->GetNode()->CPPcreversenode78) = multimapUnion->CPPmultimap78->crend();
		break;
	case 79:
		*(temp->GetNode()->CPPcreversenode79) = multimapUnion->CPPmultimap79->crend();
		break;
	case 80:
		*(temp->GetNode()->CPPcreversenode80) = multimapUnion->CPPmultimap80->crend();
		break;
	case 81:
		*(temp->GetNode()->CPPcreversenode81) = multimapUnion->CPPmultimap81->crend();
		break;
	case 82:
		*(temp->GetNode()->CPPcreversenode82) = multimapUnion->CPPmultimap82->crend();
		break;
	case 83:
		*(temp->GetNode()->CPPcreversenode83) = multimapUnion->CPPmultimap83->crend();
		break;
	case 84:
		*(temp->GetNode()->CPPcreversenode84) = multimapUnion->CPPmultimap84->crend();
		break;
	case 85:
		*(temp->GetNode()->CPPcreversenode85) = multimapUnion->CPPmultimap85->crend();
		break;
	case 86:
		*(temp->GetNode()->CPPcreversenode86) = multimapUnion->CPPmultimap86->crend();
		break;
	case 87:
		*(temp->GetNode()->CPPcreversenode87) = multimapUnion->CPPmultimap87->crend();
		break;
	case 88:
		*(temp->GetNode()->CPPcreversenode88) = multimapUnion->CPPmultimap88->crend();
		break;
	case 89:
		*(temp->GetNode()->CPPcreversenode89) = multimapUnion->CPPmultimap89->crend();
		break;
	case 90:
		*(temp->GetNode()->CPPcreversenode90) = multimapUnion->CPPmultimap90->crend();
		break;
	case 91:
		*(temp->GetNode()->CPPcreversenode91) = multimapUnion->CPPmultimap91->crend();
		break;
	case 92:
		*(temp->GetNode()->CPPcreversenode92) = multimapUnion->CPPmultimap92->crend();
		break;
	case 93:
		*(temp->GetNode()->CPPcreversenode93) = multimapUnion->CPPmultimap93->crend();
		break;
	case 94:
		*(temp->GetNode()->CPPcreversenode94) = multimapUnion->CPPmultimap94->crend();
		break;
	case 95:
		*(temp->GetNode()->CPPcreversenode95) = multimapUnion->CPPmultimap95->crend();
		break;
	case 96:
		*(temp->GetNode()->CPPcreversenode96) = multimapUnion->CPPmultimap96->crend();
		break;
	case 97:
		*(temp->GetNode()->CPPcreversenode97) = multimapUnion->CPPmultimap97->crend();
		break;
	case 98:
		*(temp->GetNode()->CPPcreversenode98) = multimapUnion->CPPmultimap98->crend();
		break;
	case 99:
		*(temp->GetNode()->CPPcreversenode99) = multimapUnion->CPPmultimap99->crend();
		break;
	case 100:
		*(temp->GetNode()->CPPcreversenode100) = multimapUnion->CPPmultimap100->crend();
		break;
	case 101:
		*(temp->GetNode()->CPPcreversenode101) = multimapUnion->CPPmultimap101->crend();
		break;
	case 102:
		*(temp->GetNode()->CPPcreversenode102) = multimapUnion->CPPmultimap102->crend();
		break;
	case 103:
		*(temp->GetNode()->CPPcreversenode103) = multimapUnion->CPPmultimap103->crend();
		break;
	case 104:
		*(temp->GetNode()->CPPcreversenode104) = multimapUnion->CPPmultimap104->crend();
		break;
	case 105:
		*(temp->GetNode()->CPPcreversenode105) = multimapUnion->CPPmultimap105->crend();
		break;
	case 106:
		*(temp->GetNode()->CPPcreversenode106) = multimapUnion->CPPmultimap106->crend();
		break;
	case 107:
		*(temp->GetNode()->CPPcreversenode107) = multimapUnion->CPPmultimap107->crend();
		break;
	case 108:
		*(temp->GetNode()->CPPcreversenode108) = multimapUnion->CPPmultimap108->crend();
		break;
	case 109:
		*(temp->GetNode()->CPPcreversenode109) = multimapUnion->CPPmultimap109->crend();
		break;
	case 110:
		*(temp->GetNode()->CPPcreversenode110) = multimapUnion->CPPmultimap110->crend();
		break;
	case 111:
		*(temp->GetNode()->CPPcreversenode111) = multimapUnion->CPPmultimap111->crend();
		break;
	case 112:
		*(temp->GetNode()->CPPcreversenode112) = multimapUnion->CPPmultimap112->crend();
		break;
	case 113:
		*(temp->GetNode()->CPPcreversenode113) = multimapUnion->CPPmultimap113->crend();
		break;
	case 114:
		*(temp->GetNode()->CPPcreversenode114) = multimapUnion->CPPmultimap114->crend();
		break;
	case 115:
		*(temp->GetNode()->CPPcreversenode115) = multimapUnion->CPPmultimap115->crend();
		break;
	case 116:
		*(temp->GetNode()->CPPcreversenode116) = multimapUnion->CPPmultimap116->crend();
		break;
	case 117:
		*(temp->GetNode()->CPPcreversenode117) = multimapUnion->CPPmultimap117->crend();
		break;
	case 118:
		*(temp->GetNode()->CPPcreversenode118) = multimapUnion->CPPmultimap118->crend();
		break;
	case 119:
		*(temp->GetNode()->CPPcreversenode119) = multimapUnion->CPPmultimap119->crend();
		break;
	case 120:
		*(temp->GetNode()->CPPcreversenode120) = multimapUnion->CPPmultimap120->crend();
		break;
	case 121:
		*(temp->GetNode()->CPPcreversenode121) = multimapUnion->CPPmultimap121->crend();
		break;
	case 122:
		*(temp->GetNode()->CPPcreversenode122) = multimapUnion->CPPmultimap122->crend();
		break;
	case 123:
		*(temp->GetNode()->CPPcreversenode123) = multimapUnion->CPPmultimap123->crend();
		break;
	case 124:
		*(temp->GetNode()->CPPcreversenode124) = multimapUnion->CPPmultimap124->crend();
		break;
	case 125:
		*(temp->GetNode()->CPPcreversenode125) = multimapUnion->CPPmultimap125->crend();
		break;
	case 126:
		*(temp->GetNode()->CPPcreversenode126) = multimapUnion->CPPmultimap126->crend();
		break;
	case 127:
		*(temp->GetNode()->CPPcreversenode127) = multimapUnion->CPPmultimap127->crend();
		break;
	case 128:
		*(temp->GetNode()->CPPcreversenode128) = multimapUnion->CPPmultimap128->crend();
		break;
	case 129:
		*(temp->GetNode()->CPPcreversenode129) = multimapUnion->CPPmultimap129->crend();
		break;
	case 130:
		*(temp->GetNode()->CPPcreversenode130) = multimapUnion->CPPmultimap130->crend();
		break;
	case 131:
		*(temp->GetNode()->CPPcreversenode131) = multimapUnion->CPPmultimap131->crend();
		break;
	case 132:
		*(temp->GetNode()->CPPcreversenode132) = multimapUnion->CPPmultimap132->crend();
		break;
	case 133:
		*(temp->GetNode()->CPPcreversenode133) = multimapUnion->CPPmultimap133->crend();
		break;
	case 134:
		*(temp->GetNode()->CPPcreversenode134) = multimapUnion->CPPmultimap134->crend();
		break;
	case 135:
		*(temp->GetNode()->CPPcreversenode135) = multimapUnion->CPPmultimap135->crend();
		break;
	case 136:
		*(temp->GetNode()->CPPcreversenode136) = multimapUnion->CPPmultimap136->crend();
		break;
	case 137:
		*(temp->GetNode()->CPPcreversenode137) = multimapUnion->CPPmultimap137->crend();
		break;
	case 138:
		*(temp->GetNode()->CPPcreversenode138) = multimapUnion->CPPmultimap138->crend();
		break;
	case 139:
		*(temp->GetNode()->CPPcreversenode139) = multimapUnion->CPPmultimap139->crend();
		break;
	case 140:
		*(temp->GetNode()->CPPcreversenode140) = multimapUnion->CPPmultimap140->crend();
		break;
	case 141:
		*(temp->GetNode()->CPPcreversenode141) = multimapUnion->CPPmultimap141->crend();
		break;
	case 142:
		*(temp->GetNode()->CPPcreversenode142) = multimapUnion->CPPmultimap142->crend();
		break;
	case 143:
		*(temp->GetNode()->CPPcreversenode143) = multimapUnion->CPPmultimap143->crend();
		break;
	case 144:
		*(temp->GetNode()->CPPcreversenode144) = multimapUnion->CPPmultimap144->crend();
		break;
	case 145:
		*(temp->GetNode()->CPPcreversenode145) = multimapUnion->CPPmultimap145->crend();
		break;
	case 146:
		*(temp->GetNode()->CPPcreversenode146) = multimapUnion->CPPmultimap146->crend();
		break;
	case 147:
		*(temp->GetNode()->CPPcreversenode147) = multimapUnion->CPPmultimap147->crend();
		break;
	case 148:
		*(temp->GetNode()->CPPcreversenode148) = multimapUnion->CPPmultimap148->crend();
		break;
	case 149:
		*(temp->GetNode()->CPPcreversenode149) = multimapUnion->CPPmultimap149->crend();
		break;
	case 150:
		*(temp->GetNode()->CPPcreversenode150) = multimapUnion->CPPmultimap150->crend();
		break;
	case 151:
		*(temp->GetNode()->CPPcreversenode151) = multimapUnion->CPPmultimap151->crend();
		break;
	case 152:
		*(temp->GetNode()->CPPcreversenode152) = multimapUnion->CPPmultimap152->crend();
		break;
	case 153:
		*(temp->GetNode()->CPPcreversenode153) = multimapUnion->CPPmultimap153->crend();
		break;
	case 154:
		*(temp->GetNode()->CPPcreversenode154) = multimapUnion->CPPmultimap154->crend();
		break;
	case 155:
		*(temp->GetNode()->CPPcreversenode155) = multimapUnion->CPPmultimap155->crend();
		break;
	case 156:
		*(temp->GetNode()->CPPcreversenode156) = multimapUnion->CPPmultimap156->crend();
		break;
	case 157:
		*(temp->GetNode()->CPPcreversenode157) = multimapUnion->CPPmultimap157->crend();
		break;
	case 158:
		*(temp->GetNode()->CPPcreversenode158) = multimapUnion->CPPmultimap158->crend();
		break;
	case 159:
		*(temp->GetNode()->CPPcreversenode159) = multimapUnion->CPPmultimap159->crend();
		break;
	case 160:
		*(temp->GetNode()->CPPcreversenode160) = multimapUnion->CPPmultimap160->crend();
		break;
	case 161:
		*(temp->GetNode()->CPPcreversenode161) = multimapUnion->CPPmultimap161->crend();
		break;
	case 162:
		*(temp->GetNode()->CPPcreversenode162) = multimapUnion->CPPmultimap162->crend();
		break;
	case 163:
		*(temp->GetNode()->CPPcreversenode163) = multimapUnion->CPPmultimap163->crend();
		break;
	case 164:
		*(temp->GetNode()->CPPcreversenode164) = multimapUnion->CPPmultimap164->crend();
		break;
	case 165:
		*(temp->GetNode()->CPPcreversenode165) = multimapUnion->CPPmultimap165->crend();
		break;
	case 166:
		*(temp->GetNode()->CPPcreversenode166) = multimapUnion->CPPmultimap166->crend();
		break;
	case 167:
		*(temp->GetNode()->CPPcreversenode167) = multimapUnion->CPPmultimap167->crend();
		break;
	case 168:
		*(temp->GetNode()->CPPcreversenode168) = multimapUnion->CPPmultimap168->crend();
		break;
	case 169:
		*(temp->GetNode()->CPPcreversenode169) = multimapUnion->CPPmultimap169->crend();
		break;
	case 170:
		*(temp->GetNode()->CPPcreversenode170) = multimapUnion->CPPmultimap170->crend();
		break;
	case 171:
		*(temp->GetNode()->CPPcreversenode171) = multimapUnion->CPPmultimap171->crend();
		break;
	case 172:
		*(temp->GetNode()->CPPcreversenode172) = multimapUnion->CPPmultimap172->crend();
		break;
	case 173:
		*(temp->GetNode()->CPPcreversenode173) = multimapUnion->CPPmultimap173->crend();
		break;
	case 174:
		*(temp->GetNode()->CPPcreversenode174) = multimapUnion->CPPmultimap174->crend();
		break;
	case 175:
		*(temp->GetNode()->CPPcreversenode175) = multimapUnion->CPPmultimap175->crend();
		break;
	case 176:
		*(temp->GetNode()->CPPcreversenode176) = multimapUnion->CPPmultimap176->crend();
		break;
	case 177:
		*(temp->GetNode()->CPPcreversenode177) = multimapUnion->CPPmultimap177->crend();
		break;
	case 178:
		*(temp->GetNode()->CPPcreversenode178) = multimapUnion->CPPmultimap178->crend();
		break;
	case 179:
		*(temp->GetNode()->CPPcreversenode179) = multimapUnion->CPPmultimap179->crend();
		break;
	case 180:
		*(temp->GetNode()->CPPcreversenode180) = multimapUnion->CPPmultimap180->crend();
		break;
	case 181:
		*(temp->GetNode()->CPPcreversenode181) = multimapUnion->CPPmultimap181->crend();
		break;
	case 182:
		*(temp->GetNode()->CPPcreversenode182) = multimapUnion->CPPmultimap182->crend();
		break;
	case 183:
		*(temp->GetNode()->CPPcreversenode183) = multimapUnion->CPPmultimap183->crend();
		break;
	case 184:
		*(temp->GetNode()->CPPcreversenode184) = multimapUnion->CPPmultimap184->crend();
		break;
	case 185:
		*(temp->GetNode()->CPPcreversenode185) = multimapUnion->CPPmultimap185->crend();
		break;
	case 186:
		*(temp->GetNode()->CPPcreversenode186) = multimapUnion->CPPmultimap186->crend();
		break;
	case 187:
		*(temp->GetNode()->CPPcreversenode187) = multimapUnion->CPPmultimap187->crend();
		break;
	case 188:
		*(temp->GetNode()->CPPcreversenode188) = multimapUnion->CPPmultimap188->crend();
		break;
	case 189:
		*(temp->GetNode()->CPPcreversenode189) = multimapUnion->CPPmultimap189->crend();
		break;
	case 190:
		*(temp->GetNode()->CPPcreversenode190) = multimapUnion->CPPmultimap190->crend();
		break;
	case 191:
		*(temp->GetNode()->CPPcreversenode191) = multimapUnion->CPPmultimap191->crend();
		break;
	case 192:
		*(temp->GetNode()->CPPcreversenode192) = multimapUnion->CPPmultimap192->crend();
		break;
	case 193:
		*(temp->GetNode()->CPPcreversenode193) = multimapUnion->CPPmultimap193->crend();
		break;
	case 194:
		*(temp->GetNode()->CPPcreversenode194) = multimapUnion->CPPmultimap194->crend();
		break;
	case 195:
		*(temp->GetNode()->CPPcreversenode195) = multimapUnion->CPPmultimap195->crend();
		break;
	case 196:
		*(temp->GetNode()->CPPcreversenode196) = multimapUnion->CPPmultimap196->crend();
		break;
	}
	return temp;
}

generic<typename Key, typename Value>
void UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>::SetValue(Value value)
{
	if (Object::ReferenceEquals(this, nullptr)) return;
	if (nKeyValueType == 0 || nKeyValueType > 196)return;
	if (isInitialized == 0) return;
	if (Object::ReferenceEquals(value, nullptr)) return;
	Type^ valueType = Value::typeid;

	unsigned char ValueUchar = 0;
	char ValueChar = 0;
	short ValueShort = 0;
	unsigned short ValueUshort = 0;
	int ValueInt = 0;
	unsigned int ValueUint = 0;
	long long ValueLonglong = 0;
	unsigned long long ValueUlonglong = 0;
	float ValueFloat = 0.0f;
	double ValueDouble = 0;
	wchar_t ValueWchar = 0;
	bool ValueBool = false;
	std::wstring ValueWstring = L"";
	__int64 Value__Int = 0;

	if (valueType->Equals(System::Byte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUchar = static_cast<unsigned char>(safe_cast<System::Byte>(managedObject));
	}
	else if (valueType->Equals(System::SByte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueChar = static_cast<char>(safe_cast<System::SByte>(managedObject));
	}
	else if (valueType->Equals(System::Int16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueShort = static_cast<short>(safe_cast<System::Int16>(managedObject));
	}
	else if (valueType->Equals(System::UInt16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUshort = static_cast<unsigned short>(safe_cast<System::UInt16>(managedObject));
	}
	else if (valueType->Equals(System::Int32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueInt = static_cast<int>(safe_cast<System::Int32>(managedObject));
	}
	else if (valueType->Equals(System::UInt32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUint = static_cast<unsigned int>(safe_cast<System::UInt32>(managedObject));
	}
	else if (valueType->Equals(System::Int64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueLonglong = static_cast<long long>(safe_cast<System::Int64>(managedObject));
	}
	else if (valueType->Equals(System::UInt64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUlonglong = static_cast<unsigned long long>(safe_cast<System::UInt64>(managedObject));
	}
	else if (valueType->Equals(System::Single::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueFloat = static_cast<float>(safe_cast<System::Single>(managedObject));
	}
	else if (valueType->Equals(System::Double::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueDouble = static_cast<double>(safe_cast<System::Double>(managedObject));
	}
	else if (valueType->Equals(System::Char::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueWchar = static_cast<wchar_t>(safe_cast<System::Char>(managedObject));
	}
	else if (valueType->Equals(System::Boolean::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueBool = static_cast<bool>(safe_cast<System::Boolean>(managedObject));
	}
	else if (valueType->Equals(System::String::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		MarshalString(safe_cast<System::String^>(managedObject), ValueWstring);
	}
	else if (valueType->IsClass)
	{
	}
	else if (valueType->IsValueType && !valueType->IsPrimitive && !valueType->IsEnum)
	{
	}
	else if (valueType->IsInterface)
	{
	}
	else
	{
		GCHandle handle = GCHandle::Alloc(value);
		IntPtr ptr = GCHandle::ToIntPtr(handle);
		Value__Int = ptr.ToInt64();
		handle.Free();
		return;
	}

	switch (nKeyValueType)
	{
	case 0: default:
		return;
	case 1:
		multiNodeUnion->CPPmultinode1->GetValue() = ValueUchar;
		return;
	case 2:
		multiNodeUnion->CPPmultinode2->GetValue() = ValueChar;
		return;
	case 3:
		multiNodeUnion->CPPmultinode3->GetValue() = ValueShort;
		return;
	case 4:
		multiNodeUnion->CPPmultinode4->GetValue() = ValueUshort;
		return;
	case 5:
		multiNodeUnion->CPPmultinode5->GetValue() = ValueInt;
		return;
	case 6:
		multiNodeUnion->CPPmultinode6->GetValue() = ValueUint;
		return;
	case 7:
		multiNodeUnion->CPPmultinode7->GetValue() = ValueLonglong;
		return;
	case 8:
		multiNodeUnion->CPPmultinode8->GetValue() = ValueUlonglong;
		return;
	case 9:
		multiNodeUnion->CPPmultinode9->GetValue() = ValueFloat;
		return;
	case 10:
		multiNodeUnion->CPPmultinode10->GetValue() = ValueDouble;
		return;
	case 11:
		multiNodeUnion->CPPmultinode11->GetValue() = ValueWchar;
		return;
	case 12:
		multiNodeUnion->CPPmultinode12->GetValue() = ValueBool;
		return;
	case 13:
		multiNodeUnion->CPPmultinode13->GetValue() = ValueWstring;
		return;
	case 14:
		UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()[multiNodeUnion->CPPmultinode14->GetValue()] = value;
		return;
	case 15:
		multiNodeUnion->CPPmultinode15->GetValue() = ValueUchar;
		return;
	case 16:
		multiNodeUnion->CPPmultinode16->GetValue() = ValueChar;
		return;
	case 17:
		multiNodeUnion->CPPmultinode17->GetValue() = ValueShort;
		return;
	case 18:
		multiNodeUnion->CPPmultinode18->GetValue() = ValueUshort;
		return;
	case 19:
		multiNodeUnion->CPPmultinode19->GetValue() = ValueInt;
		return;
	case 20:
		multiNodeUnion->CPPmultinode20->GetValue() = ValueUint;
		return;
	case 21:
		multiNodeUnion->CPPmultinode21->GetValue() = ValueLonglong;
		return;
	case 22:
		multiNodeUnion->CPPmultinode22->GetValue() = ValueUlonglong;
		return;
	case 23:
		multiNodeUnion->CPPmultinode23->GetValue() = ValueFloat;
		return;
	case 24:
		multiNodeUnion->CPPmultinode24->GetValue() = ValueDouble;
		return;
	case 25:
		multiNodeUnion->CPPmultinode25->GetValue() = ValueWchar;
		return;
	case 26:
		multiNodeUnion->CPPmultinode26->GetValue() = ValueBool;
		return;
	case 27:
		multiNodeUnion->CPPmultinode27->GetValue() = ValueWstring;
		return;
	case 28:
		UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()[multiNodeUnion->CPPmultinode28->GetValue()] = value;
		return;
	case 29:
		multiNodeUnion->CPPmultinode29->GetValue() = ValueUchar;
		return;
	case 30:
		multiNodeUnion->CPPmultinode30->GetValue() = ValueChar;
		return;
	case 31:
		multiNodeUnion->CPPmultinode31->GetValue() = ValueShort;
		return;
	case 32:
		multiNodeUnion->CPPmultinode32->GetValue() = ValueUshort;
		return;
	case 33:
		multiNodeUnion->CPPmultinode33->GetValue() = ValueInt;
		return;
	case 34:
		multiNodeUnion->CPPmultinode34->GetValue() = ValueUint;
		return;
	case 35:
		multiNodeUnion->CPPmultinode35->GetValue() = ValueLonglong;
		return;
	case 36:
		multiNodeUnion->CPPmultinode36->GetValue() = ValueUlonglong;
		return;
	case 37:
		multiNodeUnion->CPPmultinode37->GetValue() = ValueFloat;
		return;
	case 38:
		multiNodeUnion->CPPmultinode38->GetValue() = ValueDouble;
		return;
	case 39:
		multiNodeUnion->CPPmultinode39->GetValue() = ValueWchar;
		return;
	case 40:
		multiNodeUnion->CPPmultinode40->GetValue() = ValueBool;
		return;
	case 41:
		multiNodeUnion->CPPmultinode41->GetValue() = ValueWstring;
		return;
	case 42:
		UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()[multiNodeUnion->CPPmultinode42->GetValue()] = value;
		return;
	case 43:
		multiNodeUnion->CPPmultinode43->GetValue() = ValueUchar;
		return;
	case 44:
		multiNodeUnion->CPPmultinode44->GetValue() = ValueChar;
		return;
	case 45:
		multiNodeUnion->CPPmultinode45->GetValue() = ValueShort;
		return;
	case 46:
		multiNodeUnion->CPPmultinode46->GetValue() = ValueUshort;
		return;
	case 47:
		multiNodeUnion->CPPmultinode47->GetValue() = ValueInt;
		return;
	case 48:
		multiNodeUnion->CPPmultinode48->GetValue() = ValueUint;
		return;
	case 49:
		multiNodeUnion->CPPmultinode49->GetValue() = ValueLonglong;
		return;
	case 50:
		multiNodeUnion->CPPmultinode50->GetValue() = ValueUlonglong;
		return;
	case 51:
		multiNodeUnion->CPPmultinode51->GetValue() = ValueFloat;
		return;
	case 52:
		multiNodeUnion->CPPmultinode52->GetValue() = ValueDouble;
		return;
	case 53:
		multiNodeUnion->CPPmultinode53->GetValue() = ValueWchar;
		return;
	case 54:
		multiNodeUnion->CPPmultinode54->GetValue() = ValueBool;
		return;
	case 55:
		multiNodeUnion->CPPmultinode55->GetValue() = ValueWstring;
		return;
	case 56:
		UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()[multiNodeUnion->CPPmultinode56->GetValue()] = value;
		return;
	case 57:
		multiNodeUnion->CPPmultinode57->GetValue() = ValueUchar;
		return;
	case 58:
		multiNodeUnion->CPPmultinode58->GetValue() = ValueChar;
		return;
	case 59:
		multiNodeUnion->CPPmultinode59->GetValue() = ValueShort;
		return;
	case 60:
		multiNodeUnion->CPPmultinode60->GetValue() = ValueUshort;
		return;
	case 61:
		multiNodeUnion->CPPmultinode61->GetValue() = ValueInt;
		return;
	case 62:
		multiNodeUnion->CPPmultinode62->GetValue() = ValueUint;
		return;
	case 63:
		multiNodeUnion->CPPmultinode63->GetValue() = ValueLonglong;
		return;
	case 64:
		multiNodeUnion->CPPmultinode64->GetValue() = ValueUlonglong;
		return;
	case 65:
		multiNodeUnion->CPPmultinode65->GetValue() = ValueFloat;
		return;
	case 66:
		multiNodeUnion->CPPmultinode66->GetValue() = ValueDouble;
		return;
	case 67:
		multiNodeUnion->CPPmultinode67->GetValue() = ValueWchar;
		return;
	case 68:
		multiNodeUnion->CPPmultinode68->GetValue() = ValueBool;
		return;
	case 69:
		multiNodeUnion->CPPmultinode69->GetValue() = ValueWstring;
		return;
	case 70:
		UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()[multiNodeUnion->CPPmultinode70->GetValue()] = value;
		return;
	case 71:
		multiNodeUnion->CPPmultinode71->GetValue() = ValueUchar;
		return;
	case 72:
		multiNodeUnion->CPPmultinode72->GetValue() = ValueChar;
		return;
	case 73:
		multiNodeUnion->CPPmultinode73->GetValue() = ValueShort;
		return;
	case 74:
		multiNodeUnion->CPPmultinode74->GetValue() = ValueUshort;
		return;
	case 75:
		multiNodeUnion->CPPmultinode75->GetValue() = ValueInt;
		return;
	case 76:
		multiNodeUnion->CPPmultinode76->GetValue() = ValueUint;
		return;
	case 77:
		multiNodeUnion->CPPmultinode77->GetValue() = ValueLonglong;
		return;
	case 78:
		multiNodeUnion->CPPmultinode78->GetValue() = ValueUlonglong;
		return;
	case 79:
		multiNodeUnion->CPPmultinode79->GetValue() = ValueFloat;
		return;
	case 80:
		multiNodeUnion->CPPmultinode80->GetValue() = ValueDouble;
		return;
	case 81:
		multiNodeUnion->CPPmultinode81->GetValue() = ValueWchar;
		return;
	case 82:
		multiNodeUnion->CPPmultinode82->GetValue() = ValueBool;
		return;
	case 83:
		multiNodeUnion->CPPmultinode83->GetValue() = ValueWstring;
		return;
	case 84:
		UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()[multiNodeUnion->CPPmultinode84->GetValue()] = value;
		return;
	case 85:
		multiNodeUnion->CPPmultinode85->GetValue() = ValueUchar;
		return;
	case 86:
		multiNodeUnion->CPPmultinode86->GetValue() = ValueChar;
		return;
	case 87:
		multiNodeUnion->CPPmultinode87->GetValue() = ValueShort;
		return;
	case 88:
		multiNodeUnion->CPPmultinode88->GetValue() = ValueUshort;
		return;
	case 89:
		multiNodeUnion->CPPmultinode89->GetValue() = ValueInt;
		return;
	case 90:
		multiNodeUnion->CPPmultinode90->GetValue() = ValueUint;
		return;
	case 91:
		multiNodeUnion->CPPmultinode91->GetValue() = ValueLonglong;
		return;
	case 92:
		multiNodeUnion->CPPmultinode92->GetValue() = ValueUlonglong;
		return;
	case 93:
		multiNodeUnion->CPPmultinode93->GetValue() = ValueFloat;
		return;
	case 94:
		multiNodeUnion->CPPmultinode94->GetValue() = ValueDouble;
		return;
	case 95:
		multiNodeUnion->CPPmultinode95->GetValue() = ValueWchar;
		return;
	case 96:
		multiNodeUnion->CPPmultinode96->GetValue() = ValueBool;
		return;
	case 97:
		multiNodeUnion->CPPmultinode97->GetValue() = ValueWstring;
		return;
	case 98:
		UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()[multiNodeUnion->CPPmultinode98->GetValue()] = value;
		return;
	case 99:
		multiNodeUnion->CPPmultinode99->GetValue() = ValueUchar;
		return;
	case 100:
		multiNodeUnion->CPPmultinode100->GetValue() = ValueChar;
		return;
	case 101:
		multiNodeUnion->CPPmultinode101->GetValue() = ValueShort;
		return;
	case 102:
		multiNodeUnion->CPPmultinode102->GetValue() = ValueUshort;
		return;
	case 103:
		multiNodeUnion->CPPmultinode103->GetValue() = ValueInt;
		return;
	case 104:
		multiNodeUnion->CPPmultinode104->GetValue() = ValueUint;
		return;
	case 105:
		multiNodeUnion->CPPmultinode105->GetValue() = ValueLonglong;
		return;
	case 106:
		multiNodeUnion->CPPmultinode106->GetValue() = ValueUlonglong;
		return;
	case 107:
		multiNodeUnion->CPPmultinode107->GetValue() = ValueFloat;
		return;
	case 108:
		multiNodeUnion->CPPmultinode108->GetValue() = ValueDouble;
		return;
	case 109:
		multiNodeUnion->CPPmultinode109->GetValue() = ValueWchar;
		return;
	case 110:
		multiNodeUnion->CPPmultinode110->GetValue() = ValueBool;
		return;
	case 111:
		multiNodeUnion->CPPmultinode111->GetValue() = ValueWstring;
		return;
	case 112:
		UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()[multiNodeUnion->CPPmultinode112->GetValue()] = value;
		return;
	case 113:
		multiNodeUnion->CPPmultinode113->GetValue() = ValueUchar;
		return;
	case 114:
		multiNodeUnion->CPPmultinode114->GetValue() = ValueChar;
		return;
	case 115:
		multiNodeUnion->CPPmultinode115->GetValue() = ValueShort;
		return;
	case 116:
		multiNodeUnion->CPPmultinode116->GetValue() = ValueUshort;
		return;
	case 117:
		multiNodeUnion->CPPmultinode117->GetValue() = ValueInt;
		return;
	case 118:
		multiNodeUnion->CPPmultinode118->GetValue() = ValueUint;
		return;
	case 119:
		multiNodeUnion->CPPmultinode119->GetValue() = ValueLonglong;
		return;
	case 120:
		multiNodeUnion->CPPmultinode120->GetValue() = ValueUlonglong;
		return;
	case 121:
		multiNodeUnion->CPPmultinode121->GetValue() = ValueFloat;
		return;
	case 122:
		multiNodeUnion->CPPmultinode122->GetValue() = ValueDouble;
		return;
	case 123:
		multiNodeUnion->CPPmultinode123->GetValue() = ValueWchar;
		return;
	case 124:
		multiNodeUnion->CPPmultinode124->GetValue() = ValueBool;
		return;
	case 125:
		multiNodeUnion->CPPmultinode125->GetValue() = ValueWstring;
		return;
	case 126:
		UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()[multiNodeUnion->CPPmultinode126->GetValue()] = value;
		return;
	case 127:
		multiNodeUnion->CPPmultinode127->GetValue() = ValueUchar;
		return;
	case 128:
		multiNodeUnion->CPPmultinode128->GetValue() = ValueChar;
		return;
	case 129:
		multiNodeUnion->CPPmultinode129->GetValue() = ValueShort;
		return;
	case 130:
		multiNodeUnion->CPPmultinode130->GetValue() = ValueUshort;
		return;
	case 131:
		multiNodeUnion->CPPmultinode131->GetValue() = ValueInt;
		return;
	case 132:
		multiNodeUnion->CPPmultinode132->GetValue() = ValueUint;
		return;
	case 133:
		multiNodeUnion->CPPmultinode133->GetValue() = ValueLonglong;
		return;
	case 134:
		multiNodeUnion->CPPmultinode134->GetValue() = ValueUlonglong;
		return;
	case 135:
		multiNodeUnion->CPPmultinode135->GetValue() = ValueFloat;
		return;
	case 136:
		multiNodeUnion->CPPmultinode136->GetValue() = ValueDouble;
		return;
	case 137:
		multiNodeUnion->CPPmultinode137->GetValue() = ValueWchar;
		return;
	case 138:
		multiNodeUnion->CPPmultinode138->GetValue() = ValueBool;
		return;
	case 139:
		multiNodeUnion->CPPmultinode139->GetValue() = ValueWstring;
		return;
	case 140:
		UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()[multiNodeUnion->CPPmultinode140->GetValue()] = value;
		return;
	case 141:
		multiNodeUnion->CPPmultinode141->GetValue() = ValueUchar;
		return;
	case 142:
		multiNodeUnion->CPPmultinode142->GetValue() = ValueChar;
		return;
	case 143:
		multiNodeUnion->CPPmultinode143->GetValue() = ValueShort;
		return;
	case 144:
		multiNodeUnion->CPPmultinode144->GetValue() = ValueUshort;
		return;
	case 145:
		multiNodeUnion->CPPmultinode145->GetValue() = ValueInt;
		return;
	case 146:
		multiNodeUnion->CPPmultinode146->GetValue() = ValueUint;
		return;
	case 147:
		multiNodeUnion->CPPmultinode147->GetValue() = ValueLonglong;
		return;
	case 148:
		multiNodeUnion->CPPmultinode148->GetValue() = ValueUlonglong;
		return;
	case 149:
		multiNodeUnion->CPPmultinode149->GetValue() = ValueFloat;
		return;
	case 150:
		multiNodeUnion->CPPmultinode150->GetValue() = ValueDouble;
		return;
	case 151:
		multiNodeUnion->CPPmultinode151->GetValue() = ValueWchar;
		return;
	case 152:
		multiNodeUnion->CPPmultinode152->GetValue() = ValueBool;
		return;
	case 153:
		multiNodeUnion->CPPmultinode153->GetValue() = ValueWstring;
		return;
	case 154:
		UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()[multiNodeUnion->CPPmultinode154->GetValue()] = value;
		return;
	case 155:
		multiNodeUnion->CPPmultinode155->GetValue() = ValueUchar;
		return;
	case 156:
		multiNodeUnion->CPPmultinode156->GetValue() = ValueChar;
		return;
	case 157:
		multiNodeUnion->CPPmultinode157->GetValue() = ValueShort;
		return;
	case 158:
		multiNodeUnion->CPPmultinode158->GetValue() = ValueUshort;
		return;
	case 159:
		multiNodeUnion->CPPmultinode159->GetValue() = ValueInt;
		return;
	case 160:
		multiNodeUnion->CPPmultinode160->GetValue() = ValueUint;
		return;
	case 161:
		multiNodeUnion->CPPmultinode161->GetValue() = ValueLonglong;
		return;
	case 162:
		multiNodeUnion->CPPmultinode162->GetValue() = ValueUlonglong;
		return;
	case 163:
		multiNodeUnion->CPPmultinode163->GetValue() = ValueFloat;
		return;
	case 164:
		multiNodeUnion->CPPmultinode164->GetValue() = ValueDouble;
		return;
	case 165:
		multiNodeUnion->CPPmultinode165->GetValue() = ValueWchar;
		return;
	case 166:
		multiNodeUnion->CPPmultinode166->GetValue() = ValueBool;
		return;
	case 167:
		multiNodeUnion->CPPmultinode167->GetValue() = ValueWstring;
		return;
	case 168:
		UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()[multiNodeUnion->CPPmultinode168->GetValue()] = value;
		return;
	case 169:
		multiNodeUnion->CPPmultinode169->GetValue() = ValueUchar;
		return;
	case 170:
		multiNodeUnion->CPPmultinode170->GetValue() = ValueChar;
		return;
	case 171:
		multiNodeUnion->CPPmultinode171->GetValue() = ValueShort;
		return;
	case 172:
		multiNodeUnion->CPPmultinode172->GetValue() = ValueUshort;
		return;
	case 173:
		multiNodeUnion->CPPmultinode173->GetValue() = ValueInt;
		return;
	case 174:
		multiNodeUnion->CPPmultinode174->GetValue() = ValueUint;
		return;
	case 175:
		multiNodeUnion->CPPmultinode175->GetValue() = ValueLonglong;
		return;
	case 176:
		multiNodeUnion->CPPmultinode176->GetValue() = ValueUlonglong;
		return;
	case 177:
		multiNodeUnion->CPPmultinode177->GetValue() = ValueFloat;
		return;
	case 178:
		multiNodeUnion->CPPmultinode178->GetValue() = ValueDouble;
		return;
	case 179:
		multiNodeUnion->CPPmultinode179->GetValue() = ValueWchar;
		return;
	case 180:
		multiNodeUnion->CPPmultinode180->GetValue() = ValueBool;
		return;
	case 181:
		multiNodeUnion->CPPmultinode181->GetValue() = ValueWstring;
		return;
	case 182:
		UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()[multiNodeUnion->CPPmultinode182->GetValue()] = value;
		return;
	case 183:
		multiNodeUnion->CPPmultinode183->GetValue() = ValueUchar;
		return;
	case 184:
		multiNodeUnion->CPPmultinode184->GetValue() = ValueChar;
		return;
	case 185:
		multiNodeUnion->CPPmultinode185->GetValue() = ValueShort;
		return;
	case 186:
		multiNodeUnion->CPPmultinode186->GetValue() = ValueUshort;
		return;
	case 187:
		multiNodeUnion->CPPmultinode187->GetValue() = ValueInt;
		return;
	case 188:
		multiNodeUnion->CPPmultinode188->GetValue() = ValueUint;
		return;
	case 189:
		multiNodeUnion->CPPmultinode189->GetValue() = ValueLonglong;
		return;
	case 190:
		multiNodeUnion->CPPmultinode190->GetValue() = ValueUlonglong;
		return;
	case 191:
		multiNodeUnion->CPPmultinode191->GetValue() = ValueFloat;
		return;
	case 192:
		multiNodeUnion->CPPmultinode192->GetValue() = ValueDouble;
		return;
	case 193:
		multiNodeUnion->CPPmultinode193->GetValue() = ValueWchar;
		return;
	case 194:
		multiNodeUnion->CPPmultinode194->GetValue() = ValueBool;
		return;
	case 195:
		multiNodeUnion->CPPmultinode195->GetValue() = ValueWstring;
		return;
	case 196:
		UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()[multiNodeUnion->CPPmultinode196->GetValue()] = value;
		return;
	}
	return;
}

generic<typename Key, typename Value>
void UnOrderedMultiMapWapper::CShorpUnOrderedReverseNode<Key, Value>::SetValue(Value value)
{
	if (Object::ReferenceEquals(this, nullptr)) return;
	if (nKeyValueType == 0 || nKeyValueType > 196)return;
	if (isInitialized == 0) return;
	if (Object::ReferenceEquals(value, nullptr)) return;
	Type^ valueType = Value::typeid;

	unsigned char ValueUchar = 0;
	char ValueChar = 0;
	short ValueShort = 0;
	unsigned short ValueUshort = 0;
	int ValueInt = 0;
	unsigned int ValueUint = 0;
	long long ValueLonglong = 0;
	unsigned long long ValueUlonglong = 0;
	float ValueFloat = 0.0f;
	double ValueDouble = 0;
	wchar_t ValueWchar = 0;
	bool ValueBool = false;
	std::wstring ValueWstring = L"";
	__int64 Value__Int = 0;

	if (valueType->Equals(System::Byte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUchar = static_cast<unsigned char>(safe_cast<System::Byte>(managedObject));
	}
	else if (valueType->Equals(System::SByte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueChar = static_cast<char>(safe_cast<System::SByte>(managedObject));
	}
	else if (valueType->Equals(System::Int16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueShort = static_cast<short>(safe_cast<System::Int16>(managedObject));
	}
	else if (valueType->Equals(System::UInt16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUshort = static_cast<unsigned short>(safe_cast<System::UInt16>(managedObject));
	}
	else if (valueType->Equals(System::Int32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueInt = static_cast<int>(safe_cast<System::Int32>(managedObject));
	}
	else if (valueType->Equals(System::UInt32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUint = static_cast<unsigned int>(safe_cast<System::UInt32>(managedObject));
	}
	else if (valueType->Equals(System::Int64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueLonglong = static_cast<long long>(safe_cast<System::Int64>(managedObject));
	}
	else if (valueType->Equals(System::UInt64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUlonglong = static_cast<unsigned long long>(safe_cast<System::UInt64>(managedObject));
	}
	else if (valueType->Equals(System::Single::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueFloat = static_cast<float>(safe_cast<System::Single>(managedObject));
	}
	else if (valueType->Equals(System::Double::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueDouble = static_cast<double>(safe_cast<System::Double>(managedObject));
	}
	else if (valueType->Equals(System::Char::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueWchar = static_cast<wchar_t>(safe_cast<System::Char>(managedObject));
	}
	else if (valueType->Equals(System::Boolean::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueBool = static_cast<bool>(safe_cast<System::Boolean>(managedObject));
	}
	else if (valueType->Equals(System::String::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		MarshalString(safe_cast<System::String^>(managedObject), ValueWstring);
	}
	else if (valueType->IsClass)
	{
	}
	else if (valueType->IsValueType && !valueType->IsPrimitive && !valueType->IsEnum)
	{
	}
	else if (valueType->IsInterface)
	{
	}
	else
	{
		return;
	}

	switch (nKeyValueType)
	{
	case 0: default:
		return;
	case 1:
		reverseNodeUnion->CPPreversenode1->GetValue() = ValueUchar;
		return;
	case 2:
		reverseNodeUnion->CPPreversenode2->GetValue() = ValueChar;
		return;
	case 3:
		reverseNodeUnion->CPPreversenode3->GetValue() = ValueShort;
		return;
	case 4:
		reverseNodeUnion->CPPreversenode4->GetValue() = ValueUshort;
		return;
	case 5:
		reverseNodeUnion->CPPreversenode5->GetValue() = ValueInt;
		return;
	case 6:
		reverseNodeUnion->CPPreversenode6->GetValue() = ValueUint;
		return;
	case 7:
		reverseNodeUnion->CPPreversenode7->GetValue() = ValueLonglong;
		return;
	case 8:
		reverseNodeUnion->CPPreversenode8->GetValue() = ValueUlonglong;
		return;
	case 9:
		reverseNodeUnion->CPPreversenode9->GetValue() = ValueFloat;
		return;
	case 10:
		reverseNodeUnion->CPPreversenode10->GetValue() = ValueDouble;
		return;
	case 11:
		reverseNodeUnion->CPPreversenode11->GetValue() = ValueWchar;
		return;
	case 12:
		reverseNodeUnion->CPPreversenode12->GetValue() = ValueBool;
		return;
	case 13:
		reverseNodeUnion->CPPreversenode13->GetValue() = ValueWstring;
		return;
	case 14:
		UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()[reverseNodeUnion->CPPreversenode14->GetValue()] = value;
		return;
	case 15:
		reverseNodeUnion->CPPreversenode15->GetValue() = ValueUchar;
		return;
	case 16:
		reverseNodeUnion->CPPreversenode16->GetValue() = ValueChar;
		return;
	case 17:
		reverseNodeUnion->CPPreversenode17->GetValue() = ValueShort;
		return;
	case 18:
		reverseNodeUnion->CPPreversenode18->GetValue() = ValueUshort;
		return;
	case 19:
		reverseNodeUnion->CPPreversenode19->GetValue() = ValueInt;
		return;
	case 20:
		reverseNodeUnion->CPPreversenode20->GetValue() = ValueUint;
		return;
	case 21:
		reverseNodeUnion->CPPreversenode21->GetValue() = ValueLonglong;
		return;
	case 22:
		reverseNodeUnion->CPPreversenode22->GetValue() = ValueUlonglong;
		return;
	case 23:
		reverseNodeUnion->CPPreversenode23->GetValue() = ValueFloat;
		return;
	case 24:
		reverseNodeUnion->CPPreversenode24->GetValue() = ValueDouble;
		return;
	case 25:
		reverseNodeUnion->CPPreversenode25->GetValue() = ValueWchar;
		return;
	case 26:
		reverseNodeUnion->CPPreversenode26->GetValue() = ValueBool;
		return;
	case 27:
		reverseNodeUnion->CPPreversenode27->GetValue() = ValueWstring;
		return;
	case 28:
		UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()[reverseNodeUnion->CPPreversenode28->GetValue()] = value;
		return;
	case 29:
		reverseNodeUnion->CPPreversenode29->GetValue() = ValueUchar;
		return;
	case 30:
		reverseNodeUnion->CPPreversenode30->GetValue() = ValueChar;
		return;
	case 31:
		reverseNodeUnion->CPPreversenode31->GetValue() = ValueShort;
		return;
	case 32:
		reverseNodeUnion->CPPreversenode32->GetValue() = ValueUshort;
		return;
	case 33:
		reverseNodeUnion->CPPreversenode33->GetValue() = ValueInt;
		return;
	case 34:
		reverseNodeUnion->CPPreversenode34->GetValue() = ValueUint;
		return;
	case 35:
		reverseNodeUnion->CPPreversenode35->GetValue() = ValueLonglong;
		return;
	case 36:
		reverseNodeUnion->CPPreversenode36->GetValue() = ValueUlonglong;
		return;
	case 37:
		reverseNodeUnion->CPPreversenode37->GetValue() = ValueFloat;
		return;
	case 38:
		reverseNodeUnion->CPPreversenode38->GetValue() = ValueDouble;
		return;
	case 39:
		reverseNodeUnion->CPPreversenode39->GetValue() = ValueWchar;
		return;
	case 40:
		reverseNodeUnion->CPPreversenode40->GetValue() = ValueBool;
		return;
	case 41:
		reverseNodeUnion->CPPreversenode41->GetValue() = ValueWstring;
		return;
	case 42:
		UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()[reverseNodeUnion->CPPreversenode42->GetValue()] = value;
		return;
	case 43:
		reverseNodeUnion->CPPreversenode43->GetValue() = ValueUchar;
		return;
	case 44:
		reverseNodeUnion->CPPreversenode44->GetValue() = ValueChar;
		return;
	case 45:
		reverseNodeUnion->CPPreversenode45->GetValue() = ValueShort;
		return;
	case 46:
		reverseNodeUnion->CPPreversenode46->GetValue() = ValueUshort;
		return;
	case 47:
		reverseNodeUnion->CPPreversenode47->GetValue() = ValueInt;
		return;
	case 48:
		reverseNodeUnion->CPPreversenode48->GetValue() = ValueUint;
		return;
	case 49:
		reverseNodeUnion->CPPreversenode49->GetValue() = ValueLonglong;
		return;
	case 50:
		reverseNodeUnion->CPPreversenode50->GetValue() = ValueUlonglong;
		return;
	case 51:
		reverseNodeUnion->CPPreversenode51->GetValue() = ValueFloat;
		return;
	case 52:
		reverseNodeUnion->CPPreversenode52->GetValue() = ValueDouble;
		return;
	case 53:
		reverseNodeUnion->CPPreversenode53->GetValue() = ValueWchar;
		return;
	case 54:
		reverseNodeUnion->CPPreversenode54->GetValue() = ValueBool;
		return;
	case 55:
		reverseNodeUnion->CPPreversenode55->GetValue() = ValueWstring;
		return;
	case 56:
		UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()[reverseNodeUnion->CPPreversenode56->GetValue()] = value;
		return;
	case 57:
		reverseNodeUnion->CPPreversenode57->GetValue() = ValueUchar;
		return;
	case 58:
		reverseNodeUnion->CPPreversenode58->GetValue() = ValueChar;
		return;
	case 59:
		reverseNodeUnion->CPPreversenode59->GetValue() = ValueShort;
		return;
	case 60:
		reverseNodeUnion->CPPreversenode60->GetValue() = ValueUshort;
		return;
	case 61:
		reverseNodeUnion->CPPreversenode61->GetValue() = ValueInt;
		return;
	case 62:
		reverseNodeUnion->CPPreversenode62->GetValue() = ValueUint;
		return;
	case 63:
		reverseNodeUnion->CPPreversenode63->GetValue() = ValueLonglong;
		return;
	case 64:
		reverseNodeUnion->CPPreversenode64->GetValue() = ValueUlonglong;
		return;
	case 65:
		reverseNodeUnion->CPPreversenode65->GetValue() = ValueFloat;
		return;
	case 66:
		reverseNodeUnion->CPPreversenode66->GetValue() = ValueDouble;
		return;
	case 67:
		reverseNodeUnion->CPPreversenode67->GetValue() = ValueWchar;
		return;
	case 68:
		reverseNodeUnion->CPPreversenode68->GetValue() = ValueBool;
		return;
	case 69:
		reverseNodeUnion->CPPreversenode69->GetValue() = ValueWstring;
		return;
	case 70:
		UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()[reverseNodeUnion->CPPreversenode70->GetValue()] = value;
		return;
	case 71:
		reverseNodeUnion->CPPreversenode71->GetValue() = ValueUchar;
		return;
	case 72:
		reverseNodeUnion->CPPreversenode72->GetValue() = ValueChar;
		return;
	case 73:
		reverseNodeUnion->CPPreversenode73->GetValue() = ValueShort;
		return;
	case 74:
		reverseNodeUnion->CPPreversenode74->GetValue() = ValueUshort;
		return;
	case 75:
		reverseNodeUnion->CPPreversenode75->GetValue() = ValueInt;
		return;
	case 76:
		reverseNodeUnion->CPPreversenode76->GetValue() = ValueUint;
		return;
	case 77:
		reverseNodeUnion->CPPreversenode77->GetValue() = ValueLonglong;
		return;
	case 78:
		reverseNodeUnion->CPPreversenode78->GetValue() = ValueUlonglong;
		return;
	case 79:
		reverseNodeUnion->CPPreversenode79->GetValue() = ValueFloat;
		return;
	case 80:
		reverseNodeUnion->CPPreversenode80->GetValue() = ValueDouble;
		return;
	case 81:
		reverseNodeUnion->CPPreversenode81->GetValue() = ValueWchar;
		return;
	case 82:
		reverseNodeUnion->CPPreversenode82->GetValue() = ValueBool;
		return;
	case 83:
		reverseNodeUnion->CPPreversenode83->GetValue() = ValueWstring;
		return;
	case 84:
		UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()[reverseNodeUnion->CPPreversenode84->GetValue()] = value;
		return;
	case 85:
		reverseNodeUnion->CPPreversenode85->GetValue() = ValueUchar;
		return;
	case 86:
		reverseNodeUnion->CPPreversenode86->GetValue() = ValueChar;
		return;
	case 87:
		reverseNodeUnion->CPPreversenode87->GetValue() = ValueShort;
		return;
	case 88:
		reverseNodeUnion->CPPreversenode88->GetValue() = ValueUshort;
		return;
	case 89:
		reverseNodeUnion->CPPreversenode89->GetValue() = ValueInt;
		return;
	case 90:
		reverseNodeUnion->CPPreversenode90->GetValue() = ValueUint;
		return;
	case 91:
		reverseNodeUnion->CPPreversenode91->GetValue() = ValueLonglong;
		return;
	case 92:
		reverseNodeUnion->CPPreversenode92->GetValue() = ValueUlonglong;
		return;
	case 93:
		reverseNodeUnion->CPPreversenode93->GetValue() = ValueFloat;
		return;
	case 94:
		reverseNodeUnion->CPPreversenode94->GetValue() = ValueDouble;
		return;
	case 95:
		reverseNodeUnion->CPPreversenode95->GetValue() = ValueWchar;
		return;
	case 96:
		reverseNodeUnion->CPPreversenode96->GetValue() = ValueBool;
		return;
	case 97:
		reverseNodeUnion->CPPreversenode97->GetValue() = ValueWstring;
		return;
	case 98:
		UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()[reverseNodeUnion->CPPreversenode98->GetValue()] = value;
		return;
	case 99:
		reverseNodeUnion->CPPreversenode99->GetValue() = ValueUchar;
		return;
	case 100:
		reverseNodeUnion->CPPreversenode100->GetValue() = ValueChar;
		return;
	case 101:
		reverseNodeUnion->CPPreversenode101->GetValue() = ValueShort;
		return;
	case 102:
		reverseNodeUnion->CPPreversenode102->GetValue() = ValueUshort;
		return;
	case 103:
		reverseNodeUnion->CPPreversenode103->GetValue() = ValueInt;
		return;
	case 104:
		reverseNodeUnion->CPPreversenode104->GetValue() = ValueUint;
		return;
	case 105:
		reverseNodeUnion->CPPreversenode105->GetValue() = ValueLonglong;
		return;
	case 106:
		reverseNodeUnion->CPPreversenode106->GetValue() = ValueUlonglong;
		return;
	case 107:
		reverseNodeUnion->CPPreversenode107->GetValue() = ValueFloat;
		return;
	case 108:
		reverseNodeUnion->CPPreversenode108->GetValue() = ValueDouble;
		return;
	case 109:
		reverseNodeUnion->CPPreversenode109->GetValue() = ValueWchar;
		return;
	case 110:
		reverseNodeUnion->CPPreversenode110->GetValue() = ValueBool;
		return;
	case 111:
		reverseNodeUnion->CPPreversenode111->GetValue() = ValueWstring;
		return;
	case 112:
		UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()[reverseNodeUnion->CPPreversenode112->GetValue()] = value;
		return;
	case 113:
		reverseNodeUnion->CPPreversenode113->GetValue() = ValueUchar;
		return;
	case 114:
		reverseNodeUnion->CPPreversenode114->GetValue() = ValueChar;
		return;
	case 115:
		reverseNodeUnion->CPPreversenode115->GetValue() = ValueShort;
		return;
	case 116:
		reverseNodeUnion->CPPreversenode116->GetValue() = ValueUshort;
		return;
	case 117:
		reverseNodeUnion->CPPreversenode117->GetValue() = ValueInt;
		return;
	case 118:
		reverseNodeUnion->CPPreversenode118->GetValue() = ValueUint;
		return;
	case 119:
		reverseNodeUnion->CPPreversenode119->GetValue() = ValueLonglong;
		return;
	case 120:
		reverseNodeUnion->CPPreversenode120->GetValue() = ValueUlonglong;
		return;
	case 121:
		reverseNodeUnion->CPPreversenode121->GetValue() = ValueFloat;
		return;
	case 122:
		reverseNodeUnion->CPPreversenode122->GetValue() = ValueDouble;
		return;
	case 123:
		reverseNodeUnion->CPPreversenode123->GetValue() = ValueWchar;
		return;
	case 124:
		reverseNodeUnion->CPPreversenode124->GetValue() = ValueBool;
		return;
	case 125:
		reverseNodeUnion->CPPreversenode125->GetValue() = ValueWstring;
		return;
	case 126:
		UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()[reverseNodeUnion->CPPreversenode126->GetValue()] = value;
		return;
	case 127:
		reverseNodeUnion->CPPreversenode127->GetValue() = ValueUchar;
		return;
	case 128:
		reverseNodeUnion->CPPreversenode128->GetValue() = ValueChar;
		return;
	case 129:
		reverseNodeUnion->CPPreversenode129->GetValue() = ValueShort;
		return;
	case 130:
		reverseNodeUnion->CPPreversenode130->GetValue() = ValueUshort;
		return;
	case 131:
		reverseNodeUnion->CPPreversenode131->GetValue() = ValueInt;
		return;
	case 132:
		reverseNodeUnion->CPPreversenode132->GetValue() = ValueUint;
		return;
	case 133:
		reverseNodeUnion->CPPreversenode133->GetValue() = ValueLonglong;
		return;
	case 134:
		reverseNodeUnion->CPPreversenode134->GetValue() = ValueUlonglong;
		return;
	case 135:
		reverseNodeUnion->CPPreversenode135->GetValue() = ValueFloat;
		return;
	case 136:
		reverseNodeUnion->CPPreversenode136->GetValue() = ValueDouble;
		return;
	case 137:
		reverseNodeUnion->CPPreversenode137->GetValue() = ValueWchar;
		return;
	case 138:
		reverseNodeUnion->CPPreversenode138->GetValue() = ValueBool;
		return;
	case 139:
		reverseNodeUnion->CPPreversenode139->GetValue() = ValueWstring;
		return;
	case 140:
		UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()[reverseNodeUnion->CPPreversenode140->GetValue()] = value;
		return;
	case 141:
		reverseNodeUnion->CPPreversenode141->GetValue() = ValueUchar;
		return;
	case 142:
		reverseNodeUnion->CPPreversenode142->GetValue() = ValueChar;
		return;
	case 143:
		reverseNodeUnion->CPPreversenode143->GetValue() = ValueShort;
		return;
	case 144:
		reverseNodeUnion->CPPreversenode144->GetValue() = ValueUshort;
		return;
	case 145:
		reverseNodeUnion->CPPreversenode145->GetValue() = ValueInt;
		return;
	case 146:
		reverseNodeUnion->CPPreversenode146->GetValue() = ValueUint;
		return;
	case 147:
		reverseNodeUnion->CPPreversenode147->GetValue() = ValueLonglong;
		return;
	case 148:
		reverseNodeUnion->CPPreversenode148->GetValue() = ValueUlonglong;
		return;
	case 149:
		reverseNodeUnion->CPPreversenode149->GetValue() = ValueFloat;
		return;
	case 150:
		reverseNodeUnion->CPPreversenode150->GetValue() = ValueDouble;
		return;
	case 151:
		reverseNodeUnion->CPPreversenode151->GetValue() = ValueWchar;
		return;
	case 152:
		reverseNodeUnion->CPPreversenode152->GetValue() = ValueBool;
		return;
	case 153:
		reverseNodeUnion->CPPreversenode153->GetValue() = ValueWstring;
		return;
	case 154:
		UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()[reverseNodeUnion->CPPreversenode154->GetValue()] = value;
		return;
	case 155:
		reverseNodeUnion->CPPreversenode155->GetValue() = ValueUchar;
		return;
	case 156:
		reverseNodeUnion->CPPreversenode156->GetValue() = ValueChar;
		return;
	case 157:
		reverseNodeUnion->CPPreversenode157->GetValue() = ValueShort;
		return;
	case 158:
		reverseNodeUnion->CPPreversenode158->GetValue() = ValueUshort;
		return;
	case 159:
		reverseNodeUnion->CPPreversenode159->GetValue() = ValueInt;
		return;
	case 160:
		reverseNodeUnion->CPPreversenode160->GetValue() = ValueUint;
		return;
	case 161:
		reverseNodeUnion->CPPreversenode161->GetValue() = ValueLonglong;
		return;
	case 162:
		reverseNodeUnion->CPPreversenode162->GetValue() = ValueUlonglong;
		return;
	case 163:
		reverseNodeUnion->CPPreversenode163->GetValue() = ValueFloat;
		return;
	case 164:
		reverseNodeUnion->CPPreversenode164->GetValue() = ValueDouble;
		return;
	case 165:
		reverseNodeUnion->CPPreversenode165->GetValue() = ValueWchar;
		return;
	case 166:
		reverseNodeUnion->CPPreversenode166->GetValue() = ValueBool;
		return;
	case 167:
		reverseNodeUnion->CPPreversenode167->GetValue() = ValueWstring;
		return;
	case 168:
		UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()[reverseNodeUnion->CPPreversenode168->GetValue()] = value;
		return;
	case 169:
		reverseNodeUnion->CPPreversenode169->GetValue() = ValueUchar;
		return;
	case 170:
		reverseNodeUnion->CPPreversenode170->GetValue() = ValueChar;
		return;
	case 171:
		reverseNodeUnion->CPPreversenode171->GetValue() = ValueShort;
		return;
	case 172:
		reverseNodeUnion->CPPreversenode172->GetValue() = ValueUshort;
		return;
	case 173:
		reverseNodeUnion->CPPreversenode173->GetValue() = ValueInt;
		return;
	case 174:
		reverseNodeUnion->CPPreversenode174->GetValue() = ValueUint;
		return;
	case 175:
		reverseNodeUnion->CPPreversenode175->GetValue() = ValueLonglong;
		return;
	case 176:
		reverseNodeUnion->CPPreversenode176->GetValue() = ValueUlonglong;
		return;
	case 177:
		reverseNodeUnion->CPPreversenode177->GetValue() = ValueFloat;
		return;
	case 178:
		reverseNodeUnion->CPPreversenode178->GetValue() = ValueDouble;
		return;
	case 179:
		reverseNodeUnion->CPPreversenode179->GetValue() = ValueWchar;
		return;
	case 180:
		reverseNodeUnion->CPPreversenode180->GetValue() = ValueBool;
		return;
	case 181:
		reverseNodeUnion->CPPreversenode181->GetValue() = ValueWstring;
		return;
	case 182:
		UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()[reverseNodeUnion->CPPreversenode182->GetValue()] = value;
		return;
	case 183:
		reverseNodeUnion->CPPreversenode183->GetValue() = ValueUchar;
		return;
	case 184:
		reverseNodeUnion->CPPreversenode184->GetValue() = ValueChar;
		return;
	case 185:
		reverseNodeUnion->CPPreversenode185->GetValue() = ValueShort;
		return;
	case 186:
		reverseNodeUnion->CPPreversenode186->GetValue() = ValueUshort;
		return;
	case 187:
		reverseNodeUnion->CPPreversenode187->GetValue() = ValueInt;
		return;
	case 188:
		reverseNodeUnion->CPPreversenode188->GetValue() = ValueUint;
		return;
	case 189:
		reverseNodeUnion->CPPreversenode189->GetValue() = ValueLonglong;
		return;
	case 190:
		reverseNodeUnion->CPPreversenode190->GetValue() = ValueUlonglong;
		return;
	case 191:
		reverseNodeUnion->CPPreversenode191->GetValue() = ValueFloat;
		return;
	case 192:
		reverseNodeUnion->CPPreversenode192->GetValue() = ValueDouble;
		return;
	case 193:
		reverseNodeUnion->CPPreversenode193->GetValue() = ValueWchar;
		return;
	case 194:
		reverseNodeUnion->CPPreversenode194->GetValue() = ValueBool;
		return;
	case 195:
		reverseNodeUnion->CPPreversenode195->GetValue() = ValueWstring;
		return;
	case 196:
		UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()[reverseNodeUnion->CPPreversenode196->GetValue()] = value;
		return;
	}
	return;
}


//generic<typename Key, typename Value>
//Value MultiMapWapper::CSharpMultiMap<Key, Value>::operator[](System::Int32 index)
//{
//	if (Object::ReferenceEquals(this, nullptr)) return Value();
//	System::Object^ managedValue;
//	Value objtarget;
//	switch (nKeyValueType)
//	{
//	case 0: default:
//		return Value();
//	case 1:
//		managedValue = gcnew System::Byte((*multimapUnion->CPPmultimap1)[index]);
//		return safe_cast<Value>(managedValue);
//	case 2:
//		managedValue = gcnew System::SByte((*multimapUnion->CPPmultimap2)[index]);
//		return safe_cast<Value>(managedValue);
//	case 3:
//		managedValue = gcnew System::Int16((*multimapUnion->CPPmultimap3)[index]);
//		return safe_cast<Value>(managedValue);
//	case 4:
//		managedValue = gcnew System::UInt16((*multimapUnion->CPPmultimap4)[index]);
//		return safe_cast<Value>(managedValue);
//	case 5:
//		managedValue = gcnew System::Int32((*multimapUnion->CPPmultimap5)[index]);
//		return safe_cast<Value>(managedValue);
//	case 6:
//		managedValue = gcnew System::UInt32((*multimapUnion->CPPmultimap6)[index]);
//		return safe_cast<Value>(managedValue);
//	case 7:
//		managedValue = gcnew System::Int64((*multimapUnion->CPPmultimap7)[index]);
//		return safe_cast<Value>(managedValue);
//	case 8:
//		managedValue = gcnew System::UInt64((*multimapUnion->CPPmultimap8)[index]);
//		return safe_cast<Value>(managedValue);
//	case 9:
//		managedValue = gcnew System::Single((*multimapUnion->CPPmultimap9)[index]);
//		return safe_cast<Value>(managedValue);
//	case 10:
//		managedValue = gcnew System::Double((*multimapUnion->CPPmultimap10)[index]);
//		return safe_cast<Value>(managedValue);
//	case 11:
//		managedValue = gcnew System::Char((*multimapUnion->CPPmultimap11)[index]);
//		return safe_cast<Value>(managedValue);
//	case 12:
//		managedValue = gcnew System::Boolean((*multimapUnion->CPPmultimap12)[index]);
//		return safe_cast<Value>(managedValue);
//	case 13:
//		managedValue = gcnew String((*multimapUnion->CPPmultimap13)[index].c_str());
//		return safe_cast<Value>(managedValue);
//	case 15:
//		managedValue = gcnew System::Byte((*multimapUnion->CPPmultimap15)[index]);
//		return safe_cast<Value>(managedValue);
//	case 16:
//		managedValue = gcnew System::SByte((*multimapUnion->CPPmultimap16)[index]);
//		return safe_cast<Value>(managedValue);
//	case 17:
//		managedValue = gcnew System::Int16((*multimapUnion->CPPmultimap17)[index]);
//		return safe_cast<Value>(managedValue);
//	case 18:
//		managedValue = gcnew System::UInt16((*multimapUnion->CPPmultimap18)[index]);
//		return safe_cast<Value>(managedValue);
//	case 19:
//		managedValue = gcnew System::Int32((*multimapUnion->CPPmultimap19)[index]);
//		return safe_cast<Value>(managedValue);
//	case 20:
//		managedValue = gcnew System::UInt32((*multimapUnion->CPPmultimap20)[index]);
//		return safe_cast<Value>(managedValue);
//	case 21:
//		managedValue = gcnew System::Int64((*multimapUnion->CPPmultimap21)[index]);
//		return safe_cast<Value>(managedValue);
//	case 22:
//		managedValue = gcnew System::UInt64((*multimapUnion->CPPmultimap22)[index]);
//		return safe_cast<Value>(managedValue);
//	case 23:
//		managedValue = gcnew System::Single((*multimapUnion->CPPmultimap23)[index]);
//		return safe_cast<Value>(managedValue);
//	case 24:
//		managedValue = gcnew System::Double((*multimapUnion->CPPmultimap24)[index]);
//		return safe_cast<Value>(managedValue);
//	case 25:
//		managedValue = gcnew System::Char((*multimapUnion->CPPmultimap25)[index]);
//		return safe_cast<Value>(managedValue);
//	case 26:
//		managedValue = gcnew System::Boolean((*multimapUnion->CPPmultimap26)[index]);
//		return safe_cast<Value>(managedValue);
//	case 27:
//		managedValue = gcnew String((*multimapUnion->CPPmultimap27)[index].c_str());
//		return safe_cast<Value>(managedValue);
//	case 29:
//		managedValue = gcnew System::Byte((*multimapUnion->CPPmultimap29)[index]);
//		return safe_cast<Value>(managedValue);
//	case 30:
//		managedValue = gcnew System::SByte((*multimapUnion->CPPmultimap30)[index]);
//		return safe_cast<Value>(managedValue);
//	case 31:
//		managedValue = gcnew System::Int16((*multimapUnion->CPPmultimap31)[index]);
//		return safe_cast<Value>(managedValue);
//	case 32:
//		managedValue = gcnew System::UInt16((*multimapUnion->CPPmultimap32)[index]);
//		return safe_cast<Value>(managedValue);
//	case 33:
//		managedValue = gcnew System::Int32((*multimapUnion->CPPmultimap33)[index]);
//		return safe_cast<Value>(managedValue);
//	case 34:
//		managedValue = gcnew System::UInt32((*multimapUnion->CPPmultimap34)[index]);
//		return safe_cast<Value>(managedValue);
//	case 35:
//		managedValue = gcnew System::Int64((*multimapUnion->CPPmultimap35)[index]);
//		return safe_cast<Value>(managedValue);
//	case 36:
//		managedValue = gcnew System::UInt64((*multimapUnion->CPPmultimap36)[index]);
//		return safe_cast<Value>(managedValue);
//	case 37:
//		managedValue = gcnew System::Single((*multimapUnion->CPPmultimap37)[index]);
//		return safe_cast<Value>(managedValue);
//	case 38:
//		managedValue = gcnew System::Double((*multimapUnion->CPPmultimap38)[index]);
//		return safe_cast<Value>(managedValue);
//	case 39:
//		managedValue = gcnew System::Char((*multimapUnion->CPPmultimap39)[index]);
//		return safe_cast<Value>(managedValue);
//	case 40:
//		managedValue = gcnew System::Boolean((*multimapUnion->CPPmultimap40)[index]);
//		return safe_cast<Value>(managedValue);
//	case 41:
//		managedValue = gcnew String((*multimapUnion->CPPmultimap41)[index].c_str());
//		return safe_cast<Value>(managedValue);
//	case 43:
//		managedValue = gcnew System::Byte((*multimapUnion->CPPmultimap43)[index]);
//		return safe_cast<Value>(managedValue);
//	case 44:
//		managedValue = gcnew System::SByte((*multimapUnion->CPPmultimap44)[index]);
//		return safe_cast<Value>(managedValue);
//	case 45:
//		managedValue = gcnew System::Int16((*multimapUnion->CPPmultimap45)[index]);
//		return safe_cast<Value>(managedValue);
//	case 46:
//		managedValue = gcnew System::UInt16((*multimapUnion->CPPmultimap46)[index]);
//		return safe_cast<Value>(managedValue);
//	case 47:
//		managedValue = gcnew System::Int32((*multimapUnion->CPPmultimap47)[index]);
//		return safe_cast<Value>(managedValue);
//	case 48:
//		managedValue = gcnew System::UInt32((*multimapUnion->CPPmultimap48)[index]);
//		return safe_cast<Value>(managedValue);
//	case 49:
//		managedValue = gcnew System::Int64((*multimapUnion->CPPmultimap49)[index]);
//		return safe_cast<Value>(managedValue);
//	case 50:
//		managedValue = gcnew System::UInt64((*multimapUnion->CPPmultimap50)[index]);
//		return safe_cast<Value>(managedValue);
//	case 51:
//		managedValue = gcnew System::Single((*multimapUnion->CPPmultimap51)[index]);
//		return safe_cast<Value>(managedValue);
//	case 52:
//		managedValue = gcnew System::Double((*multimapUnion->CPPmultimap52)[index]);
//		return safe_cast<Value>(managedValue);
//	case 53:
//		managedValue = gcnew System::Char((*multimapUnion->CPPmultimap53)[index]);
//		return safe_cast<Value>(managedValue);
//	case 54:
//		managedValue = gcnew System::Boolean((*multimapUnion->CPPmultimap54)[index]);
//		return safe_cast<Value>(managedValue);
//	case 55:
//		managedValue = gcnew String((*multimapUnion->CPPmultimap55)[index].c_str());
//		return safe_cast<Value>(managedValue);
//	case 57:
//		managedValue = gcnew System::Byte((*multimapUnion->CPPmultimap57)[index]);
//		return safe_cast<Value>(managedValue);
//	case 58:
//		managedValue = gcnew System::SByte((*multimapUnion->CPPmultimap58)[index]);
//		return safe_cast<Value>(managedValue);
//	case 59:
//		managedValue = gcnew System::Int16((*multimapUnion->CPPmultimap59)[index]);
//		return safe_cast<Value>(managedValue);
//	case 60:
//		managedValue = gcnew System::UInt16((*multimapUnion->CPPmultimap60)[index]);
//		return safe_cast<Value>(managedValue);
//	case 61:
//		managedValue = gcnew System::Int32((*multimapUnion->CPPmultimap61)[index]);
//		return safe_cast<Value>(managedValue);
//	case 62:
//		managedValue = gcnew System::UInt32((*multimapUnion->CPPmultimap62)[index]);
//		return safe_cast<Value>(managedValue);
//	case 63:
//		managedValue = gcnew System::Int64((*multimapUnion->CPPmultimap63)[index]);
//		return safe_cast<Value>(managedValue);
//	case 64:
//		managedValue = gcnew System::UInt64((*multimapUnion->CPPmultimap64)[index]);
//		return safe_cast<Value>(managedValue);
//	case 65:
//		managedValue = gcnew System::Single((*multimapUnion->CPPmultimap65)[index]);
//		return safe_cast<Value>(managedValue);
//	case 66:
//		managedValue = gcnew System::Double((*multimapUnion->CPPmultimap66)[index]);
//		return safe_cast<Value>(managedValue);
//	case 67:
//		managedValue = gcnew System::Char((*multimapUnion->CPPmultimap67)[index]);
//		return safe_cast<Value>(managedValue);
//	case 68:
//		managedValue = gcnew System::Boolean((*multimapUnion->CPPmultimap68)[index]);
//		return safe_cast<Value>(managedValue);
//	case 69:
//		managedValue = gcnew String((*multimapUnion->CPPmultimap69)[index].c_str());
//		return safe_cast<Value>(managedValue);
//	case 71:
//		managedValue = gcnew System::Byte((*multimapUnion->CPPmultimap71)[index]);
//		return safe_cast<Value>(managedValue);
//	case 72:
//		managedValue = gcnew System::SByte((*multimapUnion->CPPmultimap72)[index]);
//		return safe_cast<Value>(managedValue);
//	case 73:
//		managedValue = gcnew System::Int16((*multimapUnion->CPPmultimap73)[index]);
//		return safe_cast<Value>(managedValue);
//	case 74:
//		managedValue = gcnew System::UInt16((*multimapUnion->CPPmultimap74)[index]);
//		return safe_cast<Value>(managedValue);
//	case 75:
//		managedValue = gcnew System::Int32((*multimapUnion->CPPmultimap75)[index]);
//		return safe_cast<Value>(managedValue);
//	case 76:
//		managedValue = gcnew System::UInt32((*multimapUnion->CPPmultimap76)[index]);
//		return safe_cast<Value>(managedValue);
//	case 77:
//		managedValue = gcnew System::Int64((*multimapUnion->CPPmultimap77)[index]);
//		return safe_cast<Value>(managedValue);
//	case 78:
//		managedValue = gcnew System::UInt64((*multimapUnion->CPPmultimap78)[index]);
//		return safe_cast<Value>(managedValue);
//	case 79:
//		managedValue = gcnew System::Single((*multimapUnion->CPPmultimap79)[index]);
//		return safe_cast<Value>(managedValue);
//	case 80:
//		managedValue = gcnew System::Double((*multimapUnion->CPPmultimap80)[index]);
//		return safe_cast<Value>(managedValue);
//	case 81:
//		managedValue = gcnew System::Char((*multimapUnion->CPPmultimap81)[index]);
//		return safe_cast<Value>(managedValue);
//	case 82:
//		managedValue = gcnew System::Boolean((*multimapUnion->CPPmultimap82)[index]);
//		return safe_cast<Value>(managedValue);
//	case 83:
//		managedValue = gcnew String((*multimapUnion->CPPmultimap83)[index].c_str());
//		return safe_cast<Value>(managedValue);
//	case 85:
//		managedValue = gcnew System::Byte((*multimapUnion->CPPmultimap85)[index]);
//		return safe_cast<Value>(managedValue);
//	case 86:
//		managedValue = gcnew System::SByte((*multimapUnion->CPPmultimap86)[index]);
//		return safe_cast<Value>(managedValue);
//	case 87:
//		managedValue = gcnew System::Int16((*multimapUnion->CPPmultimap87)[index]);
//		return safe_cast<Value>(managedValue);
//	case 88:
//		managedValue = gcnew System::UInt16((*multimapUnion->CPPmultimap88)[index]);
//		return safe_cast<Value>(managedValue);
//	case 89:
//		managedValue = gcnew System::Int32((*multimapUnion->CPPmultimap89)[index]);
//		return safe_cast<Value>(managedValue);
//	case 90:
//		managedValue = gcnew System::UInt32((*multimapUnion->CPPmultimap90)[index]);
//		return safe_cast<Value>(managedValue);
//	case 91:
//		managedValue = gcnew System::Int64((*multimapUnion->CPPmultimap91)[index]);
//		return safe_cast<Value>(managedValue);
//	case 92:
//		managedValue = gcnew System::UInt64((*multimapUnion->CPPmultimap92)[index]);
//		return safe_cast<Value>(managedValue);
//	case 93:
//		managedValue = gcnew System::Single((*multimapUnion->CPPmultimap93)[index]);
//		return safe_cast<Value>(managedValue);
//	case 94:
//		managedValue = gcnew System::Double((*multimapUnion->CPPmultimap94)[index]);
//		return safe_cast<Value>(managedValue);
//	case 95:
//		managedValue = gcnew System::Char((*multimapUnion->CPPmultimap95)[index]);
//		return safe_cast<Value>(managedValue);
//	case 96:
//		managedValue = gcnew System::Boolean((*multimapUnion->CPPmultimap96)[index]);
//		return safe_cast<Value>(managedValue);
//	case 97:
//		managedValue = gcnew String((*multimapUnion->CPPmultimap97)[index].c_str());
//		return safe_cast<Value>(managedValue);
//
//	case 99:
//		managedValue = gcnew System::Byte((*multimapUnion->CPPmultimap99)[index]);
//		return safe_cast<Value>(managedValue);
//	case 100:
//		managedValue = gcnew System::SByte((*multimapUnion->CPPmultimap100)[index]);
//		return safe_cast<Value>(managedValue);
//	case 101:
//		managedValue = gcnew System::Int16((*multimapUnion->CPPmultimap101)[index]);
//		return safe_cast<Value>(managedValue);
//	case 102:
//		managedValue = gcnew System::UInt16((*multimapUnion->CPPmultimap102)[index]);
//		return safe_cast<Value>(managedValue);
//	case 103:
//		managedValue = gcnew System::Int32((*multimapUnion->CPPmultimap103)[index]);
//		return safe_cast<Value>(managedValue);
//	case 104:
//		managedValue = gcnew System::UInt32((*multimapUnion->CPPmultimap104)[index]);
//		return safe_cast<Value>(managedValue);
//	case 105:
//		managedValue = gcnew System::Int64((*multimapUnion->CPPmultimap105)[index]);
//		return safe_cast<Value>(managedValue);
//	case 106:
//		managedValue = gcnew System::UInt64((*multimapUnion->CPPmultimap106)[index]);
//		return safe_cast<Value>(managedValue);
//	case 107:
//		managedValue = gcnew System::Single((*multimapUnion->CPPmultimap107)[index]);
//		return safe_cast<Value>(managedValue);
//	case 108:
//		managedValue = gcnew System::Double((*multimapUnion->CPPmultimap108)[index]);
//		return safe_cast<Value>(managedValue);
//	case 109:
//		managedValue = gcnew System::Char((*multimapUnion->CPPmultimap109)[index]);
//		return safe_cast<Value>(managedValue);
//	case 110:
//		managedValue = gcnew System::Boolean((*multimapUnion->CPPmultimap110)[index]);
//		return safe_cast<Value>(managedValue);
//	case 111:
//		managedValue = gcnew String((*multimapUnion->CPPmultimap111)[index].c_str());
//		return safe_cast<Value>(managedValue);
//	case 113:
//		managedValue = gcnew System::Byte((*multimapUnion->CPPmultimap113)[index]);
//		return safe_cast<Value>(managedValue);
//	case 114:
//		managedValue = gcnew System::SByte((*multimapUnion->CPPmultimap114)[index]);
//		return safe_cast<Value>(managedValue);
//	case 115:
//		managedValue = gcnew System::Int16((*multimapUnion->CPPmultimap115)[index]);
//		return safe_cast<Value>(managedValue);
//	case 116:
//		managedValue = gcnew System::UInt16((*multimapUnion->CPPmultimap116)[index]);
//		return safe_cast<Value>(managedValue);
//	case 117:
//		managedValue = gcnew System::Int32((*multimapUnion->CPPmultimap117)[index]);
//		return safe_cast<Value>(managedValue);
//	case 118:
//		managedValue = gcnew System::UInt32((*multimapUnion->CPPmultimap118)[index]);
//		return safe_cast<Value>(managedValue);
//	case 119:
//		managedValue = gcnew System::Int64((*multimapUnion->CPPmultimap119)[index]);
//		return safe_cast<Value>(managedValue);
//	case 120:
//		managedValue = gcnew System::UInt64((*multimapUnion->CPPmultimap120)[index]);
//		return safe_cast<Value>(managedValue);
//	case 121:
//		managedValue = gcnew System::Single((*multimapUnion->CPPmultimap121)[index]);
//		return safe_cast<Value>(managedValue);
//	case 122:
//		managedValue = gcnew System::Double((*multimapUnion->CPPmultimap122)[index]);
//		return safe_cast<Value>(managedValue);
//	case 123:
//		managedValue = gcnew System::Char((*multimapUnion->CPPmultimap123)[index]);
//		return safe_cast<Value>(managedValue);
//	case 124:
//		managedValue = gcnew System::Boolean((*multimapUnion->CPPmultimap124)[index]);
//		return safe_cast<Value>(managedValue);
//	case 125:
//		managedValue = gcnew String((*multimapUnion->CPPmultimap125)[index].c_str());
//		return safe_cast<Value>(managedValue);
//	case 127:
//		managedValue = gcnew System::Byte((*multimapUnion->CPPmultimap127)[index]);
//		return safe_cast<Value>(managedValue);
//	case 128:
//		managedValue = gcnew System::SByte((*multimapUnion->CPPmultimap128)[index]);
//		return safe_cast<Value>(managedValue);
//	case 129:
//		managedValue = gcnew System::Int16((*multimapUnion->CPPmultimap129)[index]);
//		return safe_cast<Value>(managedValue);
//	case 130:
//		managedValue = gcnew System::UInt16((*multimapUnion->CPPmultimap130)[index]);
//		return safe_cast<Value>(managedValue);
//	case 131:
//		managedValue = gcnew System::Int32((*multimapUnion->CPPmultimap131)[index]);
//		return safe_cast<Value>(managedValue);
//	case 132:
//		managedValue = gcnew System::UInt32((*multimapUnion->CPPmultimap132)[index]);
//		return safe_cast<Value>(managedValue);
//	case 133:
//		managedValue = gcnew System::Int64((*multimapUnion->CPPmultimap133)[index]);
//		return safe_cast<Value>(managedValue);
//	case 134:
//		managedValue = gcnew System::UInt64((*multimapUnion->CPPmultimap134)[index]);
//		return safe_cast<Value>(managedValue);
//	case 135:
//		managedValue = gcnew System::Single((*multimapUnion->CPPmultimap135)[index]);
//		return safe_cast<Value>(managedValue);
//	case 136:
//		managedValue = gcnew System::Double((*multimapUnion->CPPmultimap136)[index]);
//		return safe_cast<Value>(managedValue);
//	case 137:
//		managedValue = gcnew System::Char((*multimapUnion->CPPmultimap137)[index]);
//		return safe_cast<Value>(managedValue);
//	case 138:
//		managedValue = gcnew System::Boolean((*multimapUnion->CPPmultimap138)[index]);
//		return safe_cast<Value>(managedValue);
//	case 139:
//		managedValue = gcnew String((*multimapUnion->CPPmultimap139)[index].c_str());
//		return safe_cast<Value>(managedValue);
//	case 141:
//		managedValue = gcnew System::Byte((*multimapUnion->CPPmultimap141)[index]);
//		return safe_cast<Value>(managedValue);
//	case 142:
//		managedValue = gcnew System::SByte((*multimapUnion->CPPmultimap142)[index]);
//		return safe_cast<Value>(managedValue);
//	case 143:
//		managedValue = gcnew System::Int16((*multimapUnion->CPPmultimap143)[index]);
//		return safe_cast<Value>(managedValue);
//	case 144:
//		managedValue = gcnew System::UInt16((*multimapUnion->CPPmultimap144)[index]);
//		return safe_cast<Value>(managedValue);
//	case 145:
//		managedValue = gcnew System::Int32((*multimapUnion->CPPmultimap145)[index]);
//		return safe_cast<Value>(managedValue);
//	case 146:
//		managedValue = gcnew System::UInt32((*multimapUnion->CPPmultimap146)[index]);
//		return safe_cast<Value>(managedValue);
//	case 147:
//		managedValue = gcnew System::Int64((*multimapUnion->CPPmultimap147)[index]);
//		return safe_cast<Value>(managedValue);
//	case 148:
//		managedValue = gcnew System::UInt64((*multimapUnion->CPPmultimap148)[index]);
//		return safe_cast<Value>(managedValue);
//	case 149:
//		managedValue = gcnew System::Single((*multimapUnion->CPPmultimap149)[index]);
//		return safe_cast<Value>(managedValue);
//	case 150:
//		managedValue = gcnew System::Double((*multimapUnion->CPPmultimap150)[index]);
//		return safe_cast<Value>(managedValue);
//	case 151:
//		managedValue = gcnew System::Char((*multimapUnion->CPPmultimap151)[index]);
//		return safe_cast<Value>(managedValue);
//	case 152:
//		managedValue = gcnew System::Boolean((*multimapUnion->CPPmultimap152)[index]);
//		return safe_cast<Value>(managedValue);
//	case 153:
//		managedValue = gcnew String((*multimapUnion->CPPmultimap153)[index].c_str());
//		return safe_cast<Value>(managedValue);
//
//	case 155:
//		managedValue = gcnew System::Byte((*multimapUnion->CPPmultimap155)[index]);
//		return safe_cast<Value>(managedValue);
//	case 156:
//		managedValue = gcnew System::SByte((*multimapUnion->CPPmultimap156)[index]);
//		return safe_cast<Value>(managedValue);
//	case 157:
//		managedValue = gcnew System::Int16((*multimapUnion->CPPmultimap157)[index]);
//		return safe_cast<Value>(managedValue);
//	case 158:
//		managedValue = gcnew System::UInt16((*multimapUnion->CPPmultimap158)[index]);
//		return safe_cast<Value>(managedValue);
//	case 159:
//		managedValue = gcnew System::Int32((*multimapUnion->CPPmultimap159)[index]);
//		return safe_cast<Value>(managedValue);
//	case 160:
//		managedValue = gcnew System::UInt32((*multimapUnion->CPPmultimap160)[index]);
//		return safe_cast<Value>(managedValue);
//	case 161:
//		managedValue = gcnew System::Int64((*multimapUnion->CPPmultimap161)[index]);
//		return safe_cast<Value>(managedValue);
//	case 162:
//		managedValue = gcnew System::UInt64((*multimapUnion->CPPmultimap162)[index]);
//		return safe_cast<Value>(managedValue);
//	case 163:
//		managedValue = gcnew System::Single((*multimapUnion->CPPmultimap163)[index]);
//		return safe_cast<Value>(managedValue);
//	case 164:
//		managedValue = gcnew System::Double((*multimapUnion->CPPmultimap164)[index]);
//		return safe_cast<Value>(managedValue);
//	case 165:
//		managedValue = gcnew System::Char((*multimapUnion->CPPmultimap165)[index]);
//		return safe_cast<Value>(managedValue);
//	case 166:
//		managedValue = gcnew System::Boolean((*multimapUnion->CPPmultimap166)[index]);
//		return safe_cast<Value>(managedValue);
//	case 167:
//		managedValue = gcnew String((*multimapUnion->CPPmultimap167)[index].c_str());
//		return safe_cast<Value>(managedValue);
//	case 169:
//		managedValue = gcnew System::Byte((*multimapUnion->CPPmultimap169)[index]);
//		return safe_cast<Value>(managedValue);
//	case 170:
//		managedValue = gcnew System::SByte((*multimapUnion->CPPmultimap170)[index]);
//		return safe_cast<Value>(managedValue);
//	case 171:
//		managedValue = gcnew System::Int16((*multimapUnion->CPPmultimap171)[index]);
//		return safe_cast<Value>(managedValue);
//	case 172:
//		managedValue = gcnew System::UInt16((*multimapUnion->CPPmultimap172)[index]);
//		return safe_cast<Value>(managedValue);
//	case 173:
//		managedValue = gcnew System::Int32((*multimapUnion->CPPmultimap173)[index]);
//		return safe_cast<Value>(managedValue);
//	case 174:
//		managedValue = gcnew System::UInt32((*multimapUnion->CPPmultimap174)[index]);
//		return safe_cast<Value>(managedValue);
//	case 175:
//		managedValue = gcnew System::Int64((*multimapUnion->CPPmultimap175)[index]);
//		return safe_cast<Value>(managedValue);
//	case 176:
//		managedValue = gcnew System::UInt64((*multimapUnion->CPPmultimap176)[index]);
//		return safe_cast<Value>(managedValue);
//	case 177:
//		managedValue = gcnew System::Single((*multimapUnion->CPPmultimap177)[index]);
//		return safe_cast<Value>(managedValue);
//	case 178:
//		managedValue = gcnew System::Double((*multimapUnion->CPPmultimap178)[index]);
//		return safe_cast<Value>(managedValue);
//	case 179:
//		managedValue = gcnew System::Char((*multimapUnion->CPPmultimap179)[index]);
//		return safe_cast<Value>(managedValue);
//	case 180:
//		managedValue = gcnew System::Boolean((*multimapUnion->CPPmultimap180)[index]);
//		return safe_cast<Value>(managedValue);
//	case 181:
//		managedValue = gcnew String((*multimapUnion->CPPmultimap181)[index].c_str());
//		return safe_cast<Value>(managedValue);
//	case 183:
//		managedValue = gcnew System::Byte((*multimapUnion->CPPmultimap183)[index]);
//		return safe_cast<Value>(managedValue);
//	case 184:
//		managedValue = gcnew System::SByte((*multimapUnion->CPPmultimap184)[index]);
//		return safe_cast<Value>(managedValue);
//	case 185:
//		managedValue = gcnew System::Int16((*multimapUnion->CPPmultimap185)[index]);
//		return safe_cast<Value>(managedValue);
//	case 186:
//		managedValue = gcnew System::UInt16((*multimapUnion->CPPmultimap186)[index]);
//		return safe_cast<Value>(managedValue);
//	case 187:
//		managedValue = gcnew System::Int32((*multimapUnion->CPPmultimap187)[index]);
//		return safe_cast<Value>(managedValue);
//	case 188:
//		managedValue = gcnew System::UInt32((*multimapUnion->CPPmultimap188)[index]);
//		return safe_cast<Value>(managedValue);
//	case 189:
//		managedValue = gcnew System::Int64((*multimapUnion->CPPmultimap189)[index]);
//		return safe_cast<Value>(managedValue);
//	case 190:
//		managedValue = gcnew System::UInt64((*multimapUnion->CPPmultimap190)[index]);
//		return safe_cast<Value>(managedValue);
//	case 191:
//		managedValue = gcnew System::Single((*multimapUnion->CPPmultimap191)[index]);
//		return safe_cast<Value>(managedValue);
//	case 192:
//		managedValue = gcnew System::Double((*multimapUnion->CPPmultimap192)[index]);
//		return safe_cast<Value>(managedValue);
//	case 193:
//		managedValue = gcnew System::Char((*multimapUnion->CPPmultimap193)[index]);
//		return safe_cast<Value>(managedValue);
//	case 194:
//		managedValue = gcnew System::Boolean((*multimapUnion->CPPmultimap194)[index]);
//		return safe_cast<Value>(managedValue);
//	case 195:
//		managedValue = gcnew String((*multimapUnion->CPPmultimap195)[index].c_str());
//		return safe_cast<Value>(managedValue);
//	case 14:
//		if (MultiMapWapper::CSharpMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue((*multimapUnion->CPPmultimap14)[index], objtarget))
//		{
//			return objtarget;
//		}
//		else break;
//	case 28:
//		if (MultiMapWapper::CSharpMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue((*multimapUnion->CPPmultimap28)[index], objtarget))
//		{
//			return objtarget;
//		}
//		else break;
//	case 42:
//		if (MultiMapWapper::CSharpMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue((*multimapUnion->CPPmultimap42)[index], objtarget))
//		{
//			return objtarget;
//		}
//		else break;
//	case 56:
//		if (MultiMapWapper::CSharpMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue((*multimapUnion->CPPmultimap56)[index], objtarget))
//		{
//			return objtarget;
//		}
//		else break;
//	case 70:
//		if (MultiMapWapper::CSharpMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue((*multimapUnion->CPPmultimap70)[index], objtarget))
//		{
//			return objtarget;
//		}
//		else break;
//	case 84:
//		if (MultiMapWapper::CSharpMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue((*multimapUnion->CPPmultimap84)[index], objtarget))
//		{
//			return objtarget;
//		}
//		else break;
//	case 98:
//		if (MultiMapWapper::CSharpMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue((*multimapUnion->CPPmultimap98)[index], objtarget))
//		{
//			return objtarget;
//		}
//		else break;
//	case 112:
//		if (MultiMapWapper::CSharpMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue((*multimapUnion->CPPmultimap112)[index], objtarget))
//		{
//			return objtarget;
//		}
//		else break;
//	case 126:
//		if (MultiMapWapper::CSharpMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue((*multimapUnion->CPPmultimap126)[index], objtarget))
//		{
//			return objtarget;
//		}
//		else break;
//	case 140:
//		if (MultiMapWapper::CSharpMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue((*multimapUnion->CPPmultimap140)[index], objtarget))
//		{
//			return objtarget;
//		}
//		else break;
//	case 154:
//		if (MultiMapWapper::CSharpMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue((*multimapUnion->CPPmultimap154)[index], objtarget))
//		{
//			return objtarget;
//		}
//		else break;
//	case 168:
//		if (MultiMapWapper::CSharpMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue((*multimapUnion->CPPmultimap168)[index], objtarget))
//		{
//			return objtarget;
//		}
//		else break;
//	case 182:
//		if (MultiMapWapper::CSharpMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue((*multimapUnion->CPPmultimap182)[index], objtarget))
//		{
//			return objtarget;
//		}
//		else break;
//	case 196:
//		if (MultiMapWapper::CSharpMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue((*multimapUnion->CPPmultimap196)[index], objtarget))
//		{
//			return objtarget;
//		}
//		else break;
//	}
//	return Value();
//}
