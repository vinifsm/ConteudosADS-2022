ACCEPT vcar PROMPT 'Informe o código do cargo a ser reajustado.:'
ACCEPT vporc PROMPT 'Informe a porcentagem de reajuste salarial.:'
DECLARE
    vcargo CARGO.CODIGO%TYPE := &vcar;
    vporcentagem NUMBER(5,2) := &vporc;
    vqtde NUMBER(3);
BEGIN
    SELECT codigo INTO vcargo
       FROM CARGO 
       WHERE codigo=vcargo;
    SELECT COUNT(cargo) INTO vqtde
       FROM PROFESSOR 
       WHERE cargo=vcargo;
    UPDATE PROFESSOR
       SET salario = salario + (salario*vporcentagem/100)
       WHERE cargo=vcargo;
    DBMS_OUTPUT.PUT_LINE('Reajuste de ' || TO_CHAR(vporcentagem) || '% aplicado para ' || TO_CHAR(vqtde) || ' professores');
EXCEPTION
     WHEN NO_DATA_FOUND THEN
            RAISE_APPLICATION_ERROR(-20001,'Cargo não possui professor');   
END;
/