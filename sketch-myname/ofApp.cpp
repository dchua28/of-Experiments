#include "ofApp.h"

const struct backgroundColor BGColor { 31, 30, 28 };
struct backgroundColor bgColor = BGColor;

//--------------------------------------------------------------
void ofApp::setup() {
	ofBackground(bgColor.red, bgColor.green, bgColor.blue);
}

//--------------------------------------------------------------
void ofApp::update() {
	//Set the background color depending on the mouse position
	if (checkTextBounds(ofGetMouseX(), ofGetMouseY()) == true) {
		int offset = ofMap(sin(ofGetElapsedTimef() * 0.75), -1, 1, 0, 32);

		// The 16 adjustment sets a nice brown hue
		bgColor.red = BGColor.red + offset + 16;
		bgColor.green = BGColor.green + offset;
		bgColor.blue = BGColor.blue + offset - 16;

		std::cout << bgColor.red << " " << bgColor.green << " " << bgColor.blue << std::endl;
	}
	else {
		bgColor = BGColor;
	}
}

//--------------------------------------------------------------
void ofApp::draw() {

	ofBackground(bgColor.red, bgColor.green, bgColor.blue);

	// D
	ofSetColor(165, 87, 67);
	ofDrawCircle(250, 250, 150);
	ofDrawRectangle(100, 100, 150, 300);
	ofSetColor(bgColor.red, bgColor.green, bgColor.blue);
	ofDrawCircle(250, 250, 125);
	ofDrawRectangle(120, 125, 130, 250);

	// M
	ofSetColor(168, 142, 107);
	ofDrawRectangle(500, 100, 25, 300);
	ofDrawRectangle(760, 100, 25, 300);
	ofDrawTriangle(500, 100, 643, 200, 785, 100);
	ofSetColor(bgColor.red, bgColor.green, bgColor.blue);
	ofDrawTriangle(530, 100, 643, 180, 755, 100);

	// C
	ofSetColor(209, 162, 116);
	ofDrawCircle(1050, 250, 160);
	ofSetColor(bgColor.red, bgColor.green, bgColor.blue);
	ofDrawCircle(1050, 250, 135);
	ofDrawCircle(1250, 250, 135);

	// Our nice rectangle cloud
	ofSetColor(46 + ofRandom(15), 51 + ofRandom(15), 54 + ofRandom(15));
	for (int i = 9; i < 107; ++i) {
		for (int j = 40; j < 50; ++j) {
			ofDrawCircle(i * 11, j * 12, ofRandom(5));
		}
	}

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}

//--------------------------------------------------------------
bool ofApp::checkTextBounds(const int x, const int y) {
	// Confirm whether mouse is in the text bounding box
	if ((x >= TextXCoord && x <= TextXCoord + TextWidth) &&
		(y >= TextYCoord && y <= TextYCoord + TextHeight))
		return true;
	else
		return false;
}