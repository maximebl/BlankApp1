﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v1.0.180821.2

#pragma once

#include "winrt/base.h"


static_assert(winrt::check_version(CPPWINRT_VERSION, "1.0.180821.2"), "Mismatched component and base headers.");
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.UI.Xaml.Interop.2.h"
#include "winrt/impl/Windows.UI.Xaml.Markup.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/RuntimeComponent3.RuntimeComponent3_XamlTypeInfo.2.h"
#include "winrt/RuntimeComponent3.h"

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::RuntimeComponent3::RuntimeComponent3_XamlTypeInfo {

inline XamlMetaDataProvider::XamlMetaDataProvider() :
    XamlMetaDataProvider(impl::call_factory<XamlMetaDataProvider>([](auto&& f) { return f.template ActivateInstance<XamlMetaDataProvider>(); }))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::RuntimeComponent3::RuntimeComponent3_XamlTypeInfo::XamlMetaDataProvider> : winrt::impl::hash_base<winrt::RuntimeComponent3::RuntimeComponent3_XamlTypeInfo::XamlMetaDataProvider> {};

}
