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
	
	
	
	public static native void volumeMute();
	
	public static native void volumeDown();
	
	public static native void volumeUp();
	
	
	public static native void songPrevious();
	
	public static native void songNext();
	
	public static native void songPlayPause();


	public static native void mediaStop();
	
	
	public static void main(String[] args) {

		//volumeMute();
		
		//volumeDown();
		
		//volumeUp();
		
		
		//songPrevious();
		
		//songNext();
		
		//songPlayPause();

		int temp = Integer.parseInt(args[0]);
		switch (temp) {
			case 0:
				volumeMute();
				break;
			case 1:
				volumeDown();
				break;
			case 2:
				volumeUp();
				break;
			case 3:
				songPrevious();
				break;
			case 4:
				songNext();
				break;
			case 5:
				songPlayPause();
				break;
			case 6:
				mediaStop();
				break;
		}
		
	}

}
