#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(0);
    ofSetLineWidth(1.5);
    ofEnableSmoothing();
    divider=25;
    
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(255,0,0);

    
    
    float xSpacer=ofGetWidth()/divider;
    float ySpacer=ofGetHeight()/divider;
    float y=0;
    
    for (int i=0;i<=divider;i++) {
        
        ofDrawLine(0, y, i*xSpacer,ofGetHeight());
        ofDrawLine(ofGetWidth(),y,ofGetWidth()-(i*xSpacer),ofGetHeight());
        y=y+ySpacer;
    }
    
    
    
    //ofDrawLine(ofGetWidth(),0,0,ofGetHeight());
    
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
