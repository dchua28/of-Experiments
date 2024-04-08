
#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp {

public:
	void setup();
	void update();
	void draw();

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseEntered(int x, int y);
	void mouseExited(int x, int y);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);

	static const int WindowWidth = 1300;
	static const int WindowHeight = 768;

	const int TextXCoord = 90;
	const int TextYCoord = 90;
	const int TextWidth = 1050 + 135 - 90;
	const int TextHeight = 250 + 135 - 90;

	bool checkTextBounds(const int x, const int y);
};

struct backgroundColor {
	int red{};
	int green{};
	int blue{};
};
