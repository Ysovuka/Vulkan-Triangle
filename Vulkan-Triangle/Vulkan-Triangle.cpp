#include <vulkan/vulkan.h>

#include <iostream>
#include <stdexcept>
#include <functional>

class HelloTriangleApplication {
public:
	void run() {
		initWindow();
		initVulkan();
		mainLoop();
		cleanup();
	}

private:
	void initWindow() {

	}

	void initVulkan() {

	}

	void mainLoop() {

	}

	void cleanup() {

	}
};

int main() {
	HelloTriangleApplication app;

	try {
		app.run();
	}
	catch (const std::runtime_error& e) {
		std::cerr << e.what() << std::endl;
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}