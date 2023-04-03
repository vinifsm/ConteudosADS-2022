ACCEPT vcod PROMPT 'Digite o código do professor.:'
DECLARE
     vcodigo PROFESSOR.CODIGO%TYPE := &vcod;
     vnome PROFESSOR.NOME%TYPE;
BEGIN
     SELECT nome INTO vnome FROM PROFESSOR WHERE codigo=vcodigo;
     DELETE FROM PROFESSOR WHERE codigo=vcodigo;
     DBMS_OUTPUT.PUT_LINE('Professor excluído.:' || vnome);
EXCEPTION
     WHEN NO_DATA_FOUND THEN
                RAISE_APPLICATION_ERROR(-20001,'Professor não localizado');
END;
/