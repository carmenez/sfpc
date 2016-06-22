#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
   
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
    //ofSeedRandom(0);
    float x=0;
    float spacing = 10.0;
    float slide = sin(ofGetElapsedTimef()* TWO_PI);
    float coslide= cos(ofGetElapsedTimef()* TWO_PI);
    ofNoFill();
    ofSetColor(ofRandom(0,sin(ofGetElapsedTimef())*100));
    
    float screenW = ofGetWidth();
    float screenH = ofGetHeight();
    
    for(float i=0; i <=screenW; i+=100.0){
        
        ofBeginShape();
        float x1 = i+spacing+x;
        float y1 = i+spacing;
        float x2= screenW-spacing-i;
        float y2= spacing+i;
        float x3= screenW-spacing-i;
        float y3= screenH-spacing-i;
        float x4=spacing+i;
        float y4=ofGetHeight()-spacing-i;
        
        ofVertex(x1, y1);
        ofVertex(x2, y2);
        ofVertex(x3,y3);
        ofVertex(x4,y4);
        
        ofEndShape(close);
    
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
