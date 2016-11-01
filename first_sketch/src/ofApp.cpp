#include "ofApp.h"
//code inspired by Lewis Lepton
//https://www.youtube.com/watch?v=skYjWtm8r7I&list=PL4neAtv21WOmrV8z9rSzL20QpdLU1zJLr&index=31
//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(100);
	planet01.setup();
	planet02.setup();
	planet03.setup();
	//ofSetFrameRate(10);

	planetGroups.add(planet01.planetGroup);
	planetGroups.add(planet02.planetGroup);
	planetGroups.add(planet03.planetGroup);

	gui.setup(planetGroups);

}

//--------------------------------------------------------------
void ofApp::update(){
	planet01.update();
	planet02.update();
	planet03.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
	gui.draw();

	ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
	planet01.draw();

	ofTranslate(planet01.posX * -1.2, planet01.posY * -1.2);
	planet02.draw();

	ofTranslate(planet02.posX * 0.7, planet02.posY * 0.7);
	planet02.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
