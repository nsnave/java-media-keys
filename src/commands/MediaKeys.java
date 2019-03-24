/*
 * Author: Aidan Evans
 * Date: 3/23/2019
 */


package commands;



public class MediaKeys {
	
	
	//loads library from "MediaKeys.dll"
	static {
		System.loadLibrary("MediaKeys");
	}
	
	
	
	private static native void volumeMute();
	
	private static native void volumeDown();
	
	private static native void volumeUp();
	
	
	private static native void songPrevious();
	
	private static native void songNext();
	
	private static native void songPlayPause();
	
	
	
	public static void main(String[] args) {

		//volumeMute();
		
		//volumeDown();
		
		//volumeUp();
		
		
		//songPrevious();
		
		//songNext();
		
		//songPlayPause();
		
	}

}
