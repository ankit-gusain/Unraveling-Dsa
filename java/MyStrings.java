public class MyStrings { // Change class name if file is named MyStrings.java

    public static void main(String[] args) {

        String name1 = "moon";
        String name2 = "moon";

        if (name1 == name2) {
            System.out.println("name1 is equal to name2");
        } else {
            System.out.println("name1 is not equal to name2");
        }
        // -----------------------------------------------------------------------------
        String namex = new String("moon");
        String namey = new String("moon");

        if (namex == namey) {
            System.out.println("namex is equal to namey");
        } else {
            System.out.println("nameX is not equal to nameY");
        }
        // -----------------------------------------------------------------------------
        if (namex == name1) {
            System.out.println("namex is equal to namey");
        } else {
            System.out.println("nameX is not equal to nameY");
        }
    }
}

// Important Note
// Using == :If you use == to compare namex and namey, it will return false,
// because == checks for reference equality (i.e., whether they point to the same object in memory).