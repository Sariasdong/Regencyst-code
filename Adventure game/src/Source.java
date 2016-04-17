

public class Source{
	
	
	public static void introduction(){
		System.out.println("Welcome to my adventure game\n");
		PlayerLocation.xCord = 0;
		PlayerLocation.yCord = 0;
	}
	

	public static void mainGame(){
		
		introduction();
		while(Player.playerHealth > 0){
		LocationData.playerLocation();
		PlayerTurn.playerOptions();
		Time.DayandNight();
		
		}
		
		
		
	}
	
	public static void main(String [] args){
		mainGame();
		
	}
	
	
}