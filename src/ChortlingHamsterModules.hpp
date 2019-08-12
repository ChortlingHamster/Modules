#include <rack.hpp>

using namespace rack;

// Declare the Plugin, defined in plugin.cpp
extern Plugin *pluginInstance;

// Declare each Model, defined in each module source file
extern Model *modelPop;
extern Model *modelBitwise;

struct RoundLargeBlackSnapKnob: RoundLargeBlackKnob {
	RoundLargeBlackSnapKnob() {
		snap = true;
	}
};
