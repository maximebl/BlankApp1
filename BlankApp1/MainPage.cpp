#include "pch.h"
#include "MainPage.h"

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::BlankApp1::implementation
{
	MainPage::MainPage()
	{
		InitializeComponent();
	}

	void MainPage::ClickHandler(IInspectable const&, RoutedEventArgs const&)
	{
	}
}
