﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v1.0.180821.2

#pragma once

#include "winrt/base.h"


static_assert(winrt::check_version(CPPWINRT_VERSION, "1.0.180821.2"), "Mismatched component and base headers.");
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.UI.Xaml.Markup.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.UI.Composition.2.h"
#include "winrt/impl/Windows.UI.Xaml.2.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.2.h"
#include "winrt/impl/RuntimeComponent3.2.h"

namespace winrt::impl {

template <typename D> void consume_RuntimeComponent3_IMyUserControl1Class<D>::InitializeComponent() const
{
    check_hresult(WINRT_SHIM(RuntimeComponent3::IMyUserControl1Class)->InitializeComponent());
}

template <typename D>
struct produce<D, RuntimeComponent3::IMyUserControl1Class> : produce_base<D, RuntimeComponent3::IMyUserControl1Class>
{
    int32_t WINRT_CALL InitializeComponent() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(InitializeComponent, WINRT_WRAP(void));
            this->shim().InitializeComponent();
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

}

WINRT_EXPORT namespace winrt::RuntimeComponent3 {

inline MyUserControl1::MyUserControl1() :
    MyUserControl1(impl::call_factory<MyUserControl1>([](auto&& f) { return f.template ActivateInstance<MyUserControl1>(); }))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::RuntimeComponent3::IMyUserControl1Class> : winrt::impl::hash_base<winrt::RuntimeComponent3::IMyUserControl1Class> {};
template<> struct hash<winrt::RuntimeComponent3::MyUserControl1> : winrt::impl::hash_base<winrt::RuntimeComponent3::MyUserControl1> {};

}
