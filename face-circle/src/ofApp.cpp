#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    cam.setup(1280, 720);
    tracker.setup();
    
    fbo.allocate(ofGetWidth(), ofGetHeight(), GL_RGBA);
}

//--------------------------------------------------------------
void ofApp::update(){
    cam.update();
    
    if (cam.isFrameNew()) {
        tracker.update(cam);
    }
    
    path.clear();
    if (tracker.getInstances().size() != 0) {
        currentFace = tracker.getInstances()[0].getLandmarks().getImageFeature(ofxFaceTracker2Landmarks::FACE_OUTLINE);
        path = polylineToPath(currentFace);
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetBackgroundColor(255);
//    cam.draw(0, 0);
//    tracker.drawDebug();
//    tracker.drawDebugPose();
    fbo.begin();
    ofClear(255);
    path.draw();
    fbo.end();
    
    fbo.draw(0, 0);

    cam.getTexture().setAlphaMask(fbo.getTexture());
    cam.draw(0, 0);
}

ofPath ofApp::polylineToPath(ofPolyline &polyline) {
    ofPath path;
    
    for (int i = 0; i < polyline.size(); i++) {
        if (i == 0) {
            path.newSubPath();
            path.moveTo(polyline[i]);
        } else {
            path.lineTo(polyline[i]);
        }
    }
    
    return path;
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
