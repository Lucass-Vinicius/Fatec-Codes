import javax.swing.JOptionPane;

public class Calculadora {
    public static void main(String[] args) {
        String aux = JOptionPane.showInputDialog("Digite o primeiro valor: ");
        float num1 = Float.parseFloat(aux);
        aux = JOptionPane.showInputDialog("Digite a operação desejada: ");
        char op = aux.charAt(0);
        aux = JOptionPane.showInputDialog("Digite o segundo valor: ");
        float num2 = Float.parseFloat(aux);
        float res;
        if (op == '+') {
            res = num1 + num2;
            JOptionPane.showMessageDialog(null, "Resultado: " + num1 + " " + op + " " + num2 + "  = " + res);
        } else if (op == '-') {
            res = num1 - num2;
            JOptionPane.showMessageDialog(null, "Resultado: " + num1 + " " + op + " " + num2 + "  = " + res);
        } else if (op != '*' && op != '.') {
            if (op == '/') {
                res = num1 / num2;
                JOptionPane.showMessageDialog(null, "Resultado: " + num1 + " " + op + " " + num2 + "  = " + res);
            }
        } else {
            res = num1 * num2;
            JOptionPane.showMessageDialog(null, "Resultado: " + num1 + " " + op + " " + num2 + "  = " + res);
        }
    }
}
