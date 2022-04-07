import feathers.controls.Application;
import feathers.controls.Label;





class TheApp extends Application {
	public function new() {
		super();

		var label = new Label();
		label.text = "Hello World";
		addChild(label);

		
			
	}
}