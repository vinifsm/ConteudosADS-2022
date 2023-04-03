ACCEPT vnum PROMPT 'Digite o número da venda.:'
ACCEPT vcod PROMPT 'Digite o código do produto.:'
ACCEPT vqtd PROMPT 'Digite a quantidade a ser vendida.:'
DECLARE 
    vnumero VENDA.NUMERO%TYPE := &vnum;
    vcodigo PRODUTO.CODIGO%TYPE := &vcod;
    vquantidade VENDA.QTDE%TYPE := &vqtd;
    vestoque PRODUTO.ESTOQUE%TYPE := 0;
    vpreco PRODUTO.PRECO%TYPE := 0;
    vtotal VENDA.TOTAL%TYPE := 0;
BEGIN
    SELECT ESTOQUE, PRECO INTO vestoque, vpreco FROM PRODUTO WHERE CODIGO = vcodigo;
    IF vquantidade > 0 THEN
        IF vestoque >= vquantidade THEN
            vtotal := vquantidade * vpreco;
            INSERT INTO VENDA VALUES (vnumero,vcodigo,vquantidade,vtotal);
            UPDATE PRODUTO SET ESTOQUE = ESTOQUE - vquantidade WHERE CODIGO = vcodigo;
            DBMS_OUTPUT.PUT_LINE('VENDA CONCLUÍDA');            
        ELSE
            DBMS_OUTPUT.PUT_LINE('ERRO: A quantidade informada não está disponível em estoque');
        END IF;
    ELSE
        DBMS_OUTPUT.PUT_LINE('ERRO: A quantidade deve ser maior que 0');
    END IF;
    EXCEPTION
        WHEN NO_DATA_FOUND THEN
            DBMS_OUTPUT.PUT_LINE('ERRO: Produto não encotrado');
        WHEN DUP_VAL_ON_INDEX THEN
            DBMS_OUTPUT.PUT_LINE('ERRO: Número de venda já cadastrada');
END;    