ACCEPT v_codigo PROMPT 'Digite o código do professor:'
ACCEPT v_nome PROMPT 'Digite o nome do professor:'
ACCEPT v_nascimento PROMPT 'Digite a data nascimento do professor:'
ACCEPT v_salario PROMPT 'Digite o salário do professor:'
ACCEPT v_cargo PROMPT 'Digite o cargo do professor:'
ACCEPT v_depto PROMPT 'Digite o depto do professor:'
DECLARE
     n_codigo PROFESSOR.CODIGO%TYPE := &v_codigo;
     n_nome PROFESSOR.NOME%TYPE := '&v_nome';
     n_nascimento PROFESSOR.NASCIMENTO%TYPE := '&v_nascimento';
     n_salario PROFESSOR.SALARIO%TYPE := &v_salario;
     n_cargo PROFESSOR.CARGO%TYPE := &v_cargo;
     n_depto PROFESSOR.DEPTO%TYPE := &v_depto;
BEGIN
     SELECT CODIGO INTO n_cargo FROM CARGO WHERE CODIGO=n_cargo;
     SELECT CODIGO INTO n_depto FROM DEPTO WHERE CODIGO=n_depto;
     INSERT INTO PROFESSOR 
     VALUES(n_codigo, n_nome, n_nascimento, n_salario, n_cargo, n_depto);
EXCEPTION
     WHEN DUP_VAL_ON_INDEX THEN
                 RAISE_APPLICATION_ERROR(-20001,'Código já cadastrado!');
     WHEN NO_DATA_FOUND THEN
                 RAISE_APPLICATION_ERROR(-20002,'Chave Estrangeira não localizada!');
END;
/