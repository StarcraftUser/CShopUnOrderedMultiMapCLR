#include "pch.h"
//#include "MultiMapWapper.h"


generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::~CSharpUnOrderedMultiMap()
{
	if (multimapUnion->ptrToDelete)
		delete multimapUnion->ptrToDelete;
	delete multimapUnion;

	if (gIntKeyClassDictionary && gKeyClassDictionary)
	{
		gIntKeyClassDictionary->Clear();
		gKeyClassDictionary->Clear();
	}
	if (gValueClassDictionary)
	{
		gValueClassDictionary->Clear();
	}
}


generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::KeyEnd()
{
	return KeyEndNode;
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::KeyEndCopy()
{
	return KeyEndNode->DeepCopy();
}


generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::endCopy()
{
	if (nKeyValueType == 0 || nKeyValueType > 196)return nullptr;

	return end()->DeepCopy();
}


generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedReverseNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::rendCopy()
{
	if (nKeyValueType == 0 || nKeyValueType > 196)return nullptr;
	return rend()->DeepCopy();
}


generic<typename Key, typename Value>
System::Collections::Generic::Dictionary<System::Int64, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()
{
	if (gValueClassDictionary == nullptr) return nullptr;
	return gValueClassDictionary;
}

generic<typename Key, typename Value>
System::Collections::Generic::Dictionary<System::Int64, Key>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::KeyClassDictionary()
{
	if (gIntKeyClassDictionary == nullptr) return nullptr;
	return gIntKeyClassDictionary;
}