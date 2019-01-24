﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include "pch.h"
#include <memory>

#include "XamlTypeInfo.xaml.g.h"

#include "App.h"
#include "MainPage.h"
#include "XamlBindingInfo.xaml.g.hpp"
#include "App.xaml.g.hpp"
#include "MainPage.xaml.g.hpp"

namespace winrt::BlankApp1::implementation
{
using IXamlMember = ::winrt::Windows::UI::Xaml::Markup::IXamlMember;
using IXamlType = ::winrt::Windows::UI::Xaml::Markup::IXamlType;
using TypeKind = ::winrt::Windows::UI::Xaml::Interop::TypeKind;

template <typename T>
::winrt::Windows::Foundation::IInspectable ActivateType()
{
    return T();
}

template <typename T>
::winrt::Windows::Foundation::IInspectable ActivateLocalType()
{
    return ::winrt::make<T>();
}

template<typename TInstance, typename TItem>
void CollectionAdd(
    ::winrt::Windows::Foundation::IInspectable const& instance, 
    ::winrt::Windows::Foundation::IInspectable const& item)
{
    instance.as<TInstance>().Append(::winrt::unbox_value<TItem>(item));
}

template<typename TInstance, typename TKey, typename TItem>
void DictionaryAdd(
    ::winrt::Windows::Foundation::IInspectable const& instance,
    ::winrt::Windows::Foundation::IInspectable const& key,
    ::winrt::Windows::Foundation::IInspectable const& item)
{
    instance.as<TInstance>().Insert(::winrt::unbox_value<TKey>(key), ::winrt::unbox_value<TItem>(item));
}

template<typename T>
::winrt::Windows::Foundation::IInspectable FromStringConverter(
    XamlUserType const& userType, 
    ::winrt::hstring const& input)
{
    return ::winrt::box_value(static_cast<T>(userType.CreateEnumUIntFromString(input)));
}

enum TypeInfo_Flags
{
    TypeInfo_Flags_None                 = 0x00,
    TypeInfo_Flags_IsLocalType          = 0x01,
    TypeInfo_Flags_IsSystemType         = 0x02,
    TypeInfo_Flags_IsReturnTypeStub     = 0x04,
    TypeInfo_Flags_IsBindable           = 0x08,
    TypeInfo_Flags_IsMarkupExtension    = 0x10, 
};

struct TypeInfo
{
    PCWSTR  typeName;
    PCWSTR contentPropertyName;
    ::winrt::Windows::Foundation::IInspectable (*activator)();
    void (*collectionAdd)(::winrt::Windows::Foundation::IInspectable const&, ::winrt::Windows::Foundation::IInspectable const&);
    void (*dictionaryAdd)(::winrt::Windows::Foundation::IInspectable const&, ::winrt::Windows::Foundation::IInspectable const&, ::winrt::Windows::Foundation::IInspectable const&);
    ::winrt::Windows::Foundation::IInspectable (*fromStringConverter)(XamlUserType const&, ::winrt::hstring const& );
    int     baseTypeIndex;
    int     firstMemberIndex;
    int     firstEnumValueIndex;
    int     createFromStringIndex;
    TypeKind kindOfType;
    unsigned int flags;
};


const TypeInfo TypeInfos[] = 
{
    //   0
    L"BlankApp1.MainPage", L"",
    &ActivateLocalType<::winrt::BlankApp1::implementation::MainPage>, nullptr, nullptr, nullptr,
    1, // Windows.UI.Xaml.Controls.Page
    0, 0, -1, TypeKind::Custom,
    TypeInfo_Flags_IsLocalType | TypeInfo_Flags_None,
    //   1
    L"Windows.UI.Xaml.Controls.Page", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    0, 0, -1, TypeKind::Metadata,
    TypeInfo_Flags_IsSystemType | TypeInfo_Flags_None,
    //   2
    L"RuntimeComponent3.MyUserControl1", L"",
    &ActivateType<::winrt::RuntimeComponent3::MyUserControl1>, nullptr, nullptr, nullptr,
    3, // Windows.UI.Xaml.Controls.UserControl
    0, 0, -1, TypeKind::Metadata,
    TypeInfo_Flags_None,
    //   3
    L"Windows.UI.Xaml.Controls.UserControl", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    0, 0, -1, TypeKind::Metadata,
    TypeInfo_Flags_IsSystemType | TypeInfo_Flags_None,
    //  Last type here is for padding
    L"", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1, 
    0, 0, -1, TypeKind::Custom,
    TypeInfo_Flags_None,
};

constexpr UINT TypeInfoLookup[] = { 
      0,   //   0
      0,   //   1
      0,   //   2
      0,   //   3
      0,   //   4
      0,   //   5
      0,   //   6
      0,   //   7
      0,   //   8
      0,   //   9
      0,   //  10
      0,   //  11
      0,   //  12
      0,   //  13
      0,   //  14
      0,   //  15
      0,   //  16
      0,   //  17
      0,   //  18
      1,   //  19
      1,   //  20
      1,   //  21
      1,   //  22
      1,   //  23
      1,   //  24
      1,   //  25
      1,   //  26
      1,   //  27
      1,   //  28
      1,   //  29
      2,   //  30
      2,   //  31
      2,   //  32
      3,   //  33
      3,   //  34
      3,   //  35
      3,   //  36
      4,   //  37
};

const TypeInfo* GetTypeInfo(::winrt::hstring const& typeName)
{
    size_t typeNameLength = typeName.size();
    if (typeNameLength < _countof(TypeInfoLookup) - 1)
    {
        const auto begin = TypeInfos + TypeInfoLookup[typeNameLength];
        const auto end = TypeInfos + TypeInfoLookup[typeNameLength + 1];
        auto pos = std::find_if(begin, end, [&typeName](TypeInfo const& elem)
        {
            return wcscmp(typeName.data(), elem.typeName) == 0;
        });
        if (pos != end)
        {
            return pos;
        }
    }
    return nullptr;
}

std::vector<::winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider> const& XamlTypeInfoProvider::OtherProviders()
{
    if (_otherProviders.empty())
    {
        _otherProviders.push_back(::winrt::RuntimeComponent3::RuntimeComponent3_XamlTypeInfo::XamlMetaDataProvider());
        _otherProviders.push_back(::winrt::RuntimeComponent3::RuntimeComponent3_XamlTypeInfo::XamlMetaDataProvider());
    }
    return _otherProviders;
}

IXamlType XamlTypeInfoProvider::CreateXamlType(::winrt::hstring const& typeName)
{
    const TypeInfo* pTypeInfo = GetTypeInfo(typeName);
    const TypeInfo* pNextTypeInfo = pTypeInfo + 1;
    if (!pTypeInfo || !pNextTypeInfo)
    {
        return nullptr;
    }
    else if (pTypeInfo->flags & TypeInfo_Flags_IsSystemType)
    {
        return ::winrt::make<XamlSystemBaseType>(typeName);
    }
    else
    {
        ::winrt::hstring baseName { pTypeInfo->baseTypeIndex >= 0 ? TypeInfos[pTypeInfo->baseTypeIndex].typeName : L""};
        auto userType = ::winrt::make_self<XamlUserType>(shared_from_this(), pTypeInfo->typeName, GetXamlTypeByName(baseName));
        userType->_kindOfType = pTypeInfo->kindOfType;
        userType->_activator = pTypeInfo->activator;
        userType->_collectionAdd = pTypeInfo->collectionAdd;
        userType->_dictionaryAdd = pTypeInfo->dictionaryAdd;
        userType->_fromStringConverter = pTypeInfo->fromStringConverter;
        userType->ContentPropertyName(pTypeInfo->contentPropertyName);
        userType->IsLocalType(pTypeInfo->flags & TypeInfo_Flags_IsLocalType);
        userType->IsReturnTypeStub(pTypeInfo->flags & TypeInfo_Flags_IsReturnTypeStub);
        userType->IsBindable(pTypeInfo->flags & TypeInfo_Flags_IsBindable);
        userType->IsMarkupExtension(pTypeInfo->flags & TypeInfo_Flags_IsMarkupExtension);
        userType->_createFromStringMethod = nullptr;
        return userType.as<IXamlType>();
    }
}

IXamlMember XamlTypeInfoProvider::CreateXamlMember(::winrt::hstring const& )
{
    // No local properties
    return nullptr;
}
} // namespace
