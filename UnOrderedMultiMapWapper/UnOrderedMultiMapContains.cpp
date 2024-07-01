#include "pch.h"

generic<typename Key, typename Value>
System::Boolean UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::contains(const Key key)
{
	if (Object::ReferenceEquals(key, nullptr)) return false;
	return find(key) != end();
}
