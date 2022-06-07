#pragma once

#include "ofMain.h"
#include "ofxFaceTracker2.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
        ofPath polylineToPath(ofPolyline& polyline);
    
        ofVideoGrabber cam;
        ofxFaceTracker2 tracker;
//        ofPolyline currentFace;
        ofPath path;
        
        ofFbo fbo;
        ofFbo fbo2;
        ofImage img;
        ofPixels pixels;
		
};
