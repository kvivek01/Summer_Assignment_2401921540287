package live;

import music.Playable;
import music.string.Veena;
import music.wind.Saxophone;

public class Test {
    public static void main(String[] args) {
        Veena veena = new Veena();
        veena.play();

        Saxophone sax = new Saxophone();
        sax.play();

        Playable instrument;

        instrument = veena;
        instrument.play();

        instrument = sax;
        instrument.play();
    }
}