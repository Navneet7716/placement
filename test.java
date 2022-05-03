import java.util.*;
import java.io.*;
import javax.sound.sampled.*;

class test {

	public static void main(String[] args) {
		try {
			Scanner scanner = new Scanner(System.in);
			File file = new File("LoveAside.wav");
			AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
			Clip clip = AudioSystem.getClip();
			clip.open(audioStream);
			String response = ""; 
			
			while(!response.equals("Q")) {
				response = scanner.next();
				response = response.toUpperCase();

				System.out.println("p to play, q to quit, s to stop");

				switch(response) {
					case("P"): clip.start();
						break;
					case("S"): clip.stop();
						break;
					case("R"): clip.setMicrosecondPosition(0);
					case("Q"): clip.close();
						break;
					default: System.out.println("not a valid response");
				}
			


			}

		}
		catch(Exception e) {
			System.out.println(e);
		}

	}


}