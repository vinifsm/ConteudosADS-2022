ACCEPT v_codigo PROMPT 'Digite o c�digo.:'
ACCEPT v_nome PROMPT 'Digite o nome.:'
ACCEPT v_nascimento PROMPT 'Digite o nascimento.:'
ACCEPT v_salario PROMPT 'Digite o sal�rio.:'
ACCEPT v_cargo PROMPT 'Digite o c�digo do cargo.:'
ACCEPT v_depto PROMPT 'Digite o c�digo do depto.:'
DECLARE
   n_codigo PROFESSOR.CODIGO%TYPE := &v_codigo;
   n_nome PROFESSOR.NOME%TYPE := '&v_nome';
   n_nascimento PROFESSOR.NASCIMENTO%TYPE := '&v_nascimento';
   n_salario PROFESSOR.SALARIO%TYPE := &v_salario;
   n_cargo PROFESSOR.CARGO%TYPE := &v_cargo;
   n_depto PROFESSOR.DEPTO%TYPE := &v_depto;
BEGIN
   INSERT INTO PROFESSOR
   VALUES (n_codigo, n_nome, n_nascimento, n_salario, n_cargo, n_depto);
EXCEPTION
   WHEN DUP_VAL_ON_INDEX THEN
       RAISE_APPLICATION_ERROR  (-20001,'C�digo j� cadastrado !');
END;
/