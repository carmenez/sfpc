#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    	counter = 0; //always add initialized variables in setup and draw put it in the .h file
        bSmooth = false;
    
}

//--------------------------------------------------------------
void ofApp::update(){
	counter = counter + 0.033f;
}

//--------------------------------------------------------------
void ofApp::draw(){
        ofBackground(255,255,255);
    ofSetColor(255,0,0,100);
   
    
    ofSeedRandom(mouseX*1000);
    
    for(int j=0; j<5; j++){             //stepping down the y value 5 times
        for(int i=0; i<19; i++){//creating rectangles along the x axis
            
            float a=0;
            float sinOffset=a/100.0;
            float xOffset = ofRandom(0, 1);
            float xPos=i*12 + 100+xOffset;    //at 100,100
            float yPos = j*45 +100+cos(i/2.0+j%3+sinOffset+counter)*20;
            a++;
            ofDrawRectangle(xPos, yPos, 11, 40);
            
        }
    }

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
