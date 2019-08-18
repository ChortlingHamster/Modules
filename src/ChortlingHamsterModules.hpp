#include <rack.hpp>

using namespace rack;

// Declare the Plugin, defined in plugin.cpp
extern Plugin *pluginInstance;

// Declare each Model, defined in each module source file
extern Model *modelPop;
extern Model *modelBitwise;

struct CHMRoundLargeKnob : RoundKnob {
	CHMRoundLargeKnob() {
		setSvg(APP->window->loadSvg(asset::plugin(pluginInstance, "res/CHMRoundLargeKnob.svg")));
	}
};

struct CHMRoundLargeSnapKnob : CHMRoundLargeKnob {
	CHMRoundLargeSnapKnob() {
		snap = true;
	}
};

struct CHMRoundSmallKnob : RoundKnob {
	CHMRoundSmallKnob() {
		setSvg(APP->window->loadSvg(asset::plugin(pluginInstance, "res/CHMRoundSmallKnob.svg")));
	}
};
