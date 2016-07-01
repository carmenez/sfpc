#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetCurveResolution(200);

}

//--------------------------------------------------------------
void ofApp::update(){

}                       
        

void ofApp::waves(int hexcolor,float amplitudey1,float amplitude3,float amplitude4,float speed1, float speed2, float speed3){
    
        float x0 = 0;
        float y0 = ofGetHeight();
    
        float x1 = 0;
        float y1 = ofGetHeight()/2-50*sin(ofGetElapsedTimef()*.1);
        //float y1 = ofGetHeight()/3-amplitude1*cos(ofGetElapsedTimef()*speed1);
    
        float x2 = ofGetHeight()+50*cos(ofGetElapsedTimef()*.5);
        float y2 = 300+50*sin(ofGetElapsedTimef());
    
        float x3 = ofGetWidth()/2+50*sin(ofGetElapsedTimef())*1;
        float y3 = ofGetHeight()/2+200*sin(ofGetElapsedTimef()*.1);
    
        float x4 = ofGetWidth();
        float y4 = ofGetWidth()/3+amplitude4*cos(ofGetElapsedTimef()/1.0f);;
    
        float x5 = ofGetWidth();
        float y5 = ofGetHeight();
    
//        float x6 = 0;
//        float y6 = 0;
//    
//        float x7 = -300;
//        float y7 = ofGetHeight()-amplitude1*cos(ofGetElapsedTimef()*speed1);
//    
//        float x8 = 3*sin(ofGetElapsedTimef()*speed2);
//        float y8 = cos(ofGetElapsedTimef())/3;
//    
//        float x9 = 3*ofGetWidth()/4*sin(ofGetElapsedTimef());
//        float y9 = amplitude3*cos(ofGetElapsedTimef()*speed3);
//    
//        float x10 = ofGetWidth()+200;
//        float y10= ofGetWidth()+amplitude4*cos(ofGetElapsedTimef()/1.0f);;
//    
//        float x11= ofGetWidth();
//        float y11= 0;
    
    
        ofFill();
    ofColor c = ofColor();  //we need the following 3 lines to determine hex color and alpha
    c.setHex(hexcolor,50);
    ofSetColor(c);
    
        ofBeginShape();
        ofVertex(x0,y0);
        ofVertex(x1,y1);
        ofBezierVertex(x2,y2,x3,y3,x4,y4);
        ofVertex(x5,y5);
        ofEndShape();
//    ofBeginShape();
//    ofVertex(x6,y6);
//    ofVertex(x7,y7);
//    ofBezierVertex(x8,y8,x9,y9,x10,y10);
//    ofVertex(x11,y11);
//    ofEndShape();
    

    
        ofSetHexColor(0x81A8B8);
        ofSetHexColor(0xA4BCC2);
        ofSetHexColor(0xC2CBCE);
        ofSetHexColor(0xDBE6EC);
    
        //ofSetColor(ofColor::gray);
//        ofDrawCircle(x3,y3,10);
//        ofDrawCircle(x2,y2,4);
//        ofDrawCircle(x1,y1,4);
//        ofDrawCircle(x0,y0,4);
    
    

}
//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
    
    ofFill();
   // void ofApp::waves(int hexcolor,int amplitude1, int amplitude3,int amplitude4,float speed1, float speed2, float speed3){

    waves(0x81A8B8, 100.0, 100,100.0,2.0,1,1.0);
   // waves(0xA4BCC2, 50.0, 5,10.0,1,3.0,5.0);
    //waves(0xC2CBCE, 600.0, 6,25.0,5,7.0,3.0);
    //waves(0xDBE6EC, 200.0, 1,50.0,10,5.0,2.0);
    //waves(0xE8F3F8, 400.0, 200.0,100.0,1.0,9.0,10.0);
 
}







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
