import javax.swing.JOptionPane;
// Não funciona esta merda
public class fatorial {
    int res;
    int num;
    public static void main(String[] args) {
        String aux = JOptionPane.showInputDialog(null, "Digite um numero para exibição de seu fatorial: ");
        double num = Double.parseDouble(aux);
        for( int i = 2; i <= num; i++ )
        {
            res *= i;
        }

        JOptionPane.showMessageDialog(null, "O fatorial de " + num + " é igual a " + res);
    }
}
