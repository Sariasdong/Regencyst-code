import java.util.Scanner;

public class PlayerTurn {

	
	public static void playerOptions(){

	String playerInput;
	Scanner input = new Scanner(System.in);
	playerInput = input.nextLine();
	
	switch(playerInput){
	case "Help":
		System.out.println("Commands are case sensitive");
		break;
	
	case "Compass":
		System.out.println(PlayerLocation.xCord + "." + PlayerLocation.yCord);
		break;
		
	case "Examine":
		System.out.println(Locations.);
		break;
		
	case "North":
		PlayerLocation.yCord += 1;
		break;
		
	case "South":
		PlayerLocation.yCord -= 1;
		
	case "East":
		PlayerLocation.xCord -= 1;
		break;
		
	case "West":
		PlayerLocation.yCord += 1;

		break;
		
	 default:
		 System.out.println("Invalid input\n\t");
	break;
		}
	}
}

	