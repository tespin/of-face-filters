#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    cam.setup(1280, 720);
    tracker.setup();
}

//--------------------------------------------------------------
void ofApp::update(){
    cam.update();
    
    if (cam.isFrameNew()) {
        tracker.update(cam);
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    cam.draw(0, 0);
    tracker.drawDebug();
    tracker.drawDebugPose();
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
