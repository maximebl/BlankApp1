//
// pch.h
// Header for platform projection include files
//

#pragma once

#include <windows.h>
#include <unknwn.h>
#include <restrictederrorinfo.h>
#include <hstring.h>
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.ApplicationModel.Activation.h"
#include "winrt/Windows.UI.Xaml.h"
#include "winrt/Windows.UI.Xaml.Controls.h"
#include "winrt/Windows.UI.Xaml.Controls.Primitives.h"
#include "winrt/Windows.UI.Xaml.Data.h"
#include "winrt/Windows.UI.Xaml.Interop.h"
#include "winrt/Windows.UI.Xaml.Markup.h"
#include "winrt/Windows.UI.Xaml.Navigation.h"

// Adding those includes allows the program to compile, but an error occurs when trying to activate an instance of the component in code or from XAML directly.
#include "winrt/RuntimeComponent3.h"
#include "winrt/RuntimeComponent3.RuntimeComponent3_XamlTypeInfo.h"