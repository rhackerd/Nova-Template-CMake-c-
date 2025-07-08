#include "core.h"
#include <logger.h>

Core::Core() {}

Core::~Core() {}

void Core::load() {
    Logger::success("Core loaded successfully", true);
}

void Core::unload() {
    Logger::success("Core unloaded successfully", true);
}