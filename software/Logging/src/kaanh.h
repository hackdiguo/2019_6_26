﻿#ifndef KAANH_H_
#define KAANH_H_

#include <memory>
#include <aris.hpp>

namespace kaanh
{
	//模型参数配置
	using Size = std::size_t;
	constexpr double PI = 3.141592653589793;
	auto createControllerRokaeXB4()->std::unique_ptr<aris::control::Controller>;
	auto createModelRokae()->std::unique_ptr<aris::dynamic::Model>;
	auto createPlanRootRokaeXB4()->std::unique_ptr<aris::plan::PlanRoot>;
	//声明指令printing
	class Logging : public aris::plan::Plan
	{
	public:
		auto virtual executeRT(aris::plan::PlanTarget &target)->int;
		explicit Logging(const std::string &name = "Logging_plan");
		ARIS_REGISTER_TYPE(Logging);
	};
}
#endif
