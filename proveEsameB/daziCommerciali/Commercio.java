package daziCommerciali;

import java.util.*;

/*▶ Si implementi infine una classe Commercio che rappresenta un sistema commerciale con:
– un insieme di confini, immutabile dopo l’inizializzazione
La classe deve prevedere:
– un costruttore che inizializza l’insieme di confini
– un metodo double importazione(String exporter, String importer, double amount) che, dati una nazione
esportatrice, una nazione importatrice e un ammontare, ritorna l’ammontare aumentato in base al dazio applicato al confine dell’importatore rispetto all’esportatore. Ad esempio, se l’importazione `e dalla nazione A alla
nazione B di valore 100 e il confine di B applica un dazio di 0.25 per i beni da A, il metodo deve restituire 125.
– un metodo double saldoTotale(String nation1, String nation2, List<Double> values) che, dati due
nomi di nazioni e una lista di valori commerciali, calcola il saldo totale delle transazioni secondo la logica
seguente:
∗ ogni valore positivo rappresenta beni esportati dalla seconda nazione verso la prima
∗ ogni valore negativo rappresenta beni esportati dalla prima nazione verso la seconda
Il saldo totale deve tenere conto dei dazi applicati da entrambe le nazioni. Ad esempio, con nazioni A e B,
valori {10, -15} e dazi 0.25 applicati in entrambi i sensi, il metodo deve tornare −6.25.
*/

public class Commercio implements Iterable<Confine> {
	private final Set<Confine> confini;
	
	public Commercio(Set<Confine> confini) {
		this.confini = confini;
	}
	
	public double Importazione(String exporter, String importer, double amount) {
		for(Confine c : confini) {
			if(c.getNationName().equals(importer)) {
				double dazio = c.getDazio(exporter);
				return amount * (1 + dazio);
			}
		}
		return amount;
	}
	
	double saldoTotale(String nation1, String nation2, List<Double> values) {
		double saldo = 0.0;

        double dazio1 = 0.0, dazio2 = 0.0;
        
        //trova i dazi delle due nazioni date
        for (Confine c : confini) {
            if (c.getNationName().equals(nation1)) {
                dazio1 = c.getDazio(nation2);
            } else if (c.getNationName().equals(nation2)) {
                dazio2 = c.getDazio(nation1);
            }
        }

        for (double v : values) {
            if (v > 0) {
                // esportazione da nation2 verso nation1
                saldo += v * (1 + dazio1);
            } else if (v < 0) {
                // esportazione da nation1 verso nation2
                saldo += v * (1 + dazio2);
            }
        }
        return saldo;
	}
	
	@Override
	public Iterator<Confine> iterator() {
		return confini.iterator();
	}
}
