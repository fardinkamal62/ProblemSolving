class OldLady {
    public static void main(String[] args) {
        beginning("fly", ",");
        ending();

        System.out.println();

        beginning("spider");
        wriggled();
        ateForObject("spider", "fly");
        System.out.println();
        ending();

        System.out.println();

        beginning("bird");
        absurd();
        ateForObject("bird", "spider");
        System.out.println();
        ateForObject("spider", "fly");
        System.out.println();
        ending();

        System.out.println();

        beginning("cat");
        imagineSwallowing();
        ateForObject("cat", "bird");
        System.out.println();
        ateForObject("bird", "spider");
        System.out.println();
        ateForObject("spider", "fly");
        System.out.println();
        ending();

        System.out.println();

        beginning("dog");
        hogToSwallow();
        ateForObject("dog", "cat");
        System.out.println();
        ateForObject("cat", "bird");
        System.out.println();
        ateForObject("bird", "spider");
        System.out.println();
        ateForObject("spider", "fly");
        System.out.println();
        ending();

        System.out.println();
        beginning("horse");
        diedOfCourse();
    }

    static void beginning(String object, String punc) {
        System.out.printf("There was an old lady who swallowed a %s%s\n", object, punc);
    }

    static void beginning(String object) {
        System.out.printf("There was an old lady who swallowed a %s,\n", object);
    }

    public static void wriggled() {
        System.out.println("That wriggled and iggled and jiggled inside her.");
    }

    public static void ateForObject(String object1, String object2) {
        System.out.printf("She swallowed the %s to catch the %s,", object1, object2);
    }

    public static void ending() {
        System.out.println("I don't know why she swallowed that fly,\n" +
                "Perhaps she'll die.");
    }

    public static void absurd() {
        System.out.println("How absurd to swallow a bird.");
    }

    public static void imagineSwallowing() {
        System.out.println("Imagine that to swallow a cat.");
    }

    public static void hogToSwallow() {
        System.out.println("What a hog to swallow a dog.");
    }

    public static void diedOfCourse() {
        System.out.println("She died of course.");
    }

}
