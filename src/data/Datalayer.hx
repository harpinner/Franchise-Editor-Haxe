package data;
import HaxeLow;
import HaxeLowCol;
import HaxeLowIntCol;
import HaxeLowStringCol;

class Datalayer
{
    private var dataBase:HaxeLow;
    private var employeeBase:Array<Employee>;
    private var eventBase:Array<Event>;
    private var productBase:Array<Product>;
    private var locationBase:Array<Location>;
    private var mediabase:Array<Media>;

    public function new(filname:String) {
        dataBase = new HaxeLow(filname);
        employeeBase = dataBase.idCol(Employee);
        eventBase = dataBase.idCol(Event);
        productBase = dataBase.idCol(Product);
        locationBase = dataBase.idCol(Location);
        mediabase = dataBase.idCol(Media);
    }


    public function saveEmployee(guy:Employee)
    {
        employeeBase.idInsert(guy);
    }

    public function updateEmployee(guy:Employee) {
        
    }

    public function getEmployee(id:String) {
        
    }

    public function deleteEmployee(guy:Employee) {
        
    }

    public function saveMedia(thing:Media)
    {
    
    }
    
    public function getMedia(name:String) {
            
    }
    
    public function deleteMedia(thing:Media) {
            
    }

        

    public function saveProduct(thing:Product)
    {
        
    }
        
    public function getProduct(id:String) {
                
    }
        
    public function deleteProduct(thing:Product) {
                
    }



    public function saveLocation(thing:Location)
        {
            
        }
            
        public function getLocation(id:String) {
                    
        }
            
        public function deleteLocation(thing:Location) {
                    
        }



        public function saveEvent(thing:Event)
            {
                
            }
                
            public function getEvent(id:String) {
                        
            }
                
            public function deleteEvent(thing:Event) {
                        
            }
}