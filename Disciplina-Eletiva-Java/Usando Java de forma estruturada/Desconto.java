import javax.swing.JOptionPane;

public class Desconto {
    public static void main(String[] args) {
        String aux = JOptionPane.showInputDialog("Digite o valor: ");
        float valor = Float.parseFloat(aux);
        JOptionPane.showMessageDialog(null, "Selecione o desconto: A - 5% | B - 8% | C 15% | D - 40%");
        aux = JOptionPane.showInputDialog("Escolhe uma das opções de desconto: ");
        char op = aux.charAt(0);
        if (op == 'A') {
            valor -= valor * 5.0F / 100.0F;
        } else if (op == 'B') {
            valor -= valor * 8.0F / 100.0F;
        } else if (op == 'C') {
            valor -= valor * 15.0F / 100.0F;
        } else if (op == 'D') {
            valor -= valor * 40.0F / 100.0F;
        }
        JOptionPane.showMessageDialog(null, "Valor com o desconto: " + valor);

    }
}
