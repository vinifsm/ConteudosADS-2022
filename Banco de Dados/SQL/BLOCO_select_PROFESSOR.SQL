ACCEPT vcod PROMPT 'Digite o c�digo do professor.:'
DECLARE
     vcodigo PROFESSOR.CODIGO%TYPE := &vcod;
     vnome PROFESSOR.NOME%TYPE;
     vsalario PROFESSOR.SALARIO%TYPE;
     vdesc_depto DEPTO.DESCRICAO%TYPE;
     vdesc_cargo CARGO.DESCRICAO%TYPE;
BEGIN
     SELECT NOME, SALARIO, DEPTO.DESCRICAO, CARGO.DESCRICAO
        INTO vnome, vsalario, vdesc_depto, vdesc_cargo
        FROM PROFESSOR inner join DEPTO on (PROFESSOR.DEPTO=DEPTO.CODIGO)
                       inner join CARGO on (PROFESSOR.CARGO=CARGO.CODIGO)
        WHERE PROFESSOR.CODIGO=vcodigo;
     DBMS_OUTPUT.PUT_LINE('Nome do professor......:' || vnome);
     DBMS_OUTPUT.PUT_LINE('Sal�rio base...........:' || TO_CHAR(vsalario));
     DBMS_OUTPUT.PUT_LINE('Descri��o do Depto.....:' || vdesc_depto);
     DBMS_OUTPUT.PUT_LINE('Descri��o do Cargo.....:' || vdesc_cargo);
EXCEPTION
     WHEN NO_DATA_FOUND THEN
         RAISE_APPLICATION_ERROR(-20001,'Professor n�o localizado!');
END;
/