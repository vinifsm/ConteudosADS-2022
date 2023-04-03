ACCEPT vcod PROMPT 'Informe o código da venda.:'
ACCEPT vprod PROMPT 'Informe o código do produto.:'
ACCEPT vqtd PROMPT 'Informe a quantidade.:'
DECLARE
    vnumero VENDA.NUMERO%TYPE := &vcod;
    vproduto PRODUTO.CODIGO%TYPE := &vprod;
    vquantidade VENDA.QTDE%TYPE := &vqtd;
    vestoque PRODUTO.ESTOQUE%TYPE;
    vpreco PRODUTO.PRECO%TYPE;
    vtotal VENDA.TOTAL%TYPE;

BEGIN
    SELECT CODIGO INTO vproduto FROM PRODUTO WHERE CODIGO=vproduto;
    SELECT preco INTO vpreco FROM PRODUTO WHERE codigo=vproduto;
    SELECT estoque INTO vestoque FROM PRODUTO WHERE codigo=vproduto;
    IF vestoque - vquantidade >= 0 AND vquantidade > 0 THEN
        vtotal := vquantidade * vpreco;
        INSERT INTO VENDA VALUES(vnumero,vproduto,vquantidade,vtotal);
        UPDATE PRODUTO SET ESTOQUE = ESTOQUE - vquantidade WHERE codigo=vproduto;
        DBMS_OUTPUT.PUT_LINE('Venda número ' || TO_CHAR(vnumero) || ' de ' || TO_CHAR(vquantidade) || ' unidades do produto ' || TO_CHAR(vproduto) ||' no preço de '|| 	TO_CHAR(vtotal) ||' reais realizada.');
    ELSE
        DBMS_OUTPUT.PUT_LINE('Erro: Quantidade incompatível');
    END IF;

EXCEPTION
     WHEN NO_DATA_FOUND THEN
            DBMS_OUTPUT.PUT_LINE('Erro: Produto não existe');
END;
/