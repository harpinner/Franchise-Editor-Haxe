package data;
import HaxeLow;
import HaxeLowCol;
import HaxeLowIntCol;
import HaxeLowStringCol;

class Datalayer
{
    private var dataBase:HaxeLow;
    public function new(filname:String) {
        dataBase = new HaxeLow(filname);
    }
}