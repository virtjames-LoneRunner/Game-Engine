#pragma once

namespace Hazel {
	class __declspec(dllexport) Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
		void Print(std::string message);
	};
}

